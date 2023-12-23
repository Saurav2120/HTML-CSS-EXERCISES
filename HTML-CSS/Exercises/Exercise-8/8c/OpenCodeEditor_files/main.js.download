(function () {
  ("use strict");
	
  /* Detect Mobile View */
  if(localStorage.getItem("isPhoneView") != null && localStorage.getItem("isPhoneView") != undefined && localStorage.getItem("isPhoneView") == "true"){
	localStorage.removeItem("isPhoneView");
	window.location = "./mobileViewDetected.jsp";
  }
  
  /**
   * Easy selector helper function
   */
  const select = (el, all = false) => {
    el = el.trim();
    if (all) {
      return [...document.querySelectorAll(el)];
    } else {
      return document.querySelector(el);
    }
  };

  /**
   * Easy event listener function
   */
  const on = (type, el, listener, all = false) => {
    let selectEl = select(el, all);
    if (selectEl) {
      if (all) {
        selectEl.forEach((e) => e.addEventListener(type, listener));
      } else {
        selectEl.addEventListener(type, listener);
      }
    }
  };

  /**
   * Easy on scroll event listener
   */
  const onscroll = (el, listener) => {
    el.addEventListener("scroll", listener);
  };

  /**
   * Navbar links active state on scroll
   */
  let navbarlinks = select("#navbar .scrollto", true);
  const navbarlinksActive = () => {
    let position = window.scrollY + 200;
    navbarlinks.forEach((navbarlink) => {
      if (!navbarlink.hash) return;
      let section = select(navbarlink.hash);
      if (!section) return;
      if (
        position >= section.offsetTop &&
        position <= section.offsetTop + section.offsetHeight
      ) {
        navbarlink.classList.add("active");
      } else {
        navbarlink.classList.remove("active");
      }
    });
  };
  window.addEventListener("load", navbarlinksActive);
  onscroll(document, navbarlinksActive);

  /**
   * Scrolls to an element with header offset
   */
  const scrollto = (el) => {
    let header = select("#header");
    let offset = header.offsetHeight;

    let elementPos = select(el).offsetTop;
    window.scrollTo({
      top: elementPos - offset,
      behavior: "smooth",
    });
  };

  /**
   * Toggle .header-scrolled class to #header when page is scrolled
   */
  //let selectHeader = select("#header");
  let selectHeader = select(".fixed-top");
  let selectTopbar = select("#topbar");
  var pathArray = window.location.pathname.split('/');
  var blogsCheck = pathArray.includes('blogs') || pathArray.includes('blogs.jsp'); 

  if (selectHeader) {
    const headerScrolled = () => {
		if(blogsCheck){
			$("#header").css("background", "rgba(0, 0, 0, 0.8)");
	        $("#header").css("box-shadow", "0px 2px 15px rgba(0, 0, 0, 0.3)");
		} else {
	      if (window.scrollY > 100) {
	        selectHeader.classList.add("header-scrolled");
	        $("#header").css("background", "rgba(0, 0, 0, 0.8)");
	        $("#header").css("box-shadow", "0px 2px 15px rgba(0, 0, 0, 0.3)");
	      } else {
	        selectHeader.classList.remove("header-scrolled");
	        $("#header").css("background", "none");
	        $("#header").css("box-shadow", "none");
	      }
      }
    };
    window.addEventListener("load", headerScrolled);
    onscroll(document, headerScrolled);
  }

  /**
   * Back to top button
   */
  let backtotop = select(".back-to-top");
  if (backtotop) {
    const toggleBacktotop = () => {
      if (window.scrollY > 100) {
        backtotop.classList.add("active");
      } else {
        backtotop.classList.remove("active");
      }
    };
    window.addEventListener("load", toggleBacktotop);
    onscroll(document, toggleBacktotop);
  }

  /**
   * Mobile nav toggle
   */
  on("click", ".mobile-nav-toggle", function (e) {
    select("#navbar").classList.toggle("navbar-mobile");
    this.classList.toggle("fa-bars");
    this.classList.toggle("fa-times");
  });

  /**
   * Mobile nav dropdowns activate
   */
  on(
    "click",
    ".navbar .dropdown > a",
    function (e) {
      if (select("#navbar").classList.contains("navbar-mobile")) {
        e.preventDefault();
        this.nextElementSibling.classList.toggle("dropdown-active");
      }
    },
    true
  );

  /**
   * Scrool with ofset on links with a class name .scrollto
   */
  on(
    "click",
    ".scrollto",
    function (e) {
      if (select(this.hash)) {
        e.preventDefault();

        let navbar = select("#navbar");
        if (navbar.classList.contains("navbar-mobile")) {
          navbar.classList.remove("navbar-mobile");
          let navbarToggle = select(".mobile-nav-toggle");
          navbarToggle.classList.toggle("bi-list");
          navbarToggle.classList.toggle("bi-x");
        }
        scrollto(this.hash);
      }
    },
    true
  );

  /**
   * Scroll with ofset on page load with hash links in the url
   */
  window.addEventListener("load", () => {
    if (window.location.hash) {
      if (select(window.location.hash)) {
        scrollto(window.location.hash);
      }
    }
  });

  /**
   * Preloader
   */
  let preloader = select("#preloader");
  if (preloader) {
    window.addEventListener("load", () => {
      preloader.remove();
    });
  }

  /**
   * Initiate gallery lightbox
   */
  const galleryLightbox = GLightbox({
    selector: ".gallery-lightbox",
    touchNavigation: true,
    loop: true,
  });

  /**
   * Clients Slider
   */
  new Swiper(".gallery-slider", {
    speed: 400,
    loop: true,
    centeredSlides: true,
    autoplay: {
      delay: 5000,
      disableOnInteraction: false,
    },
    slidesPerView: "auto",
    pagination: {
      el: ".swiper-pagination",
      type: "bullets",
      clickable: true,
    },
    breakpoints: {
      320: {
        slidesPerView: 1,
        spaceBetween: 20,
      },
      640: {
        slidesPerView: 3,
        spaceBetween: 20,
      },
      992: {
        slidesPerView: 5,
        spaceBetween: 20,
      },
    },
  });

  /**
   * Animation on scroll
   */
  window.addEventListener("load", () => {
    AOS.init({
      duration: 1000,
      easing: "ease-in-out",
      once: true,
      mirror: false,
    });
  });

  $("#quiz").quiz({
    counterFormat: "Question %current of %total",
    questions: [
      {
        q: "If one accidentally closes the browser without logging out from the website, what happens?",
        options: [
          "Session gets locked for 30 min. After 30 minutes one can login.",
          "Session gets locked for 15 min. After 15 minutes one can login.",
          "Once you close the browser, there is no way to login again",
          "Nothing happens",
        ],
        correctIndex: 1,
        correctResponse:
          "That's correct. In order to prevent duplicate logins, TCS CodeVita systems maintain sessions in database. These sessions will expire after 15 minutes of in-activity",
        incorrectResponse:
          "That's incorrect. If one accidentally closes the browser without logging out from the website, the session gets locked for 15 min, after which one can login again.",
      },
      {
        q: "If the contest page does not open/load properly(ex: 'Upload Solution' section not visible below the question, facing messages like 'Problem Does not Exist') on my machine, what can I do?",
        options: [
          "Write immediately to the TCS CodeVita helpdesk team and wait for the reply",
          "Check if the settings on the local machine / environment are all in order.(Network Strength, Compatible Browser with JS enabled, Firewall Settings, Clear 'Cached images and files')",
        ],
        correctIndex: 1,
        correctResponse:
          "Correct. Below are the self checklist in detail:<br/>" +
          "1. Check your local network strength.<br/>" +
          "2. Ensure that your browser supports JavaScript. Site will not work properly if your browser has blocked JavaScript.<br/>" +
          "3. Site is best viewed in modern browsers like Chrome, FireFox. Ensure you are using a compatible browser.<br/>" +
          "4. You can also check that your college firewall is not blocking the contest site.<br/>" +
          "5. If, all of the above are fine, then Logout of TCS CodeVita, clear cache by Ctrl+Shift+Del -> Check on 'Cached Images and Files' -> Select 'All time' from drop down -> Click on 'Clear Data'. Then try logging into the site again.<br/>" /*+
																														  'If none of these solutions work out, kindly write to campuscommune@tcs.com or call 18002093111 with the screenshot(with the system time) and your DT/CT reference number.<br/>'*/,
        incorrectResponse:
          "Incorrect. It is important to understand that following checklist in your own machine / environment might save your time during contest instead of writing to and then expecting a solution from Helpdesk.<br/>" +
          "1. Check your local network strength.<br/>" +
          "2. Ensure that your browser supports JavaScript. Site will not work properly if your browser has blocked JavaScript.<br/>" +
          "3. Site is best viewed in modern browsers like Chrome, FireFox. Ensure you are using a compatible browser.<br/>" +
          "4. You can also check that your college firewall is not blocking the contest site.<br/>" +
          "5. If, all of the above are fine, then Logout of TCS CodeVita, clear cache by Ctrl+Shift+Del -> Check on 'Cached Images and Files' -> Select 'All time' from drop down -> Click on 'Clear Data'. Then try logging into the site again.<br/>" /*+
																												    		  'If none of these solutions work out, kindly write to campuscommune@tcs.com or call 18002093111 with the screenshot(with the system time) and your DT/CT reference number.<br/>'*/,
      },
      {
        q: "If a front-end element does not load properly in my web browser",
        options: [
          "Instantly call the Help line number",
          "Instantly take a screen-shot and mail it to the support mail id",
          "Clear cache by pressing Ctrl + Shift + Del. Check the box for 'Cached Images and Files'. Click on 'Clear Data'. Then Ctrl + F5 and reload the page",
          "Put up with the inconvenience",
        ],
        correctIndex: 2,
        correctResponse: "That is the correct action to take!",
        incorrectResponse:
          "TCS CodeVita website depends heavily on javascript loading properly in the browser. If the network connection is patchy or if a stale javascript exists in your browser cache, it may interfere with all controls being loaded properly. Clear the cache, reload the page and if still the page does not load properly, then you can write to / call the help desk. The correct answer is: <br/><br/> <center><b> Clear cache by pressing Ctrl + Shift + Del. Check the box for 'Cached Images and Files'. Click on 'Clear Data'. Then Ctrl + F5 and reload the page</b></center>",
      },
      {
        q: "Your TCS CodeVita contest starts",
        options: [
          "Immediately upon login to codevita.tcsapps.com",
          "Only after you click the <B><I>Start Contest</I></B> button.",
          "Only after you see at least one question.",
        ],
        correctIndex: 1,
        correctResponse: "Right!",
        incorrectResponse:
          "Contest does not start until you explicitly start it. Once you click <I>Start Contest</I> button, contest timer for you starts at that moment. The correct answer is:  <br/><br/> <center><b>Only after you click the <B><I>Start Contest</I></B> button</b><center>",
      },
      {
        q: "How does TCS CodeVita Timer work?",
        options: [
          "It picks time entirely from user desktop.",
          "It polls TCS CodeVita server to update time every second.",
          "It's a hybrid model, a combination of server as well as client-side mechanism is used to maintain timer.",
          "Timer is maintained automatically by the browser.",
        ],
        correctIndex: 2,
        correctResponse:
          "When one starts his or her contest, the time is fetched from server. Equivalent time on desktop is taken as contest start time. Thereafter timer is updated based on local desktop time. Simply, it is recommended that one should not change local desktop time unless it is out of sync. It's a good practice to sync own time with NTP servers.",
        incorrectResponse:
          "That's not how TCS CodeVita timer works. The correct answer is:   <br/><br/> <center><b>It's a hybrid model, a combination of server as well as client-side mechanism is used to maintain timer.</b></center>",
      },
      {
        q: "While making public submission for python code, the message 'Compilation command not found for Python3.' is an error. <br>State whether above statement is True or False",
        options: ["True", "False"],
        correctIndex: 1,
        correctResponse: "Bravo! You know your stuff.",
        incorrectResponse:
          "Compilation commands are provided so that participants know which switches are used for C, C++, C# and Java languages. Since Python is an interpreted language no compilation commands exist. There is no need to contact the Help desk for such query. The correct answer is:   <br/><br/> <center><b>False</b></center>",
      },
      {
        q: "Code submitted against Public Test Cases are automatically submitted against Private Test Cases. True or False?",
        options: ["True", "False"],
        correctIndex: 1,
        correctResponse:
          "Correct. Submissions against Private Test Cases need to be explicitly made by clicking the <B><I>Submit (Final)</I></B> button",
        incorrectResponse:
          "Incorrect. Even if Public Test Cases end up in Accepted or Presentation Error status, one needs to explicitly click the <B><I>Submit (Final)</I></B> button. Only solutions that end up in Accepted or Presentation Error status against Private Test Cases are considered for scoring and ranking. The correct answer is:   <br/><br/> <center><b>False</b></center>",
      },      
    ],
  });
})();
