<!DOCTYPE html>
<html class=""><head>
<meta http-equiv="content-type" content="text/html; charset=UTF-8">
    <title>Even Odd 1 | LightOJ</title><meta data-n-head="ssr" charset="utf-8"><meta data-n-head="ssr" name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1"><meta data-n-head="ssr" data-hid="og:type" property="og:type" content="website"><meta data-n-head="ssr" data-hid="og:image" property="og:image" content="https://lightoj.com/loj-og-image.png"><meta data-n-head="ssr" data-hid="description" property="description" content=""><meta data-n-head="ssr" data-hid="og:description" property="og:description" content=""><link data-n-head="ssr" rel="icon" type="image/png" href="https://lightoj.com/loj-favicon.png" sizes="16x16"><link data-n-head="ssr" href="http://fonts.googleapis.com/css?family=Inconsolata:400,700&amp;subset=latin,latin-ext"><link data-n-head="ssr" rel="stylesheet" href="Even%20Odd%201%20LightOJ_files/css.css"><link data-n-head="ssr" rel="stylesheet" href="Even%20Odd%201%20LightOJ_files/github-markdown.min.css" defer=""><script type="text/javascript" async="" src="Even%20Odd%201%20LightOJ_files/js"></script><script data-n-head="ssr" src="Even%20Odd%201%20LightOJ_files/MathJax.js"></script><link rel="preload" href="Even%20Odd%201%20LightOJ_files/dbef4b3.js" as="script"><link rel="preload" href="Even%20Odd%201%20LightOJ_files/570d647.js" as="script"><link rel="preload" href="Even%20Odd%201%20LightOJ_files/9d6ec95.js" as="script"><link rel="preload" href="Even%20Odd%201%20LightOJ_files/74caff2.js" as="script"><link rel="preload" href="Even%20Odd%201%20LightOJ_files/fa29c0f.js" as="script"><link rel="preload" href="Even%20Odd%201%20LightOJ_files/daaeb67.js" as="script"><link rel="preload" href="Even%20Odd%201%20LightOJ_files/5f1db55.js" as="script"><link rel="preload" href="Even%20Odd%201%20LightOJ_files/ad7341e.js" as="script"><link rel="preload" href="Even%20Odd%201%20LightOJ_files/9acce30.js" as="script"><style data-vue-ssr-id="20f5a2b4:0 6373a98c:0 79502c8c:0 80fe8b50:0 02e6ac23:0 8fbc9dee:0 01962c15:0 38122fce:0 36f9b030:0 65718f57:0 35eb56b8:0 1be43dcc:0 76b0bc36:0">/*! Buefy v0.9.22 | MIT License | github.com/buefy/buefy */
@charset "UTF-8";
.is-noscroll {
  position: fixed;
  overflow-y: hidden;
  width: 100%;
  bottom: 0;
}

@keyframes fadeOut {
  from {
    opacity: 1;
  }
  to {
    opacity: 0;
  }
}
.fadeOut {
  animation-name: fadeOut;
}

@keyframes fadeOutDown {
  from {
    opacity: 1;
  }
  to {
    opacity: 0;
    transform: translate3d(0, 100%, 0);
  }
}
.fadeOutDown {
  animation-name: fadeOutDown;
}

@keyframes fadeOutUp {
  from {
    opacity: 1;
  }
  to {
    opacity: 0;
    transform: translate3d(0, -100%, 0);
  }
}
.fadeOutUp {
  animation-name: fadeOutUp;
}

@keyframes fadeIn {
  from {
    opacity: 0;
  }
  to {
    opacity: 1;
  }
}
.fadeIn {
  animation-name: fadeIn;
}

@keyframes fadeInDown {
  from {
    opacity: 0;
    transform: translate3d(0, -100%, 0);
  }
  to {
    opacity: 1;
    transform: none;
  }
}
.fadeInDown {
  animation-name: fadeInDown;
}

@keyframes fadeInUp {
  from {
    opacity: 0;
    transform: translate3d(0, 100%, 0);
  }
  to {
    opacity: 1;
    transform: none;
  }
}
.fadeInUp {
  animation-name: fadeInUp;
}

/**
 * Vue Transitions
 */
.fade-enter-active,
.fade-leave-active {
  transition: opacity 150ms ease-out;
}

.fade-enter,
.fade-leave-to {
  opacity: 0;
}

.zoom-in-enter-active,
.zoom-in-leave-active {
  transition: opacity 150ms ease-out;
}
.zoom-in-enter-active .animation-content,
.zoom-in-enter-active .animation-content,
.zoom-in-leave-active .animation-content,
.zoom-in-leave-active .animation-content {
  transition: transform 150ms ease-out;
}

.zoom-in-enter,
.zoom-in-leave-active {
  opacity: 0;
}
.zoom-in-enter .animation-content,
.zoom-in-enter .animation-content,
.zoom-in-leave-active .animation-content,
.zoom-in-leave-active .animation-content {
  transform: scale(0.95);
}

.zoom-out-enter-active,
.zoom-out-leave-active {
  transition: opacity 150ms ease-out;
}
.zoom-out-enter-active .animation-content,
.zoom-out-enter-active .animation-content,
.zoom-out-leave-active .animation-content,
.zoom-out-leave-active .animation-content {
  transition: transform 150ms ease-out;
}

.zoom-out-enter,
.zoom-out-leave-active {
  opacity: 0;
}
.zoom-out-enter .animation-content,
.zoom-out-enter .animation-content,
.zoom-out-leave-active .animation-content,
.zoom-out-leave-active .animation-content {
  transform: scale(1.05);
}

.slide-next-enter-active,
.slide-next-leave-active,
.slide-prev-enter-active,
.slide-prev-leave-active {
  transition: transform 250ms cubic-bezier(0.785, 0.135, 0.15, 0.86);
}

.slide-prev-leave-to, .slide-next-enter {
  transform: translate3d(-100%, 0, 0);
  position: absolute;
  width: 100%;
}

.slide-prev-enter, .slide-next-leave-to {
  transform: translate3d(100%, 0, 0);
  position: absolute;
  width: 100%;
}

.slide-down-enter-active,
.slide-down-leave-active,
.slide-up-enter-active,
.slide-up-leave-active {
  transition: transform 250ms cubic-bezier(0.785, 0.135, 0.15, 0.86);
}

.slide-up-leave-to, .slide-down-enter {
  transform: translate3d(0, -100%, 0);
  position: absolute;
  height: 100%;
}

.slide-up-enter, .slide-down-leave-to {
  transform: translate3d(0, 100%, 0);
  position: absolute;
  height: 100%;
}

.slide-enter-active {
  transition: 150ms ease-out;
}

.slide-leave-active {
  transition: 150ms ease-out;
  transition-timing-function: cubic-bezier(0, 1, 0.5, 1);
}

.slide-enter-to, .slide-leave {
  max-height: 100px;
  overflow: hidden;
}

.slide-enter, .slide-leave-to {
  overflow: hidden;
  max-height: 0;
}

/*! bulma.io v0.9.3 | MIT License | github.com/jgthms/bulma */
/* Bulma Utilities */
.pagination-previous,
.pagination-next,
.pagination-link,
.pagination-ellipsis, .file-cta,
.file-name, .select select, .taginput .taginput-container.is-focusable, .textarea, .input, .button {
  -moz-appearance: none;
  -webkit-appearance: none;
  align-items: center;
  border: 1px solid transparent;
  border-radius: 4px;
  box-shadow: none;
  display: inline-flex;
  font-size: 1rem;
  height: 2.5em;
  justify-content: flex-start;
  line-height: 1.5;
  padding-bottom: calc(0.5em - 1px);
  padding-left: calc(0.75em - 1px);
  padding-right: calc(0.75em - 1px);
  padding-top: calc(0.5em - 1px);
  position: relative;
  vertical-align: top;
}
.pagination-previous:focus,
.pagination-next:focus,
.pagination-link:focus,
.pagination-ellipsis:focus, .file-cta:focus,
.file-name:focus, .select select:focus, .taginput .taginput-container.is-focusable:focus, .textarea:focus, .input:focus, .button:focus, .is-focused.pagination-previous,
.is-focused.pagination-next,
.is-focused.pagination-link,
.is-focused.pagination-ellipsis, .is-focused.file-cta,
.is-focused.file-name, .select select.is-focused, .taginput .is-focused.taginput-container.is-focusable, .is-focused.textarea, .is-focused.input, .is-focused.button, .pagination-previous:active,
.pagination-next:active,
.pagination-link:active,
.pagination-ellipsis:active, .file-cta:active,
.file-name:active, .select select:active, .taginput .taginput-container.is-focusable:active, .textarea:active, .input:active, .button:active, .is-active.pagination-previous,
.is-active.pagination-next,
.is-active.pagination-link,
.is-active.pagination-ellipsis, .is-active.file-cta,
.is-active.file-name, .select select.is-active, .taginput .is-active.taginput-container.is-focusable, .is-active.textarea, .is-active.input, .is-active.button {
  outline: none;
}
[disabled].pagination-previous,
[disabled].pagination-next,
[disabled].pagination-link,
[disabled].pagination-ellipsis, [disabled].file-cta,
[disabled].file-name, .select select[disabled], .taginput [disabled].taginput-container.is-focusable, [disabled].textarea, [disabled].input, [disabled].button, fieldset[disabled] .pagination-previous,
fieldset[disabled] .pagination-next,
fieldset[disabled] .pagination-link,
fieldset[disabled] .pagination-ellipsis, fieldset[disabled] .file-cta,
fieldset[disabled] .file-name, fieldset[disabled] .select select, .select fieldset[disabled] select, fieldset[disabled] .taginput .taginput-container.is-focusable, .taginput fieldset[disabled] .taginput-container.is-focusable, fieldset[disabled] .textarea, fieldset[disabled] .input, fieldset[disabled] .button {
  cursor: not-allowed;
}

.switch, .b-radio.radio, .b-checkbox.checkbox, .carousel-list, .carousel, .is-unselectable, .tabs, .pagination-previous,
.pagination-next,
.pagination-link,
.pagination-ellipsis, .breadcrumb, .file, .button {
  -webkit-touch-callout: none;
  -webkit-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
}

.navbar-link:not(.is-arrowless)::after, .select:not(.is-multiple):not(.is-loading)::after {
  border: 3px solid transparent;
  border-radius: 2px;
  border-right: 0;
  border-top: 0;
  content: " ";
  display: block;
  height: 0.625em;
  margin-top: -0.4375em;
  pointer-events: none;
  position: absolute;
  top: 50%;
  transform: rotate(-45deg);
  transform-origin: center;
  width: 0.625em;
}

.tabs:not(:last-child), .pagination:not(:last-child), .message:not(:last-child), .level:not(:last-child), .breadcrumb:not(:last-child), .block:not(:last-child), .title:not(:last-child),
.subtitle:not(:last-child), .table-container:not(:last-child), .table:not(:last-child), .progress:not(:last-child), .progress-wrapper.is-not-native:not(:last-child), .notification:not(:last-child), .content:not(:last-child), .box:not(:last-child) {
  margin-bottom: 1.5rem;
}

.modal-close, .delete {
  -webkit-touch-callout: none;
  -webkit-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
  -moz-appearance: none;
  -webkit-appearance: none;
  background-color: rgba(10, 10, 10, 0.2);
  border: none;
  border-radius: 9999px;
  cursor: pointer;
  pointer-events: auto;
  display: inline-block;
  flex-grow: 0;
  flex-shrink: 0;
  font-size: 0;
  height: 20px;
  max-height: 20px;
  max-width: 20px;
  min-height: 20px;
  min-width: 20px;
  outline: none;
  position: relative;
  vertical-align: top;
  width: 20px;
}
.modal-close::before, .delete::before, .modal-close::after, .delete::after {
  background-color: white;
  content: "";
  display: block;
  left: 50%;
  position: absolute;
  top: 50%;
  transform: translateX(-50%) translateY(-50%) rotate(45deg);
  transform-origin: center center;
}
.modal-close::before, .delete::before {
  height: 2px;
  width: 50%;
}
.modal-close::after, .delete::after {
  height: 50%;
  width: 2px;
}
.modal-close:hover, .delete:hover, .modal-close:focus, .delete:focus {
  background-color: rgba(10, 10, 10, 0.3);
}
.modal-close:active, .delete:active {
  background-color: rgba(10, 10, 10, 0.4);
}
.is-small.modal-close, .is-small.delete {
  height: 16px;
  max-height: 16px;
  max-width: 16px;
  min-height: 16px;
  min-width: 16px;
  width: 16px;
}
.is-medium.modal-close, .is-medium.delete {
  height: 24px;
  max-height: 24px;
  max-width: 24px;
  min-height: 24px;
  min-width: 24px;
  width: 24px;
}
.is-large.modal-close, .is-large.delete {
  height: 32px;
  max-height: 32px;
  max-width: 32px;
  min-height: 32px;
  min-width: 32px;
  width: 32px;
}

.control.is-loading::after, .select.is-loading::after, .loader, .button.is-loading::after {
  animation: spinAround 500ms infinite linear;
  border: 2px solid #dbdbdb;
  border-radius: 9999px;
  border-right-color: transparent;
  border-top-color: transparent;
  content: "";
  display: block;
  height: 1em;
  position: relative;
  width: 1em;
}

.b-image-wrapper > img.has-ratio, .b-image-wrapper > img.placeholder, .hero-video, .is-overlay, .modal-background, .modal, .image.is-square img,
.image.is-square .has-ratio, .image.is-1by1 img,
.image.is-1by1 .has-ratio, .image.is-5by4 img,
.image.is-5by4 .has-ratio, .image.is-4by3 img,
.image.is-4by3 .has-ratio, .image.is-3by2 img,
.image.is-3by2 .has-ratio, .image.is-5by3 img,
.image.is-5by3 .has-ratio, .image.is-16by9 img,
.image.is-16by9 .has-ratio, .image.is-2by1 img,
.image.is-2by1 .has-ratio, .image.is-3by1 img,
.image.is-3by1 .has-ratio, .image.is-4by5 img,
.image.is-4by5 .has-ratio, .image.is-3by4 img,
.image.is-3by4 .has-ratio, .image.is-2by3 img,
.image.is-2by3 .has-ratio, .image.is-3by5 img,
.image.is-3by5 .has-ratio, .image.is-9by16 img,
.image.is-9by16 .has-ratio, .image.is-1by2 img,
.image.is-1by2 .has-ratio, .image.is-1by3 img,
.image.is-1by3 .has-ratio {
  bottom: 0;
  left: 0;
  position: absolute;
  right: 0;
  top: 0;
}

.navbar-burger {
  -moz-appearance: none;
  -webkit-appearance: none;
  appearance: none;
  background: none;
  border: none;
  color: currentColor;
  font-family: inherit;
  font-size: 1em;
  margin: 0;
  padding: 0;
}

/* Bulma Base */
/*! minireset.css v0.0.6 | MIT License | github.com/jgthms/minireset.css */
html,
body,
p,
ol,
ul,
li,
dl,
dt,
dd,
blockquote,
figure,
fieldset,
legend,
textarea,
pre,
iframe,
hr,
h1,
h2,
h3,
h4,
h5,
h6 {
  margin: 0;
  padding: 0;
}

h1,
h2,
h3,
h4,
h5,
h6 {
  font-size: 100%;
  font-weight: normal;
}

ul {
  list-style: none;
}

button,
input,
select,
textarea {
  margin: 0;
}

html {
  box-sizing: border-box;
}

*, *::before, *::after {
  box-sizing: inherit;
}

img,
video {
  height: auto;
  max-width: 100%;
}

iframe {
  border: 0;
}

table {
  border-collapse: collapse;
  border-spacing: 0;
}

td,
th {
  padding: 0;
}
td:not([align]),
th:not([align]) {
  text-align: inherit;
}

html {
  background-color: white;
  font-size: 16px;
  -moz-osx-font-smoothing: grayscale;
  -webkit-font-smoothing: antialiased;
  min-width: 300px;
  overflow-x: hidden;
  overflow-y: scroll;
  text-rendering: optimizeLegibility;
  text-size-adjust: 100%;
}

article,
aside,
figure,
footer,
header,
hgroup,
section {
  display: block;
}

body,
button,
input,
optgroup,
select,
textarea {
  font-family: BlinkMacSystemFont, -apple-system, "Segoe UI", "Roboto", "Oxygen", "Ubuntu", "Cantarell", "Fira Sans", "Droid Sans", "Helvetica Neue", "Helvetica", "Arial", sans-serif;
}

code,
pre {
  -moz-osx-font-smoothing: auto;
  -webkit-font-smoothing: auto;
  font-family: monospace;
}

body {
  color: #4a4a4a;
  font-size: 1em;
  font-weight: 400;
  line-height: 1.5;
}

a {
  color: #7957d5;
  cursor: pointer;
  text-decoration: none;
}
a strong {
  color: currentColor;
}
a:hover {
  color: #363636;
}

code {
  background-color: whitesmoke;
  color: #da1039;
  font-size: 0.875em;
  font-weight: normal;
  padding: 0.25em 0.5em 0.25em;
}

hr {
  background-color: whitesmoke;
  border: none;
  display: block;
  height: 2px;
  margin: 1.5rem 0;
}

img {
  height: auto;
  max-width: 100%;
}

input[type=checkbox],
input[type=radio] {
  vertical-align: baseline;
}

small {
  font-size: 0.875em;
}

span {
  font-style: inherit;
  font-weight: inherit;
}

strong {
  color: #363636;
  font-weight: 700;
}

fieldset {
  border: none;
}

pre {
  -webkit-overflow-scrolling: touch;
  background-color: whitesmoke;
  color: #4a4a4a;
  font-size: 0.875em;
  overflow-x: auto;
  padding: 1.25rem 1.5rem;
  white-space: pre;
  word-wrap: normal;
}
pre code {
  background-color: transparent;
  color: currentColor;
  font-size: 1em;
  padding: 0;
}

table td,
table th {
  vertical-align: top;
}
table td:not([align]),
table th:not([align]) {
  text-align: inherit;
}
table th {
  color: #363636;
}

@keyframes spinAround {
  from {
    transform: rotate(0deg);
  }
  to {
    transform: rotate(359deg);
  }
}
/* Bulma Elements */
.box {
  background-color: white;
  border-radius: 6px;
  box-shadow: 0 0.5em 1em -0.125em rgba(10, 10, 10, 0.1), 0 0px 0 1px rgba(10, 10, 10, 0.02);
  color: #4a4a4a;
  display: block;
  padding: 1.25rem;
}

a.box:hover, a.box:focus {
  box-shadow: 0 0.5em 1em -0.125em rgba(10, 10, 10, 0.1), 0 0 0 1px #7957d5;
}
a.box:active {
  box-shadow: inset 0 1px 2px rgba(10, 10, 10, 0.2), 0 0 0 1px #7957d5;
}

.button {
  background-color: white;
  border-color: #dbdbdb;
  border-width: 1px;
  color: #363636;
  cursor: pointer;
  justify-content: center;
  padding-bottom: calc(0.5em - 1px);
  padding-left: 1em;
  padding-right: 1em;
  padding-top: calc(0.5em - 1px);
  text-align: center;
  white-space: nowrap;
}
.button strong {
  color: inherit;
}
.button .icon, .button .icon.is-small, .button .icon.is-medium, .button .icon.is-large {
  height: 1.5em;
  width: 1.5em;
}
.button .icon:first-child:not(:last-child) {
  margin-left: calc(-0.5em - 1px);
  margin-right: 0.25em;
}
.button .icon:last-child:not(:first-child) {
  margin-left: 0.25em;
  margin-right: calc(-0.5em - 1px);
}
.button .icon:first-child:last-child {
  margin-left: calc(-0.5em - 1px);
  margin-right: calc(-0.5em - 1px);
}
.button:hover, .button.is-hovered {
  border-color: #b5b5b5;
  color: #363636;
}
.button:focus, .button.is-focused {
  border-color: #7957d5;
  color: #363636;
}
.button:focus:not(:active), .button.is-focused:not(:active) {
  box-shadow: 0 0 0 0.125em rgba(121, 87, 213, 0.25);
}
.button:active, .button.is-active {
  border-color: #4a4a4a;
  color: #363636;
}
.button.is-text {
  background-color: transparent;
  border-color: transparent;
  color: #4a4a4a;
  text-decoration: underline;
}
.button.is-text:hover, .button.is-text.is-hovered, .button.is-text:focus, .button.is-text.is-focused {
  background-color: whitesmoke;
  color: #363636;
}
.button.is-text:active, .button.is-text.is-active {
  background-color: #e8e8e8;
  color: #363636;
}
.button.is-text[disabled], fieldset[disabled] .button.is-text {
  background-color: transparent;
  border-color: transparent;
  box-shadow: none;
}
.button.is-ghost {
  background: none;
  border-color: transparent;
  color: #7957d5;
  text-decoration: none;
}
.button.is-ghost:hover, .button.is-ghost.is-hovered {
  color: #7957d5;
  text-decoration: underline;
}
.button.is-white {
  background-color: white;
  border-color: transparent;
  color: #0a0a0a;
}
.button.is-white:hover, .button.is-white.is-hovered {
  background-color: #f9f9f9;
  border-color: transparent;
  color: #0a0a0a;
}
.button.is-white:focus, .button.is-white.is-focused {
  border-color: transparent;
  color: #0a0a0a;
}
.button.is-white:focus:not(:active), .button.is-white.is-focused:not(:active) {
  box-shadow: 0 0 0 0.125em rgba(255, 255, 255, 0.25);
}
.button.is-white:active, .button.is-white.is-active {
  background-color: #f2f2f2;
  border-color: transparent;
  color: #0a0a0a;
}
.button.is-white[disabled], fieldset[disabled] .button.is-white {
  background-color: white;
  border-color: transparent;
  box-shadow: none;
}
.button.is-white.is-inverted {
  background-color: #0a0a0a;
  color: white;
}
.button.is-white.is-inverted:hover, .button.is-white.is-inverted.is-hovered {
  background-color: black;
}
.button.is-white.is-inverted[disabled], fieldset[disabled] .button.is-white.is-inverted {
  background-color: #0a0a0a;
  border-color: transparent;
  box-shadow: none;
  color: white;
}
.button.is-white.is-loading::after {
  border-color: transparent transparent #0a0a0a #0a0a0a !important;
}
.button.is-white.is-outlined {
  background-color: transparent;
  border-color: white;
  color: white;
}
.button.is-white.is-outlined:hover, .button.is-white.is-outlined.is-hovered, .button.is-white.is-outlined:focus, .button.is-white.is-outlined.is-focused {
  background-color: white;
  border-color: white;
  color: #0a0a0a;
}
.button.is-white.is-outlined.is-loading::after {
  border-color: transparent transparent white white !important;
}
.button.is-white.is-outlined.is-loading:hover::after, .button.is-white.is-outlined.is-loading.is-hovered::after, .button.is-white.is-outlined.is-loading:focus::after, .button.is-white.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent #0a0a0a #0a0a0a !important;
}
.button.is-white.is-outlined[disabled], fieldset[disabled] .button.is-white.is-outlined {
  background-color: transparent;
  border-color: white;
  box-shadow: none;
  color: white;
}
.button.is-white.is-inverted.is-outlined {
  background-color: transparent;
  border-color: #0a0a0a;
  color: #0a0a0a;
}
.button.is-white.is-inverted.is-outlined:hover, .button.is-white.is-inverted.is-outlined.is-hovered, .button.is-white.is-inverted.is-outlined:focus, .button.is-white.is-inverted.is-outlined.is-focused {
  background-color: #0a0a0a;
  color: white;
}
.button.is-white.is-inverted.is-outlined.is-loading:hover::after, .button.is-white.is-inverted.is-outlined.is-loading.is-hovered::after, .button.is-white.is-inverted.is-outlined.is-loading:focus::after, .button.is-white.is-inverted.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent white white !important;
}
.button.is-white.is-inverted.is-outlined[disabled], fieldset[disabled] .button.is-white.is-inverted.is-outlined {
  background-color: transparent;
  border-color: #0a0a0a;
  box-shadow: none;
  color: #0a0a0a;
}
.button.is-black {
  background-color: #0a0a0a;
  border-color: transparent;
  color: white;
}
.button.is-black:hover, .button.is-black.is-hovered {
  background-color: #040404;
  border-color: transparent;
  color: white;
}
.button.is-black:focus, .button.is-black.is-focused {
  border-color: transparent;
  color: white;
}
.button.is-black:focus:not(:active), .button.is-black.is-focused:not(:active) {
  box-shadow: 0 0 0 0.125em rgba(10, 10, 10, 0.25);
}
.button.is-black:active, .button.is-black.is-active {
  background-color: black;
  border-color: transparent;
  color: white;
}
.button.is-black[disabled], fieldset[disabled] .button.is-black {
  background-color: #0a0a0a;
  border-color: transparent;
  box-shadow: none;
}
.button.is-black.is-inverted {
  background-color: white;
  color: #0a0a0a;
}
.button.is-black.is-inverted:hover, .button.is-black.is-inverted.is-hovered {
  background-color: #f2f2f2;
}
.button.is-black.is-inverted[disabled], fieldset[disabled] .button.is-black.is-inverted {
  background-color: white;
  border-color: transparent;
  box-shadow: none;
  color: #0a0a0a;
}
.button.is-black.is-loading::after {
  border-color: transparent transparent white white !important;
}
.button.is-black.is-outlined {
  background-color: transparent;
  border-color: #0a0a0a;
  color: #0a0a0a;
}
.button.is-black.is-outlined:hover, .button.is-black.is-outlined.is-hovered, .button.is-black.is-outlined:focus, .button.is-black.is-outlined.is-focused {
  background-color: #0a0a0a;
  border-color: #0a0a0a;
  color: white;
}
.button.is-black.is-outlined.is-loading::after {
  border-color: transparent transparent #0a0a0a #0a0a0a !important;
}
.button.is-black.is-outlined.is-loading:hover::after, .button.is-black.is-outlined.is-loading.is-hovered::after, .button.is-black.is-outlined.is-loading:focus::after, .button.is-black.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent white white !important;
}
.button.is-black.is-outlined[disabled], fieldset[disabled] .button.is-black.is-outlined {
  background-color: transparent;
  border-color: #0a0a0a;
  box-shadow: none;
  color: #0a0a0a;
}
.button.is-black.is-inverted.is-outlined {
  background-color: transparent;
  border-color: white;
  color: white;
}
.button.is-black.is-inverted.is-outlined:hover, .button.is-black.is-inverted.is-outlined.is-hovered, .button.is-black.is-inverted.is-outlined:focus, .button.is-black.is-inverted.is-outlined.is-focused {
  background-color: white;
  color: #0a0a0a;
}
.button.is-black.is-inverted.is-outlined.is-loading:hover::after, .button.is-black.is-inverted.is-outlined.is-loading.is-hovered::after, .button.is-black.is-inverted.is-outlined.is-loading:focus::after, .button.is-black.is-inverted.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent #0a0a0a #0a0a0a !important;
}
.button.is-black.is-inverted.is-outlined[disabled], fieldset[disabled] .button.is-black.is-inverted.is-outlined {
  background-color: transparent;
  border-color: white;
  box-shadow: none;
  color: white;
}
.button.is-light {
  background-color: whitesmoke;
  border-color: transparent;
  color: rgba(0, 0, 0, 0.7);
}
.button.is-light:hover, .button.is-light.is-hovered {
  background-color: #eeeeee;
  border-color: transparent;
  color: rgba(0, 0, 0, 0.7);
}
.button.is-light:focus, .button.is-light.is-focused {
  border-color: transparent;
  color: rgba(0, 0, 0, 0.7);
}
.button.is-light:focus:not(:active), .button.is-light.is-focused:not(:active) {
  box-shadow: 0 0 0 0.125em rgba(245, 245, 245, 0.25);
}
.button.is-light:active, .button.is-light.is-active {
  background-color: #e8e8e8;
  border-color: transparent;
  color: rgba(0, 0, 0, 0.7);
}
.button.is-light[disabled], fieldset[disabled] .button.is-light {
  background-color: whitesmoke;
  border-color: transparent;
  box-shadow: none;
}
.button.is-light.is-inverted {
  background-color: rgba(0, 0, 0, 0.7);
  color: whitesmoke;
}
.button.is-light.is-inverted:hover, .button.is-light.is-inverted.is-hovered {
  background-color: rgba(0, 0, 0, 0.7);
}
.button.is-light.is-inverted[disabled], fieldset[disabled] .button.is-light.is-inverted {
  background-color: rgba(0, 0, 0, 0.7);
  border-color: transparent;
  box-shadow: none;
  color: whitesmoke;
}
.button.is-light.is-loading::after {
  border-color: transparent transparent rgba(0, 0, 0, 0.7) rgba(0, 0, 0, 0.7) !important;
}
.button.is-light.is-outlined {
  background-color: transparent;
  border-color: whitesmoke;
  color: whitesmoke;
}
.button.is-light.is-outlined:hover, .button.is-light.is-outlined.is-hovered, .button.is-light.is-outlined:focus, .button.is-light.is-outlined.is-focused {
  background-color: whitesmoke;
  border-color: whitesmoke;
  color: rgba(0, 0, 0, 0.7);
}
.button.is-light.is-outlined.is-loading::after {
  border-color: transparent transparent whitesmoke whitesmoke !important;
}
.button.is-light.is-outlined.is-loading:hover::after, .button.is-light.is-outlined.is-loading.is-hovered::after, .button.is-light.is-outlined.is-loading:focus::after, .button.is-light.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent rgba(0, 0, 0, 0.7) rgba(0, 0, 0, 0.7) !important;
}
.button.is-light.is-outlined[disabled], fieldset[disabled] .button.is-light.is-outlined {
  background-color: transparent;
  border-color: whitesmoke;
  box-shadow: none;
  color: whitesmoke;
}
.button.is-light.is-inverted.is-outlined {
  background-color: transparent;
  border-color: rgba(0, 0, 0, 0.7);
  color: rgba(0, 0, 0, 0.7);
}
.button.is-light.is-inverted.is-outlined:hover, .button.is-light.is-inverted.is-outlined.is-hovered, .button.is-light.is-inverted.is-outlined:focus, .button.is-light.is-inverted.is-outlined.is-focused {
  background-color: rgba(0, 0, 0, 0.7);
  color: whitesmoke;
}
.button.is-light.is-inverted.is-outlined.is-loading:hover::after, .button.is-light.is-inverted.is-outlined.is-loading.is-hovered::after, .button.is-light.is-inverted.is-outlined.is-loading:focus::after, .button.is-light.is-inverted.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent whitesmoke whitesmoke !important;
}
.button.is-light.is-inverted.is-outlined[disabled], fieldset[disabled] .button.is-light.is-inverted.is-outlined {
  background-color: transparent;
  border-color: rgba(0, 0, 0, 0.7);
  box-shadow: none;
  color: rgba(0, 0, 0, 0.7);
}
.button.is-dark {
  background-color: #363636;
  border-color: transparent;
  color: #fff;
}
.button.is-dark:hover, .button.is-dark.is-hovered {
  background-color: #2f2f2f;
  border-color: transparent;
  color: #fff;
}
.button.is-dark:focus, .button.is-dark.is-focused {
  border-color: transparent;
  color: #fff;
}
.button.is-dark:focus:not(:active), .button.is-dark.is-focused:not(:active) {
  box-shadow: 0 0 0 0.125em rgba(54, 54, 54, 0.25);
}
.button.is-dark:active, .button.is-dark.is-active {
  background-color: #292929;
  border-color: transparent;
  color: #fff;
}
.button.is-dark[disabled], fieldset[disabled] .button.is-dark {
  background-color: #363636;
  border-color: transparent;
  box-shadow: none;
}
.button.is-dark.is-inverted {
  background-color: #fff;
  color: #363636;
}
.button.is-dark.is-inverted:hover, .button.is-dark.is-inverted.is-hovered {
  background-color: #f2f2f2;
}
.button.is-dark.is-inverted[disabled], fieldset[disabled] .button.is-dark.is-inverted {
  background-color: #fff;
  border-color: transparent;
  box-shadow: none;
  color: #363636;
}
.button.is-dark.is-loading::after {
  border-color: transparent transparent #fff #fff !important;
}
.button.is-dark.is-outlined {
  background-color: transparent;
  border-color: #363636;
  color: #363636;
}
.button.is-dark.is-outlined:hover, .button.is-dark.is-outlined.is-hovered, .button.is-dark.is-outlined:focus, .button.is-dark.is-outlined.is-focused {
  background-color: #363636;
  border-color: #363636;
  color: #fff;
}
.button.is-dark.is-outlined.is-loading::after {
  border-color: transparent transparent #363636 #363636 !important;
}
.button.is-dark.is-outlined.is-loading:hover::after, .button.is-dark.is-outlined.is-loading.is-hovered::after, .button.is-dark.is-outlined.is-loading:focus::after, .button.is-dark.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent #fff #fff !important;
}
.button.is-dark.is-outlined[disabled], fieldset[disabled] .button.is-dark.is-outlined {
  background-color: transparent;
  border-color: #363636;
  box-shadow: none;
  color: #363636;
}
.button.is-dark.is-inverted.is-outlined {
  background-color: transparent;
  border-color: #fff;
  color: #fff;
}
.button.is-dark.is-inverted.is-outlined:hover, .button.is-dark.is-inverted.is-outlined.is-hovered, .button.is-dark.is-inverted.is-outlined:focus, .button.is-dark.is-inverted.is-outlined.is-focused {
  background-color: #fff;
  color: #363636;
}
.button.is-dark.is-inverted.is-outlined.is-loading:hover::after, .button.is-dark.is-inverted.is-outlined.is-loading.is-hovered::after, .button.is-dark.is-inverted.is-outlined.is-loading:focus::after, .button.is-dark.is-inverted.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent #363636 #363636 !important;
}
.button.is-dark.is-inverted.is-outlined[disabled], fieldset[disabled] .button.is-dark.is-inverted.is-outlined {
  background-color: transparent;
  border-color: #fff;
  box-shadow: none;
  color: #fff;
}
.button.is-primary {
  background-color: #7957d5;
  border-color: transparent;
  color: #fff;
}
.button.is-primary:hover, .button.is-primary.is-hovered {
  background-color: #714dd2;
  border-color: transparent;
  color: #fff;
}
.button.is-primary:focus, .button.is-primary.is-focused {
  border-color: transparent;
  color: #fff;
}
.button.is-primary:focus:not(:active), .button.is-primary.is-focused:not(:active) {
  box-shadow: 0 0 0 0.125em rgba(121, 87, 213, 0.25);
}
.button.is-primary:active, .button.is-primary.is-active {
  background-color: #6943d0;
  border-color: transparent;
  color: #fff;
}
.button.is-primary[disabled], fieldset[disabled] .button.is-primary {
  background-color: #7957d5;
  border-color: transparent;
  box-shadow: none;
}
.button.is-primary.is-inverted {
  background-color: #fff;
  color: #7957d5;
}
.button.is-primary.is-inverted:hover, .button.is-primary.is-inverted.is-hovered {
  background-color: #f2f2f2;
}
.button.is-primary.is-inverted[disabled], fieldset[disabled] .button.is-primary.is-inverted {
  background-color: #fff;
  border-color: transparent;
  box-shadow: none;
  color: #7957d5;
}
.button.is-primary.is-loading::after {
  border-color: transparent transparent #fff #fff !important;
}
.button.is-primary.is-outlined {
  background-color: transparent;
  border-color: #7957d5;
  color: #7957d5;
}
.button.is-primary.is-outlined:hover, .button.is-primary.is-outlined.is-hovered, .button.is-primary.is-outlined:focus, .button.is-primary.is-outlined.is-focused {
  background-color: #7957d5;
  border-color: #7957d5;
  color: #fff;
}
.button.is-primary.is-outlined.is-loading::after {
  border-color: transparent transparent #7957d5 #7957d5 !important;
}
.button.is-primary.is-outlined.is-loading:hover::after, .button.is-primary.is-outlined.is-loading.is-hovered::after, .button.is-primary.is-outlined.is-loading:focus::after, .button.is-primary.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent #fff #fff !important;
}
.button.is-primary.is-outlined[disabled], fieldset[disabled] .button.is-primary.is-outlined {
  background-color: transparent;
  border-color: #7957d5;
  box-shadow: none;
  color: #7957d5;
}
.button.is-primary.is-inverted.is-outlined {
  background-color: transparent;
  border-color: #fff;
  color: #fff;
}
.button.is-primary.is-inverted.is-outlined:hover, .button.is-primary.is-inverted.is-outlined.is-hovered, .button.is-primary.is-inverted.is-outlined:focus, .button.is-primary.is-inverted.is-outlined.is-focused {
  background-color: #fff;
  color: #7957d5;
}
.button.is-primary.is-inverted.is-outlined.is-loading:hover::after, .button.is-primary.is-inverted.is-outlined.is-loading.is-hovered::after, .button.is-primary.is-inverted.is-outlined.is-loading:focus::after, .button.is-primary.is-inverted.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent #7957d5 #7957d5 !important;
}
.button.is-primary.is-inverted.is-outlined[disabled], fieldset[disabled] .button.is-primary.is-inverted.is-outlined {
  background-color: transparent;
  border-color: #fff;
  box-shadow: none;
  color: #fff;
}
.button.is-primary.is-light {
  background-color: #f2effb;
  color: #552fbc;
}
.button.is-primary.is-light:hover, .button.is-primary.is-light.is-hovered {
  background-color: #eae4f8;
  border-color: transparent;
  color: #552fbc;
}
.button.is-primary.is-light:active, .button.is-primary.is-light.is-active {
  background-color: #e2daf6;
  border-color: transparent;
  color: #552fbc;
}
.button.is-link {
  background-color: #7957d5;
  border-color: transparent;
  color: #fff;
}
.button.is-link:hover, .button.is-link.is-hovered {
  background-color: #714dd2;
  border-color: transparent;
  color: #fff;
}
.button.is-link:focus, .button.is-link.is-focused {
  border-color: transparent;
  color: #fff;
}
.button.is-link:focus:not(:active), .button.is-link.is-focused:not(:active) {
  box-shadow: 0 0 0 0.125em rgba(121, 87, 213, 0.25);
}
.button.is-link:active, .button.is-link.is-active {
  background-color: #6943d0;
  border-color: transparent;
  color: #fff;
}
.button.is-link[disabled], fieldset[disabled] .button.is-link {
  background-color: #7957d5;
  border-color: transparent;
  box-shadow: none;
}
.button.is-link.is-inverted {
  background-color: #fff;
  color: #7957d5;
}
.button.is-link.is-inverted:hover, .button.is-link.is-inverted.is-hovered {
  background-color: #f2f2f2;
}
.button.is-link.is-inverted[disabled], fieldset[disabled] .button.is-link.is-inverted {
  background-color: #fff;
  border-color: transparent;
  box-shadow: none;
  color: #7957d5;
}
.button.is-link.is-loading::after {
  border-color: transparent transparent #fff #fff !important;
}
.button.is-link.is-outlined {
  background-color: transparent;
  border-color: #7957d5;
  color: #7957d5;
}
.button.is-link.is-outlined:hover, .button.is-link.is-outlined.is-hovered, .button.is-link.is-outlined:focus, .button.is-link.is-outlined.is-focused {
  background-color: #7957d5;
  border-color: #7957d5;
  color: #fff;
}
.button.is-link.is-outlined.is-loading::after {
  border-color: transparent transparent #7957d5 #7957d5 !important;
}
.button.is-link.is-outlined.is-loading:hover::after, .button.is-link.is-outlined.is-loading.is-hovered::after, .button.is-link.is-outlined.is-loading:focus::after, .button.is-link.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent #fff #fff !important;
}
.button.is-link.is-outlined[disabled], fieldset[disabled] .button.is-link.is-outlined {
  background-color: transparent;
  border-color: #7957d5;
  box-shadow: none;
  color: #7957d5;
}
.button.is-link.is-inverted.is-outlined {
  background-color: transparent;
  border-color: #fff;
  color: #fff;
}
.button.is-link.is-inverted.is-outlined:hover, .button.is-link.is-inverted.is-outlined.is-hovered, .button.is-link.is-inverted.is-outlined:focus, .button.is-link.is-inverted.is-outlined.is-focused {
  background-color: #fff;
  color: #7957d5;
}
.button.is-link.is-inverted.is-outlined.is-loading:hover::after, .button.is-link.is-inverted.is-outlined.is-loading.is-hovered::after, .button.is-link.is-inverted.is-outlined.is-loading:focus::after, .button.is-link.is-inverted.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent #7957d5 #7957d5 !important;
}
.button.is-link.is-inverted.is-outlined[disabled], fieldset[disabled] .button.is-link.is-inverted.is-outlined {
  background-color: transparent;
  border-color: #fff;
  box-shadow: none;
  color: #fff;
}
.button.is-link.is-light {
  background-color: #f2effb;
  color: #552fbc;
}
.button.is-link.is-light:hover, .button.is-link.is-light.is-hovered {
  background-color: #eae4f8;
  border-color: transparent;
  color: #552fbc;
}
.button.is-link.is-light:active, .button.is-link.is-light.is-active {
  background-color: #e2daf6;
  border-color: transparent;
  color: #552fbc;
}
.button.is-info {
  background-color: #167df0;
  border-color: transparent;
  color: #fff;
}
.button.is-info:hover, .button.is-info.is-hovered {
  background-color: #0f77ea;
  border-color: transparent;
  color: #fff;
}
.button.is-info:focus, .button.is-info.is-focused {
  border-color: transparent;
  color: #fff;
}
.button.is-info:focus:not(:active), .button.is-info.is-focused:not(:active) {
  box-shadow: 0 0 0 0.125em rgba(22, 125, 240, 0.25);
}
.button.is-info:active, .button.is-info.is-active {
  background-color: #0e71de;
  border-color: transparent;
  color: #fff;
}
.button.is-info[disabled], fieldset[disabled] .button.is-info {
  background-color: #167df0;
  border-color: transparent;
  box-shadow: none;
}
.button.is-info.is-inverted {
  background-color: #fff;
  color: #167df0;
}
.button.is-info.is-inverted:hover, .button.is-info.is-inverted.is-hovered {
  background-color: #f2f2f2;
}
.button.is-info.is-inverted[disabled], fieldset[disabled] .button.is-info.is-inverted {
  background-color: #fff;
  border-color: transparent;
  box-shadow: none;
  color: #167df0;
}
.button.is-info.is-loading::after {
  border-color: transparent transparent #fff #fff !important;
}
.button.is-info.is-outlined {
  background-color: transparent;
  border-color: #167df0;
  color: #167df0;
}
.button.is-info.is-outlined:hover, .button.is-info.is-outlined.is-hovered, .button.is-info.is-outlined:focus, .button.is-info.is-outlined.is-focused {
  background-color: #167df0;
  border-color: #167df0;
  color: #fff;
}
.button.is-info.is-outlined.is-loading::after {
  border-color: transparent transparent #167df0 #167df0 !important;
}
.button.is-info.is-outlined.is-loading:hover::after, .button.is-info.is-outlined.is-loading.is-hovered::after, .button.is-info.is-outlined.is-loading:focus::after, .button.is-info.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent #fff #fff !important;
}
.button.is-info.is-outlined[disabled], fieldset[disabled] .button.is-info.is-outlined {
  background-color: transparent;
  border-color: #167df0;
  box-shadow: none;
  color: #167df0;
}
.button.is-info.is-inverted.is-outlined {
  background-color: transparent;
  border-color: #fff;
  color: #fff;
}
.button.is-info.is-inverted.is-outlined:hover, .button.is-info.is-inverted.is-outlined.is-hovered, .button.is-info.is-inverted.is-outlined:focus, .button.is-info.is-inverted.is-outlined.is-focused {
  background-color: #fff;
  color: #167df0;
}
.button.is-info.is-inverted.is-outlined.is-loading:hover::after, .button.is-info.is-inverted.is-outlined.is-loading.is-hovered::after, .button.is-info.is-inverted.is-outlined.is-loading:focus::after, .button.is-info.is-inverted.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent #167df0 #167df0 !important;
}
.button.is-info.is-inverted.is-outlined[disabled], fieldset[disabled] .button.is-info.is-inverted.is-outlined {
  background-color: transparent;
  border-color: #fff;
  box-shadow: none;
  color: #fff;
}
.button.is-info.is-light {
  background-color: #ecf4fe;
  color: #0d68ce;
}
.button.is-info.is-light:hover, .button.is-info.is-light.is-hovered {
  background-color: #e0eefd;
  border-color: transparent;
  color: #0d68ce;
}
.button.is-info.is-light:active, .button.is-info.is-light.is-active {
  background-color: #d4e7fc;
  border-color: transparent;
  color: #0d68ce;
}
.button.is-success {
  background-color: #48c78e;
  border-color: transparent;
  color: #fff;
}
.button.is-success:hover, .button.is-success.is-hovered {
  background-color: #3ec487;
  border-color: transparent;
  color: #fff;
}
.button.is-success:focus, .button.is-success.is-focused {
  border-color: transparent;
  color: #fff;
}
.button.is-success:focus:not(:active), .button.is-success.is-focused:not(:active) {
  box-shadow: 0 0 0 0.125em rgba(72, 199, 142, 0.25);
}
.button.is-success:active, .button.is-success.is-active {
  background-color: #3abb81;
  border-color: transparent;
  color: #fff;
}
.button.is-success[disabled], fieldset[disabled] .button.is-success {
  background-color: #48c78e;
  border-color: transparent;
  box-shadow: none;
}
.button.is-success.is-inverted {
  background-color: #fff;
  color: #48c78e;
}
.button.is-success.is-inverted:hover, .button.is-success.is-inverted.is-hovered {
  background-color: #f2f2f2;
}
.button.is-success.is-inverted[disabled], fieldset[disabled] .button.is-success.is-inverted {
  background-color: #fff;
  border-color: transparent;
  box-shadow: none;
  color: #48c78e;
}
.button.is-success.is-loading::after {
  border-color: transparent transparent #fff #fff !important;
}
.button.is-success.is-outlined {
  background-color: transparent;
  border-color: #48c78e;
  color: #48c78e;
}
.button.is-success.is-outlined:hover, .button.is-success.is-outlined.is-hovered, .button.is-success.is-outlined:focus, .button.is-success.is-outlined.is-focused {
  background-color: #48c78e;
  border-color: #48c78e;
  color: #fff;
}
.button.is-success.is-outlined.is-loading::after {
  border-color: transparent transparent #48c78e #48c78e !important;
}
.button.is-success.is-outlined.is-loading:hover::after, .button.is-success.is-outlined.is-loading.is-hovered::after, .button.is-success.is-outlined.is-loading:focus::after, .button.is-success.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent #fff #fff !important;
}
.button.is-success.is-outlined[disabled], fieldset[disabled] .button.is-success.is-outlined {
  background-color: transparent;
  border-color: #48c78e;
  box-shadow: none;
  color: #48c78e;
}
.button.is-success.is-inverted.is-outlined {
  background-color: transparent;
  border-color: #fff;
  color: #fff;
}
.button.is-success.is-inverted.is-outlined:hover, .button.is-success.is-inverted.is-outlined.is-hovered, .button.is-success.is-inverted.is-outlined:focus, .button.is-success.is-inverted.is-outlined.is-focused {
  background-color: #fff;
  color: #48c78e;
}
.button.is-success.is-inverted.is-outlined.is-loading:hover::after, .button.is-success.is-inverted.is-outlined.is-loading.is-hovered::after, .button.is-success.is-inverted.is-outlined.is-loading:focus::after, .button.is-success.is-inverted.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent #48c78e #48c78e !important;
}
.button.is-success.is-inverted.is-outlined[disabled], fieldset[disabled] .button.is-success.is-inverted.is-outlined {
  background-color: transparent;
  border-color: #fff;
  box-shadow: none;
  color: #fff;
}
.button.is-success.is-light {
  background-color: #effaf5;
  color: #257953;
}
.button.is-success.is-light:hover, .button.is-success.is-light.is-hovered {
  background-color: #e6f7ef;
  border-color: transparent;
  color: #257953;
}
.button.is-success.is-light:active, .button.is-success.is-light.is-active {
  background-color: #dcf4e9;
  border-color: transparent;
  color: #257953;
}
.button.is-warning {
  background-color: #ffe08a;
  border-color: transparent;
  color: rgba(0, 0, 0, 0.7);
}
.button.is-warning:hover, .button.is-warning.is-hovered {
  background-color: #ffdc7d;
  border-color: transparent;
  color: rgba(0, 0, 0, 0.7);
}
.button.is-warning:focus, .button.is-warning.is-focused {
  border-color: transparent;
  color: rgba(0, 0, 0, 0.7);
}
.button.is-warning:focus:not(:active), .button.is-warning.is-focused:not(:active) {
  box-shadow: 0 0 0 0.125em rgba(255, 224, 138, 0.25);
}
.button.is-warning:active, .button.is-warning.is-active {
  background-color: #ffd970;
  border-color: transparent;
  color: rgba(0, 0, 0, 0.7);
}
.button.is-warning[disabled], fieldset[disabled] .button.is-warning {
  background-color: #ffe08a;
  border-color: transparent;
  box-shadow: none;
}
.button.is-warning.is-inverted {
  background-color: rgba(0, 0, 0, 0.7);
  color: #ffe08a;
}
.button.is-warning.is-inverted:hover, .button.is-warning.is-inverted.is-hovered {
  background-color: rgba(0, 0, 0, 0.7);
}
.button.is-warning.is-inverted[disabled], fieldset[disabled] .button.is-warning.is-inverted {
  background-color: rgba(0, 0, 0, 0.7);
  border-color: transparent;
  box-shadow: none;
  color: #ffe08a;
}
.button.is-warning.is-loading::after {
  border-color: transparent transparent rgba(0, 0, 0, 0.7) rgba(0, 0, 0, 0.7) !important;
}
.button.is-warning.is-outlined {
  background-color: transparent;
  border-color: #ffe08a;
  color: #ffe08a;
}
.button.is-warning.is-outlined:hover, .button.is-warning.is-outlined.is-hovered, .button.is-warning.is-outlined:focus, .button.is-warning.is-outlined.is-focused {
  background-color: #ffe08a;
  border-color: #ffe08a;
  color: rgba(0, 0, 0, 0.7);
}
.button.is-warning.is-outlined.is-loading::after {
  border-color: transparent transparent #ffe08a #ffe08a !important;
}
.button.is-warning.is-outlined.is-loading:hover::after, .button.is-warning.is-outlined.is-loading.is-hovered::after, .button.is-warning.is-outlined.is-loading:focus::after, .button.is-warning.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent rgba(0, 0, 0, 0.7) rgba(0, 0, 0, 0.7) !important;
}
.button.is-warning.is-outlined[disabled], fieldset[disabled] .button.is-warning.is-outlined {
  background-color: transparent;
  border-color: #ffe08a;
  box-shadow: none;
  color: #ffe08a;
}
.button.is-warning.is-inverted.is-outlined {
  background-color: transparent;
  border-color: rgba(0, 0, 0, 0.7);
  color: rgba(0, 0, 0, 0.7);
}
.button.is-warning.is-inverted.is-outlined:hover, .button.is-warning.is-inverted.is-outlined.is-hovered, .button.is-warning.is-inverted.is-outlined:focus, .button.is-warning.is-inverted.is-outlined.is-focused {
  background-color: rgba(0, 0, 0, 0.7);
  color: #ffe08a;
}
.button.is-warning.is-inverted.is-outlined.is-loading:hover::after, .button.is-warning.is-inverted.is-outlined.is-loading.is-hovered::after, .button.is-warning.is-inverted.is-outlined.is-loading:focus::after, .button.is-warning.is-inverted.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent #ffe08a #ffe08a !important;
}
.button.is-warning.is-inverted.is-outlined[disabled], fieldset[disabled] .button.is-warning.is-inverted.is-outlined {
  background-color: transparent;
  border-color: rgba(0, 0, 0, 0.7);
  box-shadow: none;
  color: rgba(0, 0, 0, 0.7);
}
.button.is-warning.is-light {
  background-color: #fffaeb;
  color: #946c00;
}
.button.is-warning.is-light:hover, .button.is-warning.is-light.is-hovered {
  background-color: #fff6de;
  border-color: transparent;
  color: #946c00;
}
.button.is-warning.is-light:active, .button.is-warning.is-light.is-active {
  background-color: #fff3d1;
  border-color: transparent;
  color: #946c00;
}
.button.is-danger {
  background-color: #f14668;
  border-color: transparent;
  color: #fff;
}
.button.is-danger:hover, .button.is-danger.is-hovered {
  background-color: #f03a5f;
  border-color: transparent;
  color: #fff;
}
.button.is-danger:focus, .button.is-danger.is-focused {
  border-color: transparent;
  color: #fff;
}
.button.is-danger:focus:not(:active), .button.is-danger.is-focused:not(:active) {
  box-shadow: 0 0 0 0.125em rgba(241, 70, 104, 0.25);
}
.button.is-danger:active, .button.is-danger.is-active {
  background-color: #ef2e55;
  border-color: transparent;
  color: #fff;
}
.button.is-danger[disabled], fieldset[disabled] .button.is-danger {
  background-color: #f14668;
  border-color: transparent;
  box-shadow: none;
}
.button.is-danger.is-inverted {
  background-color: #fff;
  color: #f14668;
}
.button.is-danger.is-inverted:hover, .button.is-danger.is-inverted.is-hovered {
  background-color: #f2f2f2;
}
.button.is-danger.is-inverted[disabled], fieldset[disabled] .button.is-danger.is-inverted {
  background-color: #fff;
  border-color: transparent;
  box-shadow: none;
  color: #f14668;
}
.button.is-danger.is-loading::after {
  border-color: transparent transparent #fff #fff !important;
}
.button.is-danger.is-outlined {
  background-color: transparent;
  border-color: #f14668;
  color: #f14668;
}
.button.is-danger.is-outlined:hover, .button.is-danger.is-outlined.is-hovered, .button.is-danger.is-outlined:focus, .button.is-danger.is-outlined.is-focused {
  background-color: #f14668;
  border-color: #f14668;
  color: #fff;
}
.button.is-danger.is-outlined.is-loading::after {
  border-color: transparent transparent #f14668 #f14668 !important;
}
.button.is-danger.is-outlined.is-loading:hover::after, .button.is-danger.is-outlined.is-loading.is-hovered::after, .button.is-danger.is-outlined.is-loading:focus::after, .button.is-danger.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent #fff #fff !important;
}
.button.is-danger.is-outlined[disabled], fieldset[disabled] .button.is-danger.is-outlined {
  background-color: transparent;
  border-color: #f14668;
  box-shadow: none;
  color: #f14668;
}
.button.is-danger.is-inverted.is-outlined {
  background-color: transparent;
  border-color: #fff;
  color: #fff;
}
.button.is-danger.is-inverted.is-outlined:hover, .button.is-danger.is-inverted.is-outlined.is-hovered, .button.is-danger.is-inverted.is-outlined:focus, .button.is-danger.is-inverted.is-outlined.is-focused {
  background-color: #fff;
  color: #f14668;
}
.button.is-danger.is-inverted.is-outlined.is-loading:hover::after, .button.is-danger.is-inverted.is-outlined.is-loading.is-hovered::after, .button.is-danger.is-inverted.is-outlined.is-loading:focus::after, .button.is-danger.is-inverted.is-outlined.is-loading.is-focused::after {
  border-color: transparent transparent #f14668 #f14668 !important;
}
.button.is-danger.is-inverted.is-outlined[disabled], fieldset[disabled] .button.is-danger.is-inverted.is-outlined {
  background-color: transparent;
  border-color: #fff;
  box-shadow: none;
  color: #fff;
}
.button.is-danger.is-light {
  background-color: #feecf0;
  color: #cc0f35;
}
.button.is-danger.is-light:hover, .button.is-danger.is-light.is-hovered {
  background-color: #fde0e6;
  border-color: transparent;
  color: #cc0f35;
}
.button.is-danger.is-light:active, .button.is-danger.is-light.is-active {
  background-color: #fcd4dc;
  border-color: transparent;
  color: #cc0f35;
}
.button.is-small {
  font-size: 0.75rem;
}
.button.is-small:not(.is-rounded) {
  border-radius: 2px;
}
.button.is-normal {
  font-size: 1rem;
}
.button.is-medium {
  font-size: 1.25rem;
}
.button.is-large {
  font-size: 1.5rem;
}
.button[disabled], fieldset[disabled] .button {
  background-color: white;
  border-color: #dbdbdb;
  box-shadow: none;
  opacity: 0.5;
}
.button.is-fullwidth {
  display: flex;
  width: 100%;
}
.button.is-loading {
  color: transparent !important;
  pointer-events: none;
}
.button.is-loading::after {
  position: absolute;
  left: calc(50% - (1em * 0.5));
  top: calc(50% - (1em * 0.5));
  position: absolute !important;
}
.button.is-static {
  background-color: whitesmoke;
  border-color: #dbdbdb;
  color: #7a7a7a;
  box-shadow: none;
  pointer-events: none;
}
.button.is-rounded {
  border-radius: 9999px;
  padding-left: calc(1em + 0.25em);
  padding-right: calc(1em + 0.25em);
}

.buttons {
  align-items: center;
  display: flex;
  flex-wrap: wrap;
  justify-content: flex-start;
}
.buttons .button {
  margin-bottom: 0.5rem;
}
.buttons .button:not(:last-child):not(.is-fullwidth) {
  margin-right: 0.5rem;
}
.buttons:last-child {
  margin-bottom: -0.5rem;
}
.buttons:not(:last-child) {
  margin-bottom: 1rem;
}
.buttons.are-small .button:not(.is-normal):not(.is-medium):not(.is-large) {
  font-size: 0.75rem;
}
.buttons.are-small .button:not(.is-normal):not(.is-medium):not(.is-large):not(.is-rounded) {
  border-radius: 2px;
}
.buttons.are-medium .button:not(.is-small):not(.is-normal):not(.is-large) {
  font-size: 1.25rem;
}
.buttons.are-large .button:not(.is-small):not(.is-normal):not(.is-medium) {
  font-size: 1.5rem;
}
.buttons.has-addons .button:not(:first-child) {
  border-bottom-left-radius: 0;
  border-top-left-radius: 0;
}
.buttons.has-addons .button:not(:last-child) {
  border-bottom-right-radius: 0;
  border-top-right-radius: 0;
  margin-right: -1px;
}
.buttons.has-addons .button:last-child {
  margin-right: 0;
}
.buttons.has-addons .button:hover, .buttons.has-addons .button.is-hovered {
  z-index: 2;
}
.buttons.has-addons .button:focus, .buttons.has-addons .button.is-focused, .buttons.has-addons .button:active, .buttons.has-addons .button.is-active, .buttons.has-addons .button.is-selected {
  z-index: 3;
}
.buttons.has-addons .button:focus:hover, .buttons.has-addons .button.is-focused:hover, .buttons.has-addons .button:active:hover, .buttons.has-addons .button.is-active:hover, .buttons.has-addons .button.is-selected:hover {
  z-index: 4;
}
.buttons.has-addons .button.is-expanded {
  flex-grow: 1;
  flex-shrink: 1;
}
.buttons.is-centered {
  justify-content: center;
}
.buttons.is-centered:not(.has-addons) .button:not(.is-fullwidth) {
  margin-left: 0.25rem;
  margin-right: 0.25rem;
}
.buttons.is-right {
  justify-content: flex-end;
}
.buttons.is-right:not(.has-addons) .button:not(.is-fullwidth) {
  margin-left: 0.25rem;
  margin-right: 0.25rem;
}

.container {
  flex-grow: 1;
  margin: 0 auto;
  position: relative;
  width: auto;
}
.container.is-fluid {
  max-width: none !important;
  padding-left: 32px;
  padding-right: 32px;
  width: 100%;
}
@media screen and (min-width: 1024px) {
  .container {
    max-width: 960px;
  }
}
@media screen and (max-width: 1215px) {
  .container.is-widescreen:not(.is-max-desktop) {
    max-width: 1152px;
  }
}
@media screen and (max-width: 1407px) {
  .container.is-fullhd:not(.is-max-desktop):not(.is-max-widescreen) {
    max-width: 1344px;
  }
}
@media screen and (min-width: 1216px) {
  .container:not(.is-max-desktop) {
    max-width: 1152px;
  }
}
@media screen and (min-width: 1408px) {
  .container:not(.is-max-desktop):not(.is-max-widescreen) {
    max-width: 1344px;
  }
}

.content li + li {
  margin-top: 0.25em;
}
.content p:not(:last-child),
.content dl:not(:last-child),
.content ol:not(:last-child),
.content ul:not(:last-child),
.content blockquote:not(:last-child),
.content pre:not(:last-child),
.content table:not(:last-child) {
  margin-bottom: 1em;
}
.content h1,
.content h2,
.content h3,
.content h4,
.content h5,
.content h6 {
  color: #363636;
  font-weight: 600;
  line-height: 1.125;
}
.content h1 {
  font-size: 2em;
  margin-bottom: 0.5em;
}
.content h1:not(:first-child) {
  margin-top: 1em;
}
.content h2 {
  font-size: 1.75em;
  margin-bottom: 0.5714em;
}
.content h2:not(:first-child) {
  margin-top: 1.1428em;
}
.content h3 {
  font-size: 1.5em;
  margin-bottom: 0.6666em;
}
.content h3:not(:first-child) {
  margin-top: 1.3333em;
}
.content h4 {
  font-size: 1.25em;
  margin-bottom: 0.8em;
}
.content h5 {
  font-size: 1.125em;
  margin-bottom: 0.8888em;
}
.content h6 {
  font-size: 1em;
  margin-bottom: 1em;
}
.content blockquote {
  background-color: whitesmoke;
  border-left: 5px solid #dbdbdb;
  padding: 1.25em 1.5em;
}
.content ol {
  list-style-position: outside;
  margin-left: 2em;
  margin-top: 1em;
}
.content ol:not([type]) {
  list-style-type: decimal;
}
.content ol:not([type]).is-lower-alpha {
  list-style-type: lower-alpha;
}
.content ol:not([type]).is-lower-roman {
  list-style-type: lower-roman;
}
.content ol:not([type]).is-upper-alpha {
  list-style-type: upper-alpha;
}
.content ol:not([type]).is-upper-roman {
  list-style-type: upper-roman;
}
.content ul {
  list-style: disc outside;
  margin-left: 2em;
  margin-top: 1em;
}
.content ul ul {
  list-style-type: circle;
  margin-top: 0.5em;
}
.content ul ul ul {
  list-style-type: square;
}
.content dd {
  margin-left: 2em;
}
.content figure {
  margin-left: 2em;
  margin-right: 2em;
  text-align: center;
}
.content figure:not(:first-child) {
  margin-top: 2em;
}
.content figure:not(:last-child) {
  margin-bottom: 2em;
}
.content figure img {
  display: inline-block;
}
.content figure figcaption {
  font-style: italic;
}
.content pre {
  -webkit-overflow-scrolling: touch;
  overflow-x: auto;
  padding: 1.25em 1.5em;
  white-space: pre;
  word-wrap: normal;
}
.content sup,
.content sub {
  font-size: 75%;
}
.content table {
  width: 100%;
}
.content table td,
.content table th {
  border: 1px solid #dbdbdb;
  border-width: 0 0 1px;
  padding: 0.5em 0.75em;
  vertical-align: top;
}
.content table th {
  color: #363636;
}
.content table th:not([align]) {
  text-align: inherit;
}
.content table thead td,
.content table thead th {
  border-width: 0 0 2px;
  color: #363636;
}
.content table tfoot td,
.content table tfoot th {
  border-width: 2px 0 0;
  color: #363636;
}
.content table tbody tr:last-child td,
.content table tbody tr:last-child th {
  border-bottom-width: 0;
}
.content .tabs li + li {
  margin-top: 0;
}
.content.is-small {
  font-size: 0.75rem;
}
.content.is-normal {
  font-size: 1rem;
}
.content.is-medium {
  font-size: 1.25rem;
}
.content.is-large {
  font-size: 1.5rem;
}

.icon {
  align-items: center;
  display: inline-flex;
  justify-content: center;
  height: 1.5rem;
  width: 1.5rem;
}
.icon.is-small {
  height: 1rem;
  width: 1rem;
}
.icon.is-medium {
  height: 2rem;
  width: 2rem;
}
.icon.is-large {
  height: 3rem;
  width: 3rem;
}

.icon-text {
  align-items: flex-start;
  color: inherit;
  display: inline-flex;
  flex-wrap: wrap;
  line-height: 1.5rem;
  vertical-align: top;
}
.icon-text .icon {
  flex-grow: 0;
  flex-shrink: 0;
}
.icon-text .icon:not(:last-child) {
  margin-right: 0.25em;
}
.icon-text .icon:not(:first-child) {
  margin-left: 0.25em;
}

div.icon-text {
  display: flex;
}

.image {
  display: block;
  position: relative;
}
.image img {
  display: block;
  height: auto;
  width: 100%;
}
.image img.is-rounded {
  border-radius: 9999px;
}
.image.is-fullwidth {
  width: 100%;
}
.image.is-square img,
.image.is-square .has-ratio, .image.is-1by1 img,
.image.is-1by1 .has-ratio, .image.is-5by4 img,
.image.is-5by4 .has-ratio, .image.is-4by3 img,
.image.is-4by3 .has-ratio, .image.is-3by2 img,
.image.is-3by2 .has-ratio, .image.is-5by3 img,
.image.is-5by3 .has-ratio, .image.is-16by9 img,
.image.is-16by9 .has-ratio, .image.is-2by1 img,
.image.is-2by1 .has-ratio, .image.is-3by1 img,
.image.is-3by1 .has-ratio, .image.is-4by5 img,
.image.is-4by5 .has-ratio, .image.is-3by4 img,
.image.is-3by4 .has-ratio, .image.is-2by3 img,
.image.is-2by3 .has-ratio, .image.is-3by5 img,
.image.is-3by5 .has-ratio, .image.is-9by16 img,
.image.is-9by16 .has-ratio, .image.is-1by2 img,
.image.is-1by2 .has-ratio, .image.is-1by3 img,
.image.is-1by3 .has-ratio {
  height: 100%;
  width: 100%;
}
.image.is-square, .image.is-1by1 {
  padding-top: 100%;
}
.image.is-5by4 {
  padding-top: 80%;
}
.image.is-4by3 {
  padding-top: 75%;
}
.image.is-3by2 {
  padding-top: 66.6666%;
}
.image.is-5by3 {
  padding-top: 60%;
}
.image.is-16by9 {
  padding-top: 56.25%;
}
.image.is-2by1 {
  padding-top: 50%;
}
.image.is-3by1 {
  padding-top: 33.3333%;
}
.image.is-4by5 {
  padding-top: 125%;
}
.image.is-3by4 {
  padding-top: 133.3333%;
}
.image.is-2by3 {
  padding-top: 150%;
}
.image.is-3by5 {
  padding-top: 166.6666%;
}
.image.is-9by16 {
  padding-top: 177.7777%;
}
.image.is-1by2 {
  padding-top: 200%;
}
.image.is-1by3 {
  padding-top: 300%;
}
.image.is-16x16 {
  height: 16px;
  width: 16px;
}
.image.is-24x24 {
  height: 24px;
  width: 24px;
}
.image.is-32x32 {
  height: 32px;
  width: 32px;
}
.image.is-48x48 {
  height: 48px;
  width: 48px;
}
.image.is-64x64 {
  height: 64px;
  width: 64px;
}
.image.is-96x96 {
  height: 96px;
  width: 96px;
}
.image.is-128x128 {
  height: 128px;
  width: 128px;
}

.notification {
  background-color: whitesmoke;
  border-radius: 4px;
  position: relative;
  padding: 1.25rem 2.5rem 1.25rem 1.5rem;
}
.notification a:not(.button):not(.dropdown-item) {
  color: currentColor;
  text-decoration: underline;
}
.notification strong {
  color: currentColor;
}
.notification code,
.notification pre {
  background: white;
}
.notification pre code {
  background: transparent;
}
.notification > .delete {
  right: 0.5rem;
  position: absolute;
  top: 0.5rem;
}
.notification .title,
.notification .subtitle,
.notification .content {
  color: currentColor;
}
.notification.is-white {
  background-color: white;
  color: #0a0a0a;
}
.notification.is-black {
  background-color: #0a0a0a;
  color: white;
}
.notification.is-light {
  background-color: whitesmoke;
  color: rgba(0, 0, 0, 0.7);
}
.notification.is-dark {
  background-color: #363636;
  color: #fff;
}
.notification.is-primary {
  background-color: #7957d5;
  color: #fff;
}
.notification.is-primary.is-light {
  background-color: #f2effb;
  color: #552fbc;
}
.notification.is-link {
  background-color: #7957d5;
  color: #fff;
}
.notification.is-link.is-light {
  background-color: #f2effb;
  color: #552fbc;
}
.notification.is-info {
  background-color: #167df0;
  color: #fff;
}
.notification.is-info.is-light {
  background-color: #ecf4fe;
  color: #0d68ce;
}
.notification.is-success {
  background-color: #48c78e;
  color: #fff;
}
.notification.is-success.is-light {
  background-color: #effaf5;
  color: #257953;
}
.notification.is-warning {
  background-color: #ffe08a;
  color: rgba(0, 0, 0, 0.7);
}
.notification.is-warning.is-light {
  background-color: #fffaeb;
  color: #946c00;
}
.notification.is-danger {
  background-color: #f14668;
  color: #fff;
}
.notification.is-danger.is-light {
  background-color: #feecf0;
  color: #cc0f35;
}

.progress, .progress-wrapper.is-not-native {
  -moz-appearance: none;
  -webkit-appearance: none;
  border: none;
  border-radius: 9999px;
  display: block;
  height: 1rem;
  overflow: hidden;
  padding: 0;
  width: 100%;
}
.progress::-webkit-progress-bar, .progress-wrapper.is-not-native::-webkit-progress-bar {
  background-color: #ededed;
}
.progress::-webkit-progress-value, .progress-wrapper.is-not-native::-webkit-progress-value {
  background-color: #4a4a4a;
}
.progress::-moz-progress-bar, .progress-wrapper.is-not-native::-moz-progress-bar {
  background-color: #4a4a4a;
}
.progress::-ms-fill, .progress-wrapper.is-not-native::-ms-fill {
  background-color: #4a4a4a;
  border: none;
}
.progress.is-white::-webkit-progress-value, .is-white.progress-wrapper.is-not-native::-webkit-progress-value {
  background-color: white;
}
.progress.is-white::-moz-progress-bar, .is-white.progress-wrapper.is-not-native::-moz-progress-bar {
  background-color: white;
}
.progress.is-white::-ms-fill, .is-white.progress-wrapper.is-not-native::-ms-fill {
  background-color: white;
}
.progress.is-white:indeterminate, .is-white.progress-wrapper.is-not-native:indeterminate {
  background-image: linear-gradient(to right, white 30%, #ededed 30%);
}
.progress.is-black::-webkit-progress-value, .is-black.progress-wrapper.is-not-native::-webkit-progress-value {
  background-color: #0a0a0a;
}
.progress.is-black::-moz-progress-bar, .is-black.progress-wrapper.is-not-native::-moz-progress-bar {
  background-color: #0a0a0a;
}
.progress.is-black::-ms-fill, .is-black.progress-wrapper.is-not-native::-ms-fill {
  background-color: #0a0a0a;
}
.progress.is-black:indeterminate, .is-black.progress-wrapper.is-not-native:indeterminate {
  background-image: linear-gradient(to right, #0a0a0a 30%, #ededed 30%);
}
.progress.is-light::-webkit-progress-value, .is-light.progress-wrapper.is-not-native::-webkit-progress-value {
  background-color: whitesmoke;
}
.progress.is-light::-moz-progress-bar, .is-light.progress-wrapper.is-not-native::-moz-progress-bar {
  background-color: whitesmoke;
}
.progress.is-light::-ms-fill, .is-light.progress-wrapper.is-not-native::-ms-fill {
  background-color: whitesmoke;
}
.progress.is-light:indeterminate, .is-light.progress-wrapper.is-not-native:indeterminate {
  background-image: linear-gradient(to right, whitesmoke 30%, #ededed 30%);
}
.progress.is-dark::-webkit-progress-value, .is-dark.progress-wrapper.is-not-native::-webkit-progress-value {
  background-color: #363636;
}
.progress.is-dark::-moz-progress-bar, .is-dark.progress-wrapper.is-not-native::-moz-progress-bar {
  background-color: #363636;
}
.progress.is-dark::-ms-fill, .is-dark.progress-wrapper.is-not-native::-ms-fill {
  background-color: #363636;
}
.progress.is-dark:indeterminate, .is-dark.progress-wrapper.is-not-native:indeterminate {
  background-image: linear-gradient(to right, #363636 30%, #ededed 30%);
}
.progress.is-primary::-webkit-progress-value, .is-primary.progress-wrapper.is-not-native::-webkit-progress-value {
  background-color: #7957d5;
}
.progress.is-primary::-moz-progress-bar, .is-primary.progress-wrapper.is-not-native::-moz-progress-bar {
  background-color: #7957d5;
}
.progress.is-primary::-ms-fill, .is-primary.progress-wrapper.is-not-native::-ms-fill {
  background-color: #7957d5;
}
.progress.is-primary:indeterminate, .is-primary.progress-wrapper.is-not-native:indeterminate {
  background-image: linear-gradient(to right, #7957d5 30%, #ededed 30%);
}
.progress.is-link::-webkit-progress-value, .is-link.progress-wrapper.is-not-native::-webkit-progress-value {
  background-color: #7957d5;
}
.progress.is-link::-moz-progress-bar, .is-link.progress-wrapper.is-not-native::-moz-progress-bar {
  background-color: #7957d5;
}
.progress.is-link::-ms-fill, .is-link.progress-wrapper.is-not-native::-ms-fill {
  background-color: #7957d5;
}
.progress.is-link:indeterminate, .is-link.progress-wrapper.is-not-native:indeterminate {
  background-image: linear-gradient(to right, #7957d5 30%, #ededed 30%);
}
.progress.is-info::-webkit-progress-value, .is-info.progress-wrapper.is-not-native::-webkit-progress-value {
  background-color: #167df0;
}
.progress.is-info::-moz-progress-bar, .is-info.progress-wrapper.is-not-native::-moz-progress-bar {
  background-color: #167df0;
}
.progress.is-info::-ms-fill, .is-info.progress-wrapper.is-not-native::-ms-fill {
  background-color: #167df0;
}
.progress.is-info:indeterminate, .is-info.progress-wrapper.is-not-native:indeterminate {
  background-image: linear-gradient(to right, #167df0 30%, #ededed 30%);
}
.progress.is-success::-webkit-progress-value, .is-success.progress-wrapper.is-not-native::-webkit-progress-value {
  background-color: #48c78e;
}
.progress.is-success::-moz-progress-bar, .is-success.progress-wrapper.is-not-native::-moz-progress-bar {
  background-color: #48c78e;
}
.progress.is-success::-ms-fill, .is-success.progress-wrapper.is-not-native::-ms-fill {
  background-color: #48c78e;
}
.progress.is-success:indeterminate, .is-success.progress-wrapper.is-not-native:indeterminate {
  background-image: linear-gradient(to right, #48c78e 30%, #ededed 30%);
}
.progress.is-warning::-webkit-progress-value, .is-warning.progress-wrapper.is-not-native::-webkit-progress-value {
  background-color: #ffe08a;
}
.progress.is-warning::-moz-progress-bar, .is-warning.progress-wrapper.is-not-native::-moz-progress-bar {
  background-color: #ffe08a;
}
.progress.is-warning::-ms-fill, .is-warning.progress-wrapper.is-not-native::-ms-fill {
  background-color: #ffe08a;
}
.progress.is-warning:indeterminate, .is-warning.progress-wrapper.is-not-native:indeterminate {
  background-image: linear-gradient(to right, #ffe08a 30%, #ededed 30%);
}
.progress.is-danger::-webkit-progress-value, .is-danger.progress-wrapper.is-not-native::-webkit-progress-value {
  background-color: #f14668;
}
.progress.is-danger::-moz-progress-bar, .is-danger.progress-wrapper.is-not-native::-moz-progress-bar {
  background-color: #f14668;
}
.progress.is-danger::-ms-fill, .is-danger.progress-wrapper.is-not-native::-ms-fill {
  background-color: #f14668;
}
.progress.is-danger:indeterminate, .is-danger.progress-wrapper.is-not-native:indeterminate {
  background-image: linear-gradient(to right, #f14668 30%, #ededed 30%);
}
.progress:indeterminate, .progress-wrapper.is-not-native:indeterminate {
  animation-duration: 1.5s;
  animation-iteration-count: infinite;
  animation-name: moveIndeterminate;
  animation-timing-function: linear;
  background-color: #ededed;
  background-image: linear-gradient(to right, #4a4a4a 30%, #ededed 30%);
  background-position: top left;
  background-repeat: no-repeat;
  background-size: 150% 150%;
}
.progress:indeterminate::-webkit-progress-bar, .progress-wrapper.is-not-native:indeterminate::-webkit-progress-bar {
  background-color: transparent;
}
.progress:indeterminate::-moz-progress-bar, .progress-wrapper.is-not-native:indeterminate::-moz-progress-bar {
  background-color: transparent;
}
.progress:indeterminate::-ms-fill, .progress-wrapper.is-not-native:indeterminate::-ms-fill {
  animation-name: none;
}
.progress.is-small, .is-small.progress-wrapper.is-not-native {
  height: 0.75rem;
}
.progress.is-medium, .is-medium.progress-wrapper.is-not-native {
  height: 1.25rem;
}
.progress.is-large, .is-large.progress-wrapper.is-not-native {
  height: 1.5rem;
}

@keyframes moveIndeterminate {
  from {
    background-position: 200% 0;
  }
  to {
    background-position: -200% 0;
  }
}
.table {
  background-color: white;
  color: #363636;
}
.table td,
.table th {
  border: 1px solid #dbdbdb;
  border-width: 0 0 1px;
  padding: 0.5em 0.75em;
  vertical-align: top;
}
.table td.is-white,
.table th.is-white {
  background-color: white;
  border-color: white;
  color: #0a0a0a;
}
.table td.is-black,
.table th.is-black {
  background-color: #0a0a0a;
  border-color: #0a0a0a;
  color: white;
}
.table td.is-light,
.table th.is-light {
  background-color: whitesmoke;
  border-color: whitesmoke;
  color: rgba(0, 0, 0, 0.7);
}
.table td.is-dark,
.table th.is-dark {
  background-color: #363636;
  border-color: #363636;
  color: #fff;
}
.table td.is-primary,
.table th.is-primary {
  background-color: #7957d5;
  border-color: #7957d5;
  color: #fff;
}
.table td.is-link,
.table th.is-link {
  background-color: #7957d5;
  border-color: #7957d5;
  color: #fff;
}
.table td.is-info,
.table th.is-info {
  background-color: #167df0;
  border-color: #167df0;
  color: #fff;
}
.table td.is-success,
.table th.is-success {
  background-color: #48c78e;
  border-color: #48c78e;
  color: #fff;
}
.table td.is-warning,
.table th.is-warning {
  background-color: #ffe08a;
  border-color: #ffe08a;
  color: rgba(0, 0, 0, 0.7);
}
.table td.is-danger,
.table th.is-danger {
  background-color: #f14668;
  border-color: #f14668;
  color: #fff;
}
.table td.is-narrow,
.table th.is-narrow {
  white-space: nowrap;
  width: 1%;
}
.table td.is-selected,
.table th.is-selected {
  background-color: #7957d5;
  color: #fff;
}
.table td.is-selected a,
.table td.is-selected strong,
.table th.is-selected a,
.table th.is-selected strong {
  color: currentColor;
}
.table td.is-vcentered,
.table th.is-vcentered {
  vertical-align: middle;
}
.table th {
  color: #363636;
}
.table th:not([align]) {
  text-align: inherit;
}
.table tr.is-selected {
  background-color: #7957d5;
  color: #fff;
}
.table tr.is-selected a,
.table tr.is-selected strong {
  color: currentColor;
}
.table tr.is-selected td,
.table tr.is-selected th {
  border-color: #fff;
  color: currentColor;
}
.table thead {
  background-color: transparent;
}
.table thead td,
.table thead th {
  border-width: 0 0 2px;
  color: #363636;
}
.table tfoot {
  background-color: transparent;
}
.table tfoot td,
.table tfoot th {
  border-width: 2px 0 0;
  color: #363636;
}
.table tbody {
  background-color: transparent;
}
.table tbody tr:last-child td,
.table tbody tr:last-child th {
  border-bottom-width: 0;
}
.table.is-bordered td,
.table.is-bordered th {
  border-width: 1px;
}
.table.is-bordered tr:last-child td,
.table.is-bordered tr:last-child th {
  border-bottom-width: 1px;
}
.table.is-fullwidth {
  width: 100%;
}
.table.is-hoverable tbody tr:not(.is-selected):hover {
  background-color: #fafafa;
}
.table.is-hoverable.is-striped tbody tr:not(.is-selected):hover {
  background-color: #fafafa;
}
.table.is-hoverable.is-striped tbody tr:not(.is-selected):hover:nth-child(even) {
  background-color: whitesmoke;
}
.table.is-narrow td,
.table.is-narrow th {
  padding: 0.25em 0.5em;
}
.table.is-striped tbody tr:not(.is-selected):nth-child(even) {
  background-color: #fafafa;
}

.table-container {
  -webkit-overflow-scrolling: touch;
  overflow: auto;
  overflow-y: hidden;
  max-width: 100%;
}

.tags {
  align-items: center;
  display: flex;
  flex-wrap: wrap;
  justify-content: flex-start;
}
.tags .tag {
  margin-bottom: 0.5rem;
}
.tags .tag:not(:last-child) {
  margin-right: 0.5rem;
}
.tags:last-child {
  margin-bottom: -0.5rem;
}
.tags:not(:last-child) {
  margin-bottom: 1rem;
}
.tags.are-medium .tag:not(.is-normal):not(.is-large) {
  font-size: 1rem;
}
.tags.are-large .tag:not(.is-normal):not(.is-medium) {
  font-size: 1.25rem;
}
.tags.is-centered {
  justify-content: center;
}
.tags.is-centered .tag {
  margin-right: 0.25rem;
  margin-left: 0.25rem;
}
.tags.is-right {
  justify-content: flex-end;
}
.tags.is-right .tag:not(:first-child) {
  margin-left: 0.5rem;
}
.tags.is-right .tag:not(:last-child) {
  margin-right: 0;
}
.tags.has-addons .tag {
  margin-right: 0;
}
.tags.has-addons .tag:not(:first-child) {
  margin-left: 0;
  border-top-left-radius: 0;
  border-bottom-left-radius: 0;
}
.tags.has-addons .tag:not(:last-child) {
  border-top-right-radius: 0;
  border-bottom-right-radius: 0;
}

.tag:not(body) {
  align-items: center;
  background-color: whitesmoke;
  border-radius: 4px;
  color: #4a4a4a;
  display: inline-flex;
  font-size: 0.75rem;
  height: 2em;
  justify-content: center;
  line-height: 1.5;
  padding-left: 0.75em;
  padding-right: 0.75em;
  white-space: nowrap;
}
.tag:not(body) .delete {
  margin-left: 0.25rem;
  margin-right: -0.375rem;
}
.tag:not(body).is-white {
  background-color: white;
  color: #0a0a0a;
}
.tag:not(body).is-black {
  background-color: #0a0a0a;
  color: white;
}
.tag:not(body).is-light {
  background-color: whitesmoke;
  color: rgba(0, 0, 0, 0.7);
}
.tag:not(body).is-dark {
  background-color: #363636;
  color: #fff;
}
.tag:not(body).is-primary {
  background-color: #7957d5;
  color: #fff;
}
.tag:not(body).is-primary.is-light {
  background-color: #f2effb;
  color: #552fbc;
}
.tag:not(body).is-link {
  background-color: #7957d5;
  color: #fff;
}
.tag:not(body).is-link.is-light {
  background-color: #f2effb;
  color: #552fbc;
}
.tag:not(body).is-info {
  background-color: #167df0;
  color: #fff;
}
.tag:not(body).is-info.is-light {
  background-color: #ecf4fe;
  color: #0d68ce;
}
.tag:not(body).is-success {
  background-color: #48c78e;
  color: #fff;
}
.tag:not(body).is-success.is-light {
  background-color: #effaf5;
  color: #257953;
}
.tag:not(body).is-warning {
  background-color: #ffe08a;
  color: rgba(0, 0, 0, 0.7);
}
.tag:not(body).is-warning.is-light {
  background-color: #fffaeb;
  color: #946c00;
}
.tag:not(body).is-danger {
  background-color: #f14668;
  color: #fff;
}
.tag:not(body).is-danger.is-light {
  background-color: #feecf0;
  color: #cc0f35;
}
.tag:not(body).is-normal {
  font-size: 0.75rem;
}
.tag:not(body).is-medium {
  font-size: 1rem;
}
.tag:not(body).is-large {
  font-size: 1.25rem;
}
.tag:not(body) .icon:first-child:not(:last-child) {
  margin-left: -0.375em;
  margin-right: 0.1875em;
}
.tag:not(body) .icon:last-child:not(:first-child) {
  margin-left: 0.1875em;
  margin-right: -0.375em;
}
.tag:not(body) .icon:first-child:last-child {
  margin-left: -0.375em;
  margin-right: -0.375em;
}
.tag:not(body).is-delete {
  margin-left: 1px;
  padding: 0;
  position: relative;
  width: 2em;
}
.tag:not(body).is-delete::before, .tag:not(body).is-delete::after {
  background-color: currentColor;
  content: "";
  display: block;
  left: 50%;
  position: absolute;
  top: 50%;
  transform: translateX(-50%) translateY(-50%) rotate(45deg);
  transform-origin: center center;
}
.tag:not(body).is-delete::before {
  height: 1px;
  width: 50%;
}
.tag:not(body).is-delete::after {
  height: 50%;
  width: 1px;
}
.tag:not(body).is-delete:hover, .tag:not(body).is-delete:focus {
  background-color: #e8e8e8;
}
.tag:not(body).is-delete:active {
  background-color: #dbdbdb;
}
.tag:not(body).is-rounded {
  border-radius: 9999px;
}

a.tag:hover {
  text-decoration: underline;
}

.title,
.subtitle {
  word-break: break-word;
}
.title em,
.title span,
.subtitle em,
.subtitle span {
  font-weight: inherit;
}
.title sub,
.subtitle sub {
  font-size: 0.75em;
}
.title sup,
.subtitle sup {
  font-size: 0.75em;
}
.title .tag,
.subtitle .tag {
  vertical-align: middle;
}

.title {
  color: #363636;
  font-size: 2rem;
  font-weight: 600;
  line-height: 1.125;
}
.title strong {
  color: inherit;
  font-weight: inherit;
}
.title:not(.is-spaced) + .subtitle {
  margin-top: -1.25rem;
}
.title.is-1 {
  font-size: 3rem;
}
.title.is-2 {
  font-size: 2.5rem;
}
.title.is-3 {
  font-size: 2rem;
}
.title.is-4 {
  font-size: 1.5rem;
}
.title.is-5 {
  font-size: 1.25rem;
}
.title.is-6 {
  font-size: 1rem;
}
.title.is-7 {
  font-size: 0.75rem;
}

.subtitle {
  color: #4a4a4a;
  font-size: 1.25rem;
  font-weight: 400;
  line-height: 1.25;
}
.subtitle strong {
  color: #363636;
  font-weight: 600;
}
.subtitle:not(.is-spaced) + .title {
  margin-top: -1.25rem;
}
.subtitle.is-1 {
  font-size: 3rem;
}
.subtitle.is-2 {
  font-size: 2.5rem;
}
.subtitle.is-3 {
  font-size: 2rem;
}
.subtitle.is-4 {
  font-size: 1.5rem;
}
.subtitle.is-5 {
  font-size: 1.25rem;
}
.subtitle.is-6 {
  font-size: 1rem;
}
.subtitle.is-7 {
  font-size: 0.75rem;
}

.heading {
  display: block;
  font-size: 11px;
  letter-spacing: 1px;
  margin-bottom: 5px;
  text-transform: uppercase;
}

.number {
  align-items: center;
  background-color: whitesmoke;
  border-radius: 9999px;
  display: inline-flex;
  font-size: 1.25rem;
  height: 2em;
  justify-content: center;
  margin-right: 1.5rem;
  min-width: 2.5em;
  padding: 0.25rem 0.5rem;
  text-align: center;
  vertical-align: top;
}

/* Bulma Form */
.select select, .taginput .taginput-container.is-focusable, .textarea, .input {
  background-color: white;
  border-color: #dbdbdb;
  border-radius: 4px;
  color: #363636;
}
.select select::-moz-placeholder, .taginput .taginput-container.is-focusable::-moz-placeholder, .textarea::-moz-placeholder, .input::-moz-placeholder {
  color: rgba(54, 54, 54, 0.3);
}
.select select::-webkit-input-placeholder, .taginput .taginput-container.is-focusable::-webkit-input-placeholder, .textarea::-webkit-input-placeholder, .input::-webkit-input-placeholder {
  color: rgba(54, 54, 54, 0.3);
}
.select select:-moz-placeholder, .taginput .taginput-container.is-focusable:-moz-placeholder, .textarea:-moz-placeholder, .input:-moz-placeholder {
  color: rgba(54, 54, 54, 0.3);
}
.select select:-ms-input-placeholder, .taginput .taginput-container.is-focusable:-ms-input-placeholder, .textarea:-ms-input-placeholder, .input:-ms-input-placeholder {
  color: rgba(54, 54, 54, 0.3);
}
.select select:hover, .taginput .taginput-container.is-focusable:hover, .textarea:hover, .input:hover, .select select.is-hovered, .taginput .is-hovered.taginput-container.is-focusable, .is-hovered.textarea, .is-hovered.input {
  border-color: #b5b5b5;
}
.select select:focus, .taginput .taginput-container.is-focusable:focus, .textarea:focus, .input:focus, .select select.is-focused, .taginput .is-focused.taginput-container.is-focusable, .is-focused.textarea, .is-focused.input, .select select:active, .taginput .taginput-container.is-focusable:active, .textarea:active, .input:active, .select select.is-active, .taginput .is-active.taginput-container.is-focusable, .is-active.textarea, .is-active.input {
  border-color: #7957d5;
  box-shadow: 0 0 0 0.125em rgba(121, 87, 213, 0.25);
}
.select select[disabled], .taginput [disabled].taginput-container.is-focusable, [disabled].textarea, [disabled].input, fieldset[disabled] .select select, .select fieldset[disabled] select, fieldset[disabled] .taginput .taginput-container.is-focusable, .taginput fieldset[disabled] .taginput-container.is-focusable, fieldset[disabled] .textarea, fieldset[disabled] .input {
  background-color: whitesmoke;
  border-color: whitesmoke;
  box-shadow: none;
  color: #7a7a7a;
}
.select select[disabled]::-moz-placeholder, .taginput [disabled].taginput-container.is-focusable::-moz-placeholder, [disabled].textarea::-moz-placeholder, [disabled].input::-moz-placeholder, fieldset[disabled] .select select::-moz-placeholder, .select fieldset[disabled] select::-moz-placeholder, fieldset[disabled] .taginput .taginput-container.is-focusable::-moz-placeholder, .taginput fieldset[disabled] .taginput-container.is-focusable::-moz-placeholder, fieldset[disabled] .textarea::-moz-placeholder, fieldset[disabled] .input::-moz-placeholder {
  color: rgba(122, 122, 122, 0.3);
}
.select select[disabled]::-webkit-input-placeholder, .taginput [disabled].taginput-container.is-focusable::-webkit-input-placeholder, [disabled].textarea::-webkit-input-placeholder, [disabled].input::-webkit-input-placeholder, fieldset[disabled] .select select::-webkit-input-placeholder, .select fieldset[disabled] select::-webkit-input-placeholder, fieldset[disabled] .taginput .taginput-container.is-focusable::-webkit-input-placeholder, .taginput fieldset[disabled] .taginput-container.is-focusable::-webkit-input-placeholder, fieldset[disabled] .textarea::-webkit-input-placeholder, fieldset[disabled] .input::-webkit-input-placeholder {
  color: rgba(122, 122, 122, 0.3);
}
.select select[disabled]:-moz-placeholder, .taginput [disabled].taginput-container.is-focusable:-moz-placeholder, [disabled].textarea:-moz-placeholder, [disabled].input:-moz-placeholder, fieldset[disabled] .select select:-moz-placeholder, .select fieldset[disabled] select:-moz-placeholder, fieldset[disabled] .taginput .taginput-container.is-focusable:-moz-placeholder, .taginput fieldset[disabled] .taginput-container.is-focusable:-moz-placeholder, fieldset[disabled] .textarea:-moz-placeholder, fieldset[disabled] .input:-moz-placeholder {
  color: rgba(122, 122, 122, 0.3);
}
.select select[disabled]:-ms-input-placeholder, .taginput [disabled].taginput-container.is-focusable:-ms-input-placeholder, [disabled].textarea:-ms-input-placeholder, [disabled].input:-ms-input-placeholder, fieldset[disabled] .select select:-ms-input-placeholder, .select fieldset[disabled] select:-ms-input-placeholder, fieldset[disabled] .taginput .taginput-container.is-focusable:-ms-input-placeholder, .taginput fieldset[disabled] .taginput-container.is-focusable:-ms-input-placeholder, fieldset[disabled] .textarea:-ms-input-placeholder, fieldset[disabled] .input:-ms-input-placeholder {
  color: rgba(122, 122, 122, 0.3);
}

.taginput .taginput-container.is-focusable, .textarea, .input {
  box-shadow: inset 0 0.0625em 0.125em rgba(10, 10, 10, 0.05);
  max-width: 100%;
  width: 100%;
}
.taginput [readonly].taginput-container.is-focusable, [readonly].textarea, [readonly].input {
  box-shadow: none;
}
.taginput .is-white.taginput-container.is-focusable, .is-white.textarea, .is-white.input {
  border-color: white;
}
.taginput .is-white.taginput-container.is-focusable:focus, .is-white.textarea:focus, .is-white.input:focus, .taginput .is-white.is-focused.taginput-container.is-focusable, .is-white.is-focused.textarea, .is-white.is-focused.input, .taginput .is-white.taginput-container.is-focusable:active, .is-white.textarea:active, .is-white.input:active, .taginput .is-white.is-active.taginput-container.is-focusable, .is-white.is-active.textarea, .is-white.is-active.input {
  box-shadow: 0 0 0 0.125em rgba(255, 255, 255, 0.25);
}
.taginput .is-black.taginput-container.is-focusable, .is-black.textarea, .is-black.input {
  border-color: #0a0a0a;
}
.taginput .is-black.taginput-container.is-focusable:focus, .is-black.textarea:focus, .is-black.input:focus, .taginput .is-black.is-focused.taginput-container.is-focusable, .is-black.is-focused.textarea, .is-black.is-focused.input, .taginput .is-black.taginput-container.is-focusable:active, .is-black.textarea:active, .is-black.input:active, .taginput .is-black.is-active.taginput-container.is-focusable, .is-black.is-active.textarea, .is-black.is-active.input {
  box-shadow: 0 0 0 0.125em rgba(10, 10, 10, 0.25);
}
.taginput .is-light.taginput-container.is-focusable, .is-light.textarea, .is-light.input {
  border-color: whitesmoke;
}
.taginput .is-light.taginput-container.is-focusable:focus, .is-light.textarea:focus, .is-light.input:focus, .taginput .is-light.is-focused.taginput-container.is-focusable, .is-light.is-focused.textarea, .is-light.is-focused.input, .taginput .is-light.taginput-container.is-focusable:active, .is-light.textarea:active, .is-light.input:active, .taginput .is-light.is-active.taginput-container.is-focusable, .is-light.is-active.textarea, .is-light.is-active.input {
  box-shadow: 0 0 0 0.125em rgba(245, 245, 245, 0.25);
}
.taginput .is-dark.taginput-container.is-focusable, .is-dark.textarea, .is-dark.input {
  border-color: #363636;
}
.taginput .is-dark.taginput-container.is-focusable:focus, .is-dark.textarea:focus, .is-dark.input:focus, .taginput .is-dark.is-focused.taginput-container.is-focusable, .is-dark.is-focused.textarea, .is-dark.is-focused.input, .taginput .is-dark.taginput-container.is-focusable:active, .is-dark.textarea:active, .is-dark.input:active, .taginput .is-dark.is-active.taginput-container.is-focusable, .is-dark.is-active.textarea, .is-dark.is-active.input {
  box-shadow: 0 0 0 0.125em rgba(54, 54, 54, 0.25);
}
.taginput .is-primary.taginput-container.is-focusable, .is-primary.textarea, .is-primary.input {
  border-color: #7957d5;
}
.taginput .is-primary.taginput-container.is-focusable:focus, .is-primary.textarea:focus, .is-primary.input:focus, .taginput .is-primary.is-focused.taginput-container.is-focusable, .is-primary.is-focused.textarea, .is-primary.is-focused.input, .taginput .is-primary.taginput-container.is-focusable:active, .is-primary.textarea:active, .is-primary.input:active, .taginput .is-primary.is-active.taginput-container.is-focusable, .is-primary.is-active.textarea, .is-primary.is-active.input {
  box-shadow: 0 0 0 0.125em rgba(121, 87, 213, 0.25);
}
.taginput .is-link.taginput-container.is-focusable, .is-link.textarea, .is-link.input {
  border-color: #7957d5;
}
.taginput .is-link.taginput-container.is-focusable:focus, .is-link.textarea:focus, .is-link.input:focus, .taginput .is-link.is-focused.taginput-container.is-focusable, .is-link.is-focused.textarea, .is-link.is-focused.input, .taginput .is-link.taginput-container.is-focusable:active, .is-link.textarea:active, .is-link.input:active, .taginput .is-link.is-active.taginput-container.is-focusable, .is-link.is-active.textarea, .is-link.is-active.input {
  box-shadow: 0 0 0 0.125em rgba(121, 87, 213, 0.25);
}
.taginput .is-info.taginput-container.is-focusable, .is-info.textarea, .is-info.input {
  border-color: #167df0;
}
.taginput .is-info.taginput-container.is-focusable:focus, .is-info.textarea:focus, .is-info.input:focus, .taginput .is-info.is-focused.taginput-container.is-focusable, .is-info.is-focused.textarea, .is-info.is-focused.input, .taginput .is-info.taginput-container.is-focusable:active, .is-info.textarea:active, .is-info.input:active, .taginput .is-info.is-active.taginput-container.is-focusable, .is-info.is-active.textarea, .is-info.is-active.input {
  box-shadow: 0 0 0 0.125em rgba(22, 125, 240, 0.25);
}
.taginput .is-success.taginput-container.is-focusable, .is-success.textarea, .is-success.input {
  border-color: #48c78e;
}
.taginput .is-success.taginput-container.is-focusable:focus, .is-success.textarea:focus, .is-success.input:focus, .taginput .is-success.is-focused.taginput-container.is-focusable, .is-success.is-focused.textarea, .is-success.is-focused.input, .taginput .is-success.taginput-container.is-focusable:active, .is-success.textarea:active, .is-success.input:active, .taginput .is-success.is-active.taginput-container.is-focusable, .is-success.is-active.textarea, .is-success.is-active.input {
  box-shadow: 0 0 0 0.125em rgba(72, 199, 142, 0.25);
}
.taginput .is-warning.taginput-container.is-focusable, .is-warning.textarea, .is-warning.input {
  border-color: #ffe08a;
}
.taginput .is-warning.taginput-container.is-focusable:focus, .is-warning.textarea:focus, .is-warning.input:focus, .taginput .is-warning.is-focused.taginput-container.is-focusable, .is-warning.is-focused.textarea, .is-warning.is-focused.input, .taginput .is-warning.taginput-container.is-focusable:active, .is-warning.textarea:active, .is-warning.input:active, .taginput .is-warning.is-active.taginput-container.is-focusable, .is-warning.is-active.textarea, .is-warning.is-active.input {
  box-shadow: 0 0 0 0.125em rgba(255, 224, 138, 0.25);
}
.taginput .is-danger.taginput-container.is-focusable, .is-danger.textarea, .is-danger.input {
  border-color: #f14668;
}
.taginput .is-danger.taginput-container.is-focusable:focus, .is-danger.textarea:focus, .is-danger.input:focus, .taginput .is-danger.is-focused.taginput-container.is-focusable, .is-danger.is-focused.textarea, .is-danger.is-focused.input, .taginput .is-danger.taginput-container.is-focusable:active, .is-danger.textarea:active, .is-danger.input:active, .taginput .is-danger.is-active.taginput-container.is-focusable, .is-danger.is-active.textarea, .is-danger.is-active.input {
  box-shadow: 0 0 0 0.125em rgba(241, 70, 104, 0.25);
}
.taginput .is-small.taginput-container.is-focusable, .is-small.textarea, .is-small.input {
  border-radius: 2px;
  font-size: 0.75rem;
}
.taginput .is-medium.taginput-container.is-focusable, .is-medium.textarea, .is-medium.input {
  font-size: 1.25rem;
}
.taginput .is-large.taginput-container.is-focusable, .is-large.textarea, .is-large.input {
  font-size: 1.5rem;
}
.taginput .is-fullwidth.taginput-container.is-focusable, .is-fullwidth.textarea, .is-fullwidth.input {
  display: block;
  width: 100%;
}
.taginput .is-inline.taginput-container.is-focusable, .is-inline.textarea, .is-inline.input {
  display: inline;
  width: auto;
}

.input.is-rounded {
  border-radius: 9999px;
  padding-left: calc(calc(0.75em - 1px) + 0.375em);
  padding-right: calc(calc(0.75em - 1px) + 0.375em);
}
.input.is-static {
  background-color: transparent;
  border-color: transparent;
  box-shadow: none;
  padding-left: 0;
  padding-right: 0;
}

.textarea {
  display: block;
  max-width: 100%;
  min-width: 100%;
  padding: calc(0.75em - 1px);
  resize: vertical;
}
.textarea:not([rows]) {
  max-height: 40em;
  min-height: 8em;
}
.textarea[rows] {
  height: initial;
}
.textarea.has-fixed-size {
  resize: none;
}

.radio, .checkbox {
  cursor: pointer;
  display: inline-block;
  line-height: 1.25;
  position: relative;
}
.radio input, .checkbox input {
  cursor: pointer;
}
.radio:hover, .checkbox:hover {
  color: #363636;
}
[disabled].radio, [disabled].checkbox, fieldset[disabled] .radio, fieldset[disabled] .checkbox,
.radio input[disabled],
.checkbox input[disabled] {
  color: #7a7a7a;
  cursor: not-allowed;
}

.radio + .radio {
  margin-left: 0.5em;
}

.select {
  display: inline-block;
  max-width: 100%;
  position: relative;
  vertical-align: top;
}
.select:not(.is-multiple) {
  height: 2.5em;
}
.select:not(.is-multiple):not(.is-loading)::after {
  border-color: #7957d5;
  right: 1.125em;
  z-index: 4;
}
.select.is-rounded select {
  border-radius: 9999px;
  padding-left: 1em;
}
.select select {
  cursor: pointer;
  display: block;
  font-size: 1em;
  max-width: 100%;
  outline: none;
}
.select select::-ms-expand {
  display: none;
}
.select select[disabled]:hover, fieldset[disabled] .select select:hover {
  border-color: whitesmoke;
}
.select select:not([multiple]) {
  padding-right: 2.5em;
}
.select select[multiple] {
  height: auto;
  padding: 0;
}
.select select[multiple] option {
  padding: 0.5em 1em;
}
.select:not(.is-multiple):not(.is-loading):hover::after {
  border-color: #363636;
}
.select.is-white:not(:hover)::after {
  border-color: white;
}
.select.is-white select {
  border-color: white;
}
.select.is-white select:hover, .select.is-white select.is-hovered {
  border-color: #f2f2f2;
}
.select.is-white select:focus, .select.is-white select.is-focused, .select.is-white select:active, .select.is-white select.is-active {
  box-shadow: 0 0 0 0.125em rgba(255, 255, 255, 0.25);
}
.select.is-black:not(:hover)::after {
  border-color: #0a0a0a;
}
.select.is-black select {
  border-color: #0a0a0a;
}
.select.is-black select:hover, .select.is-black select.is-hovered {
  border-color: black;
}
.select.is-black select:focus, .select.is-black select.is-focused, .select.is-black select:active, .select.is-black select.is-active {
  box-shadow: 0 0 0 0.125em rgba(10, 10, 10, 0.25);
}
.select.is-light:not(:hover)::after {
  border-color: whitesmoke;
}
.select.is-light select {
  border-color: whitesmoke;
}
.select.is-light select:hover, .select.is-light select.is-hovered {
  border-color: #e8e8e8;
}
.select.is-light select:focus, .select.is-light select.is-focused, .select.is-light select:active, .select.is-light select.is-active {
  box-shadow: 0 0 0 0.125em rgba(245, 245, 245, 0.25);
}
.select.is-dark:not(:hover)::after {
  border-color: #363636;
}
.select.is-dark select {
  border-color: #363636;
}
.select.is-dark select:hover, .select.is-dark select.is-hovered {
  border-color: #292929;
}
.select.is-dark select:focus, .select.is-dark select.is-focused, .select.is-dark select:active, .select.is-dark select.is-active {
  box-shadow: 0 0 0 0.125em rgba(54, 54, 54, 0.25);
}
.select.is-primary:not(:hover)::after {
  border-color: #7957d5;
}
.select.is-primary select {
  border-color: #7957d5;
}
.select.is-primary select:hover, .select.is-primary select.is-hovered {
  border-color: #6943d0;
}
.select.is-primary select:focus, .select.is-primary select.is-focused, .select.is-primary select:active, .select.is-primary select.is-active {
  box-shadow: 0 0 0 0.125em rgba(121, 87, 213, 0.25);
}
.select.is-link:not(:hover)::after {
  border-color: #7957d5;
}
.select.is-link select {
  border-color: #7957d5;
}
.select.is-link select:hover, .select.is-link select.is-hovered {
  border-color: #6943d0;
}
.select.is-link select:focus, .select.is-link select.is-focused, .select.is-link select:active, .select.is-link select.is-active {
  box-shadow: 0 0 0 0.125em rgba(121, 87, 213, 0.25);
}
.select.is-info:not(:hover)::after {
  border-color: #167df0;
}
.select.is-info select {
  border-color: #167df0;
}
.select.is-info select:hover, .select.is-info select.is-hovered {
  border-color: #0e71de;
}
.select.is-info select:focus, .select.is-info select.is-focused, .select.is-info select:active, .select.is-info select.is-active {
  box-shadow: 0 0 0 0.125em rgba(22, 125, 240, 0.25);
}
.select.is-success:not(:hover)::after {
  border-color: #48c78e;
}
.select.is-success select {
  border-color: #48c78e;
}
.select.is-success select:hover, .select.is-success select.is-hovered {
  border-color: #3abb81;
}
.select.is-success select:focus, .select.is-success select.is-focused, .select.is-success select:active, .select.is-success select.is-active {
  box-shadow: 0 0 0 0.125em rgba(72, 199, 142, 0.25);
}
.select.is-warning:not(:hover)::after {
  border-color: #ffe08a;
}
.select.is-warning select {
  border-color: #ffe08a;
}
.select.is-warning select:hover, .select.is-warning select.is-hovered {
  border-color: #ffd970;
}
.select.is-warning select:focus, .select.is-warning select.is-focused, .select.is-warning select:active, .select.is-warning select.is-active {
  box-shadow: 0 0 0 0.125em rgba(255, 224, 138, 0.25);
}
.select.is-danger:not(:hover)::after {
  border-color: #f14668;
}
.select.is-danger select {
  border-color: #f14668;
}
.select.is-danger select:hover, .select.is-danger select.is-hovered {
  border-color: #ef2e55;
}
.select.is-danger select:focus, .select.is-danger select.is-focused, .select.is-danger select:active, .select.is-danger select.is-active {
  box-shadow: 0 0 0 0.125em rgba(241, 70, 104, 0.25);
}
.select.is-small {
  border-radius: 2px;
  font-size: 0.75rem;
}
.select.is-medium {
  font-size: 1.25rem;
}
.select.is-large {
  font-size: 1.5rem;
}
.select.is-disabled::after {
  border-color: #7a7a7a;
}
.select.is-fullwidth {
  width: 100%;
}
.select.is-fullwidth select {
  width: 100%;
}
.select.is-loading::after {
  margin-top: 0;
  position: absolute;
  right: 0.625em;
  top: 0.625em;
  transform: none;
}
.select.is-loading.is-small:after {
  font-size: 0.75rem;
}
.select.is-loading.is-medium:after {
  font-size: 1.25rem;
}
.select.is-loading.is-large:after {
  font-size: 1.5rem;
}

.file {
  align-items: stretch;
  display: flex;
  justify-content: flex-start;
  position: relative;
}
.file.is-white .file-cta {
  background-color: white;
  border-color: transparent;
  color: #0a0a0a;
}
.file.is-white:hover .file-cta, .file.is-white.is-hovered .file-cta {
  background-color: #f9f9f9;
  border-color: transparent;
  color: #0a0a0a;
}
.file.is-white:focus .file-cta, .file.is-white.is-focused .file-cta {
  border-color: transparent;
  box-shadow: 0 0 0.5em rgba(255, 255, 255, 0.25);
  color: #0a0a0a;
}
.file.is-white:active .file-cta, .file.is-white.is-active .file-cta {
  background-color: #f2f2f2;
  border-color: transparent;
  color: #0a0a0a;
}
.file.is-black .file-cta {
  background-color: #0a0a0a;
  border-color: transparent;
  color: white;
}
.file.is-black:hover .file-cta, .file.is-black.is-hovered .file-cta {
  background-color: #040404;
  border-color: transparent;
  color: white;
}
.file.is-black:focus .file-cta, .file.is-black.is-focused .file-cta {
  border-color: transparent;
  box-shadow: 0 0 0.5em rgba(10, 10, 10, 0.25);
  color: white;
}
.file.is-black:active .file-cta, .file.is-black.is-active .file-cta {
  background-color: black;
  border-color: transparent;
  color: white;
}
.file.is-light .file-cta {
  background-color: whitesmoke;
  border-color: transparent;
  color: rgba(0, 0, 0, 0.7);
}
.file.is-light:hover .file-cta, .file.is-light.is-hovered .file-cta {
  background-color: #eeeeee;
  border-color: transparent;
  color: rgba(0, 0, 0, 0.7);
}
.file.is-light:focus .file-cta, .file.is-light.is-focused .file-cta {
  border-color: transparent;
  box-shadow: 0 0 0.5em rgba(245, 245, 245, 0.25);
  color: rgba(0, 0, 0, 0.7);
}
.file.is-light:active .file-cta, .file.is-light.is-active .file-cta {
  background-color: #e8e8e8;
  border-color: transparent;
  color: rgba(0, 0, 0, 0.7);
}
.file.is-dark .file-cta {
  background-color: #363636;
  border-color: transparent;
  color: #fff;
}
.file.is-dark:hover .file-cta, .file.is-dark.is-hovered .file-cta {
  background-color: #2f2f2f;
  border-color: transparent;
  color: #fff;
}
.file.is-dark:focus .file-cta, .file.is-dark.is-focused .file-cta {
  border-color: transparent;
  box-shadow: 0 0 0.5em rgba(54, 54, 54, 0.25);
  color: #fff;
}
.file.is-dark:active .file-cta, .file.is-dark.is-active .file-cta {
  background-color: #292929;
  border-color: transparent;
  color: #fff;
}
.file.is-primary .file-cta {
  background-color: #7957d5;
  border-color: transparent;
  color: #fff;
}
.file.is-primary:hover .file-cta, .file.is-primary.is-hovered .file-cta {
  background-color: #714dd2;
  border-color: transparent;
  color: #fff;
}
.file.is-primary:focus .file-cta, .file.is-primary.is-focused .file-cta {
  border-color: transparent;
  box-shadow: 0 0 0.5em rgba(121, 87, 213, 0.25);
  color: #fff;
}
.file.is-primary:active .file-cta, .file.is-primary.is-active .file-cta {
  background-color: #6943d0;
  border-color: transparent;
  color: #fff;
}
.file.is-link .file-cta {
  background-color: #7957d5;
  border-color: transparent;
  color: #fff;
}
.file.is-link:hover .file-cta, .file.is-link.is-hovered .file-cta {
  background-color: #714dd2;
  border-color: transparent;
  color: #fff;
}
.file.is-link:focus .file-cta, .file.is-link.is-focused .file-cta {
  border-color: transparent;
  box-shadow: 0 0 0.5em rgba(121, 87, 213, 0.25);
  color: #fff;
}
.file.is-link:active .file-cta, .file.is-link.is-active .file-cta {
  background-color: #6943d0;
  border-color: transparent;
  color: #fff;
}
.file.is-info .file-cta {
  background-color: #167df0;
  border-color: transparent;
  color: #fff;
}
.file.is-info:hover .file-cta, .file.is-info.is-hovered .file-cta {
  background-color: #0f77ea;
  border-color: transparent;
  color: #fff;
}
.file.is-info:focus .file-cta, .file.is-info.is-focused .file-cta {
  border-color: transparent;
  box-shadow: 0 0 0.5em rgba(22, 125, 240, 0.25);
  color: #fff;
}
.file.is-info:active .file-cta, .file.is-info.is-active .file-cta {
  background-color: #0e71de;
  border-color: transparent;
  color: #fff;
}
.file.is-success .file-cta {
  background-color: #48c78e;
  border-color: transparent;
  color: #fff;
}
.file.is-success:hover .file-cta, .file.is-success.is-hovered .file-cta {
  background-color: #3ec487;
  border-color: transparent;
  color: #fff;
}
.file.is-success:focus .file-cta, .file.is-success.is-focused .file-cta {
  border-color: transparent;
  box-shadow: 0 0 0.5em rgba(72, 199, 142, 0.25);
  color: #fff;
}
.file.is-success:active .file-cta, .file.is-success.is-active .file-cta {
  background-color: #3abb81;
  border-color: transparent;
  color: #fff;
}
.file.is-warning .file-cta {
  background-color: #ffe08a;
  border-color: transparent;
  color: rgba(0, 0, 0, 0.7);
}
.file.is-warning:hover .file-cta, .file.is-warning.is-hovered .file-cta {
  background-color: #ffdc7d;
  border-color: transparent;
  color: rgba(0, 0, 0, 0.7);
}
.file.is-warning:focus .file-cta, .file.is-warning.is-focused .file-cta {
  border-color: transparent;
  box-shadow: 0 0 0.5em rgba(255, 224, 138, 0.25);
  color: rgba(0, 0, 0, 0.7);
}
.file.is-warning:active .file-cta, .file.is-warning.is-active .file-cta {
  background-color: #ffd970;
  border-color: transparent;
  color: rgba(0, 0, 0, 0.7);
}
.file.is-danger .file-cta {
  background-color: #f14668;
  border-color: transparent;
  color: #fff;
}
.file.is-danger:hover .file-cta, .file.is-danger.is-hovered .file-cta {
  background-color: #f03a5f;
  border-color: transparent;
  color: #fff;
}
.file.is-danger:focus .file-cta, .file.is-danger.is-focused .file-cta {
  border-color: transparent;
  box-shadow: 0 0 0.5em rgba(241, 70, 104, 0.25);
  color: #fff;
}
.file.is-danger:active .file-cta, .file.is-danger.is-active .file-cta {
  background-color: #ef2e55;
  border-color: transparent;
  color: #fff;
}
.file.is-small {
  font-size: 0.75rem;
}
.file.is-normal {
  font-size: 1rem;
}
.file.is-medium {
  font-size: 1.25rem;
}
.file.is-medium .file-icon .fa {
  font-size: 21px;
}
.file.is-large {
  font-size: 1.5rem;
}
.file.is-large .file-icon .fa {
  font-size: 28px;
}
.file.has-name .file-cta {
  border-bottom-right-radius: 0;
  border-top-right-radius: 0;
}
.file.has-name .file-name {
  border-bottom-left-radius: 0;
  border-top-left-radius: 0;
}
.file.has-name.is-empty .file-cta {
  border-radius: 4px;
}
.file.has-name.is-empty .file-name {
  display: none;
}
.file.is-boxed .file-label {
  flex-direction: column;
}
.file.is-boxed .file-cta {
  flex-direction: column;
  height: auto;
  padding: 1em 3em;
}
.file.is-boxed .file-name {
  border-width: 0 1px 1px;
}
.file.is-boxed .file-icon {
  height: 1.5em;
  width: 1.5em;
}
.file.is-boxed .file-icon .fa {
  font-size: 21px;
}
.file.is-boxed.is-small .file-icon .fa {
  font-size: 14px;
}
.file.is-boxed.is-medium .file-icon .fa {
  font-size: 28px;
}
.file.is-boxed.is-large .file-icon .fa {
  font-size: 35px;
}
.file.is-boxed.has-name .file-cta {
  border-radius: 4px 4px 0 0;
}
.file.is-boxed.has-name .file-name {
  border-radius: 0 0 4px 4px;
  border-width: 0 1px 1px;
}
.file.is-centered {
  justify-content: center;
}
.file.is-fullwidth .file-label {
  width: 100%;
}
.file.is-fullwidth .file-name {
  flex-grow: 1;
  max-width: none;
}
.file.is-right {
  justify-content: flex-end;
}
.file.is-right .file-cta {
  border-radius: 0 4px 4px 0;
}
.file.is-right .file-name {
  border-radius: 4px 0 0 4px;
  border-width: 1px 0 1px 1px;
  order: -1;
}

.file-label {
  align-items: stretch;
  display: flex;
  cursor: pointer;
  justify-content: flex-start;
  overflow: hidden;
  position: relative;
}
.file-label:hover .file-cta {
  background-color: #eeeeee;
  color: #363636;
}
.file-label:hover .file-name {
  border-color: #d5d5d5;
}
.file-label:active .file-cta {
  background-color: #e8e8e8;
  color: #363636;
}
.file-label:active .file-name {
  border-color: #cfcfcf;
}

.file-input {
  height: 100%;
  left: 0;
  opacity: 0;
  outline: none;
  position: absolute;
  top: 0;
  width: 100%;
}

.file-cta,
.file-name {
  border-color: #dbdbdb;
  border-radius: 4px;
  font-size: 1em;
  padding-left: 1em;
  padding-right: 1em;
  white-space: nowrap;
}

.file-cta {
  background-color: whitesmoke;
  color: #4a4a4a;
}

.file-name {
  border-color: #dbdbdb;
  border-style: solid;
  border-width: 1px 1px 1px 0;
  display: block;
  max-width: 16em;
  overflow: hidden;
  text-align: inherit;
  text-overflow: ellipsis;
}

.file-icon {
  align-items: center;
  display: flex;
  height: 1em;
  justify-content: center;
  margin-right: 0.5em;
  width: 1em;
}
.file-icon .fa {
  font-size: 14px;
}

.label {
  color: #363636;
  display: block;
  font-size: 1rem;
  font-weight: 600;
}
.label:not(:last-child) {
  margin-bottom: 0.5em;
}
.label.is-small {
  font-size: 0.75rem;
}
.label.is-medium {
  font-size: 1.25rem;
}
.label.is-large {
  font-size: 1.5rem;
}

.help {
  display: block;
  font-size: 0.75rem;
  margin-top: 0.25rem;
}
.help.is-white {
  color: white;
}
.help.is-black {
  color: #0a0a0a;
}
.help.is-light {
  color: whitesmoke;
}
.help.is-dark {
  color: #363636;
}
.help.is-primary {
  color: #7957d5;
}
.help.is-link {
  color: #7957d5;
}
.help.is-info {
  color: #167df0;
}
.help.is-success {
  color: #48c78e;
}
.help.is-warning {
  color: #ffe08a;
}
.help.is-danger {
  color: #f14668;
}

.field:not(:last-child) {
  margin-bottom: 0.75rem;
}
.field.has-addons {
  display: flex;
  justify-content: flex-start;
}
.field.has-addons .control:not(:last-child) {
  margin-right: -1px;
}
.field.has-addons .control:not(:first-child):not(:last-child) .button,
.field.has-addons .control:not(:first-child):not(:last-child) .input,
.field.has-addons .control:not(:first-child):not(:last-child) .select select {
  border-radius: 0;
}
.field.has-addons .control:first-child:not(:only-child) .button,
.field.has-addons .control:first-child:not(:only-child) .input,
.field.has-addons .control:first-child:not(:only-child) .select select {
  border-bottom-right-radius: 0;
  border-top-right-radius: 0;
}
.field.has-addons .control:last-child:not(:only-child) .button,
.field.has-addons .control:last-child:not(:only-child) .input,
.field.has-addons .control:last-child:not(:only-child) .select select {
  border-bottom-left-radius: 0;
  border-top-left-radius: 0;
}
.field.has-addons .control .button:not([disabled]):hover, .field.has-addons .control .button:not([disabled]).is-hovered,
.field.has-addons .control .input:not([disabled]):hover,
.field.has-addons .control .input:not([disabled]).is-hovered,
.field.has-addons .control .select select:not([disabled]):hover,
.field.has-addons .control .select select:not([disabled]).is-hovered {
  z-index: 2;
}
.field.has-addons .control .button:not([disabled]):focus, .field.has-addons .control .button:not([disabled]).is-focused, .field.has-addons .control .button:not([disabled]):active, .field.has-addons .control .button:not([disabled]).is-active,
.field.has-addons .control .input:not([disabled]):focus,
.field.has-addons .control .input:not([disabled]).is-focused,
.field.has-addons .control .input:not([disabled]):active,
.field.has-addons .control .input:not([disabled]).is-active,
.field.has-addons .control .select select:not([disabled]):focus,
.field.has-addons .control .select select:not([disabled]).is-focused,
.field.has-addons .control .select select:not([disabled]):active,
.field.has-addons .control .select select:not([disabled]).is-active {
  z-index: 3;
}
.field.has-addons .control .button:not([disabled]):focus:hover, .field.has-addons .control .button:not([disabled]).is-focused:hover, .field.has-addons .control .button:not([disabled]):active:hover, .field.has-addons .control .button:not([disabled]).is-active:hover,
.field.has-addons .control .input:not([disabled]):focus:hover,
.field.has-addons .control .input:not([disabled]).is-focused:hover,
.field.has-addons .control .input:not([disabled]):active:hover,
.field.has-addons .control .input:not([disabled]).is-active:hover,
.field.has-addons .control .select select:not([disabled]):focus:hover,
.field.has-addons .control .select select:not([disabled]).is-focused:hover,
.field.has-addons .control .select select:not([disabled]):active:hover,
.field.has-addons .control .select select:not([disabled]).is-active:hover {
  z-index: 4;
}
.field.has-addons .control.is-expanded {
  flex-grow: 1;
  flex-shrink: 1;
}
.field.has-addons.has-addons-centered {
  justify-content: center;
}
.field.has-addons.has-addons-right {
  justify-content: flex-end;
}
.field.has-addons.has-addons-fullwidth .control {
  flex-grow: 1;
  flex-shrink: 0;
}
.field.is-grouped {
  display: flex;
  justify-content: flex-start;
}
.field.is-grouped > .control {
  flex-shrink: 0;
}
.field.is-grouped > .control:not(:last-child) {
  margin-bottom: 0;
  margin-right: 0.75rem;
}
.field.is-grouped > .control.is-expanded {
  flex-grow: 1;
  flex-shrink: 1;
}
.field.is-grouped.is-grouped-centered {
  justify-content: center;
}
.field.is-grouped.is-grouped-right {
  justify-content: flex-end;
}
.field.is-grouped.is-grouped-multiline {
  flex-wrap: wrap;
}
.field.is-grouped.is-grouped-multiline > .control:last-child, .field.is-grouped.is-grouped-multiline > .control:not(:last-child) {
  margin-bottom: 0.75rem;
}
.field.is-grouped.is-grouped-multiline:last-child {
  margin-bottom: -0.75rem;
}
.field.is-grouped.is-grouped-multiline:not(:last-child) {
  margin-bottom: 0;
}
@media screen and (min-width: 769px), print {
  .field.is-horizontal {
    display: flex;
  }
}

.field-label .label {
  font-size: inherit;
}
@media screen and (max-width: 768px) {
  .field-label {
    margin-bottom: 0.5rem;
  }
}
@media screen and (min-width: 769px), print {
  .field-label {
    flex-basis: 0;
    flex-grow: 1;
    flex-shrink: 0;
    margin-right: 1.5rem;
    text-align: right;
  }
  .field-label.is-small {
    font-size: 0.75rem;
    padding-top: 0.375em;
  }
  .field-label.is-normal {
    padding-top: 0.375em;
  }
  .field-label.is-medium {
    font-size: 1.25rem;
    padding-top: 0.375em;
  }
  .field-label.is-large {
    font-size: 1.5rem;
    padding-top: 0.375em;
  }
}

.field-body .field .field {
  margin-bottom: 0;
}
@media screen and (min-width: 769px), print {
  .field-body {
    display: flex;
    flex-basis: 0;
    flex-grow: 5;
    flex-shrink: 1;
  }
  .field-body .field {
    margin-bottom: 0;
  }
  .field-body > .field {
    flex-shrink: 1;
  }
  .field-body > .field:not(.is-narrow) {
    flex-grow: 1;
  }
  .field-body > .field:not(:last-child) {
    margin-right: 0.75rem;
  }
}

.control {
  box-sizing: border-box;
  clear: both;
  font-size: 1rem;
  position: relative;
  text-align: inherit;
}
.control.has-icons-left .input:focus ~ .icon,
.control.has-icons-left .select:focus ~ .icon, .control.has-icons-right .input:focus ~ .icon,
.control.has-icons-right .select:focus ~ .icon {
  color: #4a4a4a;
}
.control.has-icons-left .input.is-small ~ .icon,
.control.has-icons-left .select.is-small ~ .icon, .control.has-icons-right .input.is-small ~ .icon,
.control.has-icons-right .select.is-small ~ .icon {
  font-size: 0.75rem;
}
.control.has-icons-left .input.is-medium ~ .icon,
.control.has-icons-left .select.is-medium ~ .icon, .control.has-icons-right .input.is-medium ~ .icon,
.control.has-icons-right .select.is-medium ~ .icon {
  font-size: 1.25rem;
}
.control.has-icons-left .input.is-large ~ .icon,
.control.has-icons-left .select.is-large ~ .icon, .control.has-icons-right .input.is-large ~ .icon,
.control.has-icons-right .select.is-large ~ .icon {
  font-size: 1.5rem;
}
.control.has-icons-left .icon, .control.has-icons-right .icon {
  color: #dbdbdb;
  height: 2.5em;
  pointer-events: none;
  position: absolute;
  top: 0;
  width: 2.5em;
  z-index: 4;
}
.control.has-icons-left .input,
.control.has-icons-left .select select {
  padding-left: 2.5em;
}
.control.has-icons-left .icon.is-left {
  left: 0;
}
.control.has-icons-right .input,
.control.has-icons-right .select select {
  padding-right: 2.5em;
}
.control.has-icons-right .icon.is-right {
  right: 0;
}
.control.is-loading::after {
  position: absolute !important;
  right: 0.625em;
  top: 0.625em;
  z-index: 4;
}
.control.is-loading.is-small:after {
  font-size: 0.75rem;
}
.control.is-loading.is-medium:after {
  font-size: 1.25rem;
}
.control.is-loading.is-large:after {
  font-size: 1.5rem;
}

/* Bulma Components */
.breadcrumb {
  font-size: 1rem;
  white-space: nowrap;
}
.breadcrumb a {
  align-items: center;
  color: #7957d5;
  display: flex;
  justify-content: center;
  padding: 0 0.75em;
}
.breadcrumb a:hover {
  color: #363636;
}
.breadcrumb li {
  align-items: center;
  display: flex;
}
.breadcrumb li:first-child a {
  padding-left: 0;
}
.breadcrumb li.is-active a {
  color: #363636;
  cursor: default;
  pointer-events: none;
}
.breadcrumb li + li::before {
  color: #b5b5b5;
  content: "/";
}
.breadcrumb ul,
.breadcrumb ol {
  align-items: flex-start;
  display: flex;
  flex-wrap: wrap;
  justify-content: flex-start;
}
.breadcrumb .icon:first-child {
  margin-right: 0.5em;
}
.breadcrumb .icon:last-child {
  margin-left: 0.5em;
}
.breadcrumb.is-centered ol,
.breadcrumb.is-centered ul {
  justify-content: center;
}
.breadcrumb.is-right ol,
.breadcrumb.is-right ul {
  justify-content: flex-end;
}
.breadcrumb.is-small {
  font-size: 0.75rem;
}
.breadcrumb.is-medium {
  font-size: 1.25rem;
}
.breadcrumb.is-large {
  font-size: 1.5rem;
}
.breadcrumb.has-arrow-separator li + li::before {
  content: "→";
}
.breadcrumb.has-bullet-separator li + li::before {
  content: "•";
}
.breadcrumb.has-dot-separator li + li::before {
  content: "·";
}
.breadcrumb.has-succeeds-separator li + li::before {
  content: "≻";
}

.card {
  background-color: white;
  border-radius: 0.25rem;
  box-shadow: 0 0.5em 1em -0.125em rgba(10, 10, 10, 0.1), 0 0px 0 1px rgba(10, 10, 10, 0.02);
  color: #4a4a4a;
  max-width: 100%;
  position: relative;
}

.card-footer:first-child, .card-content:first-child, .card-header:first-child {
  border-top-left-radius: 0.25rem;
  border-top-right-radius: 0.25rem;
}
.card-footer:last-child, .card-content:last-child, .card-header:last-child {
  border-bottom-left-radius: 0.25rem;
  border-bottom-right-radius: 0.25rem;
}

.card-header {
  background-color: transparent;
  align-items: stretch;
  box-shadow: 0 0.125em 0.25em rgba(10, 10, 10, 0.1);
  display: flex;
}

.card-header-title {
  align-items: center;
  color: #363636;
  display: flex;
  flex-grow: 1;
  font-weight: 700;
  padding: 0.75rem 1rem;
}
.card-header-title.is-centered {
  justify-content: center;
}

.card-header-icon {
  -moz-appearance: none;
  -webkit-appearance: none;
  appearance: none;
  background: none;
  border: none;
  color: currentColor;
  font-family: inherit;
  font-size: 1em;
  margin: 0;
  padding: 0;
  align-items: center;
  cursor: pointer;
  display: flex;
  justify-content: center;
  padding: 0.75rem 1rem;
}

.card-image {
  display: block;
  position: relative;
}
.card-image:first-child img {
  border-top-left-radius: 0.25rem;
  border-top-right-radius: 0.25rem;
}
.card-image:last-child img {
  border-bottom-left-radius: 0.25rem;
  border-bottom-right-radius: 0.25rem;
}

.card-content {
  background-color: transparent;
  padding: 1.5rem;
}

.card-footer {
  background-color: transparent;
  border-top: 1px solid #ededed;
  align-items: stretch;
  display: flex;
}

.card-footer-item {
  align-items: center;
  display: flex;
  flex-basis: 0;
  flex-grow: 1;
  flex-shrink: 0;
  justify-content: center;
  padding: 0.75rem;
}
.card-footer-item:not(:last-child) {
  border-right: 1px solid #ededed;
}

.card .media:not(:last-child) {
  margin-bottom: 1.5rem;
}

.dropdown {
  display: inline-flex;
  position: relative;
  vertical-align: top;
}
.dropdown.is-active .dropdown-menu, .dropdown.is-hoverable:hover .dropdown-menu {
  display: block;
}
.dropdown.is-right .dropdown-menu {
  left: auto;
  right: 0;
}
.dropdown.is-up .dropdown-menu {
  bottom: 100%;
  padding-bottom: 4px;
  padding-top: initial;
  top: auto;
}

.dropdown-menu {
  display: none;
  left: 0;
  min-width: 12rem;
  padding-top: 4px;
  position: absolute;
  top: 100%;
  z-index: 20;
}

.dropdown-content {
  background-color: white;
  border-radius: 4px;
  box-shadow: 0 0.5em 1em -0.125em rgba(10, 10, 10, 0.1), 0 0px 0 1px rgba(10, 10, 10, 0.02);
  padding-bottom: 0.5rem;
  padding-top: 0.5rem;
}

.dropdown-item, .dropdown .dropdown-menu .has-link a {
  color: #4a4a4a;
  display: block;
  font-size: 0.875rem;
  line-height: 1.5;
  padding: 0.375rem 1rem;
  position: relative;
}

a.dropdown-item, .dropdown .dropdown-menu .has-link a,
button.dropdown-item {
  padding-right: 3rem;
  text-align: inherit;
  white-space: nowrap;
  width: 100%;
}
a.dropdown-item:hover, .dropdown .dropdown-menu .has-link a:hover,
button.dropdown-item:hover {
  background-color: whitesmoke;
  color: #0a0a0a;
}
a.dropdown-item.is-active, .dropdown .dropdown-menu .has-link a.is-active,
button.dropdown-item.is-active {
  background-color: #7957d5;
  color: #fff;
}

.dropdown-divider {
  background-color: #ededed;
  border: none;
  display: block;
  height: 1px;
  margin: 0.5rem 0;
}

.level {
  align-items: center;
  justify-content: space-between;
}
.level code {
  border-radius: 4px;
}
.level img {
  display: inline-block;
  vertical-align: top;
}
.level.is-mobile {
  display: flex;
}
.level.is-mobile .level-left,
.level.is-mobile .level-right {
  display: flex;
}
.level.is-mobile .level-left + .level-right {
  margin-top: 0;
}
.level.is-mobile .level-item:not(:last-child) {
  margin-bottom: 0;
  margin-right: 0.75rem;
}
.level.is-mobile .level-item:not(.is-narrow) {
  flex-grow: 1;
}
@media screen and (min-width: 769px), print {
  .level {
    display: flex;
  }
  .level > .level-item:not(.is-narrow) {
    flex-grow: 1;
  }
}

.level-item {
  align-items: center;
  display: flex;
  flex-basis: auto;
  flex-grow: 0;
  flex-shrink: 0;
  justify-content: center;
}
.level-item .title,
.level-item .subtitle {
  margin-bottom: 0;
}
@media screen and (max-width: 768px) {
  .level-item:not(:last-child) {
    margin-bottom: 0.75rem;
  }
}

.level-left,
.level-right {
  flex-basis: auto;
  flex-grow: 0;
  flex-shrink: 0;
}
.level-left .level-item.is-flexible,
.level-right .level-item.is-flexible {
  flex-grow: 1;
}
@media screen and (min-width: 769px), print {
  .level-left .level-item:not(:last-child),
.level-right .level-item:not(:last-child) {
    margin-right: 0.75rem;
  }
}

.level-left {
  align-items: center;
  justify-content: flex-start;
}
@media screen and (max-width: 768px) {
  .level-left + .level-right {
    margin-top: 1.5rem;
  }
}
@media screen and (min-width: 769px), print {
  .level-left {
    display: flex;
  }
}

.level-right {
  align-items: center;
  justify-content: flex-end;
}
@media screen and (min-width: 769px), print {
  .level-right {
    display: flex;
  }
}

.media {
  align-items: flex-start;
  display: flex;
  text-align: inherit;
}
.media .content:not(:last-child) {
  margin-bottom: 0.75rem;
}
.media .media {
  border-top: 1px solid rgba(219, 219, 219, 0.5);
  display: flex;
  padding-top: 0.75rem;
}
.media .media .content:not(:last-child),
.media .media .control:not(:last-child) {
  margin-bottom: 0.5rem;
}
.media .media .media {
  padding-top: 0.5rem;
}
.media .media .media + .media {
  margin-top: 0.5rem;
}
.media + .media {
  border-top: 1px solid rgba(219, 219, 219, 0.5);
  margin-top: 1rem;
  padding-top: 1rem;
}
.media.is-large + .media {
  margin-top: 1.5rem;
  padding-top: 1.5rem;
}

.media-left,
.media-right {
  flex-basis: auto;
  flex-grow: 0;
  flex-shrink: 0;
}

.media-left {
  margin-right: 1rem;
}

.media-right {
  margin-left: 1rem;
}

.media-content {
  flex-basis: auto;
  flex-grow: 1;
  flex-shrink: 1;
  text-align: inherit;
}

@media screen and (max-width: 768px) {
  .media-content {
    overflow-x: auto;
  }
}
.menu {
  font-size: 1rem;
}
.menu.is-small {
  font-size: 0.75rem;
}
.menu.is-medium {
  font-size: 1.25rem;
}
.menu.is-large {
  font-size: 1.5rem;
}

.menu-list {
  line-height: 1.25;
}
.menu-list a {
  border-radius: 2px;
  color: #4a4a4a;
  display: block;
  padding: 0.5em 0.75em;
}
.menu-list a:hover {
  background-color: whitesmoke;
  color: #363636;
}
.menu-list a.is-active {
  background-color: #7957d5;
  color: #fff;
}
.menu-list li ul {
  border-left: 1px solid #dbdbdb;
  margin: 0.75em;
  padding-left: 0.75em;
}

.menu-label {
  color: #7a7a7a;
  font-size: 0.75em;
  letter-spacing: 0.1em;
  text-transform: uppercase;
}
.menu-label:not(:first-child) {
  margin-top: 1em;
}
.menu-label:not(:last-child) {
  margin-bottom: 1em;
}

.message {
  background-color: whitesmoke;
  border-radius: 4px;
  font-size: 1rem;
}
.message strong {
  color: currentColor;
}
.message a:not(.button):not(.tag):not(.dropdown-item) {
  color: currentColor;
  text-decoration: underline;
}
.message.is-small {
  font-size: 0.75rem;
}
.message.is-medium {
  font-size: 1.25rem;
}
.message.is-large {
  font-size: 1.5rem;
}
.message.is-white {
  background-color: white;
}
.message.is-white .message-header {
  background-color: white;
  color: #0a0a0a;
}
.message.is-white .message-body {
  border-color: white;
}
.message.is-black {
  background-color: #fafafa;
}
.message.is-black .message-header {
  background-color: #0a0a0a;
  color: white;
}
.message.is-black .message-body {
  border-color: #0a0a0a;
}
.message.is-light {
  background-color: #fafafa;
}
.message.is-light .message-header {
  background-color: whitesmoke;
  color: rgba(0, 0, 0, 0.7);
}
.message.is-light .message-body {
  border-color: whitesmoke;
}
.message.is-dark {
  background-color: #fafafa;
}
.message.is-dark .message-header {
  background-color: #363636;
  color: #fff;
}
.message.is-dark .message-body {
  border-color: #363636;
}
.message.is-primary {
  background-color: #f2effb;
}
.message.is-primary .message-header {
  background-color: #7957d5;
  color: #fff;
}
.message.is-primary .message-body {
  border-color: #7957d5;
  color: #552fbc;
}
.message.is-link {
  background-color: #f2effb;
}
.message.is-link .message-header {
  background-color: #7957d5;
  color: #fff;
}
.message.is-link .message-body {
  border-color: #7957d5;
  color: #552fbc;
}
.message.is-info {
  background-color: #ecf4fe;
}
.message.is-info .message-header {
  background-color: #167df0;
  color: #fff;
}
.message.is-info .message-body {
  border-color: #167df0;
  color: #0d68ce;
}
.message.is-success {
  background-color: #effaf5;
}
.message.is-success .message-header {
  background-color: #48c78e;
  color: #fff;
}
.message.is-success .message-body {
  border-color: #48c78e;
  color: #257953;
}
.message.is-warning {
  background-color: #fffaeb;
}
.message.is-warning .message-header {
  background-color: #ffe08a;
  color: rgba(0, 0, 0, 0.7);
}
.message.is-warning .message-body {
  border-color: #ffe08a;
  color: #946c00;
}
.message.is-danger {
  background-color: #feecf0;
}
.message.is-danger .message-header {
  background-color: #f14668;
  color: #fff;
}
.message.is-danger .message-body {
  border-color: #f14668;
  color: #cc0f35;
}

.message-header {
  align-items: center;
  background-color: #4a4a4a;
  border-radius: 4px 4px 0 0;
  color: #fff;
  display: flex;
  font-weight: 700;
  justify-content: space-between;
  line-height: 1.25;
  padding: 0.75em 1em;
  position: relative;
}
.message-header .delete {
  flex-grow: 0;
  flex-shrink: 0;
  margin-left: 0.75em;
}
.message-header + .message-body {
  border-width: 0;
  border-top-left-radius: 0;
  border-top-right-radius: 0;
}

.message-body {
  border-color: #dbdbdb;
  border-radius: 4px;
  border-style: solid;
  border-width: 0 0 0 4px;
  color: #4a4a4a;
  padding: 1.25em 1.5em;
}
.message-body code,
.message-body pre {
  background-color: white;
}
.message-body pre code {
  background-color: transparent;
}

.modal {
  align-items: center;
  display: none;
  flex-direction: column;
  justify-content: center;
  overflow: hidden;
  position: fixed;
  z-index: 40;
}
.modal.is-active {
  display: flex;
}

.modal-background {
  background-color: rgba(10, 10, 10, 0.86);
}

.modal-content,
.modal-card {
  margin: 0 20px;
  max-height: calc(100vh - 160px);
  overflow: auto;
  position: relative;
  width: 100%;
}
@media screen and (min-width: 769px) {
  .modal-content,
.modal-card {
    margin: 0 auto;
    max-height: calc(100vh - 40px);
    width: 640px;
  }
}

.modal-close {
  background: none;
  height: 40px;
  position: fixed;
  right: 20px;
  top: 20px;
  width: 40px;
}

.modal-card {
  display: flex;
  flex-direction: column;
  max-height: calc(100vh - 40px);
  overflow: hidden;
  -ms-overflow-y: visible;
}

.modal-card-head,
.modal-card-foot {
  align-items: center;
  background-color: whitesmoke;
  display: flex;
  flex-shrink: 0;
  justify-content: flex-start;
  padding: 20px;
  position: relative;
}

.modal-card-head {
  border-bottom: 1px solid #dbdbdb;
  border-top-left-radius: 6px;
  border-top-right-radius: 6px;
}

.modal-card-title {
  color: #363636;
  flex-grow: 1;
  flex-shrink: 0;
  font-size: 1.5rem;
  line-height: 1;
}

.modal-card-foot {
  border-bottom-left-radius: 6px;
  border-bottom-right-radius: 6px;
  border-top: 1px solid #dbdbdb;
}
.modal-card-foot .button:not(:last-child) {
  margin-right: 0.5em;
}

.modal-card-body {
  -webkit-overflow-scrolling: touch;
  background-color: white;
  flex-grow: 1;
  flex-shrink: 1;
  overflow: auto;
  padding: 20px;
}

.navbar {
  background-color: white;
  min-height: 3.25rem;
  position: relative;
  z-index: 30;
}
.navbar.is-white {
  background-color: white;
  color: #0a0a0a;
}
.navbar.is-white .navbar-brand > .navbar-item,
.navbar.is-white .navbar-brand .navbar-link {
  color: #0a0a0a;
}
.navbar.is-white .navbar-brand > a.navbar-item:focus, .navbar.is-white .navbar-brand > a.navbar-item:hover, .navbar.is-white .navbar-brand > a.navbar-item.is-active,
.navbar.is-white .navbar-brand .navbar-link:focus,
.navbar.is-white .navbar-brand .navbar-link:hover,
.navbar.is-white .navbar-brand .navbar-link.is-active {
  background-color: #f2f2f2;
  color: #0a0a0a;
}
.navbar.is-white .navbar-brand .navbar-link::after {
  border-color: #0a0a0a;
}
.navbar.is-white .navbar-burger {
  color: #0a0a0a;
}
@media screen and (min-width: 1024px) {
  .navbar.is-white .navbar-start > .navbar-item,
.navbar.is-white .navbar-start .navbar-link,
.navbar.is-white .navbar-end > .navbar-item,
.navbar.is-white .navbar-end .navbar-link {
    color: #0a0a0a;
  }
  .navbar.is-white .navbar-start > a.navbar-item:focus, .navbar.is-white .navbar-start > a.navbar-item:hover, .navbar.is-white .navbar-start > a.navbar-item.is-active,
.navbar.is-white .navbar-start .navbar-link:focus,
.navbar.is-white .navbar-start .navbar-link:hover,
.navbar.is-white .navbar-start .navbar-link.is-active,
.navbar.is-white .navbar-end > a.navbar-item:focus,
.navbar.is-white .navbar-end > a.navbar-item:hover,
.navbar.is-white .navbar-end > a.navbar-item.is-active,
.navbar.is-white .navbar-end .navbar-link:focus,
.navbar.is-white .navbar-end .navbar-link:hover,
.navbar.is-white .navbar-end .navbar-link.is-active {
    background-color: #f2f2f2;
    color: #0a0a0a;
  }
  .navbar.is-white .navbar-start .navbar-link::after,
.navbar.is-white .navbar-end .navbar-link::after {
    border-color: #0a0a0a;
  }
  .navbar.is-white .navbar-item.has-dropdown:focus .navbar-link,
.navbar.is-white .navbar-item.has-dropdown:hover .navbar-link,
.navbar.is-white .navbar-item.has-dropdown.is-active .navbar-link {
    background-color: #f2f2f2;
    color: #0a0a0a;
  }
  .navbar.is-white .navbar-dropdown a.navbar-item.is-active {
    background-color: white;
    color: #0a0a0a;
  }
}
.navbar.is-black {
  background-color: #0a0a0a;
  color: white;
}
.navbar.is-black .navbar-brand > .navbar-item,
.navbar.is-black .navbar-brand .navbar-link {
  color: white;
}
.navbar.is-black .navbar-brand > a.navbar-item:focus, .navbar.is-black .navbar-brand > a.navbar-item:hover, .navbar.is-black .navbar-brand > a.navbar-item.is-active,
.navbar.is-black .navbar-brand .navbar-link:focus,
.navbar.is-black .navbar-brand .navbar-link:hover,
.navbar.is-black .navbar-brand .navbar-link.is-active {
  background-color: black;
  color: white;
}
.navbar.is-black .navbar-brand .navbar-link::after {
  border-color: white;
}
.navbar.is-black .navbar-burger {
  color: white;
}
@media screen and (min-width: 1024px) {
  .navbar.is-black .navbar-start > .navbar-item,
.navbar.is-black .navbar-start .navbar-link,
.navbar.is-black .navbar-end > .navbar-item,
.navbar.is-black .navbar-end .navbar-link {
    color: white;
  }
  .navbar.is-black .navbar-start > a.navbar-item:focus, .navbar.is-black .navbar-start > a.navbar-item:hover, .navbar.is-black .navbar-start > a.navbar-item.is-active,
.navbar.is-black .navbar-start .navbar-link:focus,
.navbar.is-black .navbar-start .navbar-link:hover,
.navbar.is-black .navbar-start .navbar-link.is-active,
.navbar.is-black .navbar-end > a.navbar-item:focus,
.navbar.is-black .navbar-end > a.navbar-item:hover,
.navbar.is-black .navbar-end > a.navbar-item.is-active,
.navbar.is-black .navbar-end .navbar-link:focus,
.navbar.is-black .navbar-end .navbar-link:hover,
.navbar.is-black .navbar-end .navbar-link.is-active {
    background-color: black;
    color: white;
  }
  .navbar.is-black .navbar-start .navbar-link::after,
.navbar.is-black .navbar-end .navbar-link::after {
    border-color: white;
  }
  .navbar.is-black .navbar-item.has-dropdown:focus .navbar-link,
.navbar.is-black .navbar-item.has-dropdown:hover .navbar-link,
.navbar.is-black .navbar-item.has-dropdown.is-active .navbar-link {
    background-color: black;
    color: white;
  }
  .navbar.is-black .navbar-dropdown a.navbar-item.is-active {
    background-color: #0a0a0a;
    color: white;
  }
}
.navbar.is-light {
  background-color: whitesmoke;
  color: rgba(0, 0, 0, 0.7);
}
.navbar.is-light .navbar-brand > .navbar-item,
.navbar.is-light .navbar-brand .navbar-link {
  color: rgba(0, 0, 0, 0.7);
}
.navbar.is-light .navbar-brand > a.navbar-item:focus, .navbar.is-light .navbar-brand > a.navbar-item:hover, .navbar.is-light .navbar-brand > a.navbar-item.is-active,
.navbar.is-light .navbar-brand .navbar-link:focus,
.navbar.is-light .navbar-brand .navbar-link:hover,
.navbar.is-light .navbar-brand .navbar-link.is-active {
  background-color: #e8e8e8;
  color: rgba(0, 0, 0, 0.7);
}
.navbar.is-light .navbar-brand .navbar-link::after {
  border-color: rgba(0, 0, 0, 0.7);
}
.navbar.is-light .navbar-burger {
  color: rgba(0, 0, 0, 0.7);
}
@media screen and (min-width: 1024px) {
  .navbar.is-light .navbar-start > .navbar-item,
.navbar.is-light .navbar-start .navbar-link,
.navbar.is-light .navbar-end > .navbar-item,
.navbar.is-light .navbar-end .navbar-link {
    color: rgba(0, 0, 0, 0.7);
  }
  .navbar.is-light .navbar-start > a.navbar-item:focus, .navbar.is-light .navbar-start > a.navbar-item:hover, .navbar.is-light .navbar-start > a.navbar-item.is-active,
.navbar.is-light .navbar-start .navbar-link:focus,
.navbar.is-light .navbar-start .navbar-link:hover,
.navbar.is-light .navbar-start .navbar-link.is-active,
.navbar.is-light .navbar-end > a.navbar-item:focus,
.navbar.is-light .navbar-end > a.navbar-item:hover,
.navbar.is-light .navbar-end > a.navbar-item.is-active,
.navbar.is-light .navbar-end .navbar-link:focus,
.navbar.is-light .navbar-end .navbar-link:hover,
.navbar.is-light .navbar-end .navbar-link.is-active {
    background-color: #e8e8e8;
    color: rgba(0, 0, 0, 0.7);
  }
  .navbar.is-light .navbar-start .navbar-link::after,
.navbar.is-light .navbar-end .navbar-link::after {
    border-color: rgba(0, 0, 0, 0.7);
  }
  .navbar.is-light .navbar-item.has-dropdown:focus .navbar-link,
.navbar.is-light .navbar-item.has-dropdown:hover .navbar-link,
.navbar.is-light .navbar-item.has-dropdown.is-active .navbar-link {
    background-color: #e8e8e8;
    color: rgba(0, 0, 0, 0.7);
  }
  .navbar.is-light .navbar-dropdown a.navbar-item.is-active {
    background-color: whitesmoke;
    color: rgba(0, 0, 0, 0.7);
  }
}
.navbar.is-dark {
  background-color: #363636;
  color: #fff;
}
.navbar.is-dark .navbar-brand > .navbar-item,
.navbar.is-dark .navbar-brand .navbar-link {
  color: #fff;
}
.navbar.is-dark .navbar-brand > a.navbar-item:focus, .navbar.is-dark .navbar-brand > a.navbar-item:hover, .navbar.is-dark .navbar-brand > a.navbar-item.is-active,
.navbar.is-dark .navbar-brand .navbar-link:focus,
.navbar.is-dark .navbar-brand .navbar-link:hover,
.navbar.is-dark .navbar-brand .navbar-link.is-active {
  background-color: #292929;
  color: #fff;
}
.navbar.is-dark .navbar-brand .navbar-link::after {
  border-color: #fff;
}
.navbar.is-dark .navbar-burger {
  color: #fff;
}
@media screen and (min-width: 1024px) {
  .navbar.is-dark .navbar-start > .navbar-item,
.navbar.is-dark .navbar-start .navbar-link,
.navbar.is-dark .navbar-end > .navbar-item,
.navbar.is-dark .navbar-end .navbar-link {
    color: #fff;
  }
  .navbar.is-dark .navbar-start > a.navbar-item:focus, .navbar.is-dark .navbar-start > a.navbar-item:hover, .navbar.is-dark .navbar-start > a.navbar-item.is-active,
.navbar.is-dark .navbar-start .navbar-link:focus,
.navbar.is-dark .navbar-start .navbar-link:hover,
.navbar.is-dark .navbar-start .navbar-link.is-active,
.navbar.is-dark .navbar-end > a.navbar-item:focus,
.navbar.is-dark .navbar-end > a.navbar-item:hover,
.navbar.is-dark .navbar-end > a.navbar-item.is-active,
.navbar.is-dark .navbar-end .navbar-link:focus,
.navbar.is-dark .navbar-end .navbar-link:hover,
.navbar.is-dark .navbar-end .navbar-link.is-active {
    background-color: #292929;
    color: #fff;
  }
  .navbar.is-dark .navbar-start .navbar-link::after,
.navbar.is-dark .navbar-end .navbar-link::after {
    border-color: #fff;
  }
  .navbar.is-dark .navbar-item.has-dropdown:focus .navbar-link,
.navbar.is-dark .navbar-item.has-dropdown:hover .navbar-link,
.navbar.is-dark .navbar-item.has-dropdown.is-active .navbar-link {
    background-color: #292929;
    color: #fff;
  }
  .navbar.is-dark .navbar-dropdown a.navbar-item.is-active {
    background-color: #363636;
    color: #fff;
  }
}
.navbar.is-primary {
  background-color: #7957d5;
  color: #fff;
}
.navbar.is-primary .navbar-brand > .navbar-item,
.navbar.is-primary .navbar-brand .navbar-link {
  color: #fff;
}
.navbar.is-primary .navbar-brand > a.navbar-item:focus, .navbar.is-primary .navbar-brand > a.navbar-item:hover, .navbar.is-primary .navbar-brand > a.navbar-item.is-active,
.navbar.is-primary .navbar-brand .navbar-link:focus,
.navbar.is-primary .navbar-brand .navbar-link:hover,
.navbar.is-primary .navbar-brand .navbar-link.is-active {
  background-color: #6943d0;
  color: #fff;
}
.navbar.is-primary .navbar-brand .navbar-link::after {
  border-color: #fff;
}
.navbar.is-primary .navbar-burger {
  color: #fff;
}
@media screen and (min-width: 1024px) {
  .navbar.is-primary .navbar-start > .navbar-item,
.navbar.is-primary .navbar-start .navbar-link,
.navbar.is-primary .navbar-end > .navbar-item,
.navbar.is-primary .navbar-end .navbar-link {
    color: #fff;
  }
  .navbar.is-primary .navbar-start > a.navbar-item:focus, .navbar.is-primary .navbar-start > a.navbar-item:hover, .navbar.is-primary .navbar-start > a.navbar-item.is-active,
.navbar.is-primary .navbar-start .navbar-link:focus,
.navbar.is-primary .navbar-start .navbar-link:hover,
.navbar.is-primary .navbar-start .navbar-link.is-active,
.navbar.is-primary .navbar-end > a.navbar-item:focus,
.navbar.is-primary .navbar-end > a.navbar-item:hover,
.navbar.is-primary .navbar-end > a.navbar-item.is-active,
.navbar.is-primary .navbar-end .navbar-link:focus,
.navbar.is-primary .navbar-end .navbar-link:hover,
.navbar.is-primary .navbar-end .navbar-link.is-active {
    background-color: #6943d0;
    color: #fff;
  }
  .navbar.is-primary .navbar-start .navbar-link::after,
.navbar.is-primary .navbar-end .navbar-link::after {
    border-color: #fff;
  }
  .navbar.is-primary .navbar-item.has-dropdown:focus .navbar-link,
.navbar.is-primary .navbar-item.has-dropdown:hover .navbar-link,
.navbar.is-primary .navbar-item.has-dropdown.is-active .navbar-link {
    background-color: #6943d0;
    color: #fff;
  }
  .navbar.is-primary .navbar-dropdown a.navbar-item.is-active {
    background-color: #7957d5;
    color: #fff;
  }
}
.navbar.is-link {
  background-color: #7957d5;
  color: #fff;
}
.navbar.is-link .navbar-brand > .navbar-item,
.navbar.is-link .navbar-brand .navbar-link {
  color: #fff;
}
.navbar.is-link .navbar-brand > a.navbar-item:focus, .navbar.is-link .navbar-brand > a.navbar-item:hover, .navbar.is-link .navbar-brand > a.navbar-item.is-active,
.navbar.is-link .navbar-brand .navbar-link:focus,
.navbar.is-link .navbar-brand .navbar-link:hover,
.navbar.is-link .navbar-brand .navbar-link.is-active {
  background-color: #6943d0;
  color: #fff;
}
.navbar.is-link .navbar-brand .navbar-link::after {
  border-color: #fff;
}
.navbar.is-link .navbar-burger {
  color: #fff;
}
@media screen and (min-width: 1024px) {
  .navbar.is-link .navbar-start > .navbar-item,
.navbar.is-link .navbar-start .navbar-link,
.navbar.is-link .navbar-end > .navbar-item,
.navbar.is-link .navbar-end .navbar-link {
    color: #fff;
  }
  .navbar.is-link .navbar-start > a.navbar-item:focus, .navbar.is-link .navbar-start > a.navbar-item:hover, .navbar.is-link .navbar-start > a.navbar-item.is-active,
.navbar.is-link .navbar-start .navbar-link:focus,
.navbar.is-link .navbar-start .navbar-link:hover,
.navbar.is-link .navbar-start .navbar-link.is-active,
.navbar.is-link .navbar-end > a.navbar-item:focus,
.navbar.is-link .navbar-end > a.navbar-item:hover,
.navbar.is-link .navbar-end > a.navbar-item.is-active,
.navbar.is-link .navbar-end .navbar-link:focus,
.navbar.is-link .navbar-end .navbar-link:hover,
.navbar.is-link .navbar-end .navbar-link.is-active {
    background-color: #6943d0;
    color: #fff;
  }
  .navbar.is-link .navbar-start .navbar-link::after,
.navbar.is-link .navbar-end .navbar-link::after {
    border-color: #fff;
  }
  .navbar.is-link .navbar-item.has-dropdown:focus .navbar-link,
.navbar.is-link .navbar-item.has-dropdown:hover .navbar-link,
.navbar.is-link .navbar-item.has-dropdown.is-active .navbar-link {
    background-color: #6943d0;
    color: #fff;
  }
  .navbar.is-link .navbar-dropdown a.navbar-item.is-active {
    background-color: #7957d5;
    color: #fff;
  }
}
.navbar.is-info {
  background-color: #167df0;
  color: #fff;
}
.navbar.is-info .navbar-brand > .navbar-item,
.navbar.is-info .navbar-brand .navbar-link {
  color: #fff;
}
.navbar.is-info .navbar-brand > a.navbar-item:focus, .navbar.is-info .navbar-brand > a.navbar-item:hover, .navbar.is-info .navbar-brand > a.navbar-item.is-active,
.navbar.is-info .navbar-brand .navbar-link:focus,
.navbar.is-info .navbar-brand .navbar-link:hover,
.navbar.is-info .navbar-brand .navbar-link.is-active {
  background-color: #0e71de;
  color: #fff;
}
.navbar.is-info .navbar-brand .navbar-link::after {
  border-color: #fff;
}
.navbar.is-info .navbar-burger {
  color: #fff;
}
@media screen and (min-width: 1024px) {
  .navbar.is-info .navbar-start > .navbar-item,
.navbar.is-info .navbar-start .navbar-link,
.navbar.is-info .navbar-end > .navbar-item,
.navbar.is-info .navbar-end .navbar-link {
    color: #fff;
  }
  .navbar.is-info .navbar-start > a.navbar-item:focus, .navbar.is-info .navbar-start > a.navbar-item:hover, .navbar.is-info .navbar-start > a.navbar-item.is-active,
.navbar.is-info .navbar-start .navbar-link:focus,
.navbar.is-info .navbar-start .navbar-link:hover,
.navbar.is-info .navbar-start .navbar-link.is-active,
.navbar.is-info .navbar-end > a.navbar-item:focus,
.navbar.is-info .navbar-end > a.navbar-item:hover,
.navbar.is-info .navbar-end > a.navbar-item.is-active,
.navbar.is-info .navbar-end .navbar-link:focus,
.navbar.is-info .navbar-end .navbar-link:hover,
.navbar.is-info .navbar-end .navbar-link.is-active {
    background-color: #0e71de;
    color: #fff;
  }
  .navbar.is-info .navbar-start .navbar-link::after,
.navbar.is-info .navbar-end .navbar-link::after {
    border-color: #fff;
  }
  .navbar.is-info .navbar-item.has-dropdown:focus .navbar-link,
.navbar.is-info .navbar-item.has-dropdown:hover .navbar-link,
.navbar.is-info .navbar-item.has-dropdown.is-active .navbar-link {
    background-color: #0e71de;
    color: #fff;
  }
  .navbar.is-info .navbar-dropdown a.navbar-item.is-active {
    background-color: #167df0;
    color: #fff;
  }
}
.navbar.is-success {
  background-color: #48c78e;
  color: #fff;
}
.navbar.is-success .navbar-brand > .navbar-item,
.navbar.is-success .navbar-brand .navbar-link {
  color: #fff;
}
.navbar.is-success .navbar-brand > a.navbar-item:focus, .navbar.is-success .navbar-brand > a.navbar-item:hover, .navbar.is-success .navbar-brand > a.navbar-item.is-active,
.navbar.is-success .navbar-brand .navbar-link:focus,
.navbar.is-success .navbar-brand .navbar-link:hover,
.navbar.is-success .navbar-brand .navbar-link.is-active {
  background-color: #3abb81;
  color: #fff;
}
.navbar.is-success .navbar-brand .navbar-link::after {
  border-color: #fff;
}
.navbar.is-success .navbar-burger {
  color: #fff;
}
@media screen and (min-width: 1024px) {
  .navbar.is-success .navbar-start > .navbar-item,
.navbar.is-success .navbar-start .navbar-link,
.navbar.is-success .navbar-end > .navbar-item,
.navbar.is-success .navbar-end .navbar-link {
    color: #fff;
  }
  .navbar.is-success .navbar-start > a.navbar-item:focus, .navbar.is-success .navbar-start > a.navbar-item:hover, .navbar.is-success .navbar-start > a.navbar-item.is-active,
.navbar.is-success .navbar-start .navbar-link:focus,
.navbar.is-success .navbar-start .navbar-link:hover,
.navbar.is-success .navbar-start .navbar-link.is-active,
.navbar.is-success .navbar-end > a.navbar-item:focus,
.navbar.is-success .navbar-end > a.navbar-item:hover,
.navbar.is-success .navbar-end > a.navbar-item.is-active,
.navbar.is-success .navbar-end .navbar-link:focus,
.navbar.is-success .navbar-end .navbar-link:hover,
.navbar.is-success .navbar-end .navbar-link.is-active {
    background-color: #3abb81;
    color: #fff;
  }
  .navbar.is-success .navbar-start .navbar-link::after,
.navbar.is-success .navbar-end .navbar-link::after {
    border-color: #fff;
  }
  .navbar.is-success .navbar-item.has-dropdown:focus .navbar-link,
.navbar.is-success .navbar-item.has-dropdown:hover .navbar-link,
.navbar.is-success .navbar-item.has-dropdown.is-active .navbar-link {
    background-color: #3abb81;
    color: #fff;
  }
  .navbar.is-success .navbar-dropdown a.navbar-item.is-active {
    background-color: #48c78e;
    color: #fff;
  }
}
.navbar.is-warning {
  background-color: #ffe08a;
  color: rgba(0, 0, 0, 0.7);
}
.navbar.is-warning .navbar-brand > .navbar-item,
.navbar.is-warning .navbar-brand .navbar-link {
  color: rgba(0, 0, 0, 0.7);
}
.navbar.is-warning .navbar-brand > a.navbar-item:focus, .navbar.is-warning .navbar-brand > a.navbar-item:hover, .navbar.is-warning .navbar-brand > a.navbar-item.is-active,
.navbar.is-warning .navbar-brand .navbar-link:focus,
.navbar.is-warning .navbar-brand .navbar-link:hover,
.navbar.is-warning .navbar-brand .navbar-link.is-active {
  background-color: #ffd970;
  color: rgba(0, 0, 0, 0.7);
}
.navbar.is-warning .navbar-brand .navbar-link::after {
  border-color: rgba(0, 0, 0, 0.7);
}
.navbar.is-warning .navbar-burger {
  color: rgba(0, 0, 0, 0.7);
}
@media screen and (min-width: 1024px) {
  .navbar.is-warning .navbar-start > .navbar-item,
.navbar.is-warning .navbar-start .navbar-link,
.navbar.is-warning .navbar-end > .navbar-item,
.navbar.is-warning .navbar-end .navbar-link {
    color: rgba(0, 0, 0, 0.7);
  }
  .navbar.is-warning .navbar-start > a.navbar-item:focus, .navbar.is-warning .navbar-start > a.navbar-item:hover, .navbar.is-warning .navbar-start > a.navbar-item.is-active,
.navbar.is-warning .navbar-start .navbar-link:focus,
.navbar.is-warning .navbar-start .navbar-link:hover,
.navbar.is-warning .navbar-start .navbar-link.is-active,
.navbar.is-warning .navbar-end > a.navbar-item:focus,
.navbar.is-warning .navbar-end > a.navbar-item:hover,
.navbar.is-warning .navbar-end > a.navbar-item.is-active,
.navbar.is-warning .navbar-end .navbar-link:focus,
.navbar.is-warning .navbar-end .navbar-link:hover,
.navbar.is-warning .navbar-end .navbar-link.is-active {
    background-color: #ffd970;
    color: rgba(0, 0, 0, 0.7);
  }
  .navbar.is-warning .navbar-start .navbar-link::after,
.navbar.is-warning .navbar-end .navbar-link::after {
    border-color: rgba(0, 0, 0, 0.7);
  }
  .navbar.is-warning .navbar-item.has-dropdown:focus .navbar-link,
.navbar.is-warning .navbar-item.has-dropdown:hover .navbar-link,
.navbar.is-warning .navbar-item.has-dropdown.is-active .navbar-link {
    background-color: #ffd970;
    color: rgba(0, 0, 0, 0.7);
  }
  .navbar.is-warning .navbar-dropdown a.navbar-item.is-active {
    background-color: #ffe08a;
    color: rgba(0, 0, 0, 0.7);
  }
}
.navbar.is-danger {
  background-color: #f14668;
  color: #fff;
}
.navbar.is-danger .navbar-brand > .navbar-item,
.navbar.is-danger .navbar-brand .navbar-link {
  color: #fff;
}
.navbar.is-danger .navbar-brand > a.navbar-item:focus, .navbar.is-danger .navbar-brand > a.navbar-item:hover, .navbar.is-danger .navbar-brand > a.navbar-item.is-active,
.navbar.is-danger .navbar-brand .navbar-link:focus,
.navbar.is-danger .navbar-brand .navbar-link:hover,
.navbar.is-danger .navbar-brand .navbar-link.is-active {
  background-color: #ef2e55;
  color: #fff;
}
.navbar.is-danger .navbar-brand .navbar-link::after {
  border-color: #fff;
}
.navbar.is-danger .navbar-burger {
  color: #fff;
}
@media screen and (min-width: 1024px) {
  .navbar.is-danger .navbar-start > .navbar-item,
.navbar.is-danger .navbar-start .navbar-link,
.navbar.is-danger .navbar-end > .navbar-item,
.navbar.is-danger .navbar-end .navbar-link {
    color: #fff;
  }
  .navbar.is-danger .navbar-start > a.navbar-item:focus, .navbar.is-danger .navbar-start > a.navbar-item:hover, .navbar.is-danger .navbar-start > a.navbar-item.is-active,
.navbar.is-danger .navbar-start .navbar-link:focus,
.navbar.is-danger .navbar-start .navbar-link:hover,
.navbar.is-danger .navbar-start .navbar-link.is-active,
.navbar.is-danger .navbar-end > a.navbar-item:focus,
.navbar.is-danger .navbar-end > a.navbar-item:hover,
.navbar.is-danger .navbar-end > a.navbar-item.is-active,
.navbar.is-danger .navbar-end .navbar-link:focus,
.navbar.is-danger .navbar-end .navbar-link:hover,
.navbar.is-danger .navbar-end .navbar-link.is-active {
    background-color: #ef2e55;
    color: #fff;
  }
  .navbar.is-danger .navbar-start .navbar-link::after,
.navbar.is-danger .navbar-end .navbar-link::after {
    border-color: #fff;
  }
  .navbar.is-danger .navbar-item.has-dropdown:focus .navbar-link,
.navbar.is-danger .navbar-item.has-dropdown:hover .navbar-link,
.navbar.is-danger .navbar-item.has-dropdown.is-active .navbar-link {
    background-color: #ef2e55;
    color: #fff;
  }
  .navbar.is-danger .navbar-dropdown a.navbar-item.is-active {
    background-color: #f14668;
    color: #fff;
  }
}
.navbar > .container {
  align-items: stretch;
  display: flex;
  min-height: 3.25rem;
  width: 100%;
}
.navbar.has-shadow {
  box-shadow: 0 2px 0 0 whitesmoke;
}
.navbar.is-fixed-bottom, .navbar.is-fixed-top {
  left: 0;
  position: fixed;
  right: 0;
  z-index: 30;
}
.navbar.is-fixed-bottom {
  bottom: 0;
}
.navbar.is-fixed-bottom.has-shadow {
  box-shadow: 0 -2px 0 0 whitesmoke;
}
.navbar.is-fixed-top {
  top: 0;
}

html.has-navbar-fixed-top,
body.has-navbar-fixed-top {
  padding-top: 3.25rem;
}
html.has-navbar-fixed-bottom,
body.has-navbar-fixed-bottom {
  padding-bottom: 3.25rem;
}

.navbar-brand,
.navbar-tabs {
  align-items: stretch;
  display: flex;
  flex-shrink: 0;
  min-height: 3.25rem;
}

.navbar-brand a.navbar-item:focus, .navbar-brand a.navbar-item:hover {
  background-color: transparent;
}

.navbar-tabs {
  -webkit-overflow-scrolling: touch;
  max-width: 100vw;
  overflow-x: auto;
  overflow-y: hidden;
}

.navbar-burger {
  color: #4a4a4a;
  cursor: pointer;
  display: block;
  height: 3.25rem;
  position: relative;
  width: 3.25rem;
  margin-left: auto;
}
.navbar-burger span {
  background-color: currentColor;
  display: block;
  height: 1px;
  left: calc(50% - 8px);
  position: absolute;
  transform-origin: center;
  transition-duration: 86ms;
  transition-property: background-color, opacity, transform;
  transition-timing-function: ease-out;
  width: 16px;
}
.navbar-burger span:nth-child(1) {
  top: calc(50% - 6px);
}
.navbar-burger span:nth-child(2) {
  top: calc(50% - 1px);
}
.navbar-burger span:nth-child(3) {
  top: calc(50% + 4px);
}
.navbar-burger:hover {
  background-color: rgba(0, 0, 0, 0.05);
}
.navbar-burger.is-active span:nth-child(1) {
  transform: translateY(5px) rotate(45deg);
}
.navbar-burger.is-active span:nth-child(2) {
  opacity: 0;
}
.navbar-burger.is-active span:nth-child(3) {
  transform: translateY(-5px) rotate(-45deg);
}

.navbar-menu {
  display: none;
}

.navbar-item,
.navbar-link {
  color: #4a4a4a;
  display: block;
  line-height: 1.5;
  padding: 0.5rem 0.75rem;
  position: relative;
}
.navbar-item .icon:only-child,
.navbar-link .icon:only-child {
  margin-left: -0.25rem;
  margin-right: -0.25rem;
}

a.navbar-item,
.navbar-link {
  cursor: pointer;
}
a.navbar-item:focus, a.navbar-item:focus-within, a.navbar-item:hover, a.navbar-item.is-active,
.navbar-link:focus,
.navbar-link:focus-within,
.navbar-link:hover,
.navbar-link.is-active {
  background-color: #fafafa;
  color: #7957d5;
}

.navbar-item {
  flex-grow: 0;
  flex-shrink: 0;
}
.navbar-item img {
  max-height: 1.75rem;
}
.navbar-item.has-dropdown {
  padding: 0;
}
.navbar-item.is-expanded {
  flex-grow: 1;
  flex-shrink: 1;
}
.navbar-item.is-tab {
  border-bottom: 1px solid transparent;
  min-height: 3.25rem;
  padding-bottom: calc(0.5rem - 1px);
}
.navbar-item.is-tab:focus, .navbar-item.is-tab:hover {
  background-color: transparent;
  border-bottom-color: #7957d5;
}
.navbar-item.is-tab.is-active {
  background-color: transparent;
  border-bottom-color: #7957d5;
  border-bottom-style: solid;
  border-bottom-width: 3px;
  color: #7957d5;
  padding-bottom: calc(0.5rem - 3px);
}

.navbar-content {
  flex-grow: 1;
  flex-shrink: 1;
}

.navbar-link:not(.is-arrowless) {
  padding-right: 2.5em;
}
.navbar-link:not(.is-arrowless)::after {
  border-color: #7957d5;
  margin-top: -0.375em;
  right: 1.125em;
}

.navbar-dropdown {
  font-size: 0.875rem;
  padding-bottom: 0.5rem;
  padding-top: 0.5rem;
}
.navbar-dropdown .navbar-item {
  padding-left: 1.5rem;
  padding-right: 1.5rem;
}

.navbar-divider {
  background-color: whitesmoke;
  border: none;
  display: none;
  height: 2px;
  margin: 0.5rem 0;
}

@media screen and (max-width: 1023px) {
  .navbar > .container {
    display: block;
  }

  .navbar-brand .navbar-item,
.navbar-tabs .navbar-item {
    align-items: center;
    display: flex;
  }

  .navbar-link::after {
    display: none;
  }

  .navbar-menu {
    background-color: white;
    box-shadow: 0 8px 16px rgba(10, 10, 10, 0.1);
    padding: 0.5rem 0;
  }
  .navbar-menu.is-active {
    display: block;
  }

  .navbar.is-fixed-bottom-touch, .navbar.is-fixed-top-touch {
    left: 0;
    position: fixed;
    right: 0;
    z-index: 30;
  }
  .navbar.is-fixed-bottom-touch {
    bottom: 0;
  }
  .navbar.is-fixed-bottom-touch.has-shadow {
    box-shadow: 0 -2px 3px rgba(10, 10, 10, 0.1);
  }
  .navbar.is-fixed-top-touch {
    top: 0;
  }
  .navbar.is-fixed-top .navbar-menu, .navbar.is-fixed-top-touch .navbar-menu {
    -webkit-overflow-scrolling: touch;
    max-height: calc(100vh - 3.25rem);
    overflow: auto;
  }

  html.has-navbar-fixed-top-touch,
body.has-navbar-fixed-top-touch {
    padding-top: 3.25rem;
  }
  html.has-navbar-fixed-bottom-touch,
body.has-navbar-fixed-bottom-touch {
    padding-bottom: 3.25rem;
  }
}
@media screen and (min-width: 1024px) {
  .navbar,
.navbar-menu,
.navbar-start,
.navbar-end {
    align-items: stretch;
    display: flex;
  }

  .navbar {
    min-height: 3.25rem;
  }
  .navbar.is-spaced {
    padding: 1rem 2rem;
  }
  .navbar.is-spaced .navbar-start,
.navbar.is-spaced .navbar-end {
    align-items: center;
  }
  .navbar.is-spaced a.navbar-item,
.navbar.is-spaced .navbar-link {
    border-radius: 4px;
  }
  .navbar.is-transparent a.navbar-item:focus, .navbar.is-transparent a.navbar-item:hover, .navbar.is-transparent a.navbar-item.is-active,
.navbar.is-transparent .navbar-link:focus,
.navbar.is-transparent .navbar-link:hover,
.navbar.is-transparent .navbar-link.is-active {
    background-color: transparent !important;
  }
  .navbar.is-transparent .navbar-item.has-dropdown.is-active .navbar-link, .navbar.is-transparent .navbar-item.has-dropdown.is-hoverable:focus .navbar-link, .navbar.is-transparent .navbar-item.has-dropdown.is-hoverable:focus-within .navbar-link, .navbar.is-transparent .navbar-item.has-dropdown.is-hoverable:hover .navbar-link {
    background-color: transparent !important;
  }
  .navbar.is-transparent .navbar-dropdown a.navbar-item:focus, .navbar.is-transparent .navbar-dropdown a.navbar-item:hover {
    background-color: whitesmoke;
    color: #0a0a0a;
  }
  .navbar.is-transparent .navbar-dropdown a.navbar-item.is-active {
    background-color: whitesmoke;
    color: #7957d5;
  }

  .navbar-burger {
    display: none;
  }

  .navbar-item,
.navbar-link {
    align-items: center;
    display: flex;
  }

  .navbar-item.has-dropdown {
    align-items: stretch;
  }
  .navbar-item.has-dropdown-up .navbar-link::after {
    transform: rotate(135deg) translate(0.25em, -0.25em);
  }
  .navbar-item.has-dropdown-up .navbar-dropdown {
    border-bottom: 2px solid #dbdbdb;
    border-radius: 6px 6px 0 0;
    border-top: none;
    bottom: 100%;
    box-shadow: 0 -8px 8px rgba(10, 10, 10, 0.1);
    top: auto;
  }
  .navbar-item.is-active .navbar-dropdown, .navbar-item.is-hoverable:focus .navbar-dropdown, .navbar-item.is-hoverable:focus-within .navbar-dropdown, .navbar-item.is-hoverable:hover .navbar-dropdown {
    display: block;
  }
  .navbar.is-spaced .navbar-item.is-active .navbar-dropdown, .navbar-item.is-active .navbar-dropdown.is-boxed, .navbar.is-spaced .navbar-item.is-hoverable:focus .navbar-dropdown, .navbar-item.is-hoverable:focus .navbar-dropdown.is-boxed, .navbar.is-spaced .navbar-item.is-hoverable:focus-within .navbar-dropdown, .navbar-item.is-hoverable:focus-within .navbar-dropdown.is-boxed, .navbar.is-spaced .navbar-item.is-hoverable:hover .navbar-dropdown, .navbar-item.is-hoverable:hover .navbar-dropdown.is-boxed {
    opacity: 1;
    pointer-events: auto;
    transform: translateY(0);
  }

  .navbar-menu {
    flex-grow: 1;
    flex-shrink: 0;
  }

  .navbar-start {
    justify-content: flex-start;
    margin-right: auto;
  }

  .navbar-end {
    justify-content: flex-end;
    margin-left: auto;
  }

  .navbar-dropdown {
    background-color: white;
    border-bottom-left-radius: 6px;
    border-bottom-right-radius: 6px;
    border-top: 2px solid #dbdbdb;
    box-shadow: 0 8px 8px rgba(10, 10, 10, 0.1);
    display: none;
    font-size: 0.875rem;
    left: 0;
    min-width: 100%;
    position: absolute;
    top: 100%;
    z-index: 20;
  }
  .navbar-dropdown .navbar-item {
    padding: 0.375rem 1rem;
    white-space: nowrap;
  }
  .navbar-dropdown a.navbar-item {
    padding-right: 3rem;
  }
  .navbar-dropdown a.navbar-item:focus, .navbar-dropdown a.navbar-item:hover {
    background-color: whitesmoke;
    color: #0a0a0a;
  }
  .navbar-dropdown a.navbar-item.is-active {
    background-color: whitesmoke;
    color: #7957d5;
  }
  .navbar.is-spaced .navbar-dropdown, .navbar-dropdown.is-boxed {
    border-radius: 6px;
    border-top: none;
    box-shadow: 0 8px 8px rgba(10, 10, 10, 0.1), 0 0 0 1px rgba(10, 10, 10, 0.1);
    display: block;
    opacity: 0;
    pointer-events: none;
    top: calc(100% + (-4px));
    transform: translateY(-5px);
    transition-duration: 86ms;
    transition-property: opacity, transform;
  }
  .navbar-dropdown.is-right {
    left: auto;
    right: 0;
  }

  .navbar-divider {
    display: block;
  }

  .navbar > .container .navbar-brand,
.container > .navbar .navbar-brand {
    margin-left: -0.75rem;
  }
  .navbar > .container .navbar-menu,
.container > .navbar .navbar-menu {
    margin-right: -0.75rem;
  }

  .navbar.is-fixed-bottom-desktop, .navbar.is-fixed-top-desktop {
    left: 0;
    position: fixed;
    right: 0;
    z-index: 30;
  }
  .navbar.is-fixed-bottom-desktop {
    bottom: 0;
  }
  .navbar.is-fixed-bottom-desktop.has-shadow {
    box-shadow: 0 -2px 3px rgba(10, 10, 10, 0.1);
  }
  .navbar.is-fixed-top-desktop {
    top: 0;
  }

  html.has-navbar-fixed-top-desktop,
body.has-navbar-fixed-top-desktop {
    padding-top: 3.25rem;
  }
  html.has-navbar-fixed-bottom-desktop,
body.has-navbar-fixed-bottom-desktop {
    padding-bottom: 3.25rem;
  }
  html.has-spaced-navbar-fixed-top,
body.has-spaced-navbar-fixed-top {
    padding-top: 5.25rem;
  }
  html.has-spaced-navbar-fixed-bottom,
body.has-spaced-navbar-fixed-bottom {
    padding-bottom: 5.25rem;
  }

  a.navbar-item.is-active,
.navbar-link.is-active {
    color: #0a0a0a;
  }
  a.navbar-item.is-active:not(:focus):not(:hover),
.navbar-link.is-active:not(:focus):not(:hover) {
    background-color: transparent;
  }

  .navbar-item.has-dropdown:focus .navbar-link, .navbar-item.has-dropdown:hover .navbar-link, .navbar-item.has-dropdown.is-active .navbar-link {
    background-color: #fafafa;
  }
}
.hero.is-fullheight-with-navbar {
  min-height: calc(100vh - 3.25rem);
}

.pagination {
  font-size: 1rem;
  margin: -0.25rem;
}
.pagination.is-small {
  font-size: 0.75rem;
}
.pagination.is-medium {
  font-size: 1.25rem;
}
.pagination.is-large {
  font-size: 1.5rem;
}
.pagination.is-rounded .pagination-previous,
.pagination.is-rounded .pagination-next {
  padding-left: 1em;
  padding-right: 1em;
  border-radius: 9999px;
}
.pagination.is-rounded .pagination-link {
  border-radius: 9999px;
}

.pagination,
.pagination-list {
  align-items: center;
  display: flex;
  justify-content: center;
  text-align: center;
}

.pagination-previous,
.pagination-next,
.pagination-link,
.pagination-ellipsis {
  font-size: 1em;
  justify-content: center;
  margin: 0.25rem;
  padding-left: 0.5em;
  padding-right: 0.5em;
  text-align: center;
}

.pagination-previous,
.pagination-next,
.pagination-link {
  border-color: #dbdbdb;
  color: #363636;
  min-width: 2.5em;
}
.pagination-previous:hover,
.pagination-next:hover,
.pagination-link:hover {
  border-color: #b5b5b5;
  color: #363636;
}
.pagination-previous:focus,
.pagination-next:focus,
.pagination-link:focus {
  border-color: #7957d5;
}
.pagination-previous:active,
.pagination-next:active,
.pagination-link:active {
  box-shadow: inset 0 1px 2px rgba(10, 10, 10, 0.2);
}
.pagination-previous[disabled],
.pagination-next[disabled],
.pagination-link[disabled] {
  background-color: #dbdbdb;
  border-color: #dbdbdb;
  box-shadow: none;
  color: #7a7a7a;
  opacity: 0.5;
}

.pagination-previous,
.pagination-next {
  padding-left: 0.75em;
  padding-right: 0.75em;
  white-space: nowrap;
}

.pagination-link.is-current {
  background-color: #7957d5;
  border-color: #7957d5;
  color: #fff;
}

.pagination-ellipsis {
  color: #b5b5b5;
  pointer-events: none;
}

.pagination-list {
  flex-wrap: wrap;
}
.pagination-list li {
  list-style: none;
}

@media screen and (max-width: 768px) {
  .pagination {
    flex-wrap: wrap;
  }

  .pagination-previous,
.pagination-next {
    flex-grow: 1;
    flex-shrink: 1;
  }

  .pagination-list li {
    flex-grow: 1;
    flex-shrink: 1;
  }
}
@media screen and (min-width: 769px), print {
  .pagination-list {
    flex-grow: 1;
    flex-shrink: 1;
    justify-content: flex-start;
    order: 1;
  }

  .pagination-previous,
.pagination-next,
.pagination-link,
.pagination-ellipsis {
    margin-bottom: 0;
    margin-top: 0;
  }

  .pagination-previous {
    order: 2;
  }

  .pagination-next {
    order: 3;
  }

  .pagination {
    justify-content: space-between;
    margin-bottom: 0;
    margin-top: 0;
  }
  .pagination.is-centered .pagination-previous {
    order: 1;
  }
  .pagination.is-centered .pagination-list {
    justify-content: center;
    order: 2;
  }
  .pagination.is-centered .pagination-next {
    order: 3;
  }
  .pagination.is-right .pagination-previous {
    order: 1;
  }
  .pagination.is-right .pagination-next {
    order: 2;
  }
  .pagination.is-right .pagination-list {
    justify-content: flex-end;
    order: 3;
  }
}
.panel {
  border-radius: 6px;
  box-shadow: 0 0.5em 1em -0.125em rgba(10, 10, 10, 0.1), 0 0px 0 1px rgba(10, 10, 10, 0.02);
  font-size: 1rem;
}
.panel:not(:last-child) {
  margin-bottom: 1.5rem;
}
.panel.is-white .panel-heading {
  background-color: white;
  color: #0a0a0a;
}
.panel.is-white .panel-tabs a.is-active {
  border-bottom-color: white;
}
.panel.is-white .panel-block.is-active .panel-icon {
  color: white;
}
.panel.is-black .panel-heading {
  background-color: #0a0a0a;
  color: white;
}
.panel.is-black .panel-tabs a.is-active {
  border-bottom-color: #0a0a0a;
}
.panel.is-black .panel-block.is-active .panel-icon {
  color: #0a0a0a;
}
.panel.is-light .panel-heading {
  background-color: whitesmoke;
  color: rgba(0, 0, 0, 0.7);
}
.panel.is-light .panel-tabs a.is-active {
  border-bottom-color: whitesmoke;
}
.panel.is-light .panel-block.is-active .panel-icon {
  color: whitesmoke;
}
.panel.is-dark .panel-heading {
  background-color: #363636;
  color: #fff;
}
.panel.is-dark .panel-tabs a.is-active {
  border-bottom-color: #363636;
}
.panel.is-dark .panel-block.is-active .panel-icon {
  color: #363636;
}
.panel.is-primary .panel-heading {
  background-color: #7957d5;
  color: #fff;
}
.panel.is-primary .panel-tabs a.is-active {
  border-bottom-color: #7957d5;
}
.panel.is-primary .panel-block.is-active .panel-icon {
  color: #7957d5;
}
.panel.is-link .panel-heading {
  background-color: #7957d5;
  color: #fff;
}
.panel.is-link .panel-tabs a.is-active {
  border-bottom-color: #7957d5;
}
.panel.is-link .panel-block.is-active .panel-icon {
  color: #7957d5;
}
.panel.is-info .panel-heading {
  background-color: #167df0;
  color: #fff;
}
.panel.is-info .panel-tabs a.is-active {
  border-bottom-color: #167df0;
}
.panel.is-info .panel-block.is-active .panel-icon {
  color: #167df0;
}
.panel.is-success .panel-heading {
  background-color: #48c78e;
  color: #fff;
}
.panel.is-success .panel-tabs a.is-active {
  border-bottom-color: #48c78e;
}
.panel.is-success .panel-block.is-active .panel-icon {
  color: #48c78e;
}
.panel.is-warning .panel-heading {
  background-color: #ffe08a;
  color: rgba(0, 0, 0, 0.7);
}
.panel.is-warning .panel-tabs a.is-active {
  border-bottom-color: #ffe08a;
}
.panel.is-warning .panel-block.is-active .panel-icon {
  color: #ffe08a;
}
.panel.is-danger .panel-heading {
  background-color: #f14668;
  color: #fff;
}
.panel.is-danger .panel-tabs a.is-active {
  border-bottom-color: #f14668;
}
.panel.is-danger .panel-block.is-active .panel-icon {
  color: #f14668;
}

.panel-tabs:not(:last-child),
.panel-block:not(:last-child) {
  border-bottom: 1px solid #ededed;
}

.panel-heading {
  background-color: #ededed;
  border-radius: 6px 6px 0 0;
  color: #363636;
  font-size: 1.25em;
  font-weight: 700;
  line-height: 1.25;
  padding: 0.75em 1em;
}

.panel-tabs {
  align-items: flex-end;
  display: flex;
  font-size: 0.875em;
  justify-content: center;
}
.panel-tabs a {
  border-bottom: 1px solid #dbdbdb;
  margin-bottom: -1px;
  padding: 0.5em;
}
.panel-tabs a.is-active {
  border-bottom-color: #4a4a4a;
  color: #363636;
}

.panel-list a {
  color: #4a4a4a;
}
.panel-list a:hover {
  color: #7957d5;
}

.panel-block {
  align-items: center;
  color: #363636;
  display: flex;
  justify-content: flex-start;
  padding: 0.5em 0.75em;
}
.panel-block input[type=checkbox] {
  margin-right: 0.75em;
}
.panel-block > .control {
  flex-grow: 1;
  flex-shrink: 1;
  width: 100%;
}
.panel-block.is-wrapped {
  flex-wrap: wrap;
}
.panel-block.is-active {
  border-left-color: #7957d5;
  color: #363636;
}
.panel-block.is-active .panel-icon {
  color: #7957d5;
}
.panel-block:last-child {
  border-bottom-left-radius: 6px;
  border-bottom-right-radius: 6px;
}

a.panel-block,
label.panel-block {
  cursor: pointer;
}
a.panel-block:hover,
label.panel-block:hover {
  background-color: whitesmoke;
}

.panel-icon {
  display: inline-block;
  font-size: 14px;
  height: 1em;
  line-height: 1em;
  text-align: center;
  vertical-align: top;
  width: 1em;
  color: #7a7a7a;
  margin-right: 0.75em;
}
.panel-icon .fa {
  font-size: inherit;
  line-height: inherit;
}

.tabs {
  -webkit-overflow-scrolling: touch;
  align-items: stretch;
  display: flex;
  font-size: 1rem;
  justify-content: space-between;
  overflow: hidden;
  overflow-x: auto;
  white-space: nowrap;
}
.tabs a {
  align-items: center;
  border-bottom-color: #dbdbdb;
  border-bottom-style: solid;
  border-bottom-width: 1px;
  color: #4a4a4a;
  display: flex;
  justify-content: center;
  margin-bottom: -1px;
  padding: 0.5em 1em;
  vertical-align: top;
}
.tabs a:hover {
  border-bottom-color: #363636;
  color: #363636;
}
.tabs li {
  display: block;
}
.tabs li.is-active a {
  border-bottom-color: #7957d5;
  color: #7957d5;
}
.tabs ul {
  align-items: center;
  border-bottom-color: #dbdbdb;
  border-bottom-style: solid;
  border-bottom-width: 1px;
  display: flex;
  flex-grow: 1;
  flex-shrink: 0;
  justify-content: flex-start;
}
.tabs ul.is-left {
  padding-right: 0.75em;
}
.tabs ul.is-center {
  flex: none;
  justify-content: center;
  padding-left: 0.75em;
  padding-right: 0.75em;
}
.tabs ul.is-right {
  justify-content: flex-end;
  padding-left: 0.75em;
}
.tabs .icon:first-child {
  margin-right: 0.5em;
}
.tabs .icon:last-child {
  margin-left: 0.5em;
}
.tabs.is-centered ul {
  justify-content: center;
}
.tabs.is-right ul {
  justify-content: flex-end;
}
.tabs.is-boxed a {
  border: 1px solid transparent;
  border-radius: 4px 4px 0 0;
}
.tabs.is-boxed a:hover {
  background-color: whitesmoke;
  border-bottom-color: #dbdbdb;
}
.tabs.is-boxed li.is-active a {
  background-color: white;
  border-color: #dbdbdb;
  border-bottom-color: transparent !important;
}
.tabs.is-fullwidth li {
  flex-grow: 1;
  flex-shrink: 0;
}
.tabs.is-toggle a {
  border-color: #dbdbdb;
  border-style: solid;
  border-width: 1px;
  margin-bottom: 0;
  position: relative;
}
.tabs.is-toggle a:hover {
  background-color: whitesmoke;
  border-color: #b5b5b5;
  z-index: 2;
}
.tabs.is-toggle li + li {
  margin-left: -1px;
}
.tabs.is-toggle li:first-child a {
  border-top-left-radius: 4px;
  border-bottom-left-radius: 4px;
}
.tabs.is-toggle li:last-child a {
  border-top-right-radius: 4px;
  border-bottom-right-radius: 4px;
}
.tabs.is-toggle li.is-active a {
  background-color: #7957d5;
  border-color: #7957d5;
  color: #fff;
  z-index: 1;
}
.tabs.is-toggle ul {
  border-bottom: none;
}
.tabs.is-toggle.is-toggle-rounded li:first-child a {
  border-bottom-left-radius: 9999px;
  border-top-left-radius: 9999px;
  padding-left: 1.25em;
}
.tabs.is-toggle.is-toggle-rounded li:last-child a {
  border-bottom-right-radius: 9999px;
  border-top-right-radius: 9999px;
  padding-right: 1.25em;
}
.tabs.is-small {
  font-size: 0.75rem;
}
.tabs.is-medium {
  font-size: 1.25rem;
}
.tabs.is-large {
  font-size: 1.5rem;
}

/* Bulma Grid */
.column {
  display: block;
  flex-basis: 0;
  flex-grow: 1;
  flex-shrink: 1;
  padding: 0.75rem;
}
.columns.is-mobile > .column.is-narrow {
  flex: none;
  width: unset;
}
.columns.is-mobile > .column.is-full {
  flex: none;
  width: 100%;
}
.columns.is-mobile > .column.is-three-quarters {
  flex: none;
  width: 75%;
}
.columns.is-mobile > .column.is-two-thirds {
  flex: none;
  width: 66.6666%;
}
.columns.is-mobile > .column.is-half {
  flex: none;
  width: 50%;
}
.columns.is-mobile > .column.is-one-third {
  flex: none;
  width: 33.3333%;
}
.columns.is-mobile > .column.is-one-quarter {
  flex: none;
  width: 25%;
}
.columns.is-mobile > .column.is-one-fifth {
  flex: none;
  width: 20%;
}
.columns.is-mobile > .column.is-two-fifths {
  flex: none;
  width: 40%;
}
.columns.is-mobile > .column.is-three-fifths {
  flex: none;
  width: 60%;
}
.columns.is-mobile > .column.is-four-fifths {
  flex: none;
  width: 80%;
}
.columns.is-mobile > .column.is-offset-three-quarters {
  margin-left: 75%;
}
.columns.is-mobile > .column.is-offset-two-thirds {
  margin-left: 66.6666%;
}
.columns.is-mobile > .column.is-offset-half {
  margin-left: 50%;
}
.columns.is-mobile > .column.is-offset-one-third {
  margin-left: 33.3333%;
}
.columns.is-mobile > .column.is-offset-one-quarter {
  margin-left: 25%;
}
.columns.is-mobile > .column.is-offset-one-fifth {
  margin-left: 20%;
}
.columns.is-mobile > .column.is-offset-two-fifths {
  margin-left: 40%;
}
.columns.is-mobile > .column.is-offset-three-fifths {
  margin-left: 60%;
}
.columns.is-mobile > .column.is-offset-four-fifths {
  margin-left: 80%;
}
.columns.is-mobile > .column.is-0 {
  flex: none;
  width: 0%;
}
.columns.is-mobile > .column.is-offset-0 {
  margin-left: 0%;
}
.columns.is-mobile > .column.is-1 {
  flex: none;
  width: 8.33333337%;
}
.columns.is-mobile > .column.is-offset-1 {
  margin-left: 8.33333337%;
}
.columns.is-mobile > .column.is-2 {
  flex: none;
  width: 16.66666674%;
}
.columns.is-mobile > .column.is-offset-2 {
  margin-left: 16.66666674%;
}
.columns.is-mobile > .column.is-3 {
  flex: none;
  width: 25%;
}
.columns.is-mobile > .column.is-offset-3 {
  margin-left: 25%;
}
.columns.is-mobile > .column.is-4 {
  flex: none;
  width: 33.33333337%;
}
.columns.is-mobile > .column.is-offset-4 {
  margin-left: 33.33333337%;
}
.columns.is-mobile > .column.is-5 {
  flex: none;
  width: 41.66666674%;
}
.columns.is-mobile > .column.is-offset-5 {
  margin-left: 41.66666674%;
}
.columns.is-mobile > .column.is-6 {
  flex: none;
  width: 50%;
}
.columns.is-mobile > .column.is-offset-6 {
  margin-left: 50%;
}
.columns.is-mobile > .column.is-7 {
  flex: none;
  width: 58.33333337%;
}
.columns.is-mobile > .column.is-offset-7 {
  margin-left: 58.33333337%;
}
.columns.is-mobile > .column.is-8 {
  flex: none;
  width: 66.66666674%;
}
.columns.is-mobile > .column.is-offset-8 {
  margin-left: 66.66666674%;
}
.columns.is-mobile > .column.is-9 {
  flex: none;
  width: 75%;
}
.columns.is-mobile > .column.is-offset-9 {
  margin-left: 75%;
}
.columns.is-mobile > .column.is-10 {
  flex: none;
  width: 83.33333337%;
}
.columns.is-mobile > .column.is-offset-10 {
  margin-left: 83.33333337%;
}
.columns.is-mobile > .column.is-11 {
  flex: none;
  width: 91.66666674%;
}
.columns.is-mobile > .column.is-offset-11 {
  margin-left: 91.66666674%;
}
.columns.is-mobile > .column.is-12 {
  flex: none;
  width: 100%;
}
.columns.is-mobile > .column.is-offset-12 {
  margin-left: 100%;
}
@media screen and (max-width: 768px) {
  .column.is-narrow-mobile {
    flex: none;
    width: unset;
  }
  .column.is-full-mobile {
    flex: none;
    width: 100%;
  }
  .column.is-three-quarters-mobile {
    flex: none;
    width: 75%;
  }
  .column.is-two-thirds-mobile {
    flex: none;
    width: 66.6666%;
  }
  .column.is-half-mobile {
    flex: none;
    width: 50%;
  }
  .column.is-one-third-mobile {
    flex: none;
    width: 33.3333%;
  }
  .column.is-one-quarter-mobile {
    flex: none;
    width: 25%;
  }
  .column.is-one-fifth-mobile {
    flex: none;
    width: 20%;
  }
  .column.is-two-fifths-mobile {
    flex: none;
    width: 40%;
  }
  .column.is-three-fifths-mobile {
    flex: none;
    width: 60%;
  }
  .column.is-four-fifths-mobile {
    flex: none;
    width: 80%;
  }
  .column.is-offset-three-quarters-mobile {
    margin-left: 75%;
  }
  .column.is-offset-two-thirds-mobile {
    margin-left: 66.6666%;
  }
  .column.is-offset-half-mobile {
    margin-left: 50%;
  }
  .column.is-offset-one-third-mobile {
    margin-left: 33.3333%;
  }
  .column.is-offset-one-quarter-mobile {
    margin-left: 25%;
  }
  .column.is-offset-one-fifth-mobile {
    margin-left: 20%;
  }
  .column.is-offset-two-fifths-mobile {
    margin-left: 40%;
  }
  .column.is-offset-three-fifths-mobile {
    margin-left: 60%;
  }
  .column.is-offset-four-fifths-mobile {
    margin-left: 80%;
  }
  .column.is-0-mobile {
    flex: none;
    width: 0%;
  }
  .column.is-offset-0-mobile {
    margin-left: 0%;
  }
  .column.is-1-mobile {
    flex: none;
    width: 8.33333337%;
  }
  .column.is-offset-1-mobile {
    margin-left: 8.33333337%;
  }
  .column.is-2-mobile {
    flex: none;
    width: 16.66666674%;
  }
  .column.is-offset-2-mobile {
    margin-left: 16.66666674%;
  }
  .column.is-3-mobile {
    flex: none;
    width: 25%;
  }
  .column.is-offset-3-mobile {
    margin-left: 25%;
  }
  .column.is-4-mobile {
    flex: none;
    width: 33.33333337%;
  }
  .column.is-offset-4-mobile {
    margin-left: 33.33333337%;
  }
  .column.is-5-mobile {
    flex: none;
    width: 41.66666674%;
  }
  .column.is-offset-5-mobile {
    margin-left: 41.66666674%;
  }
  .column.is-6-mobile {
    flex: none;
    width: 50%;
  }
  .column.is-offset-6-mobile {
    margin-left: 50%;
  }
  .column.is-7-mobile {
    flex: none;
    width: 58.33333337%;
  }
  .column.is-offset-7-mobile {
    margin-left: 58.33333337%;
  }
  .column.is-8-mobile {
    flex: none;
    width: 66.66666674%;
  }
  .column.is-offset-8-mobile {
    margin-left: 66.66666674%;
  }
  .column.is-9-mobile {
    flex: none;
    width: 75%;
  }
  .column.is-offset-9-mobile {
    margin-left: 75%;
  }
  .column.is-10-mobile {
    flex: none;
    width: 83.33333337%;
  }
  .column.is-offset-10-mobile {
    margin-left: 83.33333337%;
  }
  .column.is-11-mobile {
    flex: none;
    width: 91.66666674%;
  }
  .column.is-offset-11-mobile {
    margin-left: 91.66666674%;
  }
  .column.is-12-mobile {
    flex: none;
    width: 100%;
  }
  .column.is-offset-12-mobile {
    margin-left: 100%;
  }
}
@media screen and (min-width: 769px), print {
  .column.is-narrow, .column.is-narrow-tablet {
    flex: none;
    width: unset;
  }
  .column.is-full, .column.is-full-tablet {
    flex: none;
    width: 100%;
  }
  .column.is-three-quarters, .column.is-three-quarters-tablet {
    flex: none;
    width: 75%;
  }
  .column.is-two-thirds, .column.is-two-thirds-tablet {
    flex: none;
    width: 66.6666%;
  }
  .column.is-half, .column.is-half-tablet {
    flex: none;
    width: 50%;
  }
  .column.is-one-third, .column.is-one-third-tablet {
    flex: none;
    width: 33.3333%;
  }
  .column.is-one-quarter, .column.is-one-quarter-tablet {
    flex: none;
    width: 25%;
  }
  .column.is-one-fifth, .column.is-one-fifth-tablet {
    flex: none;
    width: 20%;
  }
  .column.is-two-fifths, .column.is-two-fifths-tablet {
    flex: none;
    width: 40%;
  }
  .column.is-three-fifths, .column.is-three-fifths-tablet {
    flex: none;
    width: 60%;
  }
  .column.is-four-fifths, .column.is-four-fifths-tablet {
    flex: none;
    width: 80%;
  }
  .column.is-offset-three-quarters, .column.is-offset-three-quarters-tablet {
    margin-left: 75%;
  }
  .column.is-offset-two-thirds, .column.is-offset-two-thirds-tablet {
    margin-left: 66.6666%;
  }
  .column.is-offset-half, .column.is-offset-half-tablet {
    margin-left: 50%;
  }
  .column.is-offset-one-third, .column.is-offset-one-third-tablet {
    margin-left: 33.3333%;
  }
  .column.is-offset-one-quarter, .column.is-offset-one-quarter-tablet {
    margin-left: 25%;
  }
  .column.is-offset-one-fifth, .column.is-offset-one-fifth-tablet {
    margin-left: 20%;
  }
  .column.is-offset-two-fifths, .column.is-offset-two-fifths-tablet {
    margin-left: 40%;
  }
  .column.is-offset-three-fifths, .column.is-offset-three-fifths-tablet {
    margin-left: 60%;
  }
  .column.is-offset-four-fifths, .column.is-offset-four-fifths-tablet {
    margin-left: 80%;
  }
  .column.is-0, .column.is-0-tablet {
    flex: none;
    width: 0%;
  }
  .column.is-offset-0, .column.is-offset-0-tablet {
    margin-left: 0%;
  }
  .column.is-1, .column.is-1-tablet {
    flex: none;
    width: 8.33333337%;
  }
  .column.is-offset-1, .column.is-offset-1-tablet {
    margin-left: 8.33333337%;
  }
  .column.is-2, .column.is-2-tablet {
    flex: none;
    width: 16.66666674%;
  }
  .column.is-offset-2, .column.is-offset-2-tablet {
    margin-left: 16.66666674%;
  }
  .column.is-3, .column.is-3-tablet {
    flex: none;
    width: 25%;
  }
  .column.is-offset-3, .column.is-offset-3-tablet {
    margin-left: 25%;
  }
  .column.is-4, .column.is-4-tablet {
    flex: none;
    width: 33.33333337%;
  }
  .column.is-offset-4, .column.is-offset-4-tablet {
    margin-left: 33.33333337%;
  }
  .column.is-5, .column.is-5-tablet {
    flex: none;
    width: 41.66666674%;
  }
  .column.is-offset-5, .column.is-offset-5-tablet {
    margin-left: 41.66666674%;
  }
  .column.is-6, .column.is-6-tablet {
    flex: none;
    width: 50%;
  }
  .column.is-offset-6, .column.is-offset-6-tablet {
    margin-left: 50%;
  }
  .column.is-7, .column.is-7-tablet {
    flex: none;
    width: 58.33333337%;
  }
  .column.is-offset-7, .column.is-offset-7-tablet {
    margin-left: 58.33333337%;
  }
  .column.is-8, .column.is-8-tablet {
    flex: none;
    width: 66.66666674%;
  }
  .column.is-offset-8, .column.is-offset-8-tablet {
    margin-left: 66.66666674%;
  }
  .column.is-9, .column.is-9-tablet {
    flex: none;
    width: 75%;
  }
  .column.is-offset-9, .column.is-offset-9-tablet {
    margin-left: 75%;
  }
  .column.is-10, .column.is-10-tablet {
    flex: none;
    width: 83.33333337%;
  }
  .column.is-offset-10, .column.is-offset-10-tablet {
    margin-left: 83.33333337%;
  }
  .column.is-11, .column.is-11-tablet {
    flex: none;
    width: 91.66666674%;
  }
  .column.is-offset-11, .column.is-offset-11-tablet {
    margin-left: 91.66666674%;
  }
  .column.is-12, .column.is-12-tablet {
    flex: none;
    width: 100%;
  }
  .column.is-offset-12, .column.is-offset-12-tablet {
    margin-left: 100%;
  }
}
@media screen and (max-width: 1023px) {
  .column.is-narrow-touch {
    flex: none;
    width: unset;
  }
  .column.is-full-touch {
    flex: none;
    width: 100%;
  }
  .column.is-three-quarters-touch {
    flex: none;
    width: 75%;
  }
  .column.is-two-thirds-touch {
    flex: none;
    width: 66.6666%;
  }
  .column.is-half-touch {
    flex: none;
    width: 50%;
  }
  .column.is-one-third-touch {
    flex: none;
    width: 33.3333%;
  }
  .column.is-one-quarter-touch {
    flex: none;
    width: 25%;
  }
  .column.is-one-fifth-touch {
    flex: none;
    width: 20%;
  }
  .column.is-two-fifths-touch {
    flex: none;
    width: 40%;
  }
  .column.is-three-fifths-touch {
    flex: none;
    width: 60%;
  }
  .column.is-four-fifths-touch {
    flex: none;
    width: 80%;
  }
  .column.is-offset-three-quarters-touch {
    margin-left: 75%;
  }
  .column.is-offset-two-thirds-touch {
    margin-left: 66.6666%;
  }
  .column.is-offset-half-touch {
    margin-left: 50%;
  }
  .column.is-offset-one-third-touch {
    margin-left: 33.3333%;
  }
  .column.is-offset-one-quarter-touch {
    margin-left: 25%;
  }
  .column.is-offset-one-fifth-touch {
    margin-left: 20%;
  }
  .column.is-offset-two-fifths-touch {
    margin-left: 40%;
  }
  .column.is-offset-three-fifths-touch {
    margin-left: 60%;
  }
  .column.is-offset-four-fifths-touch {
    margin-left: 80%;
  }
  .column.is-0-touch {
    flex: none;
    width: 0%;
  }
  .column.is-offset-0-touch {
    margin-left: 0%;
  }
  .column.is-1-touch {
    flex: none;
    width: 8.33333337%;
  }
  .column.is-offset-1-touch {
    margin-left: 8.33333337%;
  }
  .column.is-2-touch {
    flex: none;
    width: 16.66666674%;
  }
  .column.is-offset-2-touch {
    margin-left: 16.66666674%;
  }
  .column.is-3-touch {
    flex: none;
    width: 25%;
  }
  .column.is-offset-3-touch {
    margin-left: 25%;
  }
  .column.is-4-touch {
    flex: none;
    width: 33.33333337%;
  }
  .column.is-offset-4-touch {
    margin-left: 33.33333337%;
  }
  .column.is-5-touch {
    flex: none;
    width: 41.66666674%;
  }
  .column.is-offset-5-touch {
    margin-left: 41.66666674%;
  }
  .column.is-6-touch {
    flex: none;
    width: 50%;
  }
  .column.is-offset-6-touch {
    margin-left: 50%;
  }
  .column.is-7-touch {
    flex: none;
    width: 58.33333337%;
  }
  .column.is-offset-7-touch {
    margin-left: 58.33333337%;
  }
  .column.is-8-touch {
    flex: none;
    width: 66.66666674%;
  }
  .column.is-offset-8-touch {
    margin-left: 66.66666674%;
  }
  .column.is-9-touch {
    flex: none;
    width: 75%;
  }
  .column.is-offset-9-touch {
    margin-left: 75%;
  }
  .column.is-10-touch {
    flex: none;
    width: 83.33333337%;
  }
  .column.is-offset-10-touch {
    margin-left: 83.33333337%;
  }
  .column.is-11-touch {
    flex: none;
    width: 91.66666674%;
  }
  .column.is-offset-11-touch {
    margin-left: 91.66666674%;
  }
  .column.is-12-touch {
    flex: none;
    width: 100%;
  }
  .column.is-offset-12-touch {
    margin-left: 100%;
  }
}
@media screen and (min-width: 1024px) {
  .column.is-narrow-desktop {
    flex: none;
    width: unset;
  }
  .column.is-full-desktop {
    flex: none;
    width: 100%;
  }
  .column.is-three-quarters-desktop {
    flex: none;
    width: 75%;
  }
  .column.is-two-thirds-desktop {
    flex: none;
    width: 66.6666%;
  }
  .column.is-half-desktop {
    flex: none;
    width: 50%;
  }
  .column.is-one-third-desktop {
    flex: none;
    width: 33.3333%;
  }
  .column.is-one-quarter-desktop {
    flex: none;
    width: 25%;
  }
  .column.is-one-fifth-desktop {
    flex: none;
    width: 20%;
  }
  .column.is-two-fifths-desktop {
    flex: none;
    width: 40%;
  }
  .column.is-three-fifths-desktop {
    flex: none;
    width: 60%;
  }
  .column.is-four-fifths-desktop {
    flex: none;
    width: 80%;
  }
  .column.is-offset-three-quarters-desktop {
    margin-left: 75%;
  }
  .column.is-offset-two-thirds-desktop {
    margin-left: 66.6666%;
  }
  .column.is-offset-half-desktop {
    margin-left: 50%;
  }
  .column.is-offset-one-third-desktop {
    margin-left: 33.3333%;
  }
  .column.is-offset-one-quarter-desktop {
    margin-left: 25%;
  }
  .column.is-offset-one-fifth-desktop {
    margin-left: 20%;
  }
  .column.is-offset-two-fifths-desktop {
    margin-left: 40%;
  }
  .column.is-offset-three-fifths-desktop {
    margin-left: 60%;
  }
  .column.is-offset-four-fifths-desktop {
    margin-left: 80%;
  }
  .column.is-0-desktop {
    flex: none;
    width: 0%;
  }
  .column.is-offset-0-desktop {
    margin-left: 0%;
  }
  .column.is-1-desktop {
    flex: none;
    width: 8.33333337%;
  }
  .column.is-offset-1-desktop {
    margin-left: 8.33333337%;
  }
  .column.is-2-desktop {
    flex: none;
    width: 16.66666674%;
  }
  .column.is-offset-2-desktop {
    margin-left: 16.66666674%;
  }
  .column.is-3-desktop {
    flex: none;
    width: 25%;
  }
  .column.is-offset-3-desktop {
    margin-left: 25%;
  }
  .column.is-4-desktop {
    flex: none;
    width: 33.33333337%;
  }
  .column.is-offset-4-desktop {
    margin-left: 33.33333337%;
  }
  .column.is-5-desktop {
    flex: none;
    width: 41.66666674%;
  }
  .column.is-offset-5-desktop {
    margin-left: 41.66666674%;
  }
  .column.is-6-desktop {
    flex: none;
    width: 50%;
  }
  .column.is-offset-6-desktop {
    margin-left: 50%;
  }
  .column.is-7-desktop {
    flex: none;
    width: 58.33333337%;
  }
  .column.is-offset-7-desktop {
    margin-left: 58.33333337%;
  }
  .column.is-8-desktop {
    flex: none;
    width: 66.66666674%;
  }
  .column.is-offset-8-desktop {
    margin-left: 66.66666674%;
  }
  .column.is-9-desktop {
    flex: none;
    width: 75%;
  }
  .column.is-offset-9-desktop {
    margin-left: 75%;
  }
  .column.is-10-desktop {
    flex: none;
    width: 83.33333337%;
  }
  .column.is-offset-10-desktop {
    margin-left: 83.33333337%;
  }
  .column.is-11-desktop {
    flex: none;
    width: 91.66666674%;
  }
  .column.is-offset-11-desktop {
    margin-left: 91.66666674%;
  }
  .column.is-12-desktop {
    flex: none;
    width: 100%;
  }
  .column.is-offset-12-desktop {
    margin-left: 100%;
  }
}
@media screen and (min-width: 1216px) {
  .column.is-narrow-widescreen {
    flex: none;
    width: unset;
  }
  .column.is-full-widescreen {
    flex: none;
    width: 100%;
  }
  .column.is-three-quarters-widescreen {
    flex: none;
    width: 75%;
  }
  .column.is-two-thirds-widescreen {
    flex: none;
    width: 66.6666%;
  }
  .column.is-half-widescreen {
    flex: none;
    width: 50%;
  }
  .column.is-one-third-widescreen {
    flex: none;
    width: 33.3333%;
  }
  .column.is-one-quarter-widescreen {
    flex: none;
    width: 25%;
  }
  .column.is-one-fifth-widescreen {
    flex: none;
    width: 20%;
  }
  .column.is-two-fifths-widescreen {
    flex: none;
    width: 40%;
  }
  .column.is-three-fifths-widescreen {
    flex: none;
    width: 60%;
  }
  .column.is-four-fifths-widescreen {
    flex: none;
    width: 80%;
  }
  .column.is-offset-three-quarters-widescreen {
    margin-left: 75%;
  }
  .column.is-offset-two-thirds-widescreen {
    margin-left: 66.6666%;
  }
  .column.is-offset-half-widescreen {
    margin-left: 50%;
  }
  .column.is-offset-one-third-widescreen {
    margin-left: 33.3333%;
  }
  .column.is-offset-one-quarter-widescreen {
    margin-left: 25%;
  }
  .column.is-offset-one-fifth-widescreen {
    margin-left: 20%;
  }
  .column.is-offset-two-fifths-widescreen {
    margin-left: 40%;
  }
  .column.is-offset-three-fifths-widescreen {
    margin-left: 60%;
  }
  .column.is-offset-four-fifths-widescreen {
    margin-left: 80%;
  }
  .column.is-0-widescreen {
    flex: none;
    width: 0%;
  }
  .column.is-offset-0-widescreen {
    margin-left: 0%;
  }
  .column.is-1-widescreen {
    flex: none;
    width: 8.33333337%;
  }
  .column.is-offset-1-widescreen {
    margin-left: 8.33333337%;
  }
  .column.is-2-widescreen {
    flex: none;
    width: 16.66666674%;
  }
  .column.is-offset-2-widescreen {
    margin-left: 16.66666674%;
  }
  .column.is-3-widescreen {
    flex: none;
    width: 25%;
  }
  .column.is-offset-3-widescreen {
    margin-left: 25%;
  }
  .column.is-4-widescreen {
    flex: none;
    width: 33.33333337%;
  }
  .column.is-offset-4-widescreen {
    margin-left: 33.33333337%;
  }
  .column.is-5-widescreen {
    flex: none;
    width: 41.66666674%;
  }
  .column.is-offset-5-widescreen {
    margin-left: 41.66666674%;
  }
  .column.is-6-widescreen {
    flex: none;
    width: 50%;
  }
  .column.is-offset-6-widescreen {
    margin-left: 50%;
  }
  .column.is-7-widescreen {
    flex: none;
    width: 58.33333337%;
  }
  .column.is-offset-7-widescreen {
    margin-left: 58.33333337%;
  }
  .column.is-8-widescreen {
    flex: none;
    width: 66.66666674%;
  }
  .column.is-offset-8-widescreen {
    margin-left: 66.66666674%;
  }
  .column.is-9-widescreen {
    flex: none;
    width: 75%;
  }
  .column.is-offset-9-widescreen {
    margin-left: 75%;
  }
  .column.is-10-widescreen {
    flex: none;
    width: 83.33333337%;
  }
  .column.is-offset-10-widescreen {
    margin-left: 83.33333337%;
  }
  .column.is-11-widescreen {
    flex: none;
    width: 91.66666674%;
  }
  .column.is-offset-11-widescreen {
    margin-left: 91.66666674%;
  }
  .column.is-12-widescreen {
    flex: none;
    width: 100%;
  }
  .column.is-offset-12-widescreen {
    margin-left: 100%;
  }
}
@media screen and (min-width: 1408px) {
  .column.is-narrow-fullhd {
    flex: none;
    width: unset;
  }
  .column.is-full-fullhd {
    flex: none;
    width: 100%;
  }
  .column.is-three-quarters-fullhd {
    flex: none;
    width: 75%;
  }
  .column.is-two-thirds-fullhd {
    flex: none;
    width: 66.6666%;
  }
  .column.is-half-fullhd {
    flex: none;
    width: 50%;
  }
  .column.is-one-third-fullhd {
    flex: none;
    width: 33.3333%;
  }
  .column.is-one-quarter-fullhd {
    flex: none;
    width: 25%;
  }
  .column.is-one-fifth-fullhd {
    flex: none;
    width: 20%;
  }
  .column.is-two-fifths-fullhd {
    flex: none;
    width: 40%;
  }
  .column.is-three-fifths-fullhd {
    flex: none;
    width: 60%;
  }
  .column.is-four-fifths-fullhd {
    flex: none;
    width: 80%;
  }
  .column.is-offset-three-quarters-fullhd {
    margin-left: 75%;
  }
  .column.is-offset-two-thirds-fullhd {
    margin-left: 66.6666%;
  }
  .column.is-offset-half-fullhd {
    margin-left: 50%;
  }
  .column.is-offset-one-third-fullhd {
    margin-left: 33.3333%;
  }
  .column.is-offset-one-quarter-fullhd {
    margin-left: 25%;
  }
  .column.is-offset-one-fifth-fullhd {
    margin-left: 20%;
  }
  .column.is-offset-two-fifths-fullhd {
    margin-left: 40%;
  }
  .column.is-offset-three-fifths-fullhd {
    margin-left: 60%;
  }
  .column.is-offset-four-fifths-fullhd {
    margin-left: 80%;
  }
  .column.is-0-fullhd {
    flex: none;
    width: 0%;
  }
  .column.is-offset-0-fullhd {
    margin-left: 0%;
  }
  .column.is-1-fullhd {
    flex: none;
    width: 8.33333337%;
  }
  .column.is-offset-1-fullhd {
    margin-left: 8.33333337%;
  }
  .column.is-2-fullhd {
    flex: none;
    width: 16.66666674%;
  }
  .column.is-offset-2-fullhd {
    margin-left: 16.66666674%;
  }
  .column.is-3-fullhd {
    flex: none;
    width: 25%;
  }
  .column.is-offset-3-fullhd {
    margin-left: 25%;
  }
  .column.is-4-fullhd {
    flex: none;
    width: 33.33333337%;
  }
  .column.is-offset-4-fullhd {
    margin-left: 33.33333337%;
  }
  .column.is-5-fullhd {
    flex: none;
    width: 41.66666674%;
  }
  .column.is-offset-5-fullhd {
    margin-left: 41.66666674%;
  }
  .column.is-6-fullhd {
    flex: none;
    width: 50%;
  }
  .column.is-offset-6-fullhd {
    margin-left: 50%;
  }
  .column.is-7-fullhd {
    flex: none;
    width: 58.33333337%;
  }
  .column.is-offset-7-fullhd {
    margin-left: 58.33333337%;
  }
  .column.is-8-fullhd {
    flex: none;
    width: 66.66666674%;
  }
  .column.is-offset-8-fullhd {
    margin-left: 66.66666674%;
  }
  .column.is-9-fullhd {
    flex: none;
    width: 75%;
  }
  .column.is-offset-9-fullhd {
    margin-left: 75%;
  }
  .column.is-10-fullhd {
    flex: none;
    width: 83.33333337%;
  }
  .column.is-offset-10-fullhd {
    margin-left: 83.33333337%;
  }
  .column.is-11-fullhd {
    flex: none;
    width: 91.66666674%;
  }
  .column.is-offset-11-fullhd {
    margin-left: 91.66666674%;
  }
  .column.is-12-fullhd {
    flex: none;
    width: 100%;
  }
  .column.is-offset-12-fullhd {
    margin-left: 100%;
  }
}

.columns {
  margin-left: -0.75rem;
  margin-right: -0.75rem;
  margin-top: -0.75rem;
}
.columns:last-child {
  margin-bottom: -0.75rem;
}
.columns:not(:last-child) {
  margin-bottom: calc(1.5rem - 0.75rem);
}
.columns.is-centered {
  justify-content: center;
}
.columns.is-gapless {
  margin-left: 0;
  margin-right: 0;
  margin-top: 0;
}
.columns.is-gapless > .column {
  margin: 0;
  padding: 0 !important;
}
.columns.is-gapless:not(:last-child) {
  margin-bottom: 1.5rem;
}
.columns.is-gapless:last-child {
  margin-bottom: 0;
}
.columns.is-mobile {
  display: flex;
}
.columns.is-multiline {
  flex-wrap: wrap;
}
.columns.is-vcentered {
  align-items: center;
}
@media screen and (min-width: 769px), print {
  .columns:not(.is-desktop) {
    display: flex;
  }
}
@media screen and (min-width: 1024px) {
  .columns.is-desktop {
    display: flex;
  }
}

.columns.is-variable {
  --columnGap: 0.75rem;
  margin-left: calc(-1 * var(--columnGap));
  margin-right: calc(-1 * var(--columnGap));
}
.columns.is-variable > .column {
  padding-left: var(--columnGap);
  padding-right: var(--columnGap);
}
.columns.is-variable.is-0 {
  --columnGap: 0rem;
}
@media screen and (max-width: 768px) {
  .columns.is-variable.is-0-mobile {
    --columnGap: 0rem;
  }
}
@media screen and (min-width: 769px), print {
  .columns.is-variable.is-0-tablet {
    --columnGap: 0rem;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .columns.is-variable.is-0-tablet-only {
    --columnGap: 0rem;
  }
}
@media screen and (max-width: 1023px) {
  .columns.is-variable.is-0-touch {
    --columnGap: 0rem;
  }
}
@media screen and (min-width: 1024px) {
  .columns.is-variable.is-0-desktop {
    --columnGap: 0rem;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .columns.is-variable.is-0-desktop-only {
    --columnGap: 0rem;
  }
}
@media screen and (min-width: 1216px) {
  .columns.is-variable.is-0-widescreen {
    --columnGap: 0rem;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .columns.is-variable.is-0-widescreen-only {
    --columnGap: 0rem;
  }
}
@media screen and (min-width: 1408px) {
  .columns.is-variable.is-0-fullhd {
    --columnGap: 0rem;
  }
}
.columns.is-variable.is-1 {
  --columnGap: 0.25rem;
}
@media screen and (max-width: 768px) {
  .columns.is-variable.is-1-mobile {
    --columnGap: 0.25rem;
  }
}
@media screen and (min-width: 769px), print {
  .columns.is-variable.is-1-tablet {
    --columnGap: 0.25rem;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .columns.is-variable.is-1-tablet-only {
    --columnGap: 0.25rem;
  }
}
@media screen and (max-width: 1023px) {
  .columns.is-variable.is-1-touch {
    --columnGap: 0.25rem;
  }
}
@media screen and (min-width: 1024px) {
  .columns.is-variable.is-1-desktop {
    --columnGap: 0.25rem;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .columns.is-variable.is-1-desktop-only {
    --columnGap: 0.25rem;
  }
}
@media screen and (min-width: 1216px) {
  .columns.is-variable.is-1-widescreen {
    --columnGap: 0.25rem;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .columns.is-variable.is-1-widescreen-only {
    --columnGap: 0.25rem;
  }
}
@media screen and (min-width: 1408px) {
  .columns.is-variable.is-1-fullhd {
    --columnGap: 0.25rem;
  }
}
.columns.is-variable.is-2 {
  --columnGap: 0.5rem;
}
@media screen and (max-width: 768px) {
  .columns.is-variable.is-2-mobile {
    --columnGap: 0.5rem;
  }
}
@media screen and (min-width: 769px), print {
  .columns.is-variable.is-2-tablet {
    --columnGap: 0.5rem;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .columns.is-variable.is-2-tablet-only {
    --columnGap: 0.5rem;
  }
}
@media screen and (max-width: 1023px) {
  .columns.is-variable.is-2-touch {
    --columnGap: 0.5rem;
  }
}
@media screen and (min-width: 1024px) {
  .columns.is-variable.is-2-desktop {
    --columnGap: 0.5rem;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .columns.is-variable.is-2-desktop-only {
    --columnGap: 0.5rem;
  }
}
@media screen and (min-width: 1216px) {
  .columns.is-variable.is-2-widescreen {
    --columnGap: 0.5rem;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .columns.is-variable.is-2-widescreen-only {
    --columnGap: 0.5rem;
  }
}
@media screen and (min-width: 1408px) {
  .columns.is-variable.is-2-fullhd {
    --columnGap: 0.5rem;
  }
}
.columns.is-variable.is-3 {
  --columnGap: 0.75rem;
}
@media screen and (max-width: 768px) {
  .columns.is-variable.is-3-mobile {
    --columnGap: 0.75rem;
  }
}
@media screen and (min-width: 769px), print {
  .columns.is-variable.is-3-tablet {
    --columnGap: 0.75rem;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .columns.is-variable.is-3-tablet-only {
    --columnGap: 0.75rem;
  }
}
@media screen and (max-width: 1023px) {
  .columns.is-variable.is-3-touch {
    --columnGap: 0.75rem;
  }
}
@media screen and (min-width: 1024px) {
  .columns.is-variable.is-3-desktop {
    --columnGap: 0.75rem;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .columns.is-variable.is-3-desktop-only {
    --columnGap: 0.75rem;
  }
}
@media screen and (min-width: 1216px) {
  .columns.is-variable.is-3-widescreen {
    --columnGap: 0.75rem;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .columns.is-variable.is-3-widescreen-only {
    --columnGap: 0.75rem;
  }
}
@media screen and (min-width: 1408px) {
  .columns.is-variable.is-3-fullhd {
    --columnGap: 0.75rem;
  }
}
.columns.is-variable.is-4 {
  --columnGap: 1rem;
}
@media screen and (max-width: 768px) {
  .columns.is-variable.is-4-mobile {
    --columnGap: 1rem;
  }
}
@media screen and (min-width: 769px), print {
  .columns.is-variable.is-4-tablet {
    --columnGap: 1rem;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .columns.is-variable.is-4-tablet-only {
    --columnGap: 1rem;
  }
}
@media screen and (max-width: 1023px) {
  .columns.is-variable.is-4-touch {
    --columnGap: 1rem;
  }
}
@media screen and (min-width: 1024px) {
  .columns.is-variable.is-4-desktop {
    --columnGap: 1rem;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .columns.is-variable.is-4-desktop-only {
    --columnGap: 1rem;
  }
}
@media screen and (min-width: 1216px) {
  .columns.is-variable.is-4-widescreen {
    --columnGap: 1rem;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .columns.is-variable.is-4-widescreen-only {
    --columnGap: 1rem;
  }
}
@media screen and (min-width: 1408px) {
  .columns.is-variable.is-4-fullhd {
    --columnGap: 1rem;
  }
}
.columns.is-variable.is-5 {
  --columnGap: 1.25rem;
}
@media screen and (max-width: 768px) {
  .columns.is-variable.is-5-mobile {
    --columnGap: 1.25rem;
  }
}
@media screen and (min-width: 769px), print {
  .columns.is-variable.is-5-tablet {
    --columnGap: 1.25rem;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .columns.is-variable.is-5-tablet-only {
    --columnGap: 1.25rem;
  }
}
@media screen and (max-width: 1023px) {
  .columns.is-variable.is-5-touch {
    --columnGap: 1.25rem;
  }
}
@media screen and (min-width: 1024px) {
  .columns.is-variable.is-5-desktop {
    --columnGap: 1.25rem;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .columns.is-variable.is-5-desktop-only {
    --columnGap: 1.25rem;
  }
}
@media screen and (min-width: 1216px) {
  .columns.is-variable.is-5-widescreen {
    --columnGap: 1.25rem;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .columns.is-variable.is-5-widescreen-only {
    --columnGap: 1.25rem;
  }
}
@media screen and (min-width: 1408px) {
  .columns.is-variable.is-5-fullhd {
    --columnGap: 1.25rem;
  }
}
.columns.is-variable.is-6 {
  --columnGap: 1.5rem;
}
@media screen and (max-width: 768px) {
  .columns.is-variable.is-6-mobile {
    --columnGap: 1.5rem;
  }
}
@media screen and (min-width: 769px), print {
  .columns.is-variable.is-6-tablet {
    --columnGap: 1.5rem;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .columns.is-variable.is-6-tablet-only {
    --columnGap: 1.5rem;
  }
}
@media screen and (max-width: 1023px) {
  .columns.is-variable.is-6-touch {
    --columnGap: 1.5rem;
  }
}
@media screen and (min-width: 1024px) {
  .columns.is-variable.is-6-desktop {
    --columnGap: 1.5rem;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .columns.is-variable.is-6-desktop-only {
    --columnGap: 1.5rem;
  }
}
@media screen and (min-width: 1216px) {
  .columns.is-variable.is-6-widescreen {
    --columnGap: 1.5rem;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .columns.is-variable.is-6-widescreen-only {
    --columnGap: 1.5rem;
  }
}
@media screen and (min-width: 1408px) {
  .columns.is-variable.is-6-fullhd {
    --columnGap: 1.5rem;
  }
}
.columns.is-variable.is-7 {
  --columnGap: 1.75rem;
}
@media screen and (max-width: 768px) {
  .columns.is-variable.is-7-mobile {
    --columnGap: 1.75rem;
  }
}
@media screen and (min-width: 769px), print {
  .columns.is-variable.is-7-tablet {
    --columnGap: 1.75rem;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .columns.is-variable.is-7-tablet-only {
    --columnGap: 1.75rem;
  }
}
@media screen and (max-width: 1023px) {
  .columns.is-variable.is-7-touch {
    --columnGap: 1.75rem;
  }
}
@media screen and (min-width: 1024px) {
  .columns.is-variable.is-7-desktop {
    --columnGap: 1.75rem;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .columns.is-variable.is-7-desktop-only {
    --columnGap: 1.75rem;
  }
}
@media screen and (min-width: 1216px) {
  .columns.is-variable.is-7-widescreen {
    --columnGap: 1.75rem;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .columns.is-variable.is-7-widescreen-only {
    --columnGap: 1.75rem;
  }
}
@media screen and (min-width: 1408px) {
  .columns.is-variable.is-7-fullhd {
    --columnGap: 1.75rem;
  }
}
.columns.is-variable.is-8 {
  --columnGap: 2rem;
}
@media screen and (max-width: 768px) {
  .columns.is-variable.is-8-mobile {
    --columnGap: 2rem;
  }
}
@media screen and (min-width: 769px), print {
  .columns.is-variable.is-8-tablet {
    --columnGap: 2rem;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .columns.is-variable.is-8-tablet-only {
    --columnGap: 2rem;
  }
}
@media screen and (max-width: 1023px) {
  .columns.is-variable.is-8-touch {
    --columnGap: 2rem;
  }
}
@media screen and (min-width: 1024px) {
  .columns.is-variable.is-8-desktop {
    --columnGap: 2rem;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .columns.is-variable.is-8-desktop-only {
    --columnGap: 2rem;
  }
}
@media screen and (min-width: 1216px) {
  .columns.is-variable.is-8-widescreen {
    --columnGap: 2rem;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .columns.is-variable.is-8-widescreen-only {
    --columnGap: 2rem;
  }
}
@media screen and (min-width: 1408px) {
  .columns.is-variable.is-8-fullhd {
    --columnGap: 2rem;
  }
}

.tile {
  align-items: stretch;
  display: block;
  flex-basis: 0;
  flex-grow: 1;
  flex-shrink: 1;
  min-height: min-content;
}
.tile.is-ancestor {
  margin-left: -0.75rem;
  margin-right: -0.75rem;
  margin-top: -0.75rem;
}
.tile.is-ancestor:last-child {
  margin-bottom: -0.75rem;
}
.tile.is-ancestor:not(:last-child) {
  margin-bottom: 0.75rem;
}
.tile.is-child {
  margin: 0 !important;
}
.tile.is-parent {
  padding: 0.75rem;
}
.tile.is-vertical {
  flex-direction: column;
}
.tile.is-vertical > .tile.is-child:not(:last-child) {
  margin-bottom: 1.5rem !important;
}
@media screen and (min-width: 769px), print {
  .tile:not(.is-child) {
    display: flex;
  }
  .tile.is-1 {
    flex: none;
    width: 8.33333337%;
  }
  .tile.is-2 {
    flex: none;
    width: 16.66666674%;
  }
  .tile.is-3 {
    flex: none;
    width: 25%;
  }
  .tile.is-4 {
    flex: none;
    width: 33.33333337%;
  }
  .tile.is-5 {
    flex: none;
    width: 41.66666674%;
  }
  .tile.is-6 {
    flex: none;
    width: 50%;
  }
  .tile.is-7 {
    flex: none;
    width: 58.33333337%;
  }
  .tile.is-8 {
    flex: none;
    width: 66.66666674%;
  }
  .tile.is-9 {
    flex: none;
    width: 75%;
  }
  .tile.is-10 {
    flex: none;
    width: 83.33333337%;
  }
  .tile.is-11 {
    flex: none;
    width: 91.66666674%;
  }
  .tile.is-12 {
    flex: none;
    width: 100%;
  }
}

/* Bulma Helpers */
.has-text-white {
  color: white !important;
}

a.has-text-white:hover, a.has-text-white:focus {
  color: #e6e6e6 !important;
}

.has-background-white {
  background-color: white !important;
}

.has-text-black {
  color: #0a0a0a !important;
}

a.has-text-black:hover, a.has-text-black:focus {
  color: black !important;
}

.has-background-black {
  background-color: #0a0a0a !important;
}

.has-text-light {
  color: whitesmoke !important;
}

a.has-text-light:hover, a.has-text-light:focus {
  color: #dbdbdb !important;
}

.has-background-light {
  background-color: whitesmoke !important;
}

.has-text-dark {
  color: #363636 !important;
}

a.has-text-dark:hover, a.has-text-dark:focus {
  color: #1c1c1c !important;
}

.has-background-dark {
  background-color: #363636 !important;
}

.has-text-primary {
  color: #7957d5 !important;
}

a.has-text-primary:hover, a.has-text-primary:focus {
  color: #5a32c7 !important;
}

.has-background-primary {
  background-color: #7957d5 !important;
}

.has-text-primary-light {
  color: #f2effb !important;
}

a.has-text-primary-light:hover, a.has-text-primary-light:focus {
  color: #d1c6f1 !important;
}

.has-background-primary-light {
  background-color: #f2effb !important;
}

.has-text-primary-dark {
  color: #552fbc !important;
}

a.has-text-primary-dark:hover, a.has-text-primary-dark:focus {
  color: #704bd2 !important;
}

.has-background-primary-dark {
  background-color: #552fbc !important;
}

.has-text-link {
  color: #7957d5 !important;
}

a.has-text-link:hover, a.has-text-link:focus {
  color: #5a32c7 !important;
}

.has-background-link {
  background-color: #7957d5 !important;
}

.has-text-link-light {
  color: #f2effb !important;
}

a.has-text-link-light:hover, a.has-text-link-light:focus {
  color: #d1c6f1 !important;
}

.has-background-link-light {
  background-color: #f2effb !important;
}

.has-text-link-dark {
  color: #552fbc !important;
}

a.has-text-link-dark:hover, a.has-text-link-dark:focus {
  color: #704bd2 !important;
}

.has-background-link-dark {
  background-color: #552fbc !important;
}

.has-text-info {
  color: #167df0 !important;
}

a.has-text-info:hover, a.has-text-info:focus {
  color: #0d64c6 !important;
}

.has-background-info {
  background-color: #167df0 !important;
}

.has-text-info-light {
  color: #ecf4fe !important;
}

a.has-text-info-light:hover, a.has-text-info-light:focus {
  color: #bcdafb !important;
}

.has-background-info-light {
  background-color: #ecf4fe !important;
}

.has-text-info-dark {
  color: #0d68ce !important;
}

a.has-text-info-dark:hover, a.has-text-info-dark:focus {
  color: #1e81f1 !important;
}

.has-background-info-dark {
  background-color: #0d68ce !important;
}

.has-text-success {
  color: #48c78e !important;
}

a.has-text-success:hover, a.has-text-success:focus {
  color: #34a873 !important;
}

.has-background-success {
  background-color: #48c78e !important;
}

.has-text-success-light {
  color: #effaf5 !important;
}

a.has-text-success-light:hover, a.has-text-success-light:focus {
  color: #c8eedd !important;
}

.has-background-success-light {
  background-color: #effaf5 !important;
}

.has-text-success-dark {
  color: #257953 !important;
}

a.has-text-success-dark:hover, a.has-text-success-dark:focus {
  color: #31a06e !important;
}

.has-background-success-dark {
  background-color: #257953 !important;
}

.has-text-warning {
  color: #ffe08a !important;
}

a.has-text-warning:hover, a.has-text-warning:focus {
  color: #ffd257 !important;
}

.has-background-warning {
  background-color: #ffe08a !important;
}

.has-text-warning-light {
  color: #fffaeb !important;
}

a.has-text-warning-light:hover, a.has-text-warning-light:focus {
  color: #ffecb8 !important;
}

.has-background-warning-light {
  background-color: #fffaeb !important;
}

.has-text-warning-dark {
  color: #946c00 !important;
}

a.has-text-warning-dark:hover, a.has-text-warning-dark:focus {
  color: #c79200 !important;
}

.has-background-warning-dark {
  background-color: #946c00 !important;
}

.has-text-danger {
  color: #f14668 !important;
}

a.has-text-danger:hover, a.has-text-danger:focus {
  color: #ee1742 !important;
}

.has-background-danger {
  background-color: #f14668 !important;
}

.has-text-danger-light {
  color: #feecf0 !important;
}

a.has-text-danger-light:hover, a.has-text-danger-light:focus {
  color: #fabdc9 !important;
}

.has-background-danger-light {
  background-color: #feecf0 !important;
}

.has-text-danger-dark {
  color: #cc0f35 !important;
}

a.has-text-danger-dark:hover, a.has-text-danger-dark:focus {
  color: #ee2049 !important;
}

.has-background-danger-dark {
  background-color: #cc0f35 !important;
}

.has-text-black-bis {
  color: #121212 !important;
}

.has-background-black-bis {
  background-color: #121212 !important;
}

.has-text-black-ter {
  color: #242424 !important;
}

.has-background-black-ter {
  background-color: #242424 !important;
}

.has-text-grey-darker {
  color: #363636 !important;
}

.has-background-grey-darker {
  background-color: #363636 !important;
}

.has-text-grey-dark {
  color: #4a4a4a !important;
}

.has-background-grey-dark {
  background-color: #4a4a4a !important;
}

.has-text-grey {
  color: #7a7a7a !important;
}

.has-background-grey {
  background-color: #7a7a7a !important;
}

.has-text-grey-light {
  color: #b5b5b5 !important;
}

.has-background-grey-light {
  background-color: #b5b5b5 !important;
}

.has-text-grey-lighter {
  color: #dbdbdb !important;
}

.has-background-grey-lighter {
  background-color: #dbdbdb !important;
}

.has-text-white-ter {
  color: whitesmoke !important;
}

.has-background-white-ter {
  background-color: whitesmoke !important;
}

.has-text-white-bis {
  color: #fafafa !important;
}

.has-background-white-bis {
  background-color: #fafafa !important;
}

.is-flex-direction-row {
  flex-direction: row !important;
}

.is-flex-direction-row-reverse {
  flex-direction: row-reverse !important;
}

.is-flex-direction-column {
  flex-direction: column !important;
}

.is-flex-direction-column-reverse {
  flex-direction: column-reverse !important;
}

.is-flex-wrap-nowrap {
  flex-wrap: nowrap !important;
}

.is-flex-wrap-wrap {
  flex-wrap: wrap !important;
}

.is-flex-wrap-wrap-reverse {
  flex-wrap: wrap-reverse !important;
}

.is-justify-content-flex-start {
  justify-content: flex-start !important;
}

.is-justify-content-flex-end {
  justify-content: flex-end !important;
}

.is-justify-content-center {
  justify-content: center !important;
}

.is-justify-content-space-between {
  justify-content: space-between !important;
}

.is-justify-content-space-around {
  justify-content: space-around !important;
}

.is-justify-content-space-evenly {
  justify-content: space-evenly !important;
}

.is-justify-content-start {
  justify-content: start !important;
}

.is-justify-content-end {
  justify-content: end !important;
}

.is-justify-content-left {
  justify-content: left !important;
}

.is-justify-content-right {
  justify-content: right !important;
}

.is-align-content-flex-start {
  align-content: flex-start !important;
}

.is-align-content-flex-end {
  align-content: flex-end !important;
}

.is-align-content-center {
  align-content: center !important;
}

.is-align-content-space-between {
  align-content: space-between !important;
}

.is-align-content-space-around {
  align-content: space-around !important;
}

.is-align-content-space-evenly {
  align-content: space-evenly !important;
}

.is-align-content-stretch {
  align-content: stretch !important;
}

.is-align-content-start {
  align-content: start !important;
}

.is-align-content-end {
  align-content: end !important;
}

.is-align-content-baseline {
  align-content: baseline !important;
}

.is-align-items-stretch {
  align-items: stretch !important;
}

.is-align-items-flex-start {
  align-items: flex-start !important;
}

.is-align-items-flex-end {
  align-items: flex-end !important;
}

.is-align-items-center {
  align-items: center !important;
}

.is-align-items-baseline {
  align-items: baseline !important;
}

.is-align-items-start {
  align-items: start !important;
}

.is-align-items-end {
  align-items: end !important;
}

.is-align-items-self-start {
  align-items: self-start !important;
}

.is-align-items-self-end {
  align-items: self-end !important;
}

.is-align-self-auto {
  align-self: auto !important;
}

.is-align-self-flex-start {
  align-self: flex-start !important;
}

.is-align-self-flex-end {
  align-self: flex-end !important;
}

.is-align-self-center {
  align-self: center !important;
}

.is-align-self-baseline {
  align-self: baseline !important;
}

.is-align-self-stretch {
  align-self: stretch !important;
}

.is-flex-grow-0 {
  flex-grow: 0 !important;
}

.is-flex-grow-1 {
  flex-grow: 1 !important;
}

.is-flex-grow-2 {
  flex-grow: 2 !important;
}

.is-flex-grow-3 {
  flex-grow: 3 !important;
}

.is-flex-grow-4 {
  flex-grow: 4 !important;
}

.is-flex-grow-5 {
  flex-grow: 5 !important;
}

.is-flex-shrink-0 {
  flex-shrink: 0 !important;
}

.is-flex-shrink-1 {
  flex-shrink: 1 !important;
}

.is-flex-shrink-2 {
  flex-shrink: 2 !important;
}

.is-flex-shrink-3 {
  flex-shrink: 3 !important;
}

.is-flex-shrink-4 {
  flex-shrink: 4 !important;
}

.is-flex-shrink-5 {
  flex-shrink: 5 !important;
}

.is-clearfix::after {
  clear: both;
  content: " ";
  display: table;
}

.is-pulled-left {
  float: left !important;
}

.is-pulled-right {
  float: right !important;
}

.is-radiusless {
  border-radius: 0 !important;
}

.is-shadowless {
  box-shadow: none !important;
}

.is-clickable {
  cursor: pointer !important;
  pointer-events: all !important;
}

.is-clipped {
  overflow: hidden !important;
}

.is-relative {
  position: relative !important;
}

.is-marginless {
  margin: 0 !important;
}

.is-paddingless {
  padding: 0 !important;
}

.m-0 {
  margin: 0 !important;
}

.mt-0 {
  margin-top: 0 !important;
}

.mr-0 {
  margin-right: 0 !important;
}

.mb-0 {
  margin-bottom: 0 !important;
}

.ml-0 {
  margin-left: 0 !important;
}

.mx-0 {
  margin-left: 0 !important;
  margin-right: 0 !important;
}

.my-0 {
  margin-top: 0 !important;
  margin-bottom: 0 !important;
}

.m-1 {
  margin: 0.25rem !important;
}

.mt-1 {
  margin-top: 0.25rem !important;
}

.mr-1 {
  margin-right: 0.25rem !important;
}

.mb-1 {
  margin-bottom: 0.25rem !important;
}

.ml-1 {
  margin-left: 0.25rem !important;
}

.mx-1 {
  margin-left: 0.25rem !important;
  margin-right: 0.25rem !important;
}

.my-1 {
  margin-top: 0.25rem !important;
  margin-bottom: 0.25rem !important;
}

.m-2 {
  margin: 0.5rem !important;
}

.mt-2 {
  margin-top: 0.5rem !important;
}

.mr-2 {
  margin-right: 0.5rem !important;
}

.mb-2 {
  margin-bottom: 0.5rem !important;
}

.ml-2 {
  margin-left: 0.5rem !important;
}

.mx-2 {
  margin-left: 0.5rem !important;
  margin-right: 0.5rem !important;
}

.my-2 {
  margin-top: 0.5rem !important;
  margin-bottom: 0.5rem !important;
}

.m-3 {
  margin: 0.75rem !important;
}

.mt-3 {
  margin-top: 0.75rem !important;
}

.mr-3 {
  margin-right: 0.75rem !important;
}

.mb-3 {
  margin-bottom: 0.75rem !important;
}

.ml-3 {
  margin-left: 0.75rem !important;
}

.mx-3 {
  margin-left: 0.75rem !important;
  margin-right: 0.75rem !important;
}

.my-3 {
  margin-top: 0.75rem !important;
  margin-bottom: 0.75rem !important;
}

.m-4 {
  margin: 1rem !important;
}

.mt-4 {
  margin-top: 1rem !important;
}

.mr-4 {
  margin-right: 1rem !important;
}

.mb-4 {
  margin-bottom: 1rem !important;
}

.ml-4 {
  margin-left: 1rem !important;
}

.mx-4 {
  margin-left: 1rem !important;
  margin-right: 1rem !important;
}

.my-4 {
  margin-top: 1rem !important;
  margin-bottom: 1rem !important;
}

.m-5 {
  margin: 1.5rem !important;
}

.mt-5 {
  margin-top: 1.5rem !important;
}

.mr-5 {
  margin-right: 1.5rem !important;
}

.mb-5 {
  margin-bottom: 1.5rem !important;
}

.ml-5 {
  margin-left: 1.5rem !important;
}

.mx-5 {
  margin-left: 1.5rem !important;
  margin-right: 1.5rem !important;
}

.my-5 {
  margin-top: 1.5rem !important;
  margin-bottom: 1.5rem !important;
}

.m-6 {
  margin: 3rem !important;
}

.mt-6 {
  margin-top: 3rem !important;
}

.mr-6 {
  margin-right: 3rem !important;
}

.mb-6 {
  margin-bottom: 3rem !important;
}

.ml-6 {
  margin-left: 3rem !important;
}

.mx-6 {
  margin-left: 3rem !important;
  margin-right: 3rem !important;
}

.my-6 {
  margin-top: 3rem !important;
  margin-bottom: 3rem !important;
}

.m-auto {
  margin: auto !important;
}

.mt-auto {
  margin-top: auto !important;
}

.mr-auto {
  margin-right: auto !important;
}

.mb-auto {
  margin-bottom: auto !important;
}

.ml-auto {
  margin-left: auto !important;
}

.mx-auto {
  margin-left: auto !important;
  margin-right: auto !important;
}

.my-auto {
  margin-top: auto !important;
  margin-bottom: auto !important;
}

.p-0 {
  padding: 0 !important;
}

.pt-0 {
  padding-top: 0 !important;
}

.pr-0 {
  padding-right: 0 !important;
}

.pb-0 {
  padding-bottom: 0 !important;
}

.pl-0 {
  padding-left: 0 !important;
}

.px-0 {
  padding-left: 0 !important;
  padding-right: 0 !important;
}

.py-0 {
  padding-top: 0 !important;
  padding-bottom: 0 !important;
}

.p-1 {
  padding: 0.25rem !important;
}

.pt-1 {
  padding-top: 0.25rem !important;
}

.pr-1 {
  padding-right: 0.25rem !important;
}

.pb-1 {
  padding-bottom: 0.25rem !important;
}

.pl-1 {
  padding-left: 0.25rem !important;
}

.px-1 {
  padding-left: 0.25rem !important;
  padding-right: 0.25rem !important;
}

.py-1 {
  padding-top: 0.25rem !important;
  padding-bottom: 0.25rem !important;
}

.p-2 {
  padding: 0.5rem !important;
}

.pt-2 {
  padding-top: 0.5rem !important;
}

.pr-2 {
  padding-right: 0.5rem !important;
}

.pb-2 {
  padding-bottom: 0.5rem !important;
}

.pl-2 {
  padding-left: 0.5rem !important;
}

.px-2 {
  padding-left: 0.5rem !important;
  padding-right: 0.5rem !important;
}

.py-2 {
  padding-top: 0.5rem !important;
  padding-bottom: 0.5rem !important;
}

.p-3 {
  padding: 0.75rem !important;
}

.pt-3 {
  padding-top: 0.75rem !important;
}

.pr-3 {
  padding-right: 0.75rem !important;
}

.pb-3 {
  padding-bottom: 0.75rem !important;
}

.pl-3 {
  padding-left: 0.75rem !important;
}

.px-3 {
  padding-left: 0.75rem !important;
  padding-right: 0.75rem !important;
}

.py-3 {
  padding-top: 0.75rem !important;
  padding-bottom: 0.75rem !important;
}

.p-4 {
  padding: 1rem !important;
}

.pt-4 {
  padding-top: 1rem !important;
}

.pr-4 {
  padding-right: 1rem !important;
}

.pb-4 {
  padding-bottom: 1rem !important;
}

.pl-4 {
  padding-left: 1rem !important;
}

.px-4 {
  padding-left: 1rem !important;
  padding-right: 1rem !important;
}

.py-4 {
  padding-top: 1rem !important;
  padding-bottom: 1rem !important;
}

.p-5 {
  padding: 1.5rem !important;
}

.pt-5 {
  padding-top: 1.5rem !important;
}

.pr-5 {
  padding-right: 1.5rem !important;
}

.pb-5 {
  padding-bottom: 1.5rem !important;
}

.pl-5 {
  padding-left: 1.5rem !important;
}

.px-5 {
  padding-left: 1.5rem !important;
  padding-right: 1.5rem !important;
}

.py-5 {
  padding-top: 1.5rem !important;
  padding-bottom: 1.5rem !important;
}

.p-6 {
  padding: 3rem !important;
}

.pt-6 {
  padding-top: 3rem !important;
}

.pr-6 {
  padding-right: 3rem !important;
}

.pb-6 {
  padding-bottom: 3rem !important;
}

.pl-6 {
  padding-left: 3rem !important;
}

.px-6 {
  padding-left: 3rem !important;
  padding-right: 3rem !important;
}

.py-6 {
  padding-top: 3rem !important;
  padding-bottom: 3rem !important;
}

.p-auto {
  padding: auto !important;
}

.pt-auto {
  padding-top: auto !important;
}

.pr-auto {
  padding-right: auto !important;
}

.pb-auto {
  padding-bottom: auto !important;
}

.pl-auto {
  padding-left: auto !important;
}

.px-auto {
  padding-left: auto !important;
  padding-right: auto !important;
}

.py-auto {
  padding-top: auto !important;
  padding-bottom: auto !important;
}

.is-size-1 {
  font-size: 3rem !important;
}

.is-size-2 {
  font-size: 2.5rem !important;
}

.is-size-3 {
  font-size: 2rem !important;
}

.is-size-4 {
  font-size: 1.5rem !important;
}

.is-size-5 {
  font-size: 1.25rem !important;
}

.is-size-6 {
  font-size: 1rem !important;
}

.is-size-7 {
  font-size: 0.75rem !important;
}

@media screen and (max-width: 768px) {
  .is-size-1-mobile {
    font-size: 3rem !important;
  }

  .is-size-2-mobile {
    font-size: 2.5rem !important;
  }

  .is-size-3-mobile {
    font-size: 2rem !important;
  }

  .is-size-4-mobile {
    font-size: 1.5rem !important;
  }

  .is-size-5-mobile {
    font-size: 1.25rem !important;
  }

  .is-size-6-mobile {
    font-size: 1rem !important;
  }

  .is-size-7-mobile {
    font-size: 0.75rem !important;
  }
}
@media screen and (min-width: 769px), print {
  .is-size-1-tablet {
    font-size: 3rem !important;
  }

  .is-size-2-tablet {
    font-size: 2.5rem !important;
  }

  .is-size-3-tablet {
    font-size: 2rem !important;
  }

  .is-size-4-tablet {
    font-size: 1.5rem !important;
  }

  .is-size-5-tablet {
    font-size: 1.25rem !important;
  }

  .is-size-6-tablet {
    font-size: 1rem !important;
  }

  .is-size-7-tablet {
    font-size: 0.75rem !important;
  }
}
@media screen and (max-width: 1023px) {
  .is-size-1-touch {
    font-size: 3rem !important;
  }

  .is-size-2-touch {
    font-size: 2.5rem !important;
  }

  .is-size-3-touch {
    font-size: 2rem !important;
  }

  .is-size-4-touch {
    font-size: 1.5rem !important;
  }

  .is-size-5-touch {
    font-size: 1.25rem !important;
  }

  .is-size-6-touch {
    font-size: 1rem !important;
  }

  .is-size-7-touch {
    font-size: 0.75rem !important;
  }
}
@media screen and (min-width: 1024px) {
  .is-size-1-desktop {
    font-size: 3rem !important;
  }

  .is-size-2-desktop {
    font-size: 2.5rem !important;
  }

  .is-size-3-desktop {
    font-size: 2rem !important;
  }

  .is-size-4-desktop {
    font-size: 1.5rem !important;
  }

  .is-size-5-desktop {
    font-size: 1.25rem !important;
  }

  .is-size-6-desktop {
    font-size: 1rem !important;
  }

  .is-size-7-desktop {
    font-size: 0.75rem !important;
  }
}
@media screen and (min-width: 1216px) {
  .is-size-1-widescreen {
    font-size: 3rem !important;
  }

  .is-size-2-widescreen {
    font-size: 2.5rem !important;
  }

  .is-size-3-widescreen {
    font-size: 2rem !important;
  }

  .is-size-4-widescreen {
    font-size: 1.5rem !important;
  }

  .is-size-5-widescreen {
    font-size: 1.25rem !important;
  }

  .is-size-6-widescreen {
    font-size: 1rem !important;
  }

  .is-size-7-widescreen {
    font-size: 0.75rem !important;
  }
}
@media screen and (min-width: 1408px) {
  .is-size-1-fullhd {
    font-size: 3rem !important;
  }

  .is-size-2-fullhd {
    font-size: 2.5rem !important;
  }

  .is-size-3-fullhd {
    font-size: 2rem !important;
  }

  .is-size-4-fullhd {
    font-size: 1.5rem !important;
  }

  .is-size-5-fullhd {
    font-size: 1.25rem !important;
  }

  .is-size-6-fullhd {
    font-size: 1rem !important;
  }

  .is-size-7-fullhd {
    font-size: 0.75rem !important;
  }
}
.has-text-centered {
  text-align: center !important;
}

.has-text-justified {
  text-align: justify !important;
}

.has-text-left {
  text-align: left !important;
}

.has-text-right {
  text-align: right !important;
}

@media screen and (max-width: 768px) {
  .has-text-centered-mobile {
    text-align: center !important;
  }
}
@media screen and (min-width: 769px), print {
  .has-text-centered-tablet {
    text-align: center !important;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .has-text-centered-tablet-only {
    text-align: center !important;
  }
}
@media screen and (max-width: 1023px) {
  .has-text-centered-touch {
    text-align: center !important;
  }
}
@media screen and (min-width: 1024px) {
  .has-text-centered-desktop {
    text-align: center !important;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .has-text-centered-desktop-only {
    text-align: center !important;
  }
}
@media screen and (min-width: 1216px) {
  .has-text-centered-widescreen {
    text-align: center !important;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .has-text-centered-widescreen-only {
    text-align: center !important;
  }
}
@media screen and (min-width: 1408px) {
  .has-text-centered-fullhd {
    text-align: center !important;
  }
}
@media screen and (max-width: 768px) {
  .has-text-justified-mobile {
    text-align: justify !important;
  }
}
@media screen and (min-width: 769px), print {
  .has-text-justified-tablet {
    text-align: justify !important;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .has-text-justified-tablet-only {
    text-align: justify !important;
  }
}
@media screen and (max-width: 1023px) {
  .has-text-justified-touch {
    text-align: justify !important;
  }
}
@media screen and (min-width: 1024px) {
  .has-text-justified-desktop {
    text-align: justify !important;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .has-text-justified-desktop-only {
    text-align: justify !important;
  }
}
@media screen and (min-width: 1216px) {
  .has-text-justified-widescreen {
    text-align: justify !important;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .has-text-justified-widescreen-only {
    text-align: justify !important;
  }
}
@media screen and (min-width: 1408px) {
  .has-text-justified-fullhd {
    text-align: justify !important;
  }
}
@media screen and (max-width: 768px) {
  .has-text-left-mobile {
    text-align: left !important;
  }
}
@media screen and (min-width: 769px), print {
  .has-text-left-tablet {
    text-align: left !important;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .has-text-left-tablet-only {
    text-align: left !important;
  }
}
@media screen and (max-width: 1023px) {
  .has-text-left-touch {
    text-align: left !important;
  }
}
@media screen and (min-width: 1024px) {
  .has-text-left-desktop {
    text-align: left !important;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .has-text-left-desktop-only {
    text-align: left !important;
  }
}
@media screen and (min-width: 1216px) {
  .has-text-left-widescreen {
    text-align: left !important;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .has-text-left-widescreen-only {
    text-align: left !important;
  }
}
@media screen and (min-width: 1408px) {
  .has-text-left-fullhd {
    text-align: left !important;
  }
}
@media screen and (max-width: 768px) {
  .has-text-right-mobile {
    text-align: right !important;
  }
}
@media screen and (min-width: 769px), print {
  .has-text-right-tablet {
    text-align: right !important;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .has-text-right-tablet-only {
    text-align: right !important;
  }
}
@media screen and (max-width: 1023px) {
  .has-text-right-touch {
    text-align: right !important;
  }
}
@media screen and (min-width: 1024px) {
  .has-text-right-desktop {
    text-align: right !important;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .has-text-right-desktop-only {
    text-align: right !important;
  }
}
@media screen and (min-width: 1216px) {
  .has-text-right-widescreen {
    text-align: right !important;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .has-text-right-widescreen-only {
    text-align: right !important;
  }
}
@media screen and (min-width: 1408px) {
  .has-text-right-fullhd {
    text-align: right !important;
  }
}
.is-capitalized {
  text-transform: capitalize !important;
}

.is-lowercase {
  text-transform: lowercase !important;
}

.is-uppercase {
  text-transform: uppercase !important;
}

.is-italic {
  font-style: italic !important;
}

.is-underlined {
  text-decoration: underline !important;
}

.has-text-weight-light {
  font-weight: 300 !important;
}

.has-text-weight-normal {
  font-weight: 400 !important;
}

.has-text-weight-medium {
  font-weight: 500 !important;
}

.has-text-weight-semibold {
  font-weight: 600 !important;
}

.has-text-weight-bold {
  font-weight: 700 !important;
}

.is-family-primary {
  font-family: BlinkMacSystemFont, -apple-system, "Segoe UI", "Roboto", "Oxygen", "Ubuntu", "Cantarell", "Fira Sans", "Droid Sans", "Helvetica Neue", "Helvetica", "Arial", sans-serif !important;
}

.is-family-secondary {
  font-family: BlinkMacSystemFont, -apple-system, "Segoe UI", "Roboto", "Oxygen", "Ubuntu", "Cantarell", "Fira Sans", "Droid Sans", "Helvetica Neue", "Helvetica", "Arial", sans-serif !important;
}

.is-family-sans-serif {
  font-family: BlinkMacSystemFont, -apple-system, "Segoe UI", "Roboto", "Oxygen", "Ubuntu", "Cantarell", "Fira Sans", "Droid Sans", "Helvetica Neue", "Helvetica", "Arial", sans-serif !important;
}

.is-family-monospace {
  font-family: monospace !important;
}

.is-family-code {
  font-family: monospace !important;
}

.is-block {
  display: block !important;
}

@media screen and (max-width: 768px) {
  .is-block-mobile {
    display: block !important;
  }
}
@media screen and (min-width: 769px), print {
  .is-block-tablet {
    display: block !important;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .is-block-tablet-only {
    display: block !important;
  }
}
@media screen and (max-width: 1023px) {
  .is-block-touch {
    display: block !important;
  }
}
@media screen and (min-width: 1024px) {
  .is-block-desktop {
    display: block !important;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .is-block-desktop-only {
    display: block !important;
  }
}
@media screen and (min-width: 1216px) {
  .is-block-widescreen {
    display: block !important;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .is-block-widescreen-only {
    display: block !important;
  }
}
@media screen and (min-width: 1408px) {
  .is-block-fullhd {
    display: block !important;
  }
}
.is-flex {
  display: flex !important;
}

@media screen and (max-width: 768px) {
  .is-flex-mobile {
    display: flex !important;
  }
}
@media screen and (min-width: 769px), print {
  .is-flex-tablet {
    display: flex !important;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .is-flex-tablet-only {
    display: flex !important;
  }
}
@media screen and (max-width: 1023px) {
  .is-flex-touch {
    display: flex !important;
  }
}
@media screen and (min-width: 1024px) {
  .is-flex-desktop {
    display: flex !important;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .is-flex-desktop-only {
    display: flex !important;
  }
}
@media screen and (min-width: 1216px) {
  .is-flex-widescreen {
    display: flex !important;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .is-flex-widescreen-only {
    display: flex !important;
  }
}
@media screen and (min-width: 1408px) {
  .is-flex-fullhd {
    display: flex !important;
  }
}
.is-inline {
  display: inline !important;
}

@media screen and (max-width: 768px) {
  .is-inline-mobile {
    display: inline !important;
  }
}
@media screen and (min-width: 769px), print {
  .is-inline-tablet {
    display: inline !important;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .is-inline-tablet-only {
    display: inline !important;
  }
}
@media screen and (max-width: 1023px) {
  .is-inline-touch {
    display: inline !important;
  }
}
@media screen and (min-width: 1024px) {
  .is-inline-desktop {
    display: inline !important;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .is-inline-desktop-only {
    display: inline !important;
  }
}
@media screen and (min-width: 1216px) {
  .is-inline-widescreen {
    display: inline !important;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .is-inline-widescreen-only {
    display: inline !important;
  }
}
@media screen and (min-width: 1408px) {
  .is-inline-fullhd {
    display: inline !important;
  }
}
.is-inline-block {
  display: inline-block !important;
}

@media screen and (max-width: 768px) {
  .is-inline-block-mobile {
    display: inline-block !important;
  }
}
@media screen and (min-width: 769px), print {
  .is-inline-block-tablet {
    display: inline-block !important;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .is-inline-block-tablet-only {
    display: inline-block !important;
  }
}
@media screen and (max-width: 1023px) {
  .is-inline-block-touch {
    display: inline-block !important;
  }
}
@media screen and (min-width: 1024px) {
  .is-inline-block-desktop {
    display: inline-block !important;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .is-inline-block-desktop-only {
    display: inline-block !important;
  }
}
@media screen and (min-width: 1216px) {
  .is-inline-block-widescreen {
    display: inline-block !important;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .is-inline-block-widescreen-only {
    display: inline-block !important;
  }
}
@media screen and (min-width: 1408px) {
  .is-inline-block-fullhd {
    display: inline-block !important;
  }
}
.is-inline-flex {
  display: inline-flex !important;
}

@media screen and (max-width: 768px) {
  .is-inline-flex-mobile {
    display: inline-flex !important;
  }
}
@media screen and (min-width: 769px), print {
  .is-inline-flex-tablet {
    display: inline-flex !important;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .is-inline-flex-tablet-only {
    display: inline-flex !important;
  }
}
@media screen and (max-width: 1023px) {
  .is-inline-flex-touch {
    display: inline-flex !important;
  }
}
@media screen and (min-width: 1024px) {
  .is-inline-flex-desktop {
    display: inline-flex !important;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .is-inline-flex-desktop-only {
    display: inline-flex !important;
  }
}
@media screen and (min-width: 1216px) {
  .is-inline-flex-widescreen {
    display: inline-flex !important;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .is-inline-flex-widescreen-only {
    display: inline-flex !important;
  }
}
@media screen and (min-width: 1408px) {
  .is-inline-flex-fullhd {
    display: inline-flex !important;
  }
}
.is-hidden {
  display: none !important;
}

.is-sr-only {
  border: none !important;
  clip: rect(0, 0, 0, 0) !important;
  height: 0.01em !important;
  overflow: hidden !important;
  padding: 0 !important;
  position: absolute !important;
  white-space: nowrap !important;
  width: 0.01em !important;
}

@media screen and (max-width: 768px) {
  .is-hidden-mobile {
    display: none !important;
  }
}
@media screen and (min-width: 769px), print {
  .is-hidden-tablet {
    display: none !important;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .is-hidden-tablet-only {
    display: none !important;
  }
}
@media screen and (max-width: 1023px) {
  .is-hidden-touch {
    display: none !important;
  }
}
@media screen and (min-width: 1024px) {
  .is-hidden-desktop {
    display: none !important;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .is-hidden-desktop-only {
    display: none !important;
  }
}
@media screen and (min-width: 1216px) {
  .is-hidden-widescreen {
    display: none !important;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .is-hidden-widescreen-only {
    display: none !important;
  }
}
@media screen and (min-width: 1408px) {
  .is-hidden-fullhd {
    display: none !important;
  }
}
.is-invisible {
  visibility: hidden !important;
}

@media screen and (max-width: 768px) {
  .is-invisible-mobile {
    visibility: hidden !important;
  }
}
@media screen and (min-width: 769px), print {
  .is-invisible-tablet {
    visibility: hidden !important;
  }
}
@media screen and (min-width: 769px) and (max-width: 1023px) {
  .is-invisible-tablet-only {
    visibility: hidden !important;
  }
}
@media screen and (max-width: 1023px) {
  .is-invisible-touch {
    visibility: hidden !important;
  }
}
@media screen and (min-width: 1024px) {
  .is-invisible-desktop {
    visibility: hidden !important;
  }
}
@media screen and (min-width: 1024px) and (max-width: 1215px) {
  .is-invisible-desktop-only {
    visibility: hidden !important;
  }
}
@media screen and (min-width: 1216px) {
  .is-invisible-widescreen {
    visibility: hidden !important;
  }
}
@media screen and (min-width: 1216px) and (max-width: 1407px) {
  .is-invisible-widescreen-only {
    visibility: hidden !important;
  }
}
@media screen and (min-width: 1408px) {
  .is-invisible-fullhd {
    visibility: hidden !important;
  }
}
/* Bulma Layout */
.hero {
  align-items: stretch;
  display: flex;
  flex-direction: column;
  justify-content: space-between;
}
.hero .navbar {
  background: none;
}
.hero .tabs ul {
  border-bottom: none;
}
.hero.is-white {
  background-color: white;
  color: #0a0a0a;
}
.hero.is-white a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),
.hero.is-white strong {
  color: inherit;
}
.hero.is-white .title {
  color: #0a0a0a;
}
.hero.is-white .subtitle {
  color: rgba(10, 10, 10, 0.9);
}
.hero.is-white .subtitle a:not(.button),
.hero.is-white .subtitle strong {
  color: #0a0a0a;
}
@media screen and (max-width: 1023px) {
  .hero.is-white .navbar-menu {
    background-color: white;
  }
}
.hero.is-white .navbar-item,
.hero.is-white .navbar-link {
  color: rgba(10, 10, 10, 0.7);
}
.hero.is-white a.navbar-item:hover, .hero.is-white a.navbar-item.is-active,
.hero.is-white .navbar-link:hover,
.hero.is-white .navbar-link.is-active {
  background-color: #f2f2f2;
  color: #0a0a0a;
}
.hero.is-white .tabs a {
  color: #0a0a0a;
  opacity: 0.9;
}
.hero.is-white .tabs a:hover {
  opacity: 1;
}
.hero.is-white .tabs li.is-active a {
  color: white !important;
  opacity: 1;
}
.hero.is-white .tabs.is-boxed a, .hero.is-white .tabs.is-toggle a {
  color: #0a0a0a;
}
.hero.is-white .tabs.is-boxed a:hover, .hero.is-white .tabs.is-toggle a:hover {
  background-color: rgba(10, 10, 10, 0.1);
}
.hero.is-white .tabs.is-boxed li.is-active a, .hero.is-white .tabs.is-boxed li.is-active a:hover, .hero.is-white .tabs.is-toggle li.is-active a, .hero.is-white .tabs.is-toggle li.is-active a:hover {
  background-color: #0a0a0a;
  border-color: #0a0a0a;
  color: white;
}
.hero.is-white.is-bold {
  background-image: linear-gradient(141deg, #e8e3e4 0%, white 71%, white 100%);
}
@media screen and (max-width: 768px) {
  .hero.is-white.is-bold .navbar-menu {
    background-image: linear-gradient(141deg, #e8e3e4 0%, white 71%, white 100%);
  }
}
.hero.is-black {
  background-color: #0a0a0a;
  color: white;
}
.hero.is-black a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),
.hero.is-black strong {
  color: inherit;
}
.hero.is-black .title {
  color: white;
}
.hero.is-black .subtitle {
  color: rgba(255, 255, 255, 0.9);
}
.hero.is-black .subtitle a:not(.button),
.hero.is-black .subtitle strong {
  color: white;
}
@media screen and (max-width: 1023px) {
  .hero.is-black .navbar-menu {
    background-color: #0a0a0a;
  }
}
.hero.is-black .navbar-item,
.hero.is-black .navbar-link {
  color: rgba(255, 255, 255, 0.7);
}
.hero.is-black a.navbar-item:hover, .hero.is-black a.navbar-item.is-active,
.hero.is-black .navbar-link:hover,
.hero.is-black .navbar-link.is-active {
  background-color: black;
  color: white;
}
.hero.is-black .tabs a {
  color: white;
  opacity: 0.9;
}
.hero.is-black .tabs a:hover {
  opacity: 1;
}
.hero.is-black .tabs li.is-active a {
  color: #0a0a0a !important;
  opacity: 1;
}
.hero.is-black .tabs.is-boxed a, .hero.is-black .tabs.is-toggle a {
  color: white;
}
.hero.is-black .tabs.is-boxed a:hover, .hero.is-black .tabs.is-toggle a:hover {
  background-color: rgba(10, 10, 10, 0.1);
}
.hero.is-black .tabs.is-boxed li.is-active a, .hero.is-black .tabs.is-boxed li.is-active a:hover, .hero.is-black .tabs.is-toggle li.is-active a, .hero.is-black .tabs.is-toggle li.is-active a:hover {
  background-color: white;
  border-color: white;
  color: #0a0a0a;
}
.hero.is-black.is-bold {
  background-image: linear-gradient(141deg, black 0%, #0a0a0a 71%, #181616 100%);
}
@media screen and (max-width: 768px) {
  .hero.is-black.is-bold .navbar-menu {
    background-image: linear-gradient(141deg, black 0%, #0a0a0a 71%, #181616 100%);
  }
}
.hero.is-light {
  background-color: whitesmoke;
  color: rgba(0, 0, 0, 0.7);
}
.hero.is-light a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),
.hero.is-light strong {
  color: inherit;
}
.hero.is-light .title {
  color: rgba(0, 0, 0, 0.7);
}
.hero.is-light .subtitle {
  color: rgba(0, 0, 0, 0.9);
}
.hero.is-light .subtitle a:not(.button),
.hero.is-light .subtitle strong {
  color: rgba(0, 0, 0, 0.7);
}
@media screen and (max-width: 1023px) {
  .hero.is-light .navbar-menu {
    background-color: whitesmoke;
  }
}
.hero.is-light .navbar-item,
.hero.is-light .navbar-link {
  color: rgba(0, 0, 0, 0.7);
}
.hero.is-light a.navbar-item:hover, .hero.is-light a.navbar-item.is-active,
.hero.is-light .navbar-link:hover,
.hero.is-light .navbar-link.is-active {
  background-color: #e8e8e8;
  color: rgba(0, 0, 0, 0.7);
}
.hero.is-light .tabs a {
  color: rgba(0, 0, 0, 0.7);
  opacity: 0.9;
}
.hero.is-light .tabs a:hover {
  opacity: 1;
}
.hero.is-light .tabs li.is-active a {
  color: whitesmoke !important;
  opacity: 1;
}
.hero.is-light .tabs.is-boxed a, .hero.is-light .tabs.is-toggle a {
  color: rgba(0, 0, 0, 0.7);
}
.hero.is-light .tabs.is-boxed a:hover, .hero.is-light .tabs.is-toggle a:hover {
  background-color: rgba(10, 10, 10, 0.1);
}
.hero.is-light .tabs.is-boxed li.is-active a, .hero.is-light .tabs.is-boxed li.is-active a:hover, .hero.is-light .tabs.is-toggle li.is-active a, .hero.is-light .tabs.is-toggle li.is-active a:hover {
  background-color: rgba(0, 0, 0, 0.7);
  border-color: rgba(0, 0, 0, 0.7);
  color: whitesmoke;
}
.hero.is-light.is-bold {
  background-image: linear-gradient(141deg, #dfd8d9 0%, whitesmoke 71%, white 100%);
}
@media screen and (max-width: 768px) {
  .hero.is-light.is-bold .navbar-menu {
    background-image: linear-gradient(141deg, #dfd8d9 0%, whitesmoke 71%, white 100%);
  }
}
.hero.is-dark {
  background-color: #363636;
  color: #fff;
}
.hero.is-dark a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),
.hero.is-dark strong {
  color: inherit;
}
.hero.is-dark .title {
  color: #fff;
}
.hero.is-dark .subtitle {
  color: rgba(255, 255, 255, 0.9);
}
.hero.is-dark .subtitle a:not(.button),
.hero.is-dark .subtitle strong {
  color: #fff;
}
@media screen and (max-width: 1023px) {
  .hero.is-dark .navbar-menu {
    background-color: #363636;
  }
}
.hero.is-dark .navbar-item,
.hero.is-dark .navbar-link {
  color: rgba(255, 255, 255, 0.7);
}
.hero.is-dark a.navbar-item:hover, .hero.is-dark a.navbar-item.is-active,
.hero.is-dark .navbar-link:hover,
.hero.is-dark .navbar-link.is-active {
  background-color: #292929;
  color: #fff;
}
.hero.is-dark .tabs a {
  color: #fff;
  opacity: 0.9;
}
.hero.is-dark .tabs a:hover {
  opacity: 1;
}
.hero.is-dark .tabs li.is-active a {
  color: #363636 !important;
  opacity: 1;
}
.hero.is-dark .tabs.is-boxed a, .hero.is-dark .tabs.is-toggle a {
  color: #fff;
}
.hero.is-dark .tabs.is-boxed a:hover, .hero.is-dark .tabs.is-toggle a:hover {
  background-color: rgba(10, 10, 10, 0.1);
}
.hero.is-dark .tabs.is-boxed li.is-active a, .hero.is-dark .tabs.is-boxed li.is-active a:hover, .hero.is-dark .tabs.is-toggle li.is-active a, .hero.is-dark .tabs.is-toggle li.is-active a:hover {
  background-color: #fff;
  border-color: #fff;
  color: #363636;
}
.hero.is-dark.is-bold {
  background-image: linear-gradient(141deg, #1f191a 0%, #363636 71%, #46403f 100%);
}
@media screen and (max-width: 768px) {
  .hero.is-dark.is-bold .navbar-menu {
    background-image: linear-gradient(141deg, #1f191a 0%, #363636 71%, #46403f 100%);
  }
}
.hero.is-primary {
  background-color: #7957d5;
  color: #fff;
}
.hero.is-primary a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),
.hero.is-primary strong {
  color: inherit;
}
.hero.is-primary .title {
  color: #fff;
}
.hero.is-primary .subtitle {
  color: rgba(255, 255, 255, 0.9);
}
.hero.is-primary .subtitle a:not(.button),
.hero.is-primary .subtitle strong {
  color: #fff;
}
@media screen and (max-width: 1023px) {
  .hero.is-primary .navbar-menu {
    background-color: #7957d5;
  }
}
.hero.is-primary .navbar-item,
.hero.is-primary .navbar-link {
  color: rgba(255, 255, 255, 0.7);
}
.hero.is-primary a.navbar-item:hover, .hero.is-primary a.navbar-item.is-active,
.hero.is-primary .navbar-link:hover,
.hero.is-primary .navbar-link.is-active {
  background-color: #6943d0;
  color: #fff;
}
.hero.is-primary .tabs a {
  color: #fff;
  opacity: 0.9;
}
.hero.is-primary .tabs a:hover {
  opacity: 1;
}
.hero.is-primary .tabs li.is-active a {
  color: #7957d5 !important;
  opacity: 1;
}
.hero.is-primary .tabs.is-boxed a, .hero.is-primary .tabs.is-toggle a {
  color: #fff;
}
.hero.is-primary .tabs.is-boxed a:hover, .hero.is-primary .tabs.is-toggle a:hover {
  background-color: rgba(10, 10, 10, 0.1);
}
.hero.is-primary .tabs.is-boxed li.is-active a, .hero.is-primary .tabs.is-boxed li.is-active a:hover, .hero.is-primary .tabs.is-toggle li.is-active a, .hero.is-primary .tabs.is-toggle li.is-active a:hover {
  background-color: #fff;
  border-color: #fff;
  color: #7957d5;
}
.hero.is-primary.is-bold {
  background-image: linear-gradient(141deg, #3725d4 0%, #7957d5 71%, #9b67df 100%);
}
@media screen and (max-width: 768px) {
  .hero.is-primary.is-bold .navbar-menu {
    background-image: linear-gradient(141deg, #3725d4 0%, #7957d5 71%, #9b67df 100%);
  }
}
.hero.is-link {
  background-color: #7957d5;
  color: #fff;
}
.hero.is-link a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),
.hero.is-link strong {
  color: inherit;
}
.hero.is-link .title {
  color: #fff;
}
.hero.is-link .subtitle {
  color: rgba(255, 255, 255, 0.9);
}
.hero.is-link .subtitle a:not(.button),
.hero.is-link .subtitle strong {
  color: #fff;
}
@media screen and (max-width: 1023px) {
  .hero.is-link .navbar-menu {
    background-color: #7957d5;
  }
}
.hero.is-link .navbar-item,
.hero.is-link .navbar-link {
  color: rgba(255, 255, 255, 0.7);
}
.hero.is-link a.navbar-item:hover, .hero.is-link a.navbar-item.is-active,
.hero.is-link .navbar-link:hover,
.hero.is-link .navbar-link.is-active {
  background-color: #6943d0;
  color: #fff;
}
.hero.is-link .tabs a {
  color: #fff;
  opacity: 0.9;
}
.hero.is-link .tabs a:hover {
  opacity: 1;
}
.hero.is-link .tabs li.is-active a {
  color: #7957d5 !important;
  opacity: 1;
}
.hero.is-link .tabs.is-boxed a, .hero.is-link .tabs.is-toggle a {
  color: #fff;
}
.hero.is-link .tabs.is-boxed a:hover, .hero.is-link .tabs.is-toggle a:hover {
  background-color: rgba(10, 10, 10, 0.1);
}
.hero.is-link .tabs.is-boxed li.is-active a, .hero.is-link .tabs.is-boxed li.is-active a:hover, .hero.is-link .tabs.is-toggle li.is-active a, .hero.is-link .tabs.is-toggle li.is-active a:hover {
  background-color: #fff;
  border-color: #fff;
  color: #7957d5;
}
.hero.is-link.is-bold {
  background-image: linear-gradient(141deg, #3725d4 0%, #7957d5 71%, #9b67df 100%);
}
@media screen and (max-width: 768px) {
  .hero.is-link.is-bold .navbar-menu {
    background-image: linear-gradient(141deg, #3725d4 0%, #7957d5 71%, #9b67df 100%);
  }
}
.hero.is-info {
  background-color: #167df0;
  color: #fff;
}
.hero.is-info a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),
.hero.is-info strong {
  color: inherit;
}
.hero.is-info .title {
  color: #fff;
}
.hero.is-info .subtitle {
  color: rgba(255, 255, 255, 0.9);
}
.hero.is-info .subtitle a:not(.button),
.hero.is-info .subtitle strong {
  color: #fff;
}
@media screen and (max-width: 1023px) {
  .hero.is-info .navbar-menu {
    background-color: #167df0;
  }
}
.hero.is-info .navbar-item,
.hero.is-info .navbar-link {
  color: rgba(255, 255, 255, 0.7);
}
.hero.is-info a.navbar-item:hover, .hero.is-info a.navbar-item.is-active,
.hero.is-info .navbar-link:hover,
.hero.is-info .navbar-link.is-active {
  background-color: #0e71de;
  color: #fff;
}
.hero.is-info .tabs a {
  color: #fff;
  opacity: 0.9;
}
.hero.is-info .tabs a:hover {
  opacity: 1;
}
.hero.is-info .tabs li.is-active a {
  color: #167df0 !important;
  opacity: 1;
}
.hero.is-info .tabs.is-boxed a, .hero.is-info .tabs.is-toggle a {
  color: #fff;
}
.hero.is-info .tabs.is-boxed a:hover, .hero.is-info .tabs.is-toggle a:hover {
  background-color: rgba(10, 10, 10, 0.1);
}
.hero.is-info .tabs.is-boxed li.is-active a, .hero.is-info .tabs.is-boxed li.is-active a:hover, .hero.is-info .tabs.is-toggle li.is-active a, .hero.is-info .tabs.is-toggle li.is-active a:hover {
  background-color: #fff;
  border-color: #fff;
  color: #167df0;
}
.hero.is-info.is-bold {
  background-image: linear-gradient(141deg, #0286d1 0%, #167df0 71%, #2868f7 100%);
}
@media screen and (max-width: 768px) {
  .hero.is-info.is-bold .navbar-menu {
    background-image: linear-gradient(141deg, #0286d1 0%, #167df0 71%, #2868f7 100%);
  }
}
.hero.is-success {
  background-color: #48c78e;
  color: #fff;
}
.hero.is-success a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),
.hero.is-success strong {
  color: inherit;
}
.hero.is-success .title {
  color: #fff;
}
.hero.is-success .subtitle {
  color: rgba(255, 255, 255, 0.9);
}
.hero.is-success .subtitle a:not(.button),
.hero.is-success .subtitle strong {
  color: #fff;
}
@media screen and (max-width: 1023px) {
  .hero.is-success .navbar-menu {
    background-color: #48c78e;
  }
}
.hero.is-success .navbar-item,
.hero.is-success .navbar-link {
  color: rgba(255, 255, 255, 0.7);
}
.hero.is-success a.navbar-item:hover, .hero.is-success a.navbar-item.is-active,
.hero.is-success .navbar-link:hover,
.hero.is-success .navbar-link.is-active {
  background-color: #3abb81;
  color: #fff;
}
.hero.is-success .tabs a {
  color: #fff;
  opacity: 0.9;
}
.hero.is-success .tabs a:hover {
  opacity: 1;
}
.hero.is-success .tabs li.is-active a {
  color: #48c78e !important;
  opacity: 1;
}
.hero.is-success .tabs.is-boxed a, .hero.is-success .tabs.is-toggle a {
  color: #fff;
}
.hero.is-success .tabs.is-boxed a:hover, .hero.is-success .tabs.is-toggle a:hover {
  background-color: rgba(10, 10, 10, 0.1);
}
.hero.is-success .tabs.is-boxed li.is-active a, .hero.is-success .tabs.is-boxed li.is-active a:hover, .hero.is-success .tabs.is-toggle li.is-active a, .hero.is-success .tabs.is-toggle li.is-active a:hover {
  background-color: #fff;
  border-color: #fff;
  color: #48c78e;
}
.hero.is-success.is-bold {
  background-image: linear-gradient(141deg, #29b35e 0%, #48c78e 71%, #56d2af 100%);
}
@media screen and (max-width: 768px) {
  .hero.is-success.is-bold .navbar-menu {
    background-image: linear-gradient(141deg, #29b35e 0%, #48c78e 71%, #56d2af 100%);
  }
}
.hero.is-warning {
  background-color: #ffe08a;
  color: rgba(0, 0, 0, 0.7);
}
.hero.is-warning a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),
.hero.is-warning strong {
  color: inherit;
}
.hero.is-warning .title {
  color: rgba(0, 0, 0, 0.7);
}
.hero.is-warning .subtitle {
  color: rgba(0, 0, 0, 0.9);
}
.hero.is-warning .subtitle a:not(.button),
.hero.is-warning .subtitle strong {
  color: rgba(0, 0, 0, 0.7);
}
@media screen and (max-width: 1023px) {
  .hero.is-warning .navbar-menu {
    background-color: #ffe08a;
  }
}
.hero.is-warning .navbar-item,
.hero.is-warning .navbar-link {
  color: rgba(0, 0, 0, 0.7);
}
.hero.is-warning a.navbar-item:hover, .hero.is-warning a.navbar-item.is-active,
.hero.is-warning .navbar-link:hover,
.hero.is-warning .navbar-link.is-active {
  background-color: #ffd970;
  color: rgba(0, 0, 0, 0.7);
}
.hero.is-warning .tabs a {
  color: rgba(0, 0, 0, 0.7);
  opacity: 0.9;
}
.hero.is-warning .tabs a:hover {
  opacity: 1;
}
.hero.is-warning .tabs li.is-active a {
  color: #ffe08a !important;
  opacity: 1;
}
.hero.is-warning .tabs.is-boxed a, .hero.is-warning .tabs.is-toggle a {
  color: rgba(0, 0, 0, 0.7);
}
.hero.is-warning .tabs.is-boxed a:hover, .hero.is-warning .tabs.is-toggle a:hover {
  background-color: rgba(10, 10, 10, 0.1);
}
.hero.is-warning .tabs.is-boxed li.is-active a, .hero.is-warning .tabs.is-boxed li.is-active a:hover, .hero.is-warning .tabs.is-toggle li.is-active a, .hero.is-warning .tabs.is-toggle li.is-active a:hover {
  background-color: rgba(0, 0, 0, 0.7);
  border-color: rgba(0, 0, 0, 0.7);
  color: #ffe08a;
}
.hero.is-warning.is-bold {
  background-image: linear-gradient(141deg, #ffb657 0%, #ffe08a 71%, #fff6a3 100%);
}
@media screen and (max-width: 768px) {
  .hero.is-warning.is-bold .navbar-menu {
    background-image: linear-gradient(141deg, #ffb657 0%, #ffe08a 71%, #fff6a3 100%);
  }
}
.hero.is-danger {
  background-color: #f14668;
  color: #fff;
}
.hero.is-danger a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),
.hero.is-danger strong {
  color: inherit;
}
.hero.is-danger .title {
  color: #fff;
}
.hero.is-danger .subtitle {
  color: rgba(255, 255, 255, 0.9);
}
.hero.is-danger .subtitle a:not(.button),
.hero.is-danger .subtitle strong {
  color: #fff;
}
@media screen and (max-width: 1023px) {
  .hero.is-danger .navbar-menu {
    background-color: #f14668;
  }
}
.hero.is-danger .navbar-item,
.hero.is-danger .navbar-link {
  color: rgba(255, 255, 255, 0.7);
}
.hero.is-danger a.navbar-item:hover, .hero.is-danger a.navbar-item.is-active,
.hero.is-danger .navbar-link:hover,
.hero.is-danger .navbar-link.is-active {
  background-color: #ef2e55;
  color: #fff;
}
.hero.is-danger .tabs a {
  color: #fff;
  opacity: 0.9;
}
.hero.is-danger .tabs a:hover {
  opacity: 1;
}
.hero.is-danger .tabs li.is-active a {
  color: #f14668 !important;
  opacity: 1;
}
.hero.is-danger .tabs.is-boxed a, .hero.is-danger .tabs.is-toggle a {
  color: #fff;
}
.hero.is-danger .tabs.is-boxed a:hover, .hero.is-danger .tabs.is-toggle a:hover {
  background-color: rgba(10, 10, 10, 0.1);
}
.hero.is-danger .tabs.is-boxed li.is-active a, .hero.is-danger .tabs.is-boxed li.is-active a:hover, .hero.is-danger .tabs.is-toggle li.is-active a, .hero.is-danger .tabs.is-toggle li.is-active a:hover {
  background-color: #fff;
  border-color: #fff;
  color: #f14668;
}
.hero.is-danger.is-bold {
  background-image: linear-gradient(141deg, #fa0a62 0%, #f14668 71%, #f7595f 100%);
}
@media screen and (max-width: 768px) {
  .hero.is-danger.is-bold .navbar-menu {
    background-image: linear-gradient(141deg, #fa0a62 0%, #f14668 71%, #f7595f 100%);
  }
}
.hero.is-small .hero-body {
  padding: 1.5rem;
}
@media screen and (min-width: 769px), print {
  .hero.is-medium .hero-body {
    padding: 9rem 4.5rem;
  }
}
@media screen and (min-width: 769px), print {
  .hero.is-large .hero-body {
    padding: 18rem 6rem;
  }
}
.hero.is-halfheight .hero-body, .hero.is-fullheight .hero-body, .hero.is-fullheight-with-navbar .hero-body {
  align-items: center;
  display: flex;
}
.hero.is-halfheight .hero-body > .container, .hero.is-fullheight .hero-body > .container, .hero.is-fullheight-with-navbar .hero-body > .container {
  flex-grow: 1;
  flex-shrink: 1;
}
.hero.is-halfheight {
  min-height: 50vh;
}
.hero.is-fullheight {
  min-height: 100vh;
}

.hero-video {
  overflow: hidden;
}
.hero-video video {
  left: 50%;
  min-height: 100%;
  min-width: 100%;
  position: absolute;
  top: 50%;
  transform: translate3d(-50%, -50%, 0);
}
.hero-video.is-transparent {
  opacity: 0.3;
}
@media screen and (max-width: 768px) {
  .hero-video {
    display: none;
  }
}

.hero-buttons {
  margin-top: 1.5rem;
}
@media screen and (max-width: 768px) {
  .hero-buttons .button {
    display: flex;
  }
  .hero-buttons .button:not(:last-child) {
    margin-bottom: 0.75rem;
  }
}
@media screen and (min-width: 769px), print {
  .hero-buttons {
    display: flex;
    justify-content: center;
  }
  .hero-buttons .button:not(:last-child) {
    margin-right: 1.5rem;
  }
}

.hero-head,
.hero-foot {
  flex-grow: 0;
  flex-shrink: 0;
}

.hero-body {
  flex-grow: 1;
  flex-shrink: 0;
  padding: 3rem 1.5rem;
}
@media screen and (min-width: 769px), print {
  .hero-body {
    padding: 3rem 3rem;
  }
}

.section {
  padding: 3rem 1.5rem;
}
@media screen and (min-width: 1024px) {
  .section {
    padding: 3rem 3rem;
  }
  .section.is-medium {
    padding: 9rem 4.5rem;
  }
  .section.is-large {
    padding: 18rem 6rem;
  }
}

.footer {
  background-color: #fafafa;
  padding: 3rem 1.5rem 6rem;
}

.is-noscroll {
  position: fixed;
  overflow-y: hidden;
  width: 100%;
  bottom: 0;
}

@keyframes fadeOut {
  from {
    opacity: 1;
  }
  to {
    opacity: 0;
  }
}
.fadeOut {
  animation-name: fadeOut;
}

@keyframes fadeOutDown {
  from {
    opacity: 1;
  }
  to {
    opacity: 0;
    transform: translate3d(0, 100%, 0);
  }
}
.fadeOutDown {
  animation-name: fadeOutDown;
}

@keyframes fadeOutUp {
  from {
    opacity: 1;
  }
  to {
    opacity: 0;
    transform: translate3d(0, -100%, 0);
  }
}
.fadeOutUp {
  animation-name: fadeOutUp;
}

@keyframes fadeIn {
  from {
    opacity: 0;
  }
  to {
    opacity: 1;
  }
}
.fadeIn {
  animation-name: fadeIn;
}

@keyframes fadeInDown {
  from {
    opacity: 0;
    transform: translate3d(0, -100%, 0);
  }
  to {
    opacity: 1;
    transform: none;
  }
}
.fadeInDown {
  animation-name: fadeInDown;
}

@keyframes fadeInUp {
  from {
    opacity: 0;
    transform: translate3d(0, 100%, 0);
  }
  to {
    opacity: 1;
    transform: none;
  }
}
.fadeInUp {
  animation-name: fadeInUp;
}

/**
 * Vue Transitions
 */
.fade-enter-active,
.fade-leave-active {
  transition: opacity 150ms ease-out;
}

.fade-enter,
.fade-leave-to {
  opacity: 0;
}

.zoom-in-enter-active,
.zoom-in-leave-active {
  transition: opacity 150ms ease-out;
}
.zoom-in-enter-active .animation-content,
.zoom-in-enter-active .animation-content,
.zoom-in-leave-active .animation-content,
.zoom-in-leave-active .animation-content {
  transition: transform 150ms ease-out;
}

.zoom-in-enter,
.zoom-in-leave-active {
  opacity: 0;
}
.zoom-in-enter .animation-content,
.zoom-in-enter .animation-content,
.zoom-in-leave-active .animation-content,
.zoom-in-leave-active .animation-content {
  transform: scale(0.95);
}

.zoom-out-enter-active,
.zoom-out-leave-active {
  transition: opacity 150ms ease-out;
}
.zoom-out-enter-active .animation-content,
.zoom-out-enter-active .animation-content,
.zoom-out-leave-active .animation-content,
.zoom-out-leave-active .animation-content {
  transition: transform 150ms ease-out;
}

.zoom-out-enter,
.zoom-out-leave-active {
  opacity: 0;
}
.zoom-out-enter .animation-content,
.zoom-out-enter .animation-content,
.zoom-out-leave-active .animation-content,
.zoom-out-leave-active .animation-content {
  transform: scale(1.05);
}

.slide-next-enter-active,
.slide-next-leave-active,
.slide-prev-enter-active,
.slide-prev-leave-active {
  transition: transform 250ms cubic-bezier(0.785, 0.135, 0.15, 0.86);
}

.slide-prev-leave-to, .slide-next-enter {
  transform: translate3d(-100%, 0, 0);
  position: absolute;
  width: 100%;
}

.slide-prev-enter, .slide-next-leave-to {
  transform: translate3d(100%, 0, 0);
  position: absolute;
  width: 100%;
}

.slide-down-enter-active,
.slide-down-leave-active,
.slide-up-enter-active,
.slide-up-leave-active {
  transition: transform 250ms cubic-bezier(0.785, 0.135, 0.15, 0.86);
}

.slide-up-leave-to, .slide-down-enter {
  transform: translate3d(0, -100%, 0);
  position: absolute;
  height: 100%;
}

.slide-up-enter, .slide-down-leave-to {
  transform: translate3d(0, 100%, 0);
  position: absolute;
  height: 100%;
}

.slide-enter-active {
  transition: 150ms ease-out;
}

.slide-leave-active {
  transition: 150ms ease-out;
  transition-timing-function: cubic-bezier(0, 1, 0.5, 1);
}

.slide-enter-to, .slide-leave {
  max-height: 100px;
  overflow: hidden;
}

.slide-enter, .slide-leave-to {
  overflow: hidden;
  max-height: 0;
}

.autocomplete {
  position: relative;
}
.autocomplete .dropdown-menu {
  display: block;
  width: 100%;
}
.autocomplete .dropdown-menu.is-opened-top {
  top: auto;
  bottom: 100%;
}
.autocomplete .dropdown-content {
  overflow: auto;
  max-height: 200px;
}
.autocomplete .dropdown-item, .autocomplete .dropdown .dropdown-menu .has-link a, .dropdown .dropdown-menu .has-link .autocomplete a {
  white-space: nowrap;
  overflow: hidden;
  text-overflow: ellipsis;
}
.autocomplete .dropdown-item.is-hovered, .autocomplete .dropdown .dropdown-menu .has-link a.is-hovered, .dropdown .dropdown-menu .has-link .autocomplete a.is-hovered {
  background: whitesmoke;
  color: #0a0a0a;
}
.autocomplete .dropdown-item.is-disabled, .autocomplete .dropdown .dropdown-menu .has-link a.is-disabled, .dropdown .dropdown-menu .has-link .autocomplete a.is-disabled {
  opacity: 0.5;
  cursor: not-allowed;
}
.autocomplete.is-small {
  border-radius: 2px;
  font-size: 0.75rem;
}
.autocomplete.is-medium {
  font-size: 1.25rem;
}
.autocomplete.is-large {
  font-size: 1.5rem;
}

.carousel {
  min-height: 120px;
  position: relative;
}
.carousel.is-overlay {
  background-color: rgba(10, 10, 10, 0.86);
  align-items: center;
  flex-direction: column;
  justify-content: center;
  display: flex;
  max-height: 100vh;
  position: fixed;
  z-index: 40;
}
.carousel.is-overlay .carousel-item img {
  cursor: default;
}
.carousel.is-overlay .carousel-indicator.has-background {
  background: transparent;
}
.carousel .progress, .carousel .progress-wrapper.is-not-native {
  border-radius: 2px;
  height: 0.25rem;
  margin-bottom: 0;
}
.carousel .carousel-items {
  position: relative;
  display: flex;
  overflow: hidden;
  width: 100%;
}
@media screen and (min-width: 769px), print {
  .carousel .carousel-items:hover .carousel-arrow.is-hovered {
    opacity: 1;
  }
}
.carousel .carousel-items .carousel-item {
  flex-shrink: 0;
  width: 100%;
}
.carousel .carousel-pause {
  pointer-events: none;
  position: absolute;
  top: 0;
  right: 0.15rem;
  z-index: 1;
}
.carousel .carousel-indicator {
  width: 100%;
  padding: 0.5rem;
  display: flex;
  align-items: center;
  justify-content: center;
}
.carousel .carousel-indicator.has-background {
  background: rgba(10, 10, 10, 0.5);
}
.carousel .carousel-indicator.has-custom {
  flex-wrap: nowrap;
  justify-content: flex-start;
  -webkit-overflow-scrolling: touch;
  overflow: hidden;
  overflow-x: auto;
}
.carousel .carousel-indicator.has-custom.is-small .indicator-item {
  flex: 1 0 10%;
}
.carousel .carousel-indicator.has-custom.is-medium .indicator-item {
  flex: 1 0 16.66667%;
}
.carousel .carousel-indicator.is-inside {
  position: absolute;
}
.carousel .carousel-indicator.is-inside.is-bottom {
  bottom: 0;
}
.carousel .carousel-indicator.is-inside.is-top {
  top: 0;
}
.carousel .carousel-indicator .indicator-item:not(:last-child) {
  margin-right: 0.5rem;
}
.carousel .carousel-indicator .indicator-item.is-active .indicator-style,
.carousel .carousel-indicator .indicator-item .indicator-style:hover {
  background: #7957d5;
  border: 1px solid white;
}
.carousel .carousel-indicator .indicator-item .indicator-style {
  display: block;
  border: 1px solid #7957d5;
  background: white;
  outline: none;
  transition: 150ms ease-out;
}
.carousel .carousel-indicator .indicator-item .indicator-style.is-boxes {
  height: 10px;
  width: 10px;
}
.carousel .carousel-indicator .indicator-item .indicator-style.is-dots {
  border-radius: 9999px;
  height: 10px;
  width: 10px;
}
.carousel .carousel-indicator .indicator-item .indicator-style.is-lines {
  height: 5px;
  width: 25px;
}

.carousel-list {
  position: relative;
  overflow: hidden;
  width: 100%;
}
.carousel-list.has-shadow {
  box-shadow: 0px 0px 10px rgba(0, 0, 0, 0.25);
}
@media screen and (min-width: 769px), print {
  .carousel-list:hover .carousel-arrow.is-hovered {
    opacity: 1;
  }
}
.carousel-list .carousel-slides {
  position: relative;
  display: flex;
  width: 100%;
}
.carousel-list .carousel-slides:not(.is-dragging) {
  transition: all 250ms ease-out 0s;
}
.carousel-list .carousel-slides.has-grayscale .carousel-slide img {
  filter: grayscale(100%);
}
.carousel-list .carousel-slides.has-grayscale .carousel-slide.is-active img {
  filter: grayscale(0%);
}
.carousel-list .carousel-slides.has-opacity .carousel-slide img {
  opacity: 0.25;
}
.carousel-list .carousel-slides.has-opacity .carousel-slide.is-active img {
  opacity: 1;
}
.carousel-list .carousel-slides .carousel-slide {
  border: 2px solid transparent;
  flex-shrink: 0;
}

.carousel-arrow {
  transition: 150ms ease-out;
}
.carousel-arrow.is-hovered {
  opacity: 0;
}
.carousel-arrow .icon {
  background: white;
  color: #7957d5;
  cursor: pointer;
  border: 1px solid white;
  border-radius: 9999px;
  outline: 0;
}
.carousel-arrow .icon:hover {
  border: 1px solid #7957d5;
  opacity: 1;
}
.carousel-arrow .icon.has-icons-left, .carousel-arrow .icon.has-icons-right {
  position: absolute;
  top: 50%;
  transform: translateY(-50%);
  z-index: 1;
}
.carousel-arrow .icon.has-icons-left {
  left: 1.5rem;
}
.carousel-arrow .icon.has-icons-right {
  right: 1.5rem;
}

.b-checkbox.checkbox {
  outline: none;
  display: inline-flex;
  align-items: center;
}
.b-checkbox.checkbox:not(.button) {
  margin-right: 0.5em;
}
.b-checkbox.checkbox:not(.button) + .checkbox:last-child {
  margin-right: 0;
}
.b-checkbox.checkbox input[type=checkbox] {
  position: absolute;
  left: 0;
  opacity: 0;
  outline: none;
  z-index: -1;
}
.b-checkbox.checkbox input[type=checkbox] + .check {
  width: 1.25em;
  height: 1.25em;
  flex-shrink: 0;
  border-radius: 4px;
  border: 2px solid #7a7a7a;
  transition: background 150ms ease-out;
  background: transparent;
}
.b-checkbox.checkbox input[type=checkbox]:checked + .check {
  background: #7957d5 url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Cpath style='fill:%23fff' d='M 0.04038059,0.6267767 0.14644661,0.52071068 0.42928932,0.80355339 0.3232233,0.90961941 z M 0.21715729,0.80355339 0.85355339,0.16715729 0.95961941,0.2732233 0.3232233,0.90961941 z'%3E%3C/path%3E%3C/svg%3E") no-repeat center center;
  border-color: #7957d5;
}
.b-checkbox.checkbox input[type=checkbox]:checked + .check.is-white {
  background: white url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Cpath style='fill:%230a0a0a' d='M 0.04038059,0.6267767 0.14644661,0.52071068 0.42928932,0.80355339 0.3232233,0.90961941 z M 0.21715729,0.80355339 0.85355339,0.16715729 0.95961941,0.2732233 0.3232233,0.90961941 z'%3E%3C/path%3E%3C/svg%3E") no-repeat center center;
  border-color: white;
}
.b-checkbox.checkbox input[type=checkbox]:checked + .check.is-black {
  background: #0a0a0a url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Cpath style='fill:white' d='M 0.04038059,0.6267767 0.14644661,0.52071068 0.42928932,0.80355339 0.3232233,0.90961941 z M 0.21715729,0.80355339 0.85355339,0.16715729 0.95961941,0.2732233 0.3232233,0.90961941 z'%3E%3C/path%3E%3C/svg%3E") no-repeat center center;
  border-color: #0a0a0a;
}
.b-checkbox.checkbox input[type=checkbox]:checked + .check.is-light {
  background: whitesmoke url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Cpath style='fill:rgba(0, 0, 0, 0.7)' d='M 0.04038059,0.6267767 0.14644661,0.52071068 0.42928932,0.80355339 0.3232233,0.90961941 z M 0.21715729,0.80355339 0.85355339,0.16715729 0.95961941,0.2732233 0.3232233,0.90961941 z'%3E%3C/path%3E%3C/svg%3E") no-repeat center center;
  border-color: whitesmoke;
}
.b-checkbox.checkbox input[type=checkbox]:checked + .check.is-dark {
  background: #363636 url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Cpath style='fill:%23fff' d='M 0.04038059,0.6267767 0.14644661,0.52071068 0.42928932,0.80355339 0.3232233,0.90961941 z M 0.21715729,0.80355339 0.85355339,0.16715729 0.95961941,0.2732233 0.3232233,0.90961941 z'%3E%3C/path%3E%3C/svg%3E") no-repeat center center;
  border-color: #363636;
}
.b-checkbox.checkbox input[type=checkbox]:checked + .check.is-primary {
  background: #7957d5 url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Cpath style='fill:%23fff' d='M 0.04038059,0.6267767 0.14644661,0.52071068 0.42928932,0.80355339 0.3232233,0.90961941 z M 0.21715729,0.80355339 0.85355339,0.16715729 0.95961941,0.2732233 0.3232233,0.90961941 z'%3E%3C/path%3E%3C/svg%3E") no-repeat center center;
  border-color: #7957d5;
}
.b-checkbox.checkbox input[type=checkbox]:checked + .check.is-link {
  background: #7957d5 url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Cpath style='fill:%23fff' d='M 0.04038059,0.6267767 0.14644661,0.52071068 0.42928932,0.80355339 0.3232233,0.90961941 z M 0.21715729,0.80355339 0.85355339,0.16715729 0.95961941,0.2732233 0.3232233,0.90961941 z'%3E%3C/path%3E%3C/svg%3E") no-repeat center center;
  border-color: #7957d5;
}
.b-checkbox.checkbox input[type=checkbox]:checked + .check.is-info {
  background: #167df0 url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Cpath style='fill:%23fff' d='M 0.04038059,0.6267767 0.14644661,0.52071068 0.42928932,0.80355339 0.3232233,0.90961941 z M 0.21715729,0.80355339 0.85355339,0.16715729 0.95961941,0.2732233 0.3232233,0.90961941 z'%3E%3C/path%3E%3C/svg%3E") no-repeat center center;
  border-color: #167df0;
}
.b-checkbox.checkbox input[type=checkbox]:checked + .check.is-success {
  background: #48c78e url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Cpath style='fill:%23fff' d='M 0.04038059,0.6267767 0.14644661,0.52071068 0.42928932,0.80355339 0.3232233,0.90961941 z M 0.21715729,0.80355339 0.85355339,0.16715729 0.95961941,0.2732233 0.3232233,0.90961941 z'%3E%3C/path%3E%3C/svg%3E") no-repeat center center;
  border-color: #48c78e;
}
.b-checkbox.checkbox input[type=checkbox]:checked + .check.is-warning {
  background: #ffe08a url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Cpath style='fill:rgba(0, 0, 0, 0.7)' d='M 0.04038059,0.6267767 0.14644661,0.52071068 0.42928932,0.80355339 0.3232233,0.90961941 z M 0.21715729,0.80355339 0.85355339,0.16715729 0.95961941,0.2732233 0.3232233,0.90961941 z'%3E%3C/path%3E%3C/svg%3E") no-repeat center center;
  border-color: #ffe08a;
}
.b-checkbox.checkbox input[type=checkbox]:checked + .check.is-danger {
  background: #f14668 url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Cpath style='fill:%23fff' d='M 0.04038059,0.6267767 0.14644661,0.52071068 0.42928932,0.80355339 0.3232233,0.90961941 z M 0.21715729,0.80355339 0.85355339,0.16715729 0.95961941,0.2732233 0.3232233,0.90961941 z'%3E%3C/path%3E%3C/svg%3E") no-repeat center center;
  border-color: #f14668;
}
.b-checkbox.checkbox input[type=checkbox]:indeterminate + .check {
  background: #7957d5 url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Crect style='fill:%23fff' width='0.7' height='0.2' x='.15' y='.4'%3E%3C/rect%3E%3C/svg%3E") no-repeat center center;
  border-color: #7957d5;
}
.b-checkbox.checkbox input[type=checkbox]:indeterminate + .check.is-white {
  background: white url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Crect style='fill:%230a0a0a' width='0.7' height='0.2' x='.15' y='.4'%3E%3C/rect%3E%3C/svg%3E") no-repeat center center;
  border-color: white;
}
.b-checkbox.checkbox input[type=checkbox]:indeterminate + .check.is-black {
  background: #0a0a0a url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Crect style='fill:white' width='0.7' height='0.2' x='.15' y='.4'%3E%3C/rect%3E%3C/svg%3E") no-repeat center center;
  border-color: #0a0a0a;
}
.b-checkbox.checkbox input[type=checkbox]:indeterminate + .check.is-light {
  background: whitesmoke url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Crect style='fill:rgba(0, 0, 0, 0.7)' width='0.7' height='0.2' x='.15' y='.4'%3E%3C/rect%3E%3C/svg%3E") no-repeat center center;
  border-color: whitesmoke;
}
.b-checkbox.checkbox input[type=checkbox]:indeterminate + .check.is-dark {
  background: #363636 url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Crect style='fill:%23fff' width='0.7' height='0.2' x='.15' y='.4'%3E%3C/rect%3E%3C/svg%3E") no-repeat center center;
  border-color: #363636;
}
.b-checkbox.checkbox input[type=checkbox]:indeterminate + .check.is-primary {
  background: #7957d5 url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Crect style='fill:%23fff' width='0.7' height='0.2' x='.15' y='.4'%3E%3C/rect%3E%3C/svg%3E") no-repeat center center;
  border-color: #7957d5;
}
.b-checkbox.checkbox input[type=checkbox]:indeterminate + .check.is-link {
  background: #7957d5 url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Crect style='fill:%23fff' width='0.7' height='0.2' x='.15' y='.4'%3E%3C/rect%3E%3C/svg%3E") no-repeat center center;
  border-color: #7957d5;
}
.b-checkbox.checkbox input[type=checkbox]:indeterminate + .check.is-info {
  background: #167df0 url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Crect style='fill:%23fff' width='0.7' height='0.2' x='.15' y='.4'%3E%3C/rect%3E%3C/svg%3E") no-repeat center center;
  border-color: #167df0;
}
.b-checkbox.checkbox input[type=checkbox]:indeterminate + .check.is-success {
  background: #48c78e url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Crect style='fill:%23fff' width='0.7' height='0.2' x='.15' y='.4'%3E%3C/rect%3E%3C/svg%3E") no-repeat center center;
  border-color: #48c78e;
}
.b-checkbox.checkbox input[type=checkbox]:indeterminate + .check.is-warning {
  background: #ffe08a url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Crect style='fill:rgba(0, 0, 0, 0.7)' width='0.7' height='0.2' x='.15' y='.4'%3E%3C/rect%3E%3C/svg%3E") no-repeat center center;
  border-color: #ffe08a;
}
.b-checkbox.checkbox input[type=checkbox]:indeterminate + .check.is-danger {
  background: #f14668 url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Crect style='fill:%23fff' width='0.7' height='0.2' x='.15' y='.4'%3E%3C/rect%3E%3C/svg%3E") no-repeat center center;
  border-color: #f14668;
}
.b-checkbox.checkbox input[type=checkbox]:focus + .check {
  box-shadow: 0 0 0.5em rgba(122, 122, 122, 0.8);
}
.b-checkbox.checkbox input[type=checkbox]:focus:checked + .check {
  box-shadow: 0 0 0.5em rgba(121, 87, 213, 0.8);
}
.b-checkbox.checkbox input[type=checkbox]:focus:checked + .check.is-white {
  box-shadow: 0 0 0.5em rgba(255, 255, 255, 0.8);
}
.b-checkbox.checkbox input[type=checkbox]:focus:checked + .check.is-black {
  box-shadow: 0 0 0.5em rgba(10, 10, 10, 0.8);
}
.b-checkbox.checkbox input[type=checkbox]:focus:checked + .check.is-light {
  box-shadow: 0 0 0.5em rgba(245, 245, 245, 0.8);
}
.b-checkbox.checkbox input[type=checkbox]:focus:checked + .check.is-dark {
  box-shadow: 0 0 0.5em rgba(54, 54, 54, 0.8);
}
.b-checkbox.checkbox input[type=checkbox]:focus:checked + .check.is-primary {
  box-shadow: 0 0 0.5em rgba(121, 87, 213, 0.8);
}
.b-checkbox.checkbox input[type=checkbox]:focus:checked + .check.is-link {
  box-shadow: 0 0 0.5em rgba(121, 87, 213, 0.8);
}
.b-checkbox.checkbox input[type=checkbox]:focus:checked + .check.is-info {
  box-shadow: 0 0 0.5em rgba(22, 125, 240, 0.8);
}
.b-checkbox.checkbox input[type=checkbox]:focus:checked + .check.is-success {
  box-shadow: 0 0 0.5em rgba(72, 199, 142, 0.8);
}
.b-checkbox.checkbox input[type=checkbox]:focus:checked + .check.is-warning {
  box-shadow: 0 0 0.5em rgba(255, 224, 138, 0.8);
}
.b-checkbox.checkbox input[type=checkbox]:focus:checked + .check.is-danger {
  box-shadow: 0 0 0.5em rgba(241, 70, 104, 0.8);
}
.b-checkbox.checkbox .control-label {
  padding-left: calc(0.75em - 1px);
}
.b-checkbox.checkbox.button {
  display: flex;
}
.b-checkbox.checkbox[disabled] {
  opacity: 0.5;
}
.b-checkbox.checkbox:hover input[type=checkbox]:not(:disabled) + .check {
  border-color: #7957d5;
}
.b-checkbox.checkbox:hover input[type=checkbox]:not(:disabled) + .check.is-white {
  border-color: white;
}
.b-checkbox.checkbox:hover input[type=checkbox]:not(:disabled) + .check.is-black {
  border-color: #0a0a0a;
}
.b-checkbox.checkbox:hover input[type=checkbox]:not(:disabled) + .check.is-light {
  border-color: whitesmoke;
}
.b-checkbox.checkbox:hover input[type=checkbox]:not(:disabled) + .check.is-dark {
  border-color: #363636;
}
.b-checkbox.checkbox:hover input[type=checkbox]:not(:disabled) + .check.is-primary {
  border-color: #7957d5;
}
.b-checkbox.checkbox:hover input[type=checkbox]:not(:disabled) + .check.is-link {
  border-color: #7957d5;
}
.b-checkbox.checkbox:hover input[type=checkbox]:not(:disabled) + .check.is-info {
  border-color: #167df0;
}
.b-checkbox.checkbox:hover input[type=checkbox]:not(:disabled) + .check.is-success {
  border-color: #48c78e;
}
.b-checkbox.checkbox:hover input[type=checkbox]:not(:disabled) + .check.is-warning {
  border-color: #ffe08a;
}
.b-checkbox.checkbox:hover input[type=checkbox]:not(:disabled) + .check.is-danger {
  border-color: #f14668;
}
.b-checkbox.checkbox.is-small {
  border-radius: 2px;
  font-size: 0.75rem;
}
.b-checkbox.checkbox.is-medium {
  font-size: 1.25rem;
}
.b-checkbox.checkbox.is-large {
  font-size: 1.5rem;
}

.b-clockpicker .card-header {
  background-color: #7957d5;
  color: #fff;
}
.b-clockpicker .b-clockpicker-face:after {
  background-color: #7957d5;
}
.b-clockpicker .b-clockpicker-face-hand {
  background-color: #7957d5;
  border-color: #7957d5;
}
.b-clockpicker .b-clockpicker-face-number.active {
  background-color: #7957d5;
  color: #fff;
}
.b-clockpicker.is-white .card-header {
  background-color: white;
  color: #0a0a0a;
}
.b-clockpicker.is-white .b-clockpicker-face:after {
  background-color: white;
}
.b-clockpicker.is-white .b-clockpicker-face-hand {
  background-color: white;
  border-color: white;
}
.b-clockpicker.is-white .b-clockpicker-face-number.active {
  background-color: white;
  color: #0a0a0a;
}
.b-clockpicker.is-black .card-header {
  background-color: #0a0a0a;
  color: white;
}
.b-clockpicker.is-black .b-clockpicker-face:after {
  background-color: #0a0a0a;
}
.b-clockpicker.is-black .b-clockpicker-face-hand {
  background-color: #0a0a0a;
  border-color: #0a0a0a;
}
.b-clockpicker.is-black .b-clockpicker-face-number.active {
  background-color: #0a0a0a;
  color: white;
}
.b-clockpicker.is-light .card-header {
  background-color: whitesmoke;
  color: rgba(0, 0, 0, 0.7);
}
.b-clockpicker.is-light .b-clockpicker-face:after {
  background-color: whitesmoke;
}
.b-clockpicker.is-light .b-clockpicker-face-hand {
  background-color: whitesmoke;
  border-color: whitesmoke;
}
.b-clockpicker.is-light .b-clockpicker-face-number.active {
  background-color: whitesmoke;
  color: rgba(0, 0, 0, 0.7);
}
.b-clockpicker.is-dark .card-header {
  background-color: #363636;
  color: #fff;
}
.b-clockpicker.is-dark .b-clockpicker-face:after {
  background-color: #363636;
}
.b-clockpicker.is-dark .b-clockpicker-face-hand {
  background-color: #363636;
  border-color: #363636;
}
.b-clockpicker.is-dark .b-clockpicker-face-number.active {
  background-color: #363636;
  color: #fff;
}
.b-clockpicker.is-primary .card-header {
  background-color: #7957d5;
  color: #fff;
}
.b-clockpicker.is-primary .b-clockpicker-face:after {
  background-color: #7957d5;
}
.b-clockpicker.is-primary .b-clockpicker-face-hand {
  background-color: #7957d5;
  border-color: #7957d5;
}
.b-clockpicker.is-primary .b-clockpicker-face-number.active {
  background-color: #7957d5;
  color: #fff;
}
.b-clockpicker.is-link .card-header {
  background-color: #7957d5;
  color: #fff;
}
.b-clockpicker.is-link .b-clockpicker-face:after {
  background-color: #7957d5;
}
.b-clockpicker.is-link .b-clockpicker-face-hand {
  background-color: #7957d5;
  border-color: #7957d5;
}
.b-clockpicker.is-link .b-clockpicker-face-number.active {
  background-color: #7957d5;
  color: #fff;
}
.b-clockpicker.is-info .card-header {
  background-color: #167df0;
  color: #fff;
}
.b-clockpicker.is-info .b-clockpicker-face:after {
  background-color: #167df0;
}
.b-clockpicker.is-info .b-clockpicker-face-hand {
  background-color: #167df0;
  border-color: #167df0;
}
.b-clockpicker.is-info .b-clockpicker-face-number.active {
  background-color: #167df0;
  color: #fff;
}
.b-clockpicker.is-success .card-header {
  background-color: #48c78e;
  color: #fff;
}
.b-clockpicker.is-success .b-clockpicker-face:after {
  background-color: #48c78e;
}
.b-clockpicker.is-success .b-clockpicker-face-hand {
  background-color: #48c78e;
  border-color: #48c78e;
}
.b-clockpicker.is-success .b-clockpicker-face-number.active {
  background-color: #48c78e;
  color: #fff;
}
.b-clockpicker.is-warning .card-header {
  background-color: #ffe08a;
  color: rgba(0, 0, 0, 0.7);
}
.b-clockpicker.is-warning .b-clockpicker-face:after {
  background-color: #ffe08a;
}
.b-clockpicker.is-warning .b-clockpicker-face-hand {
  background-color: #ffe08a;
  border-color: #ffe08a;
}
.b-clockpicker.is-warning .b-clockpicker-face-number.active {
  background-color: #ffe08a;
  color: rgba(0, 0, 0, 0.7);
}
.b-clockpicker.is-danger .card-header {
  background-color: #f14668;
  color: #fff;
}
.b-clockpicker.is-danger .b-clockpicker-face:after {
  background-color: #f14668;
}
.b-clockpicker.is-danger .b-clockpicker-face-hand {
  background-color: #f14668;
  border-color: #f14668;
}
.b-clockpicker.is-danger .b-clockpicker-face-number.active {
  background-color: #f14668;
  color: #fff;
}
.b-clockpicker .dropdown-menu {
  min-width: 0;
}
.b-clockpicker .dropdown,
.b-clockpicker .dropdown-trigger {
  width: 100%;
}
.b-clockpicker .dropdown .input[readonly],
.b-clockpicker .dropdown-trigger .input[readonly] {
  cursor: pointer;
  box-shadow: inset 0 0.0625em 0.125em rgba(10, 10, 10, 0.05);
}
.b-clockpicker .dropdown .input[readonly]:focus, .b-clockpicker .dropdown .input[readonly].is-focused, .b-clockpicker .dropdown .input[readonly]:active, .b-clockpicker .dropdown .input[readonly].is-active,
.b-clockpicker .dropdown-trigger .input[readonly]:focus,
.b-clockpicker .dropdown-trigger .input[readonly].is-focused,
.b-clockpicker .dropdown-trigger .input[readonly]:active,
.b-clockpicker .dropdown-trigger .input[readonly].is-active {
  box-shadow: 0 0 0 0.125em rgba(121, 87, 213, 0.25);
}
.b-clockpicker .dropdown-item, .b-clockpicker .dropdown .dropdown-menu .has-link a, .dropdown .dropdown-menu .has-link .b-clockpicker a {
  font-size: inherit;
  padding: 0;
}
.b-clockpicker .dropdown-content {
  padding-top: 0;
  padding-bottom: 0;
}
.b-clockpicker .card {
  border-radius: 0.25rem;
}
.b-clockpicker .card-header {
  border-top-left-radius: 0.25rem;
  border-top-right-radius: 0.25rem;
}
.b-clockpicker .card-content {
  padding: 12px;
}
.b-clockpicker-btn {
  cursor: pointer;
  opacity: 0.6;
}
.b-clockpicker-btn:hover, .b-clockpicker-btn.active {
  opacity: 1;
}
.b-clockpicker-period .b-clockpicker-btn {
  font-size: 16px;
}
.b-clockpicker-time span {
  align-items: center;
  display: inline-flex;
  justify-content: center;
}
.b-clockpicker-header {
  display: flex;
  line-height: 1;
  justify-content: flex-end;
  color: inherit;
}
.b-clockpicker-header .b-clockpicker-time {
  white-space: nowrap;
}
.b-clockpicker-header .b-clockpicker-time span {
  height: 60px;
  font-size: 60px;
}
.b-clockpicker-header .b-clockpicker-period {
  align-self: flex-end;
  display: flex;
  flex-direction: column;
  margin: 8px 0 6px 8px;
}
.b-clockpicker-body {
  transition: 0.9s cubic-bezier(0.25, 0.8, 0.5, 1);
}
.b-clockpicker-body .b-clockpicker-btn {
  padding: 0 8px;
  border-radius: 9999px;
  margin-bottom: 2px;
}
.b-clockpicker-body .b-clockpicker-btn:hover, .b-clockpicker-body .b-clockpicker-btn.active {
  background-color: #7957d5;
  color: white;
}
.b-clockpicker-body .b-clockpicker-period {
  position: absolute;
  top: 5px;
  right: 5px;
}
.b-clockpicker-body .b-clockpicker-time {
  position: absolute;
  top: 5px;
  left: 5px;
  font-size: 16px;
}
.b-clockpicker-body .b-clockpicker-face {
  border-radius: 50%;
  position: relative;
  background-color: #dbdbdb;
  width: 100%;
  height: 100%;
  align-items: center;
  display: flex;
  justify-content: center;
}
.b-clockpicker-body .b-clockpicker-face:after {
  border-radius: 50%;
  content: "";
  position: absolute;
  left: 50%;
  top: 50%;
  transform: translate(-50%, -50%);
  width: 12px;
  height: 12px;
  z-index: 10;
}
.b-clockpicker-body .b-clockpicker-face-outer-ring {
  user-select: none;
  height: calc(100% - 50px);
  width: calc(100% - 50px);
  position: relative;
  border-radius: 50%;
}
.b-clockpicker-body .b-clockpicker-face-number {
  align-items: center;
  border-radius: 100%;
  cursor: default;
  display: flex;
  font-size: 18px;
  text-align: center;
  justify-content: center;
  position: absolute;
  width: 40px;
  height: 40px;
  left: calc(50% - 40px * 0.5);
  top: calc(50% - 40px * 0.5);
  user-select: none;
}
.b-clockpicker-body .b-clockpicker-face-number > span {
  z-index: 1;
}
.b-clockpicker-body .b-clockpicker-face-number:before, .b-clockpicker-body .b-clockpicker-face-number:after {
  content: "";
  height: 40px;
  width: 40px;
  border-radius: 100%;
  position: absolute;
  top: 50%;
  left: 50%;
  transform: translate(-50%, -50%);
}
.b-clockpicker-body .b-clockpicker-face-number.active {
  cursor: default;
  z-index: 2;
}
.b-clockpicker-body .b-clockpicker-face-number.disabled {
  pointer-events: none;
  opacity: 0.25;
}
.b-clockpicker-body .b-clockpicker-face-hand {
  height: calc(50% - 6px);
  width: 2px;
  bottom: 50%;
  left: calc(50% - 1px);
  transform-origin: center bottom;
  position: absolute;
  will-change: transform;
  z-index: 1;
}
.b-clockpicker-body .b-clockpicker-face-hand:before {
  background: transparent;
  border-width: 2px;
  border-style: solid;
  border-color: inherit;
  border-radius: 100%;
  width: 12px;
  height: 12px;
  content: "";
  position: absolute;
  top: -6px;
  left: 50%;
  transform: translate(-50%, -50%);
}
.b-clockpicker-footer {
  display: block;
  padding: 12px;
}
.b-clockpicker.is-small {
  border-radius: 2px;
  font-size: 0.75rem;
}
.b-clockpicker.is-medium {
  font-size: 1.25rem;
}
.b-clockpicker.is-large {
  font-size: 1.5rem;
}

.collapse .collapse-trigger {
  display: inline;
  cursor: pointer;
}
.collapse .collapse-content {
  display: inherit;
}

.colorpicker .color-name {
  font-family: monospace;
  text-transform: uppercase;
}
.colorpicker .colorpicker-footer {
  margin-top: 0.875rem;
  padding-top: 0.875rem;
  border: 1px solid #dbdbdb;
  border-width: 1px 0 0 0;
}
.colorpicker .colorpicker-footer .colorpicker-fields {
  margin-bottom: 0.875rem;
}
.colorpicker .colorpicker-footer .colorpicker-fields .field {
  flex-grow: 1;
}
.colorpicker .colorpicker-footer .colorpicker-fields .field .field-label {
  margin-right: 0.5rem;
}
.colorpicker .colorpicker-footer .colorpicker-fields .field .control {
  display: flex;
}
.colorpicker .colorpicker-footer .colorpicker-fields .field .control .input {
  -webkit-appearance: none;
  -moz-appearance: textfield;
  appearance: textfield;
  flex-grow: 1;
  width: 0;
  min-width: 42px;
  text-align: right;
}
.colorpicker .colorpicker-footer .colorpicker-fields .field .control .input::-webkit-outer-spin-button, .colorpicker .colorpicker-footer .colorpicker-fields .field .control .input::-webkit-inner-spin-button {
  -webkit-appearance: none;
  margin: 0;
}
.colorpicker .dropdown.is-expanded .dropdown-menu,
.colorpicker .dropdown.is-expanded.is-mobile-modal .dropdown-menu {
  width: unset;
}
.colorpicker .dropdown-horizontal-colorpicker {
  display: flex;
  flex-direction: row;
}
.colorpicker .dropdown-horizontal-colorpicker .colorpicker-footer {
  border-width: 0 0 0 1px;
  margin-top: 0;
  padding-top: 0;
  margin-left: 0.875rem;
  padding-left: 0.875rem;
}

svg.b-colorpicker-triangle {
  width: 200px;
  height: 200px;
  user-select: none;
}
@media (max-width: 769px) {
  svg.b-colorpicker-triangle {
    width: 100%;
    height: auto;
  }
}
svg.b-colorpicker-triangle .colorpicker-triangle-hue {
  width: 100%;
  height: 100%;
  background: conic-gradient(#f00, #ff0, #0f0, #0ff, #00f, #f0f, #f00);
}
svg.b-colorpicker-triangle .colorpicker-triangle-slider-hue, svg.b-colorpicker-triangle .colorpicker-triangle-slider-hue foreignObject, svg.b-colorpicker-triangle .colorpicker-triangle-slider-hue g, svg.b-colorpicker-triangle .colorpicker-triangle-slider-sl, svg.b-colorpicker-triangle .colorpicker-triangle-slider-sl foreignObject, svg.b-colorpicker-triangle .colorpicker-triangle-slider-sl g {
  transform-origin: 50% 50%;
}
svg.b-colorpicker-triangle .hue-range-thumb,
svg.b-colorpicker-triangle .sl-range-thumb {
  background: transparent;
  border-radius: 4px;
  box-shadow: inset 0 0 0 1px #fff, 0 0 0 1px #dbdbdb;
  cursor: grab;
  height: calc(100%/1 - .25em/1);
  width: calc(100%/1 - .25em/1);
  margin: 0.125em;
}
svg.b-colorpicker-triangle .hue-range-thumb:hover,
svg.b-colorpicker-triangle .sl-range-thumb:hover {
  box-shadow: inset 0 0 0 1px #fff, 0 0 0 1px #b5b5b5;
}
svg.b-colorpicker-triangle .hue-range-thumb:focus,
svg.b-colorpicker-triangle .sl-range-thumb:focus {
  box-shadow: inset 0 0 0 1px #fff, 0 0 0 1px #7957d5, 0 0 0 0.125em rgba(121, 87, 213, 0.25);
}
svg.b-colorpicker-triangle .hue-range-thumb:active,
svg.b-colorpicker-triangle .sl-range-thumb:active {
  cursor: grabbing;
}

div.b-colorpicker-square {
  position: relative;
  aspect-ratio: 1/1;
  user-select: none;
}
div.b-colorpicker-square .colorpicker-square-slider-hue {
  background: conic-gradient(#f00, #ff0, #0f0, #0ff, #00f, #f0f, #f00);
  border-radius: 4px;
  position: absolute;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
}
div.b-colorpicker-square .colorpicker-square-slider-hue .hue-range-thumb {
  border-radius: calc(4px / 1.75);
  position: absolute;
  aspect-ratio: 1/1;
  transform: translate(-50%, -50%);
  box-shadow: inset 0 0 0 1px #fff, 0 0 0 1px #dbdbdb;
  cursor: grab;
}
div.b-colorpicker-square .colorpicker-square-slider-hue .hue-range-thumb:hover {
  box-shadow: inset 0 0 0 1px #fff, inset 0 0 0 2px #b5b5b5, 0 0 0 1px #b5b5b5;
}
div.b-colorpicker-square .colorpicker-square-slider-hue .hue-range-thumb:focus {
  box-shadow: inset 0 0 0 1px #fff, 0 0 0 1px #7957d5, 0 0 0 0.125em rgba(121, 87, 213, 0.25);
}
div.b-colorpicker-square .colorpicker-square-slider-hue .hue-range-thumb:active {
  cursor: grabbing;
}
div.b-colorpicker-square .colorpicker-square-slider-sl {
  background: #fff;
  border-radius: 2px;
  position: absolute;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
}
div.b-colorpicker-square .colorpicker-square-slider-sl::before {
  content: "";
  background: linear-gradient(0deg, #000, #fff);
  position: absolute;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
  mix-blend-mode: hard-light;
}
div.b-colorpicker-square .colorpicker-square-slider-sl .sl-range-thumb {
  display: block;
  border-radius: 4px;
  position: absolute;
  width: 8px;
  height: 8px;
  transform: translate(-50%, -50%);
  box-shadow: inset 0 0 0 1px #fff, 0 0 0 1px #dbdbdb;
  cursor: grab;
}
div.b-colorpicker-square .colorpicker-square-slider-sl .sl-range-thumb:hover {
  box-shadow: inset 0 0 0 1px #fff, inset 0 0 0 2px #b5b5b5, 0 0 0 1px #b5b5b5;
}
div.b-colorpicker-square .colorpicker-square-slider-sl .sl-range-thumb:focus {
  box-shadow: inset 0 0 0 1px #fff, 0 0 0 1px #7957d5, 0 0 0 0.125em rgba(121, 87, 213, 0.25);
}
div.b-colorpicker-square .colorpicker-square-slider-sl .sl-range-thumb:active {
  cursor: grabbing;
}

.b-colorpicker-alpha-slider {
  height: 1em;
  background-image: linear-gradient(45deg, #c7c7c7 25%, transparent 25%, transparent 75%, #c7c7c7 75%, #c7c7c7), linear-gradient(45deg, #c7c7c7 25%, transparent 25%, transparent 75%, #c7c7c7 75%, #c7c7c7);
  background-size: 1em 1em;
  background-position: 0.5em 0.5em, 0 0;
  border-radius: 4px;
  margin-top: 0.125em;
  margin-bottom: 0.875rem;
  position: relative;
}
.b-colorpicker-alpha-slider .alpha-range-thumb {
  width: 0.4em;
  height: 1.25em;
  border-radius: 4px;
  box-shadow: inset 0 0 0 1px #fff, inset 0 0 0 2px #dbdbdb, 0 0 0 1px #dbdbdb;
  cursor: grab;
  position: absolute;
  top: 50%;
  left: 0;
  transform: translate(-50%, -50%);
}
.b-colorpicker-alpha-slider .alpha-range-thumb:hover {
  box-shadow: inset 0 0 0 1px #fff, inset 0 0 0 2px #b5b5b5, 0 0 0 1px #b5b5b5;
}
.b-colorpicker-alpha-slider .alpha-range-thumb:focus {
  box-shadow: inset 0 0 0 1px #fff, 0 0 0 1px #7957d5, 0 0 0 0.125em rgba(121, 87, 213, 0.25);
}
.b-colorpicker-alpha-slider .alpha-range-thumb:active {
  cursor: grabbing;
}
.b-colorpicker-alpha-slider .alpha-range-thumb > .b-tooltip, .b-colorpicker-alpha-slider .alpha-range-thumb > .b-tooltip > .tooltip-trigger {
  position: absolute;
  display: block;
  top: 0;
  right: 0;
  bottom: 0;
  left: 0;
}

.datepicker {
  font-size: 0.875rem;
}
.datepicker .dropdown,
.datepicker .dropdown-trigger {
  width: 100%;
}
.datepicker .dropdown .input[readonly],
.datepicker .dropdown-trigger .input[readonly] {
  cursor: pointer;
  box-shadow: inset 0 0.0625em 0.125em rgba(10, 10, 10, 0.05);
}
.datepicker .dropdown .input[readonly]:focus, .datepicker .dropdown .input[readonly].is-focused, .datepicker .dropdown .input[readonly]:active, .datepicker .dropdown .input[readonly].is-active,
.datepicker .dropdown-trigger .input[readonly]:focus,
.datepicker .dropdown-trigger .input[readonly].is-focused,
.datepicker .dropdown-trigger .input[readonly]:active,
.datepicker .dropdown-trigger .input[readonly].is-active {
  box-shadow: 0 0 0 0.125em rgba(121, 87, 213, 0.25);
}
.datepicker .dropdown.is-disabled {
  opacity: 1;
}
.datepicker .dropdown-content {
  background-color: white;
  border-radius: 4px;
  box-shadow: 0 0.5em 1em -0.125em rgba(10, 10, 10, 0.1), 0 0px 0 1px rgba(10, 10, 10, 0.02);
}
.datepicker .dropdown-item, .datepicker .dropdown .dropdown-menu .has-link a, .dropdown .dropdown-menu .has-link .datepicker a {
  font-size: inherit;
}
.datepicker .datepicker-header {
  padding-bottom: 0.875rem;
  margin-bottom: 0.875rem;
  border-bottom: 1px solid #dbdbdb;
}
.datepicker .datepicker-footer {
  margin-top: 0.875rem;
  padding-top: 0.875rem;
  border-top: 1px solid #dbdbdb;
}
.datepicker .datepicker-table {
  display: table;
  margin: 0 auto 0 auto;
}
.datepicker .datepicker-table .datepicker-cell {
  text-align: center;
  vertical-align: middle;
  display: table-cell;
  border-radius: 4px;
  padding: 0.5rem 0.75rem;
}
.datepicker .datepicker-table .datepicker-header {
  display: table-header-group;
}
.datepicker .datepicker-table .datepicker-header .datepicker-cell {
  color: #7a7a7a;
  font-weight: 600;
}
.datepicker .datepicker-table .datepicker-body {
  display: table-row-group;
}
.datepicker .datepicker-table .datepicker-body .datepicker-row {
  display: table-row;
}
.datepicker .datepicker-table .datepicker-body .datepicker-months {
  display: inline-flex;
  flex-wrap: wrap;
  flex-direction: row;
  width: 17rem;
}
.datepicker .datepicker-table .datepicker-body .datepicker-months .datepicker-cell {
  display: flex;
  align-items: center;
  justify-content: center;
  width: 33.33%;
  height: 2.5rem;
}
.datepicker .datepicker-table .datepicker-body .datepicker-cell.is-unselectable {
  color: #b5b5b5;
}
.datepicker .datepicker-table .datepicker-body .datepicker-cell.is-today {
  border: solid 1px rgba(121, 87, 213, 0.5);
}
.datepicker .datepicker-table .datepicker-body .datepicker-cell.is-selectable {
  color: #4a4a4a;
}
.datepicker .datepicker-table .datepicker-body .datepicker-cell.is-selectable:hover:not(.is-selected), .datepicker .datepicker-table .datepicker-body .datepicker-cell.is-selectable:focus:not(.is-selected) {
  background-color: whitesmoke;
  color: #0a0a0a;
  cursor: pointer;
}
.datepicker .datepicker-table .datepicker-body .datepicker-cell.is-selectable.is-within-hovered-range.is-first-hovered {
  background-color: #7a7a7a;
  color: #dbdbdb;
  border-bottom-right-radius: 0;
  border-top-right-radius: 0;
}
.datepicker .datepicker-table .datepicker-body .datepicker-cell.is-selectable.is-within-hovered-range.is-within-hovered {
  background-color: whitesmoke;
  color: #0a0a0a;
  border-radius: 0;
}
.datepicker .datepicker-table .datepicker-body .datepicker-cell.is-selectable.is-within-hovered-range.is-last-hovered {
  background-color: #7a7a7a;
  color: #dbdbdb;
  border-bottom-left-radius: 0;
  border-top-left-radius: 0;
}
.datepicker .datepicker-table .datepicker-body .datepicker-cell.is-selected {
  background-color: #7957d5;
  color: #fff;
}
.datepicker .datepicker-table .datepicker-body .datepicker-cell.is-selected.is-first-selected {
  background-color: #7957d5;
  color: #fff;
  border-bottom-right-radius: 0;
  border-top-right-radius: 0;
}
.datepicker .datepicker-table .datepicker-body .datepicker-cell.is-selected.is-within-selected {
  background-color: rgba(121, 87, 213, 0.5);
  border-radius: 0;
}
.datepicker .datepicker-table .datepicker-body .datepicker-cell.is-selected.is-last-selected {
  background-color: #7957d5;
  color: #fff;
  border-bottom-left-radius: 0;
  border-top-left-radius: 0;
}
.datepicker .datepicker-table .datepicker-body .datepicker-cell.is-nearby:not(.is-selected) {
  color: #b5b5b5;
}
.datepicker .datepicker-table .datepicker-body .datepicker-cell.is-week-number {
  cursor: default;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell {
  padding: 0.3rem 0.75rem 0.75rem;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell.has-event {
  position: relative;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell.has-event .events {
  bottom: 0.425rem;
  display: flex;
  justify-content: center;
  left: 0;
  padding: 0 0.35rem;
  position: absolute;
  width: 100%;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell.has-event .events .event.is-white {
  background-color: white;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell.has-event .events .event.is-black {
  background-color: #0a0a0a;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell.has-event .events .event.is-light {
  background-color: whitesmoke;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell.has-event .events .event.is-dark {
  background-color: #363636;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell.has-event .events .event.is-primary {
  background-color: #7957d5;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell.has-event .events .event.is-link {
  background-color: #7957d5;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell.has-event .events .event.is-info {
  background-color: #167df0;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell.has-event .events .event.is-success {
  background-color: #48c78e;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell.has-event .events .event.is-warning {
  background-color: #ffe08a;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell.has-event .events .event.is-danger {
  background-color: #f14668;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell.has-event.dots .event {
  border-radius: 50%;
  height: 0.35em;
  margin: 0 0.1em;
  width: 0.35em;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell.has-event.bars .event {
  height: 0.25em;
  width: 100%;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell.is-selected {
  overflow: hidden;
}
.datepicker .datepicker-table .datepicker-body.has-events .datepicker-cell.is-selected .events .event.is-primary {
  background-color: #aa94e4;
}
.datepicker.is-small {
  border-radius: 2px;
  font-size: 0.75rem;
}
.datepicker.is-medium {
  font-size: 1.25rem;
}
.datepicker.is-large {
  font-size: 1.5rem;
}
@media screen and (min-width: 1024px) {
  .datepicker .footer-horizontal-timepicker {
    border: none;
    padding-left: 10px;
    margin-left: 5px;
    display: flex;
  }
  .datepicker .dropdown-horizontal-timepicker {
    display: flex;
  }
  .datepicker .content-horizontal-timepicker {
    border-right: 1px solid #dbdbdb;
  }
}

.dialog .modal-card {
  max-width: 460px;
  width: auto;
}
.dialog .modal-card .modal-card-head {
  font-size: 1.25rem;
  font-weight: 600;
}
.dialog .modal-card .modal-card-body .field {
  margin-top: 16px;
}
.dialog .modal-card .modal-card-body.is-titleless {
  border-top-left-radius: 0.25rem;
  border-top-right-radius: 0.25rem;
}
.dialog .modal-card .modal-card-foot {
  justify-content: flex-end;
}
.dialog .modal-card .modal-card-foot .button {
  display: inline;
  min-width: 5em;
  font-weight: 600;
}
@media screen and (min-width: 769px), print {
  .dialog .modal-card {
    min-width: 320px;
  }
}
.dialog.is-small .modal-card,
.dialog.is-small .input,
.dialog.is-small .button {
  border-radius: 2px;
  font-size: 0.75rem;
}
.dialog.is-medium .modal-card,
.dialog.is-medium .input,
.dialog.is-medium .button {
  font-size: 1.25rem;
}
.dialog.is-large .modal-card,
.dialog.is-large .input,
.dialog.is-large .button {
  font-size: 1.5rem;
}
.dialog.has-custom-container {
  position: absolute;
}

.dropdown + .dropdown {
  margin-left: 0.5em;
}
.dropdown .background {
  bottom: 0;
  left: 0;
  position: absolute;
  right: 0;
  top: 0;
  position: fixed;
  background-color: rgba(10, 10, 10, 0.86);
  z-index: 40;
  cursor: pointer;
}
@media screen and (min-width: 1024px) {
  .dropdown .background {
    display: none;
  }
}
.dropdown.dropdown-menu-animation .dropdown-menu {
  display: block;
}
.dropdown .dropdown-menu .dropdown-item.is-disabled, .dropdown .dropdown-menu .has-link a.is-disabled {
  cursor: not-allowed;
}
.dropdown .dropdown-menu .dropdown-item.is-disabled:hover, .dropdown .dropdown-menu .has-link a.is-disabled:hover {
  background: inherit;
  color: inherit;
}
.dropdown .dropdown-menu .has-link a {
  padding-right: 3rem;
  white-space: nowrap;
}
.dropdown.is-hoverable:not(.is-active) .dropdown-menu {
  display: none;
}
.dropdown.is-hoverable:hover .dropdown-menu {
  display: inherit;
}
.dropdown.is-expanded {
  width: 100%;
}
.dropdown.is-expanded .dropdown-trigger {
  width: 100%;
}
.dropdown.is-expanded .dropdown-menu {
  width: 100%;
}
.dropdown.is-expanded.is-mobile-modal .dropdown-menu {
  max-width: 100%;
}
.dropdown:not(.is-disabled) .dropdown-menu .dropdown-item.is-disabled, .dropdown:not(.is-disabled) .dropdown-menu .has-link a.is-disabled {
  opacity: 0.5;
}
.dropdown .navbar-item {
  height: 100%;
}
.dropdown.is-disabled {
  opacity: 0.5;
  cursor: not-allowed;
}
.dropdown.is-disabled .dropdown-trigger {
  pointer-events: none;
}
.dropdown.is-inline .dropdown-menu {
  position: static;
  display: inline-block;
  padding: 0;
}
.dropdown.is-top-right .dropdown-menu {
  top: auto;
  bottom: 100%;
}
.dropdown.is-top-left .dropdown-menu {
  top: auto;
  bottom: 100%;
  right: 0;
  left: auto;
}
.dropdown.is-bottom-left .dropdown-menu {
  right: 0;
  left: auto;
}
@media screen and (max-width: 1023px) {
  .dropdown.is-mobile-modal > .dropdown-menu {
    position: fixed !important;
    width: calc(100vw - 40px);
    max-width: 460px;
    max-height: calc(100vh - 120px);
    top: 25% !important;
    left: 50% !important;
    bottom: auto !important;
    right: auto !important;
    transform: translate3d(-50%, -25%, 0);
    white-space: normal;
    overflow-y: auto;
    z-index: 50 !important;
  }
  .dropdown.is-mobile-modal > .dropdown-menu > .dropdown-content > .dropdown-item, .dropdown .dropdown-menu .has-link .dropdown.is-mobile-modal > .dropdown-menu > .dropdown-content > a, .dropdown.is-mobile-modal > .dropdown-menu > .dropdown-content > .has-link a {
    padding: 1rem 1.5rem;
  }
}

@media screen and (max-width: 1023px) {
  html.is-clipped-touch {
    overflow: hidden !important;
  }
}

.field.is-grouped .field {
  flex-shrink: 0;
}
.field.is-grouped .field:not(:last-child) {
  margin-right: 0.75rem;
}
.field.is-grouped .field.is-expanded {
  flex-grow: 1;
  flex-shrink: 1;
}
.field.has-addons .control:first-child .control .button,
.field.has-addons .control:first-child .control .input,
.field.has-addons .control:first-child .control .select select {
  border-bottom-left-radius: 4px;
  border-top-left-radius: 4px;
}
.field.has-addons .control:last-child .control .button,
.field.has-addons .control:last-child .control .input,
.field.has-addons .control:last-child .control .select select {
  border-bottom-right-radius: 4px;
  border-top-right-radius: 4px;
}
.field.has-addons .control .control .button,
.field.has-addons .control .control .input,
.field.has-addons .control .control .select select {
  border-radius: 0;
}
.field.has-addons .b-numberinput:not(:first-child) .control:first-child .button,
.field.has-addons .b-numberinput:not(:first-child) .control:first-child .input,
.field.has-addons .b-numberinput:not(:first-child) .control:first-child .select select {
  border-bottom-left-radius: 0;
  border-top-left-radius: 0;
}
.field.has-addons .b-numberinput:not(:last-child) .control:last-child .button,
.field.has-addons .b-numberinput:not(:last-child) .control:last-child .input,
.field.has-addons .b-numberinput:not(:last-child) .control:last-child .select select {
  border-bottom-right-radius: 0;
  border-top-right-radius: 0;
}
.field.has-addons.b-numberinput .control {
  margin-right: unset;
}

.field.is-floating-label, .field.is-floating-in-label {
  position: relative;
}
.field.is-floating-label .label, .field.is-floating-in-label .label {
  position: absolute;
  left: 1em;
  font-size: calc(1rem * 0.75);
  background-color: transparent;
  z-index: 5;
  white-space: nowrap;
  text-overflow: ellipsis;
  max-width: calc(100% - 2em);
  overflow: hidden;
}
.field.is-floating-label .label.is-small, .field.is-floating-in-label .label.is-small {
  font-size: calc(0.75rem * 0.75);
}
.field.is-floating-label .label.is-medium, .field.is-floating-in-label .label.is-medium {
  font-size: calc(1.25rem * 0.75);
}
.field.is-floating-label .label.is-large, .field.is-floating-in-label .label.is-large {
  font-size: calc(1.5rem * 0.75);
}
.field.is-floating-label .taginput .counter, .field.is-floating-in-label .taginput .counter {
  float: none;
  text-align: right;
}
.field.is-floating-label.has-addons > .label + .control .button,
.field.is-floating-label.has-addons > .label + .control .input,
.field.is-floating-label.has-addons > .label + .control .select select, .field.is-floating-in-label.has-addons > .label + .control .button,
.field.is-floating-in-label.has-addons > .label + .control .input,
.field.is-floating-in-label.has-addons > .label + .control .select select {
  border-bottom-left-radius: 4px;
  border-top-left-radius: 4px;
}
.field.is-floating-label .label {
  top: -0.775em;
  padding-left: 0.125em;
  padding-right: 0.125em;
}
.field.is-floating-label .label:before {
  content: "";
  display: block;
  position: absolute;
  top: 0.775em;
  left: 0;
  right: 0;
  height: 0.375em;
  background-color: white;
  z-index: -1;
}
.field.is-floating-label .input:focus,
.field.is-floating-label .textarea:focus,
.field.is-floating-label .select select:focus {
  box-shadow: none;
}
.field.is-floating-label .taginput .taginput-container {
  padding-top: 0.475em;
}
.field.is-floating-label .taginput .taginput-container.is-focused {
  box-shadow: none;
}
.field.is-floating-in-label > .label {
  top: 0.25em;
}
.field.is-floating-in-label > .label + .control.datepicker .input, .field.is-floating-in-label > .label + .control.timepicker .input {
  padding-top: calc(3.25em * 0.5 - (1.5rem * 0.75) * 0.5);
  padding-bottom: 1px;
  height: 3.25em;
}
.field.is-floating-in-label > .label + .control:not(.datepicker):not(.timepicker):not(.taginput) .input,
.field.is-floating-in-label > .label + .control:not(.datepicker):not(.timepicker):not(.taginput) .textarea,
.field.is-floating-in-label > .label + .control:not(.datepicker):not(.timepicker):not(.taginput) select {
  padding-top: calc(3.25em * 0.5 - (1.5rem * 0.75) * 0.5);
  padding-bottom: 1px;
  height: 3.25em;
}
.field.is-floating-in-label > .label + .control:not(.datepicker):not(.timepicker):not(.taginput) .select:not(multiple) {
  height: 3.25em;
}
.field.is-floating-in-label > .label + .control:not(.datepicker):not(.timepicker):not(.taginput) .select:not(multiple).is-loading::after {
  margin-top: calc(3.25em * 0.5 - (1.5rem * 0.75) * 0.5);
}
.field.is-floating-in-label > .label + .control:not(.datepicker):not(.timepicker):not(.taginput) .select:not(multiple)::after {
  margin-top: 1px;
}
.field.is-floating-in-label > .label + .control.taginput .taginput-container {
  padding-top: calc(3.25em * 0.5 - (1.5rem * 0.75) * 0.5 + (0.275em - 1px));
}
.field.is-floating-in-label > .label + .control:not(.taginput) .is-left.icon,
.field.is-floating-in-label > .label + .control:not(.taginput) .is-right.icon {
  height: 3.25em;
}
.field.is-floating-in-label > .label + .control:not(.taginput) .is-left.icon {
  padding-top: calc(3.25em * 0.5 - (1.5rem * 0.75) * 0.5);
}
.field.is-floating-in-label > .label + .control.is-loading::after {
  margin-top: calc(3.25em * 0.5 - (1.5rem * 0.75) * 0.5);
}
.field.is-floating-in-label > .label + .field-body > .is-grouped .control .input,
.field.is-floating-in-label > .label + .field-body > .is-grouped .control .textarea,
.field.is-floating-in-label > .label + .field-body > .is-grouped .control select, .field.is-floating-in-label > .label + .field-body > .has-addons .control .input,
.field.is-floating-in-label > .label + .field-body > .has-addons .control .textarea,
.field.is-floating-in-label > .label + .field-body > .has-addons .control select {
  padding-top: calc(3.25em * 0.5 - (1.5rem * 0.75) * 0.5);
  padding-bottom: 1px;
}
.field.is-floating-in-label > .label + .field-body > .is-grouped .control .input,
.field.is-floating-in-label > .label + .field-body > .is-grouped .control .textarea,
.field.is-floating-in-label > .label + .field-body > .is-grouped .control select,
.field.is-floating-in-label > .label + .field-body > .is-grouped .control .button, .field.is-floating-in-label > .label + .field-body > .has-addons .control .input,
.field.is-floating-in-label > .label + .field-body > .has-addons .control .textarea,
.field.is-floating-in-label > .label + .field-body > .has-addons .control select,
.field.is-floating-in-label > .label + .field-body > .has-addons .control .button {
  height: 3.25em;
}
.field.is-floating-in-label.has-numberinput .b-numberinput .control .input,
.field.is-floating-in-label.has-numberinput .b-numberinput .control .button {
  height: 3.25em;
}
.field.is-floating-label.has-numberinput .label, .field.is-floating-in-label.has-numberinput .label {
  margin-left: calc(1rem * 3);
}
.field.is-floating-label.has-numberinput.has-numberinput-is-small .label, .field.is-floating-in-label.has-numberinput.has-numberinput-is-small .label {
  margin-left: calc(0.75rem * 3);
}
.field.is-floating-label.has-numberinput.has-numberinput-is-medium .label, .field.is-floating-in-label.has-numberinput.has-numberinput-is-medium .label {
  margin-left: calc(1.25rem * 3);
}
.field.is-floating-label.has-numberinput.has-numberinput-is-large .label, .field.is-floating-in-label.has-numberinput.has-numberinput-is-large .label {
  margin-left: calc(1.5rem * 3);
}
.field.is-floating-label.has-numberinput-compact .label, .field.is-floating-in-label.has-numberinput-compact .label {
  margin-left: calc(1rem * 2.25);
}
.field.is-floating-label.has-numberinput-compact.has-numberinput-is-small .label, .field.is-floating-in-label.has-numberinput-compact.has-numberinput-is-small .label {
  margin-left: calc(0.75rem * 2.25);
}
.field.is-floating-label.has-numberinput-compact.has-numberinput-is-medium .label, .field.is-floating-in-label.has-numberinput-compact.has-numberinput-is-medium .label {
  margin-left: calc(1.25rem * 2.25);
}
.field.is-floating-label.has-numberinput-compact.has-numberinput-is-large .label, .field.is-floating-in-label.has-numberinput-compact.has-numberinput-is-large .label {
  margin-left: calc(1.5rem * 2.25);
}
.field.is-grouped-right.is-floating-in-label .label, .field.has-addons-right.is-floating-in-label .label {
  position: relative;
  left: calc(3.25em + 2em);
}
.field.is-grouped-right.is-floating-label .label, .field.has-addons-right.is-floating-label .label {
  position: relative;
  left: calc(3.25em + 2em);
}

.control .help.counter {
  float: right;
  margin-left: 0.5em;
}
.control .icon.is-clickable {
  pointer-events: auto;
  cursor: pointer;
}
.control.is-loading::after {
  top: calc(50% - (1em * 0.5));
  right: calc((2.5em * 0.5) - .5em);
}

.icon {
  -webkit-touch-callout: none;
  -webkit-user-select: none;
  -moz-user-select: none;
  -ms-user-select: none;
  user-select: none;
  cursor: inherit;
}
.icon svg {
  background-color: transparent;
  fill: currentColor;
  stroke-width: 0;
  stroke: currentColor;
  pointer-events: none;
  width: auto;
  height: auto;
}

.b-image-wrapper > img {
  object-fit: cover;
}
.b-image-wrapper > img.has-ratio, .b-image-wrapper > img.placeholder {
  height: 100%;
  width: 100%;
}
.b-image-wrapper > img.placeholder {
  filter: blur(10px);
}

.loading-overlay {
  bottom: 0;
  left: 0;
  position: absolute;
  right: 0;
  top: 0;
  align-items: center;
  display: none;
  justify-content: center;
  overflow: hidden;
  z-index: 29;
}
.loading-overlay.is-active {
  display: flex;
}
.loading-overlay.is-full-page {
  position: fixed;
  z-index: 999;
}
.loading-overlay.is-full-page .loading-icon:after {
  top: calc(50% - 2.5em);
  left: calc(50% - 2.5em);
  width: 5em;
  height: 5em;
}
.loading-overlay .loading-background {
  bottom: 0;
  left: 0;
  position: absolute;
  right: 0;
  top: 0;
  background: #7f7f7f;
  background: rgba(255, 255, 255, 0.5);
}
.loading-overlay .loading-icon {
  position: relative;
}
.loading-overlay .loading-icon:after {
  animation: spinAround 500ms infinite linear;
  border: 2px solid #dbdbdb;
  border-radius: 9999px;
  border-right-color: transparent;
  border-top-color: transparent;
  content: "";
  display: block;
  height: 1em;
  position: relative;
  width: 1em;
  position: absolute;
  top: calc(50% - 1.5em);
  left: calc(50% - 1.5em);
  width: 3em;
  height: 3em;
  border-width: 0.25em;
}

.menu .menu-list li > a.is-disabled {
  pointer-events: none;
  cursor: not-allowed;
  opacity: 0.5;
}

.message .media,
.notification .media {
  padding-top: 0;
  border: 0;
}
.message progress,
.notification progress {
  height: 5px;
}

.modal.is-full-screen > .animation-content,
.modal.is-full-screen > .animation-content > .modal-card {
  width: 100%;
  height: 100%;
  max-height: 100vh;
  margin: 0;
  background-color: whitesmoke;
}
.modal .animation-content {
  margin: 0 20px;
}
.modal .animation-content .modal-card {
  margin: 0;
}
@media screen and (max-width: 768px) {
  .modal .animation-content {
    width: 100%;
  }
}
.modal .modal-content {
  width: 100%;
}

.navbar.has-navbar-centered .navbar-start {
  justify-content: center;
  margin-left: auto;
}
.navbar.has-navbar-centered .navbar-end {
  margin-left: 0;
}
.navbar .navbar-dropdown.is-boxed {
  visibility: hidden;
  transition-property: opacity, visibility, transform;
}
.navbar .navbar-item.has-dropdown.is-active .is-boxed,
.navbar .navbar-item.has-dropdown.is-hoverable:hover .is-boxed {
  visibility: visible;
}

.notices {
  position: fixed;
  display: flex;
  top: 0;
  bottom: 0;
  left: 0;
  right: 0;
  padding: 2em;
  overflow: hidden;
  z-index: 1000;
  pointer-events: none;
}
.notices .toast {
  display: inline-flex;
  animation-duration: 150ms;
  margin: 0.5em 0;
  text-align: center;
  box-shadow: 0 1px 4px rgba(0, 0, 0, 0.12), 0 0 6px rgba(0, 0, 0, 0.04);
  border-radius: 2em;
  padding: 0.75em 1.5em;
  pointer-events: auto;
  opacity: 0.92;
}
.notices .toast.is-white {
  color: #0a0a0a;
  background: white;
}
.notices .toast.is-black {
  color: white;
  background: #0a0a0a;
}
.notices .toast.is-light {
  color: rgba(0, 0, 0, 0.7);
  background: whitesmoke;
}
.notices .toast.is-dark {
  color: #fff;
  background: #363636;
}
.notices .toast.is-primary {
  color: #fff;
  background: #7957d5;
}
.notices .toast.is-link {
  color: #fff;
  background: #7957d5;
}
.notices .toast.is-info {
  color: #fff;
  background: #167df0;
}
.notices .toast.is-success {
  color: #fff;
  background: #48c78e;
}
.notices .toast.is-warning {
  color: rgba(0, 0, 0, 0.7);
  background: #ffe08a;
}
.notices .toast.is-danger {
  color: #fff;
  background: #f14668;
}
.notices .snackbar {
  display: inline-flex;
  align-items: center;
  justify-content: space-around;
  animation-duration: 150ms;
  margin: 0.5em 0;
  box-shadow: 0 1px 4px rgba(0, 0, 0, 0.12), 0 0 6px rgba(0, 0, 0, 0.04);
  border-radius: 4px;
  pointer-events: auto;
  background: #363636;
  color: #fff;
  min-height: 3em;
}
.notices .snackbar .text {
  padding: 0.5em 1em;
}
.notices .snackbar .action {
  margin-left: auto;
  padding: 0.5em;
  padding-left: 0;
}
.notices .snackbar .action .button {
  font-weight: 600;
  text-transform: uppercase;
  background: #363636;
  border: transparent;
}
.notices .snackbar .action .button:hover {
  background: #292929;
}
.notices .snackbar .action .button:active {
  background: #292929;
}
.notices .snackbar .action.is-white .button {
  color: white;
}
.notices .snackbar .action.is-black .button {
  color: #0a0a0a;
}
.notices .snackbar .action.is-light .button {
  color: whitesmoke;
}
.notices .snackbar .action.is-dark .button {
  color: #363636;
}
.notices .snackbar .action.is-primary .button {
  color: #7957d5;
}
.notices .snackbar .action.is-link .button {
  color: #7957d5;
}
.notices .snackbar .action.is-info .button {
  color: #167df0;
}
.notices .snackbar .action.is-success .button {
  color: #48c78e;
}
.notices .snackbar .action.is-warning .button {
  color: #ffe08a;
}
.notices .snackbar .action.is-danger .button {
  color: #f14668;
}
.notices .snackbar .action.is-cancel {
  padding-right: 0;
}
@media screen and (max-width: 768px) {
  .notices .snackbar {
    width: 100%;
    margin: 0;
    border-radius: 0;
  }
}
@media screen and (min-width: 769px), print {
  .notices .snackbar {
    min-width: 350px;
    max-width: 600px;
    overflow: hidden;
  }
}
.notices .notification {
  pointer-events: auto;
  max-width: 600px;
}
.notices .toast.is-top, .notices .toast.is-bottom,
.notices .snackbar.is-top,
.notices .snackbar.is-bottom,
.notices .notification.is-top,
.notices .notification.is-bottom {
  align-self: center;
}
.notices .toast.is-top-right, .notices .toast.is-bottom-right,
.notices .snackbar.is-top-right,
.notices .snackbar.is-bottom-right,
.notices .notification.is-top-right,
.notices .notification.is-bottom-right {
  align-self: flex-end;
}
.notices .toast.is-top-left, .notices .toast.is-bottom-left,
.notices .snackbar.is-top-left,
.notices .snackbar.is-bottom-left,
.notices .notification.is-top-left,
.notices .notification.is-bottom-left {
  align-self: flex-start;
}
.notices .toast.is-toast,
.notices .snackbar.is-toast,
.notices .notification.is-toast {
  opacity: 0.92;
}
.notices.is-top {
  flex-direction: column;
}
.notices.is-bottom {
  flex-direction: column-reverse;
}
.notices.is-bottom .notification {
  margin-bottom: 0;
}
.notices.is-bottom .notification:not(:first-child) {
  margin-bottom: 1.5rem;
}
.notices.has-custom-container {
  position: absolute;
}
@media screen and (max-width: 768px) {
  .notices {
    padding: 0;
    position: fixed !important;
  }
}

.notification .progress-wrapper {
  position: absolute;
  bottom: 0;
  left: 0;
  width: 100%;
}

.b-numberinput.field {
  margin-bottom: 0;
}
.b-numberinput.field.is-grouped div.control {
  flex-grow: 1;
  flex-shrink: 1;
}
.b-numberinput.field.has-addons.is-expanded {
  flex-grow: 1;
  flex-shrink: 1;
}
.b-numberinput input[type=number]::-webkit-inner-spin-button,
.b-numberinput input[type=number]::-webkit-outer-spin-button {
  -webkit-appearance: none;
}
.b-numberinput input[type=number] {
  -moz-appearance: textfield;
}
.b-numberinput input[type=number] {
  text-align: center;
}
.b-numberinput .button.is-rounded {
  padding-left: 1em;
  padding-right: 1em;
}

.pagination .pagination-next,
.pagination .pagination-previous {
  padding-left: 0.75em;
  padding-right: 0.75em;
}
.pagination .pagination-next.is-disabled,
.pagination .pagination-previous.is-disabled {
  pointer-events: none;
  cursor: not-allowed;
  opacity: 0.5;
}
.pagination.is-simple {
  justify-content: normal;
}
.pagination.is-simple.is-centered {
  justify-content: center;
}
.pagination.is-simple.is-right {
  justify-content: flex-end;
}
.pagination .is-current {
  pointer-events: none;
  cursor: not-allowed;
}

@media screen and (min-width: 769px), print {
  .pagination.has-input .pagination-list {
    order: 1;
  }
  .pagination.has-input .pagination-input {
    order: 2;
  }
  .pagination.has-input .pagination-previous {
    order: 3;
  }
  .pagination.has-input .pagination-next {
    order: 4;
  }
  .pagination.has-input.is-centered .pagination-previous {
    order: 1;
  }
  .pagination.has-input.is-centered .pagination-list {
    order: 2;
  }
  .pagination.has-input.is-centered .pagination-input {
    order: 3;
  }
  .pagination.has-input.is-centered .pagination-next {
    order: 4;
  }
  .pagination.has-input.is-centered.is-input-right .pagination-previous {
    order: 1;
  }
  .pagination.has-input.is-centered.is-input-right .pagination-list {
    order: 2;
  }
  .pagination.has-input.is-centered.is-input-right .pagination-next {
    order: 3;
  }
  .pagination.has-input.is-centered.is-input-right .pagination-input {
    order: 4;
  }
  .pagination.has-input.is-centered.is-input-left .pagination-input {
    order: 1;
  }
  .pagination.has-input.is-centered.is-input-left .pagination-previous {
    order: 2;
  }
  .pagination.has-input.is-centered.is-input-left .pagination-list {
    order: 3;
  }
  .pagination.has-input.is-centered.is-input-left .pagination-next {
    order: 4;
  }
  .pagination.has-input.is-right .pagination-previous {
    order: 1;
  }
  .pagination.has-input.is-right .pagination-next {
    order: 2;
  }
  .pagination.has-input.is-right .pagination-input {
    order: 3;
  }
  .pagination.has-input.is-right .pagination-list {
    order: 4;
  }
  .pagination.has-input.is-right.is-input-right .pagination-previous {
    order: 1;
  }
  .pagination.has-input.is-right.is-input-right .pagination-next {
    order: 2;
  }
  .pagination.has-input.is-right.is-input-right .pagination-list {
    order: 3;
  }
  .pagination.has-input.is-right.is-input-right .pagination-input {
    order: 4;
  }
  .pagination.has-input.is-right.is-input-left .pagination-input {
    order: 1;
  }
  .pagination.has-input.is-right.is-input-left .pagination-previous {
    order: 2;
  }
  .pagination.has-input.is-right.is-input-left .pagination-next {
    order: 3;
  }
  .pagination.has-input.is-right.is-input-left .pagination-list {
    order: 4;
  }
  .pagination.has-input.is-input-right .pagination-list {
    order: 1;
  }
  .pagination.has-input.is-input-right .pagination-previous {
    order: 2;
  }
  .pagination.has-input.is-input-right .pagination-next {
    order: 3;
  }
  .pagination.has-input.is-input-right .pagination-input {
    order: 4;
  }
  .pagination.has-input.is-input-left .pagination-input {
    order: 1;
  }
  .pagination.has-input.is-input-left .pagination-list {
    order: 2;
  }
  .pagination.has-input.is-input-left .pagination-previous {
    order: 3;
  }
  .pagination.has-input.is-input-left .pagination-next {
    order: 4;
  }
}
.progress-wrapper {
  position: relative;
  overflow: hidden;
}
.progress-wrapper:not(:last-child) {
  margin-bottom: 1.5rem;
}
.progress-wrapper .progress-value {
  position: absolute;
  top: 0;
  left: 50%;
  transform: translateX(-50%);
  font-size: calc(1rem / 1.5);
  line-height: 1rem;
  font-weight: 700;
  color: rgba(0, 0, 0, 0.7);
  white-space: nowrap;
}
.progress-wrapper .progress, .progress-wrapper .progress-wrapper.is-not-native, .progress-wrapper .progress-bar {
  margin-bottom: 0;
}
.progress-wrapper .progress.is-small + .progress-value, .progress-wrapper .is-small.progress-wrapper.is-not-native + .progress-value, .progress-wrapper .progress.is-small .progress-value, .progress-wrapper .is-small.progress-wrapper.is-not-native .progress-value, .progress-wrapper .progress-bar.is-small + .progress-value, .progress-wrapper .progress-bar.is-small .progress-value {
  font-size: calc(0.75rem / 1.5);
  line-height: 0.75rem;
}
.progress-wrapper .progress.is-medium + .progress-value, .progress-wrapper .is-medium.progress-wrapper.is-not-native + .progress-value, .progress-wrapper .progress.is-medium .progress-value, .progress-wrapper .is-medium.progress-wrapper.is-not-native .progress-value, .progress-wrapper .progress-bar.is-medium + .progress-value, .progress-wrapper .progress-bar.is-medium .progress-value {
  font-size: calc(1.25rem / 1.5);
  line-height: 1.25rem;
}
.progress-wrapper .progress.is-large + .progress-value, .progress-wrapper .is-large.progress-wrapper.is-not-native + .progress-value, .progress-wrapper .progress.is-large .progress-value, .progress-wrapper .is-large.progress-wrapper.is-not-native .progress-value, .progress-wrapper .progress-bar.is-large + .progress-value, .progress-wrapper .progress-bar.is-large .progress-value {
  font-size: calc(1.5rem / 1.5);
  line-height: 1.5rem;
}
.progress-wrapper .progress::-webkit-progress-value, .progress-wrapper .progress-wrapper.is-not-native::-webkit-progress-value, .progress-wrapper .progress-bar::-webkit-progress-value {
  transition: width 0.5s ease;
}
.progress-wrapper .progress.is-more-than-half + .progress-value, .progress-wrapper .is-more-than-half.progress-wrapper.is-not-native + .progress-value, .progress-wrapper .progress-bar.is-more-than-half + .progress-value {
  color: #fff;
}
.progress-wrapper .progress.is-more-than-half.is-white + .progress-value, .progress-wrapper .is-more-than-half.is-white.progress-wrapper.is-not-native + .progress-value, .progress-wrapper .progress-bar.is-more-than-half.is-white + .progress-value {
  color: #0a0a0a;
}
.progress-wrapper .progress.is-more-than-half.is-black + .progress-value, .progress-wrapper .is-more-than-half.is-black.progress-wrapper.is-not-native + .progress-value, .progress-wrapper .progress-bar.is-more-than-half.is-black + .progress-value {
  color: white;
}
.progress-wrapper .progress.is-more-than-half.is-light + .progress-value, .progress-wrapper .is-more-than-half.is-light.progress-wrapper.is-not-native + .progress-value, .progress-wrapper .progress-bar.is-more-than-half.is-light + .progress-value {
  color: rgba(0, 0, 0, 0.7);
}
.progress-wrapper .progress.is-more-than-half.is-dark + .progress-value, .progress-wrapper .is-more-than-half.is-dark.progress-wrapper.is-not-native + .progress-value, .progress-wrapper .progress-bar.is-more-than-half.is-dark + .progress-value {
  color: #fff;
}
.progress-wrapper .progress.is-more-than-half.is-primary + .progress-value, .progress-wrapper .is-more-than-half.is-primary.progress-wrapper.is-not-native + .progress-value, .progress-wrapper .progress-bar.is-more-than-half.is-primary + .progress-value {
  color: #fff;
}
.progress-wrapper .progress.is-more-than-half.is-link + .progress-value, .progress-wrapper .is-more-than-half.is-link.progress-wrapper.is-not-native + .progress-value, .progress-wrapper .progress-bar.is-more-than-half.is-link + .progress-value {
  color: #fff;
}
.progress-wrapper .progress.is-more-than-half.is-info + .progress-value, .progress-wrapper .is-more-than-half.is-info.progress-wrapper.is-not-native + .progress-value, .progress-wrapper .progress-bar.is-more-than-half.is-info + .progress-value {
  color: #fff;
}
.progress-wrapper .progress.is-more-than-half.is-success + .progress-value, .progress-wrapper .is-more-than-half.is-success.progress-wrapper.is-not-native + .progress-value, .progress-wrapper .progress-bar.is-more-than-half.is-success + .progress-value {
  color: #fff;
}
.progress-wrapper .progress.is-more-than-half.is-warning + .progress-value, .progress-wrapper .is-more-than-half.is-warning.progress-wrapper.is-not-native + .progress-value, .progress-wrapper .progress-bar.is-more-than-half.is-warning + .progress-value {
  color: rgba(0, 0, 0, 0.7);
}
.progress-wrapper .progress.is-more-than-half.is-danger + .progress-value, .progress-wrapper .is-more-than-half.is-danger.progress-wrapper.is-not-native + .progress-value, .progress-wrapper .progress-bar.is-more-than-half.is-danger + .progress-value {
  color: #fff;
}
.progress-wrapper .progress.is-squared, .progress-wrapper .is-squared.progress-wrapper.is-not-native, .progress-wrapper .progress-bar.is-squared {
  border-radius: 0;
}
.progress-wrapper.is-not-native {
  white-space: nowrap;
  background-color: #ededed;
  border-radius: 9999px;
}
.progress-wrapper.is-not-native .progress-bar {
  position: relative;
  display: inline-block;
  vertical-align: top;
  height: 100%;
  background-color: #4a4a4a;
}
.progress-wrapper.is-not-native .progress-bar .progress-value {
  color: #fff;
}
.progress-wrapper.is-not-native .progress-bar.is-white {
  background-color: white;
}
.progress-wrapper.is-not-native .progress-bar.is-white .progress-value {
  color: #0a0a0a;
}
.progress-wrapper.is-not-native .progress-bar.is-black {
  background-color: #0a0a0a;
}
.progress-wrapper.is-not-native .progress-bar.is-black .progress-value {
  color: white;
}
.progress-wrapper.is-not-native .progress-bar.is-light {
  background-color: whitesmoke;
}
.progress-wrapper.is-not-native .progress-bar.is-light .progress-value {
  color: rgba(0, 0, 0, 0.7);
}
.progress-wrapper.is-not-native .progress-bar.is-dark {
  background-color: #363636;
}
.progress-wrapper.is-not-native .progress-bar.is-dark .progress-value {
  color: #fff;
}
.progress-wrapper.is-not-native .progress-bar.is-primary {
  background-color: #7957d5;
}
.progress-wrapper.is-not-native .progress-bar.is-primary .progress-value {
  color: #fff;
}
.progress-wrapper.is-not-native .progress-bar.is-link {
  background-color: #7957d5;
}
.progress-wrapper.is-not-native .progress-bar.is-link .progress-value {
  color: #fff;
}
.progress-wrapper.is-not-native .progress-bar.is-info {
  background-color: #167df0;
}
.progress-wrapper.is-not-native .progress-bar.is-info .progress-value {
  color: #fff;
}
.progress-wrapper.is-not-native .progress-bar.is-success {
  background-color: #48c78e;
}
.progress-wrapper.is-not-native .progress-bar.is-success .progress-value {
  color: #fff;
}
.progress-wrapper.is-not-native .progress-bar.is-warning {
  background-color: #ffe08a;
}
.progress-wrapper.is-not-native .progress-bar.is-warning .progress-value {
  color: rgba(0, 0, 0, 0.7);
}
.progress-wrapper.is-not-native .progress-bar.is-danger {
  background-color: #f14668;
}
.progress-wrapper.is-not-native .progress-bar.is-danger .progress-value {
  color: #fff;
}
.progress-wrapper.is-squared {
  border-radius: 0;
}

.b-radio.radio {
  outline: none;
  display: inline-flex;
  align-items: center;
}
.b-radio.radio:not(.button) {
  margin-right: 0.5em;
}
.b-radio.radio:not(.button) + .radio:last-child {
  margin-right: 0;
}
.b-radio.radio + .radio {
  margin-left: 0;
}
.b-radio.radio input[type=radio] {
  position: absolute;
  left: 0;
  opacity: 0;
  outline: none;
  z-index: -1;
}
.b-radio.radio input[type=radio] + .check {
  display: flex;
  flex-shrink: 0;
  position: relative;
  cursor: pointer;
  width: 1.25em;
  height: 1.25em;
  transition: background 150ms ease-out;
  border-radius: 50%;
  border: 2px solid #7a7a7a;
}
.b-radio.radio input[type=radio] + .check:before {
  content: "";
  display: flex;
  position: absolute;
  left: 50%;
  margin-left: calc(-1.25em * 0.5);
  bottom: 50%;
  margin-bottom: calc(-1.25em * 0.5);
  width: 1.25em;
  height: 1.25em;
  transition: transform 150ms ease-out;
  border-radius: 50%;
  transform: scale(0);
  background-color: #7957d5;
}
.b-radio.radio input[type=radio] + .check.is-white:before {
  background: white;
}
.b-radio.radio input[type=radio] + .check.is-black:before {
  background: #0a0a0a;
}
.b-radio.radio input[type=radio] + .check.is-light:before {
  background: whitesmoke;
}
.b-radio.radio input[type=radio] + .check.is-dark:before {
  background: #363636;
}
.b-radio.radio input[type=radio] + .check.is-primary:before {
  background: #7957d5;
}
.b-radio.radio input[type=radio] + .check.is-link:before {
  background: #7957d5;
}
.b-radio.radio input[type=radio] + .check.is-info:before {
  background: #167df0;
}
.b-radio.radio input[type=radio] + .check.is-success:before {
  background: #48c78e;
}
.b-radio.radio input[type=radio] + .check.is-warning:before {
  background: #ffe08a;
}
.b-radio.radio input[type=radio] + .check.is-danger:before {
  background: #f14668;
}
.b-radio.radio input[type=radio]:checked + .check {
  border-color: #7957d5;
}
.b-radio.radio input[type=radio]:checked + .check.is-white {
  border-color: white;
}
.b-radio.radio input[type=radio]:checked + .check.is-black {
  border-color: #0a0a0a;
}
.b-radio.radio input[type=radio]:checked + .check.is-light {
  border-color: whitesmoke;
}
.b-radio.radio input[type=radio]:checked + .check.is-dark {
  border-color: #363636;
}
.b-radio.radio input[type=radio]:checked + .check.is-primary {
  border-color: #7957d5;
}
.b-radio.radio input[type=radio]:checked + .check.is-link {
  border-color: #7957d5;
}
.b-radio.radio input[type=radio]:checked + .check.is-info {
  border-color: #167df0;
}
.b-radio.radio input[type=radio]:checked + .check.is-success {
  border-color: #48c78e;
}
.b-radio.radio input[type=radio]:checked + .check.is-warning {
  border-color: #ffe08a;
}
.b-radio.radio input[type=radio]:checked + .check.is-danger {
  border-color: #f14668;
}
.b-radio.radio input[type=radio]:checked + .check:before {
  transform: scale(0.5);
}
.b-radio.radio input[type=radio]:focus + .check {
  box-shadow: 0 0 0.5em rgba(122, 122, 122, 0.8);
}
.b-radio.radio input[type=radio]:focus:checked + .check {
  box-shadow: 0 0 0.5em rgba(121, 87, 213, 0.8);
}
.b-radio.radio input[type=radio]:focus:checked + .check.is-white {
  box-shadow: 0 0 0.5em rgba(255, 255, 255, 0.8);
}
.b-radio.radio input[type=radio]:focus:checked + .check.is-black {
  box-shadow: 0 0 0.5em rgba(10, 10, 10, 0.8);
}
.b-radio.radio input[type=radio]:focus:checked + .check.is-light {
  box-shadow: 0 0 0.5em rgba(245, 245, 245, 0.8);
}
.b-radio.radio input[type=radio]:focus:checked + .check.is-dark {
  box-shadow: 0 0 0.5em rgba(54, 54, 54, 0.8);
}
.b-radio.radio input[type=radio]:focus:checked + .check.is-primary {
  box-shadow: 0 0 0.5em rgba(121, 87, 213, 0.8);
}
.b-radio.radio input[type=radio]:focus:checked + .check.is-link {
  box-shadow: 0 0 0.5em rgba(121, 87, 213, 0.8);
}
.b-radio.radio input[type=radio]:focus:checked + .check.is-info {
  box-shadow: 0 0 0.5em rgba(22, 125, 240, 0.8);
}
.b-radio.radio input[type=radio]:focus:checked + .check.is-success {
  box-shadow: 0 0 0.5em rgba(72, 199, 142, 0.8);
}
.b-radio.radio input[type=radio]:focus:checked + .check.is-warning {
  box-shadow: 0 0 0.5em rgba(255, 224, 138, 0.8);
}
.b-radio.radio input[type=radio]:focus:checked + .check.is-danger {
  box-shadow: 0 0 0.5em rgba(241, 70, 104, 0.8);
}
.b-radio.radio .control-label {
  padding-left: calc(0.75em - 1px);
}
.b-radio.radio.button {
  display: flex;
}
.b-radio.radio.button.is-selected {
  z-index: 1;
}
.b-radio.radio[disabled] {
  opacity: 0.5;
}
.b-radio.radio:hover input[type=radio]:not(:disabled) + .check {
  border-color: #7957d5;
}
.b-radio.radio:hover input[type=radio]:not(:disabled) + .check.is-white {
  border-color: white;
}
.b-radio.radio:hover input[type=radio]:not(:disabled) + .check.is-black {
  border-color: #0a0a0a;
}
.b-radio.radio:hover input[type=radio]:not(:disabled) + .check.is-light {
  border-color: whitesmoke;
}
.b-radio.radio:hover input[type=radio]:not(:disabled) + .check.is-dark {
  border-color: #363636;
}
.b-radio.radio:hover input[type=radio]:not(:disabled) + .check.is-primary {
  border-color: #7957d5;
}
.b-radio.radio:hover input[type=radio]:not(:disabled) + .check.is-link {
  border-color: #7957d5;
}
.b-radio.radio:hover input[type=radio]:not(:disabled) + .check.is-info {
  border-color: #167df0;
}
.b-radio.radio:hover input[type=radio]:not(:disabled) + .check.is-success {
  border-color: #48c78e;
}
.b-radio.radio:hover input[type=radio]:not(:disabled) + .check.is-warning {
  border-color: #ffe08a;
}
.b-radio.radio:hover input[type=radio]:not(:disabled) + .check.is-danger {
  border-color: #f14668;
}
.b-radio.radio.is-small {
  border-radius: 2px;
  font-size: 0.75rem;
}
.b-radio.radio.is-medium {
  font-size: 1.25rem;
}
.b-radio.radio.is-large {
  font-size: 1.5rem;
}

.rate {
  align-items: center;
  display: flex;
}
.rate:not(:last-child) {
  margin-bottom: 0.75rem;
}
.rate.is-spaced .rate-item:not(:last-child) {
  margin-right: 0.25rem;
}
.rate.is-disabled .rate-item {
  cursor: initial;
}
.rate.is-disabled .rate-item:hover {
  transform: none;
}
.rate.is-rtl .rate-item {
  order: 1;
}
.rate.is-rtl .rate-text {
  margin-left: 0;
  margin-right: 0.35rem;
}
.rate .rate-item {
  cursor: pointer;
  display: inline-flex;
  position: relative;
  transition: all 0.3s;
}
.rate .rate-item:hover {
  transform: scale(1.1);
}
.rate .rate-item.set-on .icon, .rate .rate-item.set-half .is-half {
  color: #ffd970;
}
.rate .rate-item.set-half .is-half {
  position: absolute;
  left: 0;
  top: 0;
  overflow: hidden;
}
.rate .icon {
  color: #dbdbdb;
  line-height: 1;
  pointer-events: none;
  width: inherit;
}
.rate .is-half > i {
  position: absolute;
  left: 0;
}
.rate .rate-text {
  font-size: calc(1rem / 1.25);
  margin-left: 0.35rem;
}
.rate .rate-text.is-small {
  font-size: calc(0.75rem / 1.25);
}
.rate .rate-text.is-medium {
  font-size: calc(1.25rem / 1.25);
}
.rate .rate-text.is-large {
  font-size: calc(1.5rem / 1.25);
}

.select select {
  text-rendering: auto !important;
  padding-right: 2.5em;
}
.select select option {
  color: #4a4a4a;
  padding: calc(0.5em - 1px) calc(0.75em - 1px);
}
.select select option:disabled {
  cursor: not-allowed;
  opacity: 0.5;
}
.select select optgroup {
  color: #b5b5b5;
  font-weight: 400;
  font-style: normal;
  padding: 0.25em 0;
}
.select select[disabled] {
  opacity: 1;
}
.select.is-empty select {
  color: rgba(122, 122, 122, 0.7);
}
.select.is-loading::after {
  top: calc(50% - (1em * 0.5));
  right: calc((2.5em * 0.5) - .5em);
}

.b-skeleton {
  display: inline-flex;
  flex-direction: column;
  vertical-align: middle;
  width: 100%;
}
.b-skeleton > .b-skeleton-item {
  background: linear-gradient(90deg, #dbdbdb 25%, rgba(219, 219, 219, 0.5) 50%, #dbdbdb 75%);
  background-size: 400% 100%;
  width: 100%;
}
.b-skeleton > .b-skeleton-item.is-rounded {
  border-radius: 4px;
}
.b-skeleton > .b-skeleton-item::after {
  content: " ";
}
.b-skeleton > .b-skeleton-item + .b-skeleton-item {
  margin-top: 0.5rem;
}
.b-skeleton.is-animated > .b-skeleton-item {
  animation: skeleton-loading 1.5s infinite;
}
.b-skeleton.is-centered {
  align-items: center;
}
.b-skeleton.is-right {
  align-items: flex-end;
}
.b-skeleton + .b-skeleton {
  margin-top: 0.5rem;
}
.b-skeleton > .b-skeleton-item {
  line-height: 1rem;
}
.b-skeleton.is-small > .b-skeleton-item {
  line-height: 0.75rem;
}
.b-skeleton.is-medium > .b-skeleton-item {
  line-height: 1.25rem;
}
.b-skeleton.is-large > .b-skeleton-item {
  line-height: 1.5rem;
}

@keyframes skeleton-loading {
  0% {
    background-position: 100% 50%;
  }
  100% {
    background-position: 0 50%;
  }
}
.b-sidebar .sidebar-content {
  background-color: whitesmoke;
  box-shadow: 5px 0px 13px 3px rgba(10, 10, 10, 0.1);
  width: 260px;
  z-index: 39;
}
.b-sidebar .sidebar-content.is-white {
  background-color: white;
}
.b-sidebar .sidebar-content.is-black {
  background-color: #0a0a0a;
}
.b-sidebar .sidebar-content.is-light {
  background-color: whitesmoke;
}
.b-sidebar .sidebar-content.is-dark {
  background-color: #363636;
}
.b-sidebar .sidebar-content.is-primary {
  background-color: #7957d5;
}
.b-sidebar .sidebar-content.is-link {
  background-color: #7957d5;
}
.b-sidebar .sidebar-content.is-info {
  background-color: #167df0;
}
.b-sidebar .sidebar-content.is-success {
  background-color: #48c78e;
}
.b-sidebar .sidebar-content.is-warning {
  background-color: #ffe08a;
}
.b-sidebar .sidebar-content.is-danger {
  background-color: #f14668;
}
.b-sidebar .sidebar-content.is-fixed {
  position: fixed;
  left: 0;
  top: 0;
}
.b-sidebar .sidebar-content.is-fixed.is-right {
  left: auto;
  right: 0;
}
.b-sidebar .sidebar-content.is-absolute {
  position: absolute;
  left: 0;
  top: 0;
}
.b-sidebar .sidebar-content.is-absolute.is-right {
  left: auto;
  right: 0;
}
.b-sidebar .sidebar-content.is-mini {
  width: 80px;
}
.b-sidebar .sidebar-content.is-mini.is-mini-expand:hover:not(.is-mini-delayed) {
  transition: width 150ms ease-out;
}
.b-sidebar .sidebar-content.is-mini.is-mini-expand:hover:not(.is-mini-delayed):not(.is-fullwidth) {
  width: 260px;
}
.b-sidebar .sidebar-content.is-mini.is-mini-expand:hover:not(.is-mini-delayed):not(.is-fullwidth).is-mini-expand-fixed {
  position: fixed;
}
.b-sidebar .sidebar-content.is-static {
  position: static;
}
.b-sidebar .sidebar-content.is-absolute, .b-sidebar .sidebar-content.is-static {
  transition: width 150ms ease-out;
}
.b-sidebar .sidebar-content.is-fullwidth {
  width: 100%;
  max-width: 100%;
}
.b-sidebar .sidebar-content.is-fullheight {
  height: 100%;
  max-height: 100%;
  overflow: hidden;
  overflow-y: auto;
  display: flex;
  flex-direction: column;
  align-content: stretch;
}
@media screen and (max-width: 768px) {
  .b-sidebar .sidebar-content.is-mini-mobile {
    width: 80px;
  }
  .b-sidebar .sidebar-content.is-mini-mobile.is-mini-expand:hover:not(.is-fullwidth-mobile) {
    width: 260px;
  }
  .b-sidebar .sidebar-content.is-mini-mobile.is-mini-expand:hover:not(.is-fullwidth-mobile).is-mini-expand-fixed {
    position: fixed;
  }
  .b-sidebar .sidebar-content.is-hidden-mobile {
    width: 0;
    height: 0;
    overflow: hidden;
  }
  .b-sidebar .sidebar-content.is-fullwidth-mobile {
    width: 100%;
    max-width: 100%;
  }
}
.b-sidebar .sidebar-background {
  bottom: 0;
  left: 0;
  position: absolute;
  right: 0;
  top: 0;
  background: rgba(10, 10, 10, 0.86);
  position: fixed;
  z-index: 38;
}

.b-slider {
  margin: 1em 0;
  background: transparent;
  width: 100%;
}
.b-slider .b-slider-track {
  display: flex;
  align-items: center;
  position: relative;
  cursor: pointer;
  background: #dbdbdb;
  border-radius: 4px;
}
.b-slider .b-slider-fill {
  position: absolute;
  height: 100%;
  box-shadow: 0px 0px 0px #7a7a7a;
  background: #dbdbdb;
  border-radius: 4px;
  border: 0px solid #7a7a7a;
  top: 50%;
  transform: translateY(-50%);
}
.b-slider .b-slider-thumb-wrapper {
  display: inline-flex;
  align-items: center;
  position: absolute;
  cursor: grab;
  transform: translate(-50%, -50%);
  top: 50%;
  flex-direction: column;
}
.b-slider .b-slider-thumb-wrapper .b-slider-thumb {
  box-shadow: none;
  border: 1px solid #b5b5b5;
  border-radius: 4px;
  background: white;
}
.b-slider .b-slider-thumb-wrapper .b-slider-thumb:focus {
  transform: scale(1.25);
}
.b-slider .b-slider-thumb-wrapper.is-dragging {
  cursor: grabbing;
}
.b-slider .b-slider-thumb-wrapper.is-dragging .b-slider-thumb {
  transform: scale(1.25);
}
.b-slider .b-slider-thumb-wrapper.has-indicator .b-slider-thumb {
  padding: 16px 10px;
  display: flex;
  align-items: center;
  width: auto;
}
.b-slider.slider-focus {
  padding-top: 20px;
  padding-bottom: 20px;
  margin-top: -20px;
  margin-bottom: -20px;
  cursor: pointer;
}
.b-slider.is-rounded .b-slider-thumb {
  border-radius: 9999px;
}
.b-slider.is-disabled .b-slider-track {
  cursor: not-allowed;
  opacity: 0.5;
}
.b-slider.is-disabled .b-slider-thumb-wrapper {
  cursor: not-allowed;
}
.b-slider.is-disabled .b-slider-thumb-wrapper .b-slider-thumb {
  transform: scale(1);
}
.b-slider .b-slider-track {
  height: 0.5rem;
}
.b-slider .b-slider-thumb {
  height: 1rem;
  width: 1rem;
}
.b-slider .b-slider-tick {
  height: 0.25rem;
}
.b-slider .b-slider-tick-label {
  font-size: 0.75rem;
  position: absolute;
  top: calc(0.5rem * 0.5 + 2px);
  left: 50%;
  transform: translateX(-50%);
}
.b-slider.is-small .b-slider-track {
  height: 0.375rem;
}
.b-slider.is-small .b-slider-thumb {
  height: 0.75rem;
  width: 0.75rem;
}
.b-slider.is-small .b-slider-tick {
  height: 0.1875rem;
}
.b-slider.is-small .b-slider-tick-label {
  font-size: 0.75rem;
  position: absolute;
  top: calc(0.375rem * 0.5 + 2px);
  left: 50%;
  transform: translateX(-50%);
}
.b-slider.is-medium .b-slider-track {
  height: 0.625rem;
}
.b-slider.is-medium .b-slider-thumb {
  height: 1.25rem;
  width: 1.25rem;
}
.b-slider.is-medium .b-slider-tick {
  height: 0.3125rem;
}
.b-slider.is-medium .b-slider-tick-label {
  font-size: 0.75rem;
  position: absolute;
  top: calc(0.625rem * 0.5 + 2px);
  left: 50%;
  transform: translateX(-50%);
}
.b-slider.is-large .b-slider-track {
  height: 0.75rem;
}
.b-slider.is-large .b-slider-thumb {
  height: 1.5rem;
  width: 1.5rem;
}
.b-slider.is-large .b-slider-tick {
  height: 0.375rem;
}
.b-slider.is-large .b-slider-tick-label {
  font-size: 0.75rem;
  position: absolute;
  top: calc(0.75rem * 0.5 + 2px);
  left: 50%;
  transform: translateX(-50%);
}
.b-slider.is-white .b-slider-fill {
  background: white !important;
}
.b-slider.is-black .b-slider-fill {
  background: #0a0a0a !important;
}
.b-slider.is-light .b-slider-fill {
  background: whitesmoke !important;
}
.b-slider.is-dark .b-slider-fill {
  background: #363636 !important;
}
.b-slider.is-primary .b-slider-fill {
  background: #7957d5 !important;
}
.b-slider.is-link .b-slider-fill {
  background: #7957d5 !important;
}
.b-slider.is-info .b-slider-fill {
  background: #167df0 !important;
}
.b-slider.is-success .b-slider-fill {
  background: #48c78e !important;
}
.b-slider.is-warning .b-slider-fill {
  background: #ffe08a !important;
}
.b-slider.is-danger .b-slider-fill {
  background: #f14668 !important;
}
.b-slider .b-slider-tick {
  position: absolute;
  width: 3px;
  transform: translate(-50%, -50%);
  top: 50%;
  background: #b5b5b5;
  border-radius: 4px;
}
.b-slider .b-slider-tick.is-tick-hidden {
  background: transparent;
}

/*
This project is based on
"bulma-steps" (https://github.com/Wikiki/bulma-steps) by
Wikiki (https://github.com/Wikiki) licensed under
MIT (https://github.com/Wikiki/bulma-steps/blob/master/LICENSE)
*/
.b-steps .steps .step-items {
  display: flex;
  flex-wrap: wrap;
}
.b-steps .steps .step-items .step-item {
  margin-top: 0;
  position: relative;
  flex-grow: 1;
  flex-basis: 1em;
}
.b-steps .steps .step-items .step-item .step-link {
  display: flex;
  align-items: center;
  justify-content: center;
  flex-direction: column;
  color: #4a4a4a;
}
.b-steps .steps .step-items .step-item .step-link:not(.is-clickable) {
  cursor: not-allowed;
}
.b-steps .steps .step-items .step-item .step-marker {
  align-items: center;
  display: flex;
  border-radius: 4px;
  font-weight: 700;
  justify-content: center;
  background: #b5b5b5;
  color: white;
  border: 0.2em solid #fff;
  z-index: 1;
  overflow: hidden;
}
.b-steps .steps .step-items .step-item.is-white::before, .b-steps .steps .step-items .step-item.is-white::after {
  background: linear-gradient(to left, #dbdbdb 50%, white 50%);
  background-size: 200% 100%;
  background-position: right bottom;
}
.b-steps .steps .step-items .step-item.is-white.is-active .step-marker {
  background-color: white;
  border-color: white;
  color: white;
}
.b-steps .steps .step-items .step-item.is-white.is-active::before, .b-steps .steps .step-items .step-item.is-white.is-active::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-white.is-previous .step-marker {
  color: #0a0a0a;
  background-color: white;
}
.b-steps .steps .step-items .step-item.is-white.is-previous::before, .b-steps .steps .step-items .step-item.is-white.is-previous::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-black::before, .b-steps .steps .step-items .step-item.is-black::after {
  background: linear-gradient(to left, #dbdbdb 50%, #0a0a0a 50%);
  background-size: 200% 100%;
  background-position: right bottom;
}
.b-steps .steps .step-items .step-item.is-black.is-active .step-marker {
  background-color: white;
  border-color: #0a0a0a;
  color: #0a0a0a;
}
.b-steps .steps .step-items .step-item.is-black.is-active::before, .b-steps .steps .step-items .step-item.is-black.is-active::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-black.is-previous .step-marker {
  color: white;
  background-color: #0a0a0a;
}
.b-steps .steps .step-items .step-item.is-black.is-previous::before, .b-steps .steps .step-items .step-item.is-black.is-previous::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-light::before, .b-steps .steps .step-items .step-item.is-light::after {
  background: linear-gradient(to left, #dbdbdb 50%, whitesmoke 50%);
  background-size: 200% 100%;
  background-position: right bottom;
}
.b-steps .steps .step-items .step-item.is-light.is-active .step-marker {
  background-color: white;
  border-color: whitesmoke;
  color: whitesmoke;
}
.b-steps .steps .step-items .step-item.is-light.is-active::before, .b-steps .steps .step-items .step-item.is-light.is-active::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-light.is-previous .step-marker {
  color: rgba(0, 0, 0, 0.7);
  background-color: whitesmoke;
}
.b-steps .steps .step-items .step-item.is-light.is-previous::before, .b-steps .steps .step-items .step-item.is-light.is-previous::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-dark::before, .b-steps .steps .step-items .step-item.is-dark::after {
  background: linear-gradient(to left, #dbdbdb 50%, #363636 50%);
  background-size: 200% 100%;
  background-position: right bottom;
}
.b-steps .steps .step-items .step-item.is-dark.is-active .step-marker {
  background-color: white;
  border-color: #363636;
  color: #363636;
}
.b-steps .steps .step-items .step-item.is-dark.is-active::before, .b-steps .steps .step-items .step-item.is-dark.is-active::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-dark.is-previous .step-marker {
  color: #fff;
  background-color: #363636;
}
.b-steps .steps .step-items .step-item.is-dark.is-previous::before, .b-steps .steps .step-items .step-item.is-dark.is-previous::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-primary::before, .b-steps .steps .step-items .step-item.is-primary::after {
  background: linear-gradient(to left, #dbdbdb 50%, #7957d5 50%);
  background-size: 200% 100%;
  background-position: right bottom;
}
.b-steps .steps .step-items .step-item.is-primary.is-active .step-marker {
  background-color: white;
  border-color: #7957d5;
  color: #7957d5;
}
.b-steps .steps .step-items .step-item.is-primary.is-active::before, .b-steps .steps .step-items .step-item.is-primary.is-active::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-primary.is-previous .step-marker {
  color: #fff;
  background-color: #7957d5;
}
.b-steps .steps .step-items .step-item.is-primary.is-previous::before, .b-steps .steps .step-items .step-item.is-primary.is-previous::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-link::before, .b-steps .steps .step-items .step-item.is-link::after {
  background: linear-gradient(to left, #dbdbdb 50%, #7957d5 50%);
  background-size: 200% 100%;
  background-position: right bottom;
}
.b-steps .steps .step-items .step-item.is-link.is-active .step-marker {
  background-color: white;
  border-color: #7957d5;
  color: #7957d5;
}
.b-steps .steps .step-items .step-item.is-link.is-active::before, .b-steps .steps .step-items .step-item.is-link.is-active::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-link.is-previous .step-marker {
  color: #fff;
  background-color: #7957d5;
}
.b-steps .steps .step-items .step-item.is-link.is-previous::before, .b-steps .steps .step-items .step-item.is-link.is-previous::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-info::before, .b-steps .steps .step-items .step-item.is-info::after {
  background: linear-gradient(to left, #dbdbdb 50%, #167df0 50%);
  background-size: 200% 100%;
  background-position: right bottom;
}
.b-steps .steps .step-items .step-item.is-info.is-active .step-marker {
  background-color: white;
  border-color: #167df0;
  color: #167df0;
}
.b-steps .steps .step-items .step-item.is-info.is-active::before, .b-steps .steps .step-items .step-item.is-info.is-active::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-info.is-previous .step-marker {
  color: #fff;
  background-color: #167df0;
}
.b-steps .steps .step-items .step-item.is-info.is-previous::before, .b-steps .steps .step-items .step-item.is-info.is-previous::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-success::before, .b-steps .steps .step-items .step-item.is-success::after {
  background: linear-gradient(to left, #dbdbdb 50%, #48c78e 50%);
  background-size: 200% 100%;
  background-position: right bottom;
}
.b-steps .steps .step-items .step-item.is-success.is-active .step-marker {
  background-color: white;
  border-color: #48c78e;
  color: #48c78e;
}
.b-steps .steps .step-items .step-item.is-success.is-active::before, .b-steps .steps .step-items .step-item.is-success.is-active::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-success.is-previous .step-marker {
  color: #fff;
  background-color: #48c78e;
}
.b-steps .steps .step-items .step-item.is-success.is-previous::before, .b-steps .steps .step-items .step-item.is-success.is-previous::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-warning::before, .b-steps .steps .step-items .step-item.is-warning::after {
  background: linear-gradient(to left, #dbdbdb 50%, #ffe08a 50%);
  background-size: 200% 100%;
  background-position: right bottom;
}
.b-steps .steps .step-items .step-item.is-warning.is-active .step-marker {
  background-color: white;
  border-color: #ffe08a;
  color: #ffe08a;
}
.b-steps .steps .step-items .step-item.is-warning.is-active::before, .b-steps .steps .step-items .step-item.is-warning.is-active::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-warning.is-previous .step-marker {
  color: rgba(0, 0, 0, 0.7);
  background-color: #ffe08a;
}
.b-steps .steps .step-items .step-item.is-warning.is-previous::before, .b-steps .steps .step-items .step-item.is-warning.is-previous::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-danger::before, .b-steps .steps .step-items .step-item.is-danger::after {
  background: linear-gradient(to left, #dbdbdb 50%, #f14668 50%);
  background-size: 200% 100%;
  background-position: right bottom;
}
.b-steps .steps .step-items .step-item.is-danger.is-active .step-marker {
  background-color: white;
  border-color: #f14668;
  color: #f14668;
}
.b-steps .steps .step-items .step-item.is-danger.is-active::before, .b-steps .steps .step-items .step-item.is-danger.is-active::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-danger.is-previous .step-marker {
  color: #fff;
  background-color: #f14668;
}
.b-steps .steps .step-items .step-item.is-danger.is-previous::before, .b-steps .steps .step-items .step-item.is-danger.is-previous::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item .step-marker {
  color: white;
}
.b-steps .steps .step-items .step-item .step-details {
  text-align: center;
  z-index: 1;
}
.b-steps .steps .step-items .step-item:not(:first-child), .b-steps .steps .step-items .step-item:only-child {
  flex-shrink: 1;
}
.b-steps .steps .step-items .step-item:not(:first-child)::before, .b-steps .steps .step-items .step-item:only-child::before {
  content: " ";
  display: block;
  position: absolute;
  width: 100%;
  bottom: 0;
  left: -50%;
}
.b-steps .steps .step-items .step-item:only-child::after {
  content: " ";
  display: block;
  position: absolute;
  height: 0.2em;
  bottom: 0;
}
.b-steps .steps .step-items .step-item:only-child::before, .b-steps .steps .step-items .step-item:only-child::after {
  width: 25%;
  left: 50%;
}
.b-steps .steps .step-items .step-item:only-child::before {
  right: 50%;
  left: auto;
}
.b-steps .steps .step-items .step-item::before, .b-steps .steps .step-items .step-item::after {
  background: linear-gradient(to left, #dbdbdb 50%, #7957d5 50%);
  background-size: 200% 100%;
  background-position: right bottom;
}
.b-steps .steps .step-items .step-item.is-active .step-link {
  cursor: default;
}
.b-steps .steps .step-items .step-item.is-active .step-marker {
  background-color: white;
  border-color: #7957d5;
  color: #7957d5;
}
.b-steps .steps .step-items .step-item.is-active::before, .b-steps .steps .step-items .step-item.is-active::after {
  background-position: left bottom;
}
.b-steps .steps .step-items .step-item.is-previous .step-marker {
  color: white;
  background-color: #7957d5;
}
.b-steps .steps .step-items .step-item.is-previous::before, .b-steps .steps .step-items .step-item.is-previous::after {
  background-position: left bottom;
}
.b-steps .steps + .step-content {
  position: relative;
  overflow: visible;
  display: flex;
  flex-direction: column;
  padding: 1rem;
}
.b-steps .steps + .step-content .step-item {
  flex-shrink: 0;
  flex-basis: auto;
}
.b-steps .steps + .step-content .step-item:focus {
  outline: none;
}
.b-steps .steps + .step-content.is-transitioning {
  overflow: hidden;
}
.b-steps .steps.is-rounded .step-item .step-marker {
  border-radius: 9999px;
}
.b-steps .steps.is-animated .step-item:not(:first-child)::before, .b-steps .steps.is-animated .step-item:only-child::before {
  transition: background 150ms ease-out;
}
.b-steps .steps.has-label-right .step-items .step-item .step-link, .b-steps .steps.has-label-left .step-items .step-item .step-link {
  flex-direction: row;
}
.b-steps .steps.has-label-right .step-items .step-item .step-link > .step-details, .b-steps .steps.has-label-left .step-items .step-item .step-link > .step-details {
  background-color: white;
  padding: 0.2em;
}
.b-steps .steps.has-label-left .step-items .step-item .step-link {
  flex-direction: row-reverse;
}
.b-steps .steps {
  font-size: 1rem;
  min-height: 2rem;
}
.b-steps .steps .step-items .step-item .step-marker {
  height: 2rem;
  width: 2rem;
}
.b-steps .steps .step-items .step-item .step-marker .icon *, .b-steps .steps .step-items .step-item .step-marker .icon *:before {
  font-size: 1rem;
}
.b-steps .steps .step-items .step-item .step-details .step-title {
  font-size: 1.2rem;
  font-weight: 600;
  line-height: 1rem;
}
.b-steps .steps .step-items .step-item:not(:first-child)::before, .b-steps .steps .step-items .step-item:only-child::before {
  height: 0.2em;
  top: 1rem;
}
.b-steps .steps .step-items .step-item:only-child::after {
  top: 1rem;
}
@media screen and (max-width: 768px) {
  .b-steps .steps .step-items .step-item::before, .b-steps .steps .step-items .step-item::after, .b-steps .steps .step-items .step-item:not(:first-child)::before {
    top: 1rem;
  }
}
.b-steps.is-vertical > .steps.has-label-right .step-items .step-item:not(:first-child)::before, .b-steps.is-vertical > .steps.has-label-right .step-items .step-item:not(:first-child)::after, .b-steps.is-vertical > .steps.has-label-right .step-items .step-item:only-child::before, .b-steps.is-vertical > .steps.has-label-right .step-items .step-item:only-child::after {
  left: calc(1rem - 0.1em);
}
.b-steps.is-vertical > .steps.has-label-left .step-items .step-item:not(:first-child)::before, .b-steps.is-vertical > .steps.has-label-left .step-items .step-item:not(:first-child)::after, .b-steps.is-vertical > .steps.has-label-left .step-items .step-item:only-child::before, .b-steps.is-vertical > .steps.has-label-left .step-items .step-item:only-child::after {
  left: auto;
  right: calc(1rem - 0.1em);
}
.b-steps.is-vertical.is-right > .steps.has-label-right .step-items .step-item:not(:first-child)::before, .b-steps.is-vertical.is-right > .steps.has-label-right .step-items .step-item:not(:first-child)::after, .b-steps.is-vertical.is-right > .steps.has-label-right .step-items .step-item:only-child::before, .b-steps.is-vertical.is-right > .steps.has-label-right .step-items .step-item:only-child::after {
  left: calc(1rem - 0.1em);
}
.b-steps.is-vertical.is-right > .steps.has-label-left .step-items .step-item:not(:first-child)::before, .b-steps.is-vertical.is-right > .steps.has-label-left .step-items .step-item:not(:first-child)::after, .b-steps.is-vertical.is-right > .steps.has-label-left .step-items .step-item:only-child::before, .b-steps.is-vertical.is-right > .steps.has-label-left .step-items .step-item:only-child::after {
  left: auto;
  right: calc(1rem - 0.1em);
}
.b-steps.is-small .steps {
  font-size: 0.75rem;
  min-height: 1.5rem;
}
.b-steps.is-small .steps .step-items .step-item .step-marker {
  height: 1.5rem;
  width: 1.5rem;
}
.b-steps.is-small .steps .step-items .step-item .step-marker .icon *, .b-steps.is-small .steps .step-items .step-item .step-marker .icon *:before {
  font-size: 0.75rem;
}
.b-steps.is-small .steps .step-items .step-item .step-details .step-title {
  font-size: 0.9rem;
  font-weight: 600;
  line-height: 0.75rem;
}
.b-steps.is-small .steps .step-items .step-item:not(:first-child)::before, .b-steps.is-small .steps .step-items .step-item:only-child::before {
  height: 0.2em;
  top: 0.75rem;
}
.b-steps.is-small .steps .step-items .step-item:only-child::after {
  top: 0.75rem;
}
@media screen and (max-width: 768px) {
  .b-steps.is-small .steps .step-items .step-item::before, .b-steps.is-small .steps .step-items .step-item::after, .b-steps.is-small .steps .step-items .step-item:not(:first-child)::before {
    top: 0.75rem;
  }
}
.b-steps.is-small.is-vertical > .steps.has-label-right .step-items .step-item:not(:first-child)::before, .b-steps.is-small.is-vertical > .steps.has-label-right .step-items .step-item:not(:first-child)::after, .b-steps.is-small.is-vertical > .steps.has-label-right .step-items .step-item:only-child::before, .b-steps.is-small.is-vertical > .steps.has-label-right .step-items .step-item:only-child::after {
  left: calc(0.75rem - 0.1em);
}
.b-steps.is-small.is-vertical > .steps.has-label-left .step-items .step-item:not(:first-child)::before, .b-steps.is-small.is-vertical > .steps.has-label-left .step-items .step-item:not(:first-child)::after, .b-steps.is-small.is-vertical > .steps.has-label-left .step-items .step-item:only-child::before, .b-steps.is-small.is-vertical > .steps.has-label-left .step-items .step-item:only-child::after {
  left: auto;
  right: calc(0.75rem - 0.1em);
}
.b-steps.is-small.is-vertical.is-right > .steps.has-label-right .step-items .step-item:not(:first-child)::before, .b-steps.is-small.is-vertical.is-right > .steps.has-label-right .step-items .step-item:not(:first-child)::after, .b-steps.is-small.is-vertical.is-right > .steps.has-label-right .step-items .step-item:only-child::before, .b-steps.is-small.is-vertical.is-right > .steps.has-label-right .step-items .step-item:only-child::after {
  left: calc(0.75rem - 0.1em);
}
.b-steps.is-small.is-vertical.is-right > .steps.has-label-left .step-items .step-item:not(:first-child)::before, .b-steps.is-small.is-vertical.is-right > .steps.has-label-left .step-items .step-item:not(:first-child)::after, .b-steps.is-small.is-vertical.is-right > .steps.has-label-left .step-items .step-item:only-child::before, .b-steps.is-small.is-vertical.is-right > .steps.has-label-left .step-items .step-item:only-child::after {
  left: auto;
  right: calc(0.75rem - 0.1em);
}
.b-steps.is-medium .steps {
  font-size: 1.25rem;
  min-height: 2.5rem;
}
.b-steps.is-medium .steps .step-items .step-item .step-marker {
  height: 2.5rem;
  width: 2.5rem;
}
.b-steps.is-medium .steps .step-items .step-item .step-marker .icon *, .b-steps.is-medium .steps .step-items .step-item .step-marker .icon *:before {
  font-size: 1.25rem;
}
.b-steps.is-medium .steps .step-items .step-item .step-details .step-title {
  font-size: 1.5rem;
  font-weight: 600;
  line-height: 1.25rem;
}
.b-steps.is-medium .steps .step-items .step-item:not(:first-child)::before, .b-steps.is-medium .steps .step-items .step-item:only-child::before {
  height: 0.2em;
  top: 1.25rem;
}
.b-steps.is-medium .steps .step-items .step-item:only-child::after {
  top: 1.25rem;
}
@media screen and (max-width: 768px) {
  .b-steps.is-medium .steps .step-items .step-item::before, .b-steps.is-medium .steps .step-items .step-item::after, .b-steps.is-medium .steps .step-items .step-item:not(:first-child)::before {
    top: 1.25rem;
  }
}
.b-steps.is-medium.is-vertical > .steps.has-label-right .step-items .step-item:not(:first-child)::before, .b-steps.is-medium.is-vertical > .steps.has-label-right .step-items .step-item:not(:first-child)::after, .b-steps.is-medium.is-vertical > .steps.has-label-right .step-items .step-item:only-child::before, .b-steps.is-medium.is-vertical > .steps.has-label-right .step-items .step-item:only-child::after {
  left: calc(1.25rem - 0.1em);
}
.b-steps.is-medium.is-vertical > .steps.has-label-left .step-items .step-item:not(:first-child)::before, .b-steps.is-medium.is-vertical > .steps.has-label-left .step-items .step-item:not(:first-child)::after, .b-steps.is-medium.is-vertical > .steps.has-label-left .step-items .step-item:only-child::before, .b-steps.is-medium.is-vertical > .steps.has-label-left .step-items .step-item:only-child::after {
  left: auto;
  right: calc(1.25rem - 0.1em);
}
.b-steps.is-medium.is-vertical.is-right > .steps.has-label-right .step-items .step-item:not(:first-child)::before, .b-steps.is-medium.is-vertical.is-right > .steps.has-label-right .step-items .step-item:not(:first-child)::after, .b-steps.is-medium.is-vertical.is-right > .steps.has-label-right .step-items .step-item:only-child::before, .b-steps.is-medium.is-vertical.is-right > .steps.has-label-right .step-items .step-item:only-child::after {
  left: calc(1.25rem - 0.1em);
}
.b-steps.is-medium.is-vertical.is-right > .steps.has-label-left .step-items .step-item:not(:first-child)::before, .b-steps.is-medium.is-vertical.is-right > .steps.has-label-left .step-items .step-item:not(:first-child)::after, .b-steps.is-medium.is-vertical.is-right > .steps.has-label-left .step-items .step-item:only-child::before, .b-steps.is-medium.is-vertical.is-right > .steps.has-label-left .step-items .step-item:only-child::after {
  left: auto;
  right: calc(1.25rem - 0.1em);
}
.b-steps.is-large .steps {
  font-size: 1.5rem;
  min-height: 3rem;
}
.b-steps.is-large .steps .step-items .step-item .step-marker {
  height: 3rem;
  width: 3rem;
}
.b-steps.is-large .steps .step-items .step-item .step-marker .icon *, .b-steps.is-large .steps .step-items .step-item .step-marker .icon *:before {
  font-size: 1.5rem;
}
.b-steps.is-large .steps .step-items .step-item .step-details .step-title {
  font-size: 1.8rem;
  font-weight: 600;
  line-height: 1.5rem;
}
.b-steps.is-large .steps .step-items .step-item:not(:first-child)::before, .b-steps.is-large .steps .step-items .step-item:only-child::before {
  height: 0.2em;
  top: 1.5rem;
}
.b-steps.is-large .steps .step-items .step-item:only-child::after {
  top: 1.5rem;
}
@media screen and (max-width: 768px) {
  .b-steps.is-large .steps .step-items .step-item::before, .b-steps.is-large .steps .step-items .step-item::after, .b-steps.is-large .steps .step-items .step-item:not(:first-child)::before {
    top: 1.5rem;
  }
}
.b-steps.is-large.is-vertical > .steps.has-label-right .step-items .step-item:not(:first-child)::before, .b-steps.is-large.is-vertical > .steps.has-label-right .step-items .step-item:not(:first-child)::after, .b-steps.is-large.is-vertical > .steps.has-label-right .step-items .step-item:only-child::before, .b-steps.is-large.is-vertical > .steps.has-label-right .step-items .step-item:only-child::after {
  left: calc(1.5rem - 0.1em);
}
.b-steps.is-large.is-vertical > .steps.has-label-left .step-items .step-item:not(:first-child)::before, .b-steps.is-large.is-vertical > .steps.has-label-left .step-items .step-item:not(:first-child)::after, .b-steps.is-large.is-vertical > .steps.has-label-left .step-items .step-item:only-child::before, .b-steps.is-large.is-vertical > .steps.has-label-left .step-items .step-item:only-child::after {
  left: auto;
  right: calc(1.5rem - 0.1em);
}
.b-steps.is-large.is-vertical.is-right > .steps.has-label-right .step-items .step-item:not(:first-child)::before, .b-steps.is-large.is-vertical.is-right > .steps.has-label-right .step-items .step-item:not(:first-child)::after, .b-steps.is-large.is-vertical.is-right > .steps.has-label-right .step-items .step-item:only-child::before, .b-steps.is-large.is-vertical.is-right > .steps.has-label-right .step-items .step-item:only-child::after {
  left: calc(1.5rem - 0.1em);
}
.b-steps.is-large.is-vertical.is-right > .steps.has-label-left .step-items .step-item:not(:first-child)::before, .b-steps.is-large.is-vertical.is-right > .steps.has-label-left .step-items .step-item:not(:first-child)::after, .b-steps.is-large.is-vertical.is-right > .steps.has-label-left .step-items .step-item:only-child::before, .b-steps.is-large.is-vertical.is-right > .steps.has-label-left .step-items .step-item:only-child::after {
  left: auto;
  right: calc(1.5rem - 0.1em);
}
.b-steps.is-vertical {
  display: flex;
  flex-direction: row;
  flex-wrap: wrap;
}
.b-steps.is-vertical > .steps .step-items {
  height: 100%;
  flex-direction: column;
  border-bottom-color: transparent;
}
.b-steps.is-vertical > .steps .step-items .step-item {
  width: 100%;
  display: flex;
  align-items: center;
  justify-content: center;
  padding: 1em 0;
}
.b-steps.is-vertical > .steps .step-items .step-item::before, .b-steps.is-vertical > .steps .step-items .step-item::after {
  background: linear-gradient(to top, #dbdbdb 50%, #7957d5 50%);
  background-size: 100% 200%;
  background-position: left bottom;
}
.b-steps.is-vertical > .steps .step-items .step-item.is-white::before, .b-steps.is-vertical > .steps .step-items .step-item.is-white::after {
  background: linear-gradient(to top, #dbdbdb 50%, white 50%);
  background-size: 100% 200%;
  background-position: left bottom;
}
.b-steps.is-vertical > .steps .step-items .step-item.is-black::before, .b-steps.is-vertical > .steps .step-items .step-item.is-black::after {
  background: linear-gradient(to top, #dbdbdb 50%, #0a0a0a 50%);
  background-size: 100% 200%;
  background-position: left bottom;
}
.b-steps.is-vertical > .steps .step-items .step-item.is-light::before, .b-steps.is-vertical > .steps .step-items .step-item.is-light::after {
  background: linear-gradient(to top, #dbdbdb 50%, whitesmoke 50%);
  background-size: 100% 200%;
  background-position: left bottom;
}
.b-steps.is-vertical > .steps .step-items .step-item.is-dark::before, .b-steps.is-vertical > .steps .step-items .step-item.is-dark::after {
  background: linear-gradient(to top, #dbdbdb 50%, #363636 50%);
  background-size: 100% 200%;
  background-position: left bottom;
}
.b-steps.is-vertical > .steps .step-items .step-item.is-primary::before, .b-steps.is-vertical > .steps .step-items .step-item.is-primary::after {
  background: linear-gradient(to top, #dbdbdb 50%, #7957d5 50%);
  background-size: 100% 200%;
  background-position: left bottom;
}
.b-steps.is-vertical > .steps .step-items .step-item.is-link::before, .b-steps.is-vertical > .steps .step-items .step-item.is-link::after {
  background: linear-gradient(to top, #dbdbdb 50%, #7957d5 50%);
  background-size: 100% 200%;
  background-position: left bottom;
}
.b-steps.is-vertical > .steps .step-items .step-item.is-info::before, .b-steps.is-vertical > .steps .step-items .step-item.is-info::after {
  background: linear-gradient(to top, #dbdbdb 50%, #167df0 50%);
  background-size: 100% 200%;
  background-position: left bottom;
}
.b-steps.is-vertical > .steps .step-items .step-item.is-success::before, .b-steps.is-vertical > .steps .step-items .step-item.is-success::after {
  background: linear-gradient(to top, #dbdbdb 50%, #48c78e 50%);
  background-size: 100% 200%;
  background-position: left bottom;
}
.b-steps.is-vertical > .steps .step-items .step-item.is-warning::before, .b-steps.is-vertical > .steps .step-items .step-item.is-warning::after {
  background: linear-gradient(to top, #dbdbdb 50%, #ffe08a 50%);
  background-size: 100% 200%;
  background-position: left bottom;
}
.b-steps.is-vertical > .steps .step-items .step-item.is-danger::before, .b-steps.is-vertical > .steps .step-items .step-item.is-danger::after {
  background: linear-gradient(to top, #dbdbdb 50%, #f14668 50%);
  background-size: 100% 200%;
  background-position: left bottom;
}
.b-steps.is-vertical > .steps .step-items .step-item:not(:first-child)::before, .b-steps.is-vertical > .steps .step-items .step-item:only-child::before {
  height: 100%;
  width: 0.2em;
  top: -50%;
  left: calc(50% - 0.1em);
}
.b-steps.is-vertical > .steps .step-items .step-item.is-active::before, .b-steps.is-vertical > .steps .step-items .step-item.is-active::after, .b-steps.is-vertical > .steps .step-items .step-item.is-previous::before, .b-steps.is-vertical > .steps .step-items .step-item.is-previous::after {
  background-position: right top;
}
.b-steps.is-vertical > .steps .step-items .step-item:only-child::before {
  top: 50%;
}
.b-steps.is-vertical > .steps .step-items .step-item:only-child::after {
  width: 0.2em;
  top: auto;
  bottom: 50%;
}
.b-steps.is-vertical > .steps .step-items .step-item:only-child::before, .b-steps.is-vertical > .steps .step-items .step-item:only-child::after {
  height: 25%;
}
.b-steps.is-vertical > .steps.has-label-right .step-items .step-item {
  justify-content: flex-start;
}
.b-steps.is-vertical > .steps.has-label-left .step-items .step-item {
  justify-content: flex-end;
}
.b-steps.is-vertical > .steps:not(.has-label-right):not(.has-label-left) .step-items .step-item .step-link > .step-details {
  background-color: white;
}
.b-steps.is-vertical > .step-content {
  flex-grow: 1;
}
.b-steps.is-vertical > .step-navigation {
  flex-basis: 100%;
}
.b-steps.is-vertical.is-right {
  flex-direction: row-reverse;
}
@media screen and (max-width: 768px) {
  .b-steps:not(.is-vertical) .steps.mobile-minimalist .step-items .step-item:not(.is-active) {
    display: none;
  }
  .b-steps:not(.is-vertical) .steps.mobile-minimalist .step-items .step-item::before, .b-steps:not(.is-vertical) .steps.mobile-minimalist .step-items .step-item::after, .b-steps:not(.is-vertical) .steps.mobile-minimalist .step-items .step-item:not(:first-child)::before {
    content: " ";
    display: block;
    position: absolute;
    height: 0.2em;
    width: 25%;
    bottom: 0;
    left: 50%;
  }
  .b-steps:not(.is-vertical) .steps.mobile-minimalist .step-items .step-item::before, .b-steps:not(.is-vertical) .steps.mobile-minimalist .step-items .step-item:not(:first-child)::before {
    right: 50%;
    left: auto;
  }
  .b-steps:not(.is-vertical) .steps.mobile-compact .step-items .step-item:not(.is-active) .step-details {
    display: none;
  }
}

.switch {
  cursor: pointer;
  display: inline-flex;
  align-items: center;
  position: relative;
  margin-right: 0.5em;
}
.switch + .switch:last-child {
  margin-right: 0;
}
.switch input[type=checkbox] {
  position: absolute;
  left: 0;
  opacity: 0;
  outline: none;
  z-index: -1;
}
.switch input[type=checkbox] + .check {
  display: flex;
  align-items: center;
  flex-shrink: 0;
  width: 2.75em;
  height: 1.575em;
  padding: 0.2em;
  background: #b5b5b5;
  border-radius: 4px;
  transition: background 150ms ease-out, box-shadow 150ms ease-out;
}
.switch input[type=checkbox] + .check.is-white-passive, .switch input[type=checkbox] + .check:hover {
  background: white;
}
.switch input[type=checkbox] + .check.input[type=checkbox] + .switch input[type=checkbox] + .check.check {
  background: "pink";
}
.switch input[type=checkbox] + .check.is-black-passive, .switch input[type=checkbox] + .check:hover {
  background: #0a0a0a;
}
.switch input[type=checkbox] + .check.input[type=checkbox] + .switch input[type=checkbox] + .check.check {
  background: "pink";
}
.switch input[type=checkbox] + .check.is-light-passive, .switch input[type=checkbox] + .check:hover {
  background: whitesmoke;
}
.switch input[type=checkbox] + .check.input[type=checkbox] + .switch input[type=checkbox] + .check.check {
  background: "pink";
}
.switch input[type=checkbox] + .check.is-dark-passive, .switch input[type=checkbox] + .check:hover {
  background: #363636;
}
.switch input[type=checkbox] + .check.input[type=checkbox] + .switch input[type=checkbox] + .check.check {
  background: "pink";
}
.switch input[type=checkbox] + .check.is-primary-passive, .switch input[type=checkbox] + .check:hover {
  background: #7957d5;
}
.switch input[type=checkbox] + .check.input[type=checkbox] + .switch input[type=checkbox] + .check.check {
  background: "pink";
}
.switch input[type=checkbox] + .check.is-link-passive, .switch input[type=checkbox] + .check:hover {
  background: #7957d5;
}
.switch input[type=checkbox] + .check.input[type=checkbox] + .switch input[type=checkbox] + .check.check {
  background: "pink";
}
.switch input[type=checkbox] + .check.is-info-passive, .switch input[type=checkbox] + .check:hover {
  background: #167df0;
}
.switch input[type=checkbox] + .check.input[type=checkbox] + .switch input[type=checkbox] + .check.check {
  background: "pink";
}
.switch input[type=checkbox] + .check.is-success-passive, .switch input[type=checkbox] + .check:hover {
  background: #48c78e;
}
.switch input[type=checkbox] + .check.input[type=checkbox] + .switch input[type=checkbox] + .check.check {
  background: "pink";
}
.switch input[type=checkbox] + .check.is-warning-passive, .switch input[type=checkbox] + .check:hover {
  background: #ffe08a;
}
.switch input[type=checkbox] + .check.input[type=checkbox] + .switch input[type=checkbox] + .check.check {
  background: "pink";
}
.switch input[type=checkbox] + .check.is-danger-passive, .switch input[type=checkbox] + .check:hover {
  background: #f14668;
}
.switch input[type=checkbox] + .check.input[type=checkbox] + .switch input[type=checkbox] + .check.check {
  background: "pink";
}
.switch input[type=checkbox] + .check:before {
  content: "";
  display: block;
  border-radius: 4px;
  width: 1.175em;
  height: 1.175em;
  background: whitesmoke;
  box-shadow: 0 3px 1px 0 rgba(0, 0, 0, 0.05), 0 2px 2px 0 rgba(0, 0, 0, 0.1), 0 3px 3px 0 rgba(0, 0, 0, 0.05);
  transition: transform 150ms ease-out;
  will-change: transform;
  transform-origin: left;
}
.switch input[type=checkbox] + .check.is-elastic:before {
  transform: scaleX(1.5);
  border-radius: 4px;
}
.switch input[type=checkbox]:checked + .check {
  background: #7957d5;
}
.switch input[type=checkbox]:checked + .check.is-white {
  background: white;
}
.switch input[type=checkbox]:checked + .check.is-black {
  background: #0a0a0a;
}
.switch input[type=checkbox]:checked + .check.is-light {
  background: whitesmoke;
}
.switch input[type=checkbox]:checked + .check.is-dark {
  background: #363636;
}
.switch input[type=checkbox]:checked + .check.is-primary {
  background: #7957d5;
}
.switch input[type=checkbox]:checked + .check.is-link {
  background: #7957d5;
}
.switch input[type=checkbox]:checked + .check.is-info {
  background: #167df0;
}
.switch input[type=checkbox]:checked + .check.is-success {
  background: #48c78e;
}
.switch input[type=checkbox]:checked + .check.is-warning {
  background: #ffe08a;
}
.switch input[type=checkbox]:checked + .check.is-danger {
  background: #f14668;
}
.switch input[type=checkbox]:checked + .check:before {
  transform: translate3d(100%, 0, 0);
}
.switch input[type=checkbox]:checked + .check.is-elastic:before {
  transform: translate3d(50%, 0, 0) scaleX(1.5);
}
.switch input[type=checkbox]:focus, .switch input[type=checkbox]:active {
  outline: none;
}
.switch input[type=checkbox]:focus + .check, .switch input[type=checkbox]:active + .check {
  box-shadow: 0 0 0.5em rgba(122, 122, 122, 0.6);
}
.switch input[type=checkbox]:focus + .check.is-white-passive, .switch input[type=checkbox]:active + .check.is-white-passive {
  box-shadow: 0 0 0.5em rgba(255, 255, 255, 0.8);
}
.switch input[type=checkbox]:focus + .check.is-black-passive, .switch input[type=checkbox]:active + .check.is-black-passive {
  box-shadow: 0 0 0.5em rgba(10, 10, 10, 0.8);
}
.switch input[type=checkbox]:focus + .check.is-light-passive, .switch input[type=checkbox]:active + .check.is-light-passive {
  box-shadow: 0 0 0.5em rgba(245, 245, 245, 0.8);
}
.switch input[type=checkbox]:focus + .check.is-dark-passive, .switch input[type=checkbox]:active + .check.is-dark-passive {
  box-shadow: 0 0 0.5em rgba(54, 54, 54, 0.8);
}
.switch input[type=checkbox]:focus + .check.is-primary-passive, .switch input[type=checkbox]:active + .check.is-primary-passive {
  box-shadow: 0 0 0.5em rgba(121, 87, 213, 0.8);
}
.switch input[type=checkbox]:focus + .check.is-link-passive, .switch input[type=checkbox]:active + .check.is-link-passive {
  box-shadow: 0 0 0.5em rgba(121, 87, 213, 0.8);
}
.switch input[type=checkbox]:focus + .check.is-info-passive, .switch input[type=checkbox]:active + .check.is-info-passive {
  box-shadow: 0 0 0.5em rgba(22, 125, 240, 0.8);
}
.switch input[type=checkbox]:focus + .check.is-success-passive, .switch input[type=checkbox]:active + .check.is-success-passive {
  box-shadow: 0 0 0.5em rgba(72, 199, 142, 0.8);
}
.switch input[type=checkbox]:focus + .check.is-warning-passive, .switch input[type=checkbox]:active + .check.is-warning-passive {
  box-shadow: 0 0 0.5em rgba(255, 224, 138, 0.8);
}
.switch input[type=checkbox]:focus + .check.is-danger-passive, .switch input[type=checkbox]:active + .check.is-danger-passive {
  box-shadow: 0 0 0.5em rgba(241, 70, 104, 0.8);
}
.switch input[type=checkbox]:focus:checked + .check, .switch input[type=checkbox]:active:checked + .check {
  box-shadow: 0 0 0.5em rgba(121, 87, 213, 0.8);
}
.switch input[type=checkbox]:focus:checked + .check.is-white, .switch input[type=checkbox]:active:checked + .check.is-white {
  box-shadow: 0 0 0.5em rgba(255, 255, 255, 0.8);
}
.switch input[type=checkbox]:focus:checked + .check.is-black, .switch input[type=checkbox]:active:checked + .check.is-black {
  box-shadow: 0 0 0.5em rgba(10, 10, 10, 0.8);
}
.switch input[type=checkbox]:focus:checked + .check.is-light, .switch input[type=checkbox]:active:checked + .check.is-light {
  box-shadow: 0 0 0.5em rgba(245, 245, 245, 0.8);
}
.switch input[type=checkbox]:focus:checked + .check.is-dark, .switch input[type=checkbox]:active:checked + .check.is-dark {
  box-shadow: 0 0 0.5em rgba(54, 54, 54, 0.8);
}
.switch input[type=checkbox]:focus:checked + .check.is-primary, .switch input[type=checkbox]:active:checked + .check.is-primary {
  box-shadow: 0 0 0.5em rgba(121, 87, 213, 0.8);
}
.switch input[type=checkbox]:focus:checked + .check.is-link, .switch input[type=checkbox]:active:checked + .check.is-link {
  box-shadow: 0 0 0.5em rgba(121, 87, 213, 0.8);
}
.switch input[type=checkbox]:focus:checked + .check.is-info, .switch input[type=checkbox]:active:checked + .check.is-info {
  box-shadow: 0 0 0.5em rgba(22, 125, 240, 0.8);
}
.switch input[type=checkbox]:focus:checked + .check.is-success, .switch input[type=checkbox]:active:checked + .check.is-success {
  box-shadow: 0 0 0.5em rgba(72, 199, 142, 0.8);
}
.switch input[type=checkbox]:focus:checked + .check.is-warning, .switch input[type=checkbox]:active:checked + .check.is-warning {
  box-shadow: 0 0 0.5em rgba(255, 224, 138, 0.8);
}
.switch input[type=checkbox]:focus:checked + .check.is-danger, .switch input[type=checkbox]:active:checked + .check.is-danger {
  box-shadow: 0 0 0.5em rgba(241, 70, 104, 0.8);
}
.switch.has-left-label {
  flex-direction: row-reverse;
}
.switch.has-left-label .control-label {
  padding-right: calc(0.75em - 1px);
}
.switch:not(.has-left-label) .control-label {
  padding-left: calc(0.75em - 1px);
}
.switch:hover input[type=checkbox] + .check {
  background: rgba(181, 181, 181, 0.9);
}
.switch:hover input[type=checkbox] + .check.is-white-passive {
  background: rgba(255, 255, 255, 0.9);
}
.switch:hover input[type=checkbox] + .check.is-black-passive {
  background: rgba(10, 10, 10, 0.9);
}
.switch:hover input[type=checkbox] + .check.is-light-passive {
  background: rgba(245, 245, 245, 0.9);
}
.switch:hover input[type=checkbox] + .check.is-dark-passive {
  background: rgba(54, 54, 54, 0.9);
}
.switch:hover input[type=checkbox] + .check.is-primary-passive {
  background: rgba(121, 87, 213, 0.9);
}
.switch:hover input[type=checkbox] + .check.is-link-passive {
  background: rgba(121, 87, 213, 0.9);
}
.switch:hover input[type=checkbox] + .check.is-info-passive {
  background: rgba(22, 125, 240, 0.9);
}
.switch:hover input[type=checkbox] + .check.is-success-passive {
  background: rgba(72, 199, 142, 0.9);
}
.switch:hover input[type=checkbox] + .check.is-warning-passive {
  background: rgba(255, 224, 138, 0.9);
}
.switch:hover input[type=checkbox] + .check.is-danger-passive {
  background: rgba(241, 70, 104, 0.9);
}
.switch:hover input[type=checkbox]:checked + .check {
  background: rgba(121, 87, 213, 0.9);
}
.switch:hover input[type=checkbox]:checked + .check.is-white {
  background: rgba(255, 255, 255, 0.9);
}
.switch:hover input[type=checkbox]:checked + .check.is-black {
  background: rgba(10, 10, 10, 0.9);
}
.switch:hover input[type=checkbox]:checked + .check.is-light {
  background: rgba(245, 245, 245, 0.9);
}
.switch:hover input[type=checkbox]:checked + .check.is-dark {
  background: rgba(54, 54, 54, 0.9);
}
.switch:hover input[type=checkbox]:checked + .check.is-primary {
  background: rgba(121, 87, 213, 0.9);
}
.switch:hover input[type=checkbox]:checked + .check.is-link {
  background: rgba(121, 87, 213, 0.9);
}
.switch:hover input[type=checkbox]:checked + .check.is-info {
  background: rgba(22, 125, 240, 0.9);
}
.switch:hover input[type=checkbox]:checked + .check.is-success {
  background: rgba(72, 199, 142, 0.9);
}
.switch:hover input[type=checkbox]:checked + .check.is-warning {
  background: rgba(255, 224, 138, 0.9);
}
.switch:hover input[type=checkbox]:checked + .check.is-danger {
  background: rgba(241, 70, 104, 0.9);
}
.switch.is-rounded input[type=checkbox] + .check {
  border-radius: 9999px;
}
.switch.is-rounded input[type=checkbox] + .check:before {
  border-radius: 9999px;
}
.switch.is-rounded input[type=checkbox].is-elastic:before {
  transform: scaleX(1.5);
  border-radius: 9999px;
}
.switch.is-outlined input[type=checkbox] + .check {
  background: transparent;
  border: 0.1rem solid #b5b5b5;
}
.switch.is-outlined input[type=checkbox] + .check.is-white-passive {
  border: 0.1rem solid rgba(255, 255, 255, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-white-passive:before {
  background: white;
}
.switch.is-outlined input[type=checkbox] + .check.is-white-passive:hover {
  border-color: rgba(255, 255, 255, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-black-passive {
  border: 0.1rem solid rgba(10, 10, 10, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-black-passive:before {
  background: #0a0a0a;
}
.switch.is-outlined input[type=checkbox] + .check.is-black-passive:hover {
  border-color: rgba(10, 10, 10, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-light-passive {
  border: 0.1rem solid rgba(245, 245, 245, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-light-passive:before {
  background: whitesmoke;
}
.switch.is-outlined input[type=checkbox] + .check.is-light-passive:hover {
  border-color: rgba(245, 245, 245, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-dark-passive {
  border: 0.1rem solid rgba(54, 54, 54, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-dark-passive:before {
  background: #363636;
}
.switch.is-outlined input[type=checkbox] + .check.is-dark-passive:hover {
  border-color: rgba(54, 54, 54, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-primary-passive {
  border: 0.1rem solid rgba(121, 87, 213, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-primary-passive:before {
  background: #7957d5;
}
.switch.is-outlined input[type=checkbox] + .check.is-primary-passive:hover {
  border-color: rgba(121, 87, 213, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-link-passive {
  border: 0.1rem solid rgba(121, 87, 213, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-link-passive:before {
  background: #7957d5;
}
.switch.is-outlined input[type=checkbox] + .check.is-link-passive:hover {
  border-color: rgba(121, 87, 213, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-info-passive {
  border: 0.1rem solid rgba(22, 125, 240, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-info-passive:before {
  background: #167df0;
}
.switch.is-outlined input[type=checkbox] + .check.is-info-passive:hover {
  border-color: rgba(22, 125, 240, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-success-passive {
  border: 0.1rem solid rgba(72, 199, 142, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-success-passive:before {
  background: #48c78e;
}
.switch.is-outlined input[type=checkbox] + .check.is-success-passive:hover {
  border-color: rgba(72, 199, 142, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-warning-passive {
  border: 0.1rem solid rgba(255, 224, 138, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-warning-passive:before {
  background: #ffe08a;
}
.switch.is-outlined input[type=checkbox] + .check.is-warning-passive:hover {
  border-color: rgba(255, 224, 138, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-danger-passive {
  border: 0.1rem solid rgba(241, 70, 104, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check.is-danger-passive:before {
  background: #f14668;
}
.switch.is-outlined input[type=checkbox] + .check.is-danger-passive:hover {
  border-color: rgba(241, 70, 104, 0.9);
}
.switch.is-outlined input[type=checkbox] + .check:before {
  background: #b5b5b5;
}
.switch.is-outlined input[type=checkbox]:checked + .check {
  border-color: #7957d5;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-white {
  background: transparent;
  border-color: white;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-white:before {
  background: white;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-black {
  background: transparent;
  border-color: #0a0a0a;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-black:before {
  background: #0a0a0a;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-light {
  background: transparent;
  border-color: whitesmoke;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-light:before {
  background: whitesmoke;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-dark {
  background: transparent;
  border-color: #363636;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-dark:before {
  background: #363636;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-primary {
  background: transparent;
  border-color: #7957d5;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-primary:before {
  background: #7957d5;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-link {
  background: transparent;
  border-color: #7957d5;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-link:before {
  background: #7957d5;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-info {
  background: transparent;
  border-color: #167df0;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-info:before {
  background: #167df0;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-success {
  background: transparent;
  border-color: #48c78e;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-success:before {
  background: #48c78e;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-warning {
  background: transparent;
  border-color: #ffe08a;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-warning:before {
  background: #ffe08a;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-danger {
  background: transparent;
  border-color: #f14668;
}
.switch.is-outlined input[type=checkbox]:checked + .check.is-danger:before {
  background: #f14668;
}
.switch.is-outlined input[type=checkbox]:checked + .check:before {
  background: #7957d5;
}
.switch.is-outlined:hover input[type=checkbox] + .check {
  background: transparent;
  border-color: rgba(181, 181, 181, 0.9);
}
.switch.is-outlined:hover input[type=checkbox]:checked + .check {
  background: transparent;
  border-color: rgba(121, 87, 213, 0.9);
}
.switch.is-outlined:hover input[type=checkbox]:checked + .check.is-white {
  border-color: rgba(255, 255, 255, 0.9);
}
.switch.is-outlined:hover input[type=checkbox]:checked + .check.is-black {
  border-color: rgba(10, 10, 10, 0.9);
}
.switch.is-outlined:hover input[type=checkbox]:checked + .check.is-light {
  border-color: rgba(245, 245, 245, 0.9);
}
.switch.is-outlined:hover input[type=checkbox]:checked + .check.is-dark {
  border-color: rgba(54, 54, 54, 0.9);
}
.switch.is-outlined:hover input[type=checkbox]:checked + .check.is-primary {
  border-color: rgba(121, 87, 213, 0.9);
}
.switch.is-outlined:hover input[type=checkbox]:checked + .check.is-link {
  border-color: rgba(121, 87, 213, 0.9);
}
.switch.is-outlined:hover input[type=checkbox]:checked + .check.is-info {
  border-color: rgba(22, 125, 240, 0.9);
}
.switch.is-outlined:hover input[type=checkbox]:checked + .check.is-success {
  border-color: rgba(72, 199, 142, 0.9);
}
.switch.is-outlined:hover input[type=checkbox]:checked + .check.is-warning {
  border-color: rgba(255, 224, 138, 0.9);
}
.switch.is-outlined:hover input[type=checkbox]:checked + .check.is-danger {
  border-color: rgba(241, 70, 104, 0.9);
}
.switch.is-small {
  border-radius: 2px;
  font-size: 0.75rem;
}
.switch.is-medium {
  font-size: 1.25rem;
}
.switch.is-large {
  font-size: 1.5rem;
}
.switch[disabled] {
  opacity: 0.5;
  cursor: not-allowed;
  color: #7a7a7a;
}

.table-wrapper .table {
  margin-bottom: 0;
}
.table-wrapper:not(:last-child) {
  margin-bottom: 1.5rem;
}
@media screen and (max-width: 1023px) {
  .table-wrapper {
    overflow-x: auto;
  }
}

.b-table {
  transition: opacity 86ms ease-out;
}
@media screen and (min-width: 769px), print {
  .b-table .table-mobile-sort {
    display: none;
  }
}
.b-table .icon {
  transition: transform 150ms ease-out, opacity 86ms ease-out;
}
.b-table .icon.is-desc {
  transform: rotate(180deg);
}
.b-table .icon.is-expanded {
  transform: rotate(90deg);
}
.b-table .sort-icon.icon.is-desc {
  transform: rotate(180deg) translateY(-50%) !important;
}
.b-table .table {
  width: 100%;
  border: 1px solid transparent;
  border-radius: 4px;
  border-collapse: separate;
}
.b-table .table th {
  font-weight: 600;
}
.b-table .table th .th-wrap {
  display: flex;
  align-items: center;
}
.b-table .table th .th-wrap .icon {
  margin-left: 0.5rem;
  margin-right: 0;
  font-size: 1rem;
}
.b-table .table th .th-wrap.is-numeric {
  flex-direction: row-reverse;
  text-align: right;
  width: 95%;
}
.b-table .table th .th-wrap.is-numeric .icon {
  margin-left: 0;
  margin-right: 0.5rem;
}
.b-table .table th .th-wrap.is-centered {
  justify-content: center;
  text-align: center;
}
.b-table .table th.is-current-sort {
  border-color: #7a7a7a;
  font-weight: 700;
}
.b-table .table th.is-sortable:hover {
  border-color: #7a7a7a;
}
.b-table .table th.is-sortable, .b-table .table th.is-sortable .th-wrap {
  cursor: pointer;
}
.b-table .table th.is-sortable .is-relative, .b-table .table th.is-sortable .th-wrap .is-relative {
  position: absolute;
}
.b-table .table th .sort-icon, .b-table .table th .multi-sort-cancel-icon {
  position: absolute;
  bottom: 50%;
  left: 100%;
  transform: translateY(50%);
}
.b-table .table th .multi-sort-cancel-icon {
  margin-left: 10px;
}
.b-table .table th.is-sticky {
  position: -webkit-sticky;
  position: sticky;
  left: 0;
  z-index: 3 !important;
  background: transparent;
}
.b-table .table tr.is-selected .checkbox input:checked + .check {
  background: #fff url("data:image/svg+xml,%3Csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 1 1'%3E%3Cpath style='fill:%237957d5' d='M 0.04038059,0.6267767 0.14644661,0.52071068 0.42928932,0.80355339 0.3232233,0.90961941 z M 0.21715729,0.80355339 0.85355339,0.16715729 0.95961941,0.2732233 0.3232233,0.90961941 z'%3E%3C/path%3E%3C/svg%3E") no-repeat center center;
}
.b-table .table tr.is-selected .checkbox input + .check {
  border-color: #fff;
}
.b-table .table tr.is-empty:hover {
  background-color: transparent;
}
.b-table .table .chevron-cell {
  vertical-align: middle;
}
.b-table .table .chevron-cell > a {
  color: #7957d5 !important;
}
.b-table .table .checkbox-cell {
  width: 40px;
}
.b-table .table .checkbox-cell .checkbox {
  vertical-align: middle;
}
.b-table .table .checkbox-cell .checkbox .check {
  transition: none;
}
.b-table .table tr.detail {
  box-shadow: inset 0 1px 3px #dbdbdb;
  background: #fafafa;
}
.b-table .table tr.detail .detail-container {
  padding: 1rem;
}
.b-table .table:focus {
  border-color: #7957d5;
  box-shadow: 0 0 0 0.125em rgba(121, 87, 213, 0.25);
}
.b-table .table.is-bordered th.is-current-sort,
.b-table .table.is-bordered th.is-sortable:hover {
  border-color: #dbdbdb;
  background: whitesmoke;
}
.b-table .table td.is-sticky {
  position: -webkit-sticky;
  position: sticky;
  left: 0;
  z-index: 1;
  background: white;
}
.b-table .table.is-striped tbody tr:not(.is-selected):nth-child(even) td.is-sticky {
  background: #fafafa;
}
.b-table .level:not(.top) {
  padding-bottom: 1.5rem;
}
.b-table .table-wrapper {
  position: relative;
}
.b-table .table-wrapper.has-sticky-header {
  height: 300px;
  overflow-y: auto;
}
@media screen and (max-width: 768px) {
  .b-table .table-wrapper.has-sticky-header.has-mobile-cards {
    height: initial !important;
    overflow-y: initial !important;
  }
}
.b-table .table-wrapper.has-sticky-header tr:first-child th {
  position: -webkit-sticky;
  position: sticky;
  top: 0;
  z-index: 2;
  background: white;
}
@media screen and (max-width: 768px) {
  .b-table .table-wrapper.has-mobile-cards .table {
    background-color: transparent;
  }
  .b-table .table-wrapper.has-mobile-cards thead tr {
    box-shadow: none;
    border-width: 0;
  }
  .b-table .table-wrapper.has-mobile-cards thead tr th {
    display: none;
  }
  .b-table .table-wrapper.has-mobile-cards thead tr .checkbox-cell {
    display: block;
    width: 100%;
    text-align: right;
    margin-bottom: 1rem;
    border: 0;
  }
  .b-table .table-wrapper.has-mobile-cards tfoot th {
    border: 0;
    display: inherit;
  }
  .b-table .table-wrapper.has-mobile-cards tr {
    box-shadow: 0 2px 3px rgba(10, 10, 10, 0.1), 0 0 0 1px rgba(10, 10, 10, 0.1);
    max-width: 100%;
    position: relative;
    display: block;
  }
  .b-table .table-wrapper.has-mobile-cards tr td {
    border: 0;
    display: inherit;
  }
  .b-table .table-wrapper.has-mobile-cards tr td:last-child {
    border-bottom: 0;
  }
  .b-table .table-wrapper.has-mobile-cards tr:not(:last-child) {
    margin-bottom: 1rem;
  }
  .b-table .table-wrapper.has-mobile-cards tr:not([class*=is-]) {
    background: white;
  }
  .b-table .table-wrapper.has-mobile-cards tr:not([class*=is-]):hover {
    background-color: white;
  }
  .b-table .table-wrapper.has-mobile-cards tr.detail {
    margin-top: -1rem;
  }
  .b-table .table-wrapper.has-mobile-cards tr:not(.detail):not(.is-empty):not(.table-footer) td {
    display: flex;
    width: auto;
    justify-content: space-between;
    text-align: right;
    border-bottom: 1px solid whitesmoke;
  }
  .b-table .table-wrapper.has-mobile-cards tr:not(.detail):not(.is-empty):not(.table-footer) td:before {
    content: attr(data-label);
    font-weight: 600;
    padding-right: 0.5em;
    text-align: left;
  }
}
.b-table .table-wrapper.is-card-list .table {
  background-color: transparent;
}
.b-table .table-wrapper.is-card-list thead tr {
  box-shadow: none;
  border-width: 0;
}
.b-table .table-wrapper.is-card-list thead tr th {
  display: none;
}
.b-table .table-wrapper.is-card-list thead tr .checkbox-cell {
  display: block;
  width: 100%;
  text-align: right;
  margin-bottom: 1rem;
  border: 0;
}
.b-table .table-wrapper.is-card-list tfoot th {
  border: 0;
  display: inherit;
}
.b-table .table-wrapper.is-card-list tr {
  box-shadow: 0 2px 3px rgba(10, 10, 10, 0.1), 0 0 0 1px rgba(10, 10, 10, 0.1);
  max-width: 100%;
  position: relative;
  display: block;
}
.b-table .table-wrapper.is-card-list tr td {
  border: 0;
  display: inherit;
}
.b-table .table-wrapper.is-card-list tr td:last-child {
  border-bottom: 0;
}
.b-table .table-wrapper.is-card-list tr:not(:last-child) {
  margin-bottom: 1rem;
}
.b-table .table-wrapper.is-card-list tr:not([class*=is-]) {
  background: white;
}
.b-table .table-wrapper.is-card-list tr:not([class*=is-]):hover {
  background-color: white;
}
.b-table .table-wrapper.is-card-list tr.detail {
  margin-top: -1rem;
}
.b-table .table-wrapper.is-card-list tr:not(.detail):not(.is-empty):not(.table-footer) td {
  display: flex;
  width: auto;
  justify-content: space-between;
  text-align: right;
  border-bottom: 1px solid whitesmoke;
}
.b-table .table-wrapper.is-card-list tr:not(.detail):not(.is-empty):not(.table-footer) td:before {
  content: attr(data-label);
  font-weight: 600;
  padding-right: 0.5em;
  text-align: left;
}

.b-tabs .tabs {
  margin-bottom: 0;
  flex-shrink: 0;
}
.b-tabs .tabs li a:focus {
  outline: none;
  border-bottom-color: #7957d5;
}
.b-tabs .tabs li:not(.is-active) a:focus {
  border-bottom-color: #363636;
}
.b-tabs .tabs li.is-disabled {
  pointer-events: none;
  cursor: not-allowed;
  opacity: 0.5;
}
.b-tabs .tabs.is-boxed li a:focus {
  background-color: white;
  border-bottom-color: transparent;
}
.b-tabs .tabs.is-boxed li:not(.is-active) a:focus {
  background-color: whitesmoke;
  border-bottom-color: #dbdbdb;
}
.b-tabs .tabs.is-toggle li a:focus {
  background-color: #7957d5;
  border-color: #7957d5;
}
.b-tabs .tabs.is-toggle li:not(.is-active) a:focus {
  background-color: whitesmoke;
  border-color: #b5b5b5;
}
.b-tabs .tab-content {
  position: relative;
  overflow: visible;
  display: flex;
  flex-direction: column;
  padding: 1rem;
}
.b-tabs .tab-content .tab-item {
  flex-shrink: 0;
  flex-basis: auto;
}
.b-tabs .tab-content .tab-item:focus {
  outline: none;
}
.b-tabs .tab-content.is-transitioning {
  overflow: hidden;
}
.b-tabs:not(:last-child) {
  margin-bottom: 1.5rem;
}
.b-tabs.is-fullwidth {
  width: 100%;
}
.b-tabs.is-vertical {
  display: flex;
  flex-direction: row;
  flex-wrap: wrap;
}
.b-tabs.is-vertical > .tabs ul {
  flex-direction: column;
  border-bottom-color: transparent;
}
.b-tabs.is-vertical > .tabs ul li {
  width: 100%;
}
.b-tabs.is-vertical > .tabs ul li a {
  justify-content: left;
}
.b-tabs.is-vertical > .tabs.is-boxed li a {
  border-bottom-color: transparent !important;
  border-right-color: #dbdbdb !important;
  border-radius: 4px 0 0 4px;
}
.b-tabs.is-vertical > .tabs.is-boxed li.is-active a {
  border-bottom-color: #dbdbdb !important;
  border-right-color: transparent !important;
}
.b-tabs.is-vertical > .tabs.is-toggle li + li {
  margin-left: 0;
}
.b-tabs.is-vertical > .tabs.is-toggle li:first-child a {
  border-radius: 4px 4px 0 0;
}
.b-tabs.is-vertical > .tabs.is-toggle li:last-child a {
  border-radius: 0 0 4px 4px;
}
.b-tabs.is-vertical > .tabs.is-fullwidth li a {
  height: 100%;
}
.b-tabs.is-vertical > .tab-content {
  flex-grow: 1;
}
.b-tabs.is-vertical.is-right {
  flex-direction: row-reverse;
}
.b-tabs.is-vertical.is-right > .tabs ul a {
  flex-direction: row-reverse;
}
.b-tabs.is-vertical.is-right > .tabs ul a .icon:first-child {
  margin-right: 0;
  margin-left: 0.5em;
}
.b-tabs.is-vertical.is-right > .tabs.is-boxed li a {
  border-bottom-color: transparent !important;
  border-right-color: transparent !important;
  border-left-color: #dbdbdb !important;
  border-radius: 0 4px 4px 0;
}
.b-tabs.is-vertical.is-right > .tabs.is-boxed li.is-active a {
  border-bottom-color: #dbdbdb !important;
  border-right-color: #dbdbdb !important;
  border-left-color: transparent !important;
}
.b-tabs.is-multiline > .tabs ul {
  flex-wrap: wrap;
  flex-shrink: 1;
}

.tag .has-ellipsis {
  max-width: 10em;
  overflow: hidden;
  white-space: nowrap;
  text-overflow: ellipsis;
}
.tag .delete.is-white, .tag.is-delete.is-white, .tag.has-delete-icon.is-white {
  background: white;
}
.tag .delete.is-white:hover, .tag.is-delete.is-white:hover, .tag.has-delete-icon.is-white:hover {
  background-color: #e6e6e6;
  text-decoration: none;
}
.tag .delete.is-black, .tag.is-delete.is-black, .tag.has-delete-icon.is-black {
  background: #0a0a0a;
}
.tag .delete.is-black:hover, .tag.is-delete.is-black:hover, .tag.has-delete-icon.is-black:hover {
  background-color: black;
  text-decoration: none;
}
.tag .delete.is-light, .tag.is-delete.is-light, .tag.has-delete-icon.is-light {
  background: whitesmoke;
}
.tag .delete.is-light:hover, .tag.is-delete.is-light:hover, .tag.has-delete-icon.is-light:hover {
  background-color: #dbdbdb;
  text-decoration: none;
}
.tag .delete.is-dark, .tag.is-delete.is-dark, .tag.has-delete-icon.is-dark {
  background: #363636;
}
.tag .delete.is-dark:hover, .tag.is-delete.is-dark:hover, .tag.has-delete-icon.is-dark:hover {
  background-color: #1c1c1c;
  text-decoration: none;
}
.tag .delete.is-primary, .tag.is-delete.is-primary, .tag.has-delete-icon.is-primary {
  background: #7957d5;
}
.tag .delete.is-primary:hover, .tag.is-delete.is-primary:hover, .tag.has-delete-icon.is-primary:hover {
  background-color: #5a32c7;
  text-decoration: none;
}
.tag .delete.is-link, .tag.is-delete.is-link, .tag.has-delete-icon.is-link {
  background: #7957d5;
}
.tag .delete.is-link:hover, .tag.is-delete.is-link:hover, .tag.has-delete-icon.is-link:hover {
  background-color: #5a32c7;
  text-decoration: none;
}
.tag .delete.is-info, .tag.is-delete.is-info, .tag.has-delete-icon.is-info {
  background: #167df0;
}
.tag .delete.is-info:hover, .tag.is-delete.is-info:hover, .tag.has-delete-icon.is-info:hover {
  background-color: #0d64c6;
  text-decoration: none;
}
.tag .delete.is-success, .tag.is-delete.is-success, .tag.has-delete-icon.is-success {
  background: #48c78e;
}
.tag .delete.is-success:hover, .tag.is-delete.is-success:hover, .tag.has-delete-icon.is-success:hover {
  background-color: #34a873;
  text-decoration: none;
}
.tag .delete.is-warning, .tag.is-delete.is-warning, .tag.has-delete-icon.is-warning {
  background: #ffe08a;
}
.tag .delete.is-warning:hover, .tag.is-delete.is-warning:hover, .tag.has-delete-icon.is-warning:hover {
  background-color: #ffd257;
  text-decoration: none;
}
.tag .delete.is-danger, .tag.is-delete.is-danger, .tag.has-delete-icon.is-danger {
  background: #f14668;
}
.tag .delete.is-danger:hover, .tag.is-delete.is-danger:hover, .tag.has-delete-icon.is-danger:hover {
  background-color: #ee1742;
  text-decoration: none;
}
.tag.has-delete-icon {
  padding: 0px;
}
.tag.has-delete-icon .icon:first-child:not(:last-child) {
  margin-right: 0px;
  margin-left: 0px;
}

.taginput .taginput-container {
  display: flex;
}
.taginput .taginput-container.is-focusable {
  padding-bottom: 0;
  padding-top: calc(0.275em - 1px);
  padding-left: 0;
  padding-right: 0;
  align-items: center;
  flex-wrap: wrap;
  justify-content: flex-start;
  height: auto;
  cursor: text;
}
.taginput .taginput-container:not(.is-focusable) {
  align-items: center;
  flex-wrap: wrap;
  justify-content: flex-start;
  height: auto;
}
.taginput .taginput-container:not(.is-focusable).is-small {
  border-radius: 2px;
  font-size: 0.75rem;
}
.taginput .taginput-container:not(.is-focusable).is-medium {
  font-size: 1.25rem;
}
.taginput .taginput-container:not(.is-focusable).is-large {
  font-size: 1.5rem;
}
.taginput .taginput-container > .tag,
.taginput .taginput-container > .tags {
  margin-left: 0.275rem;
  margin-bottom: calc(0.275em - 1px);
  font-size: 0.9em;
  height: calc(2em - 1px);
}
.taginput .taginput-container > .tag .tag,
.taginput .taginput-container > .tags .tag {
  margin-bottom: 0;
  font-size: 0.9em;
  height: calc(2em - 1px);
}
.taginput .taginput-container > .tag .tag.is-delete,
.taginput .taginput-container > .tags .tag.is-delete {
  width: calc(2em - 1px);
}
.taginput .taginput-container .autocomplete {
  position: static;
  flex: 1;
}
.taginput .taginput-container .autocomplete input {
  height: calc(2em - 1px);
  margin-bottom: calc(0.275em - 1px);
  padding-top: 0;
  padding-bottom: 0;
  border: none;
  box-shadow: none;
  min-width: 8em;
}
.taginput .taginput-container .autocomplete input:focus {
  box-shadow: none !important;
}
.taginput .taginput-container .autocomplete .icon {
  height: calc(2em - 1px);
}
.taginput .taginput-container .autocomplete > .control.is-loading::after {
  top: 0.375em;
}

.timepicker .dropdown-menu {
  min-width: 0;
}
.timepicker .dropdown,
.timepicker .dropdown-trigger {
  width: 100%;
}
.timepicker .dropdown .input[readonly],
.timepicker .dropdown-trigger .input[readonly] {
  cursor: pointer;
  box-shadow: inset 0 0.0625em 0.125em rgba(10, 10, 10, 0.05);
}
.timepicker .dropdown .input[readonly]:focus, .timepicker .dropdown .input[readonly].is-focused, .timepicker .dropdown .input[readonly]:active, .timepicker .dropdown .input[readonly].is-active,
.timepicker .dropdown-trigger .input[readonly]:focus,
.timepicker .dropdown-trigger .input[readonly].is-focused,
.timepicker .dropdown-trigger .input[readonly]:active,
.timepicker .dropdown-trigger .input[readonly].is-active {
  box-shadow: 0 0 0 0.125em rgba(121, 87, 213, 0.25);
}
.timepicker .dropdown.is-disabled {
  opacity: 1;
}
.timepicker .dropdown-item, .timepicker .dropdown .dropdown-menu .has-link a, .dropdown .dropdown-menu .has-link .timepicker a {
  font-size: inherit;
  padding: 0;
}
.timepicker .timepicker-footer {
  padding: 0 0.5rem 0 0.5rem;
}
.timepicker .dropdown-content .control {
  font-size: 1.25em;
  margin-right: 0 !important;
}
.timepicker .dropdown-content .control .select {
  margin: 0 0.125em;
}
.timepicker .dropdown-content .control .select select {
  font-weight: 600;
  padding-right: calc(0.75em - 1px);
  border: 0;
}
.timepicker .dropdown-content .control .select select option:disabled {
  color: rgba(122, 122, 122, 0.7);
}
.timepicker .dropdown-content .control .select:after {
  display: none;
}
.timepicker .dropdown-content .control.is-colon {
  font-size: 1.7em;
  line-height: 1.7em;
}
.timepicker .dropdown-content .control.is-colon:last-child {
  padding-right: calc(0.75em - 1px);
}
.timepicker.is-small {
  border-radius: 2px;
  font-size: 0.75rem;
}
.timepicker.is-medium {
  font-size: 1.25rem;
}
.timepicker.is-large {
  font-size: 1.5rem;
}

.b-tooltip {
  position: relative;
  display: inline-flex;
}
.b-tooltip.is-top .tooltip-content {
  top: auto;
  right: auto;
  bottom: calc(100% + 5px + 2px);
  left: 50%;
  transform: translateX(-50%);
}
.b-tooltip.is-top .tooltip-content::before {
  top: 100%;
  right: auto;
  bottom: auto;
  left: 50%;
  transform: translateX(-50%);
  border-top: 5px solid #7957d5;
  border-right: 5px solid transparent;
  border-left: 5px solid transparent;
}
.b-tooltip.is-top.is-white .tooltip-content::before {
  border-top-color: white;
}
.b-tooltip.is-top.is-black .tooltip-content::before {
  border-top-color: #0a0a0a;
}
.b-tooltip.is-top.is-light .tooltip-content::before {
  border-top-color: whitesmoke;
}
.b-tooltip.is-top.is-dark .tooltip-content::before {
  border-top-color: #363636;
}
.b-tooltip.is-top.is-primary .tooltip-content::before {
  border-top-color: #7957d5;
}
.b-tooltip.is-top.is-primary.is-light .tooltip-content::before {
  border-top-color: #f2effb;
}
.b-tooltip.is-top.is-link .tooltip-content::before {
  border-top-color: #7957d5;
}
.b-tooltip.is-top.is-link.is-light .tooltip-content::before {
  border-top-color: #f2effb;
}
.b-tooltip.is-top.is-info .tooltip-content::before {
  border-top-color: #167df0;
}
.b-tooltip.is-top.is-info.is-light .tooltip-content::before {
  border-top-color: #ecf4fe;
}
.b-tooltip.is-top.is-success .tooltip-content::before {
  border-top-color: #48c78e;
}
.b-tooltip.is-top.is-success.is-light .tooltip-content::before {
  border-top-color: #effaf5;
}
.b-tooltip.is-top.is-warning .tooltip-content::before {
  border-top-color: #ffe08a;
}
.b-tooltip.is-top.is-warning.is-light .tooltip-content::before {
  border-top-color: #fffaeb;
}
.b-tooltip.is-top.is-danger .tooltip-content::before {
  border-top-color: #f14668;
}
.b-tooltip.is-top.is-danger.is-light .tooltip-content::before {
  border-top-color: #feecf0;
}
.b-tooltip.is-right .tooltip-content {
  top: 50%;
  right: auto;
  bottom: auto;
  left: calc(100% + 5px + 2px);
  transform: translateY(-50%);
}
.b-tooltip.is-right .tooltip-content::before {
  top: 50%;
  right: 100%;
  bottom: auto;
  left: auto;
  transform: translateY(-50%);
  border-top: 5px solid transparent;
  border-right: 5px solid #7957d5;
  border-bottom: 5px solid transparent;
}
.b-tooltip.is-right.is-white .tooltip-content::before {
  border-right-color: white;
}
.b-tooltip.is-right.is-black .tooltip-content::before {
  border-right-color: #0a0a0a;
}
.b-tooltip.is-right.is-light .tooltip-content::before {
  border-right-color: whitesmoke;
}
.b-tooltip.is-right.is-dark .tooltip-content::before {
  border-right-color: #363636;
}
.b-tooltip.is-right.is-primary .tooltip-content::before {
  border-right-color: #7957d5;
}
.b-tooltip.is-right.is-primary.is-light .tooltip-content::before {
  border-right-color: #f2effb;
}
.b-tooltip.is-right.is-link .tooltip-content::before {
  border-right-color: #7957d5;
}
.b-tooltip.is-right.is-link.is-light .tooltip-content::before {
  border-right-color: #f2effb;
}
.b-tooltip.is-right.is-info .tooltip-content::before {
  border-right-color: #167df0;
}
.b-tooltip.is-right.is-info.is-light .tooltip-content::before {
  border-right-color: #ecf4fe;
}
.b-tooltip.is-right.is-success .tooltip-content::before {
  border-right-color: #48c78e;
}
.b-tooltip.is-right.is-success.is-light .tooltip-content::before {
  border-right-color: #effaf5;
}
.b-tooltip.is-right.is-warning .tooltip-content::before {
  border-right-color: #ffe08a;
}
.b-tooltip.is-right.is-warning.is-light .tooltip-content::before {
  border-right-color: #fffaeb;
}
.b-tooltip.is-right.is-danger .tooltip-content::before {
  border-right-color: #f14668;
}
.b-tooltip.is-right.is-danger.is-light .tooltip-content::before {
  border-right-color: #feecf0;
}
.b-tooltip.is-bottom .tooltip-content {
  top: calc(100% + 5px + 2px);
  right: auto;
  bottom: auto;
  left: 50%;
  transform: translateX(-50%);
}
.b-tooltip.is-bottom .tooltip-content::before {
  top: auto;
  right: auto;
  bottom: 100%;
  left: 50%;
  transform: translateX(-50%);
  border-right: 5px solid transparent;
  border-bottom: 5px solid #7957d5;
  border-left: 5px solid transparent;
}
.b-tooltip.is-bottom.is-white .tooltip-content::before {
  border-bottom-color: white;
}
.b-tooltip.is-bottom.is-black .tooltip-content::before {
  border-bottom-color: #0a0a0a;
}
.b-tooltip.is-bottom.is-light .tooltip-content::before {
  border-bottom-color: whitesmoke;
}
.b-tooltip.is-bottom.is-dark .tooltip-content::before {
  border-bottom-color: #363636;
}
.b-tooltip.is-bottom.is-primary .tooltip-content::before {
  border-bottom-color: #7957d5;
}
.b-tooltip.is-bottom.is-primary.is-light .tooltip-content::before {
  border-bottom-color: #f2effb;
}
.b-tooltip.is-bottom.is-link .tooltip-content::before {
  border-bottom-color: #7957d5;
}
.b-tooltip.is-bottom.is-link.is-light .tooltip-content::before {
  border-bottom-color: #f2effb;
}
.b-tooltip.is-bottom.is-info .tooltip-content::before {
  border-bottom-color: #167df0;
}
.b-tooltip.is-bottom.is-info.is-light .tooltip-content::before {
  border-bottom-color: #ecf4fe;
}
.b-tooltip.is-bottom.is-success .tooltip-content::before {
  border-bottom-color: #48c78e;
}
.b-tooltip.is-bottom.is-success.is-light .tooltip-content::before {
  border-bottom-color: #effaf5;
}
.b-tooltip.is-bottom.is-warning .tooltip-content::before {
  border-bottom-color: #ffe08a;
}
.b-tooltip.is-bottom.is-warning.is-light .tooltip-content::before {
  border-bottom-color: #fffaeb;
}
.b-tooltip.is-bottom.is-danger .tooltip-content::before {
  border-bottom-color: #f14668;
}
.b-tooltip.is-bottom.is-danger.is-light .tooltip-content::before {
  border-bottom-color: #feecf0;
}
.b-tooltip.is-left .tooltip-content {
  top: 50%;
  right: calc(100% + 5px + 2px);
  bottom: auto;
  left: auto;
  transform: translateY(-50%);
}
.b-tooltip.is-left .tooltip-content::before {
  top: 50%;
  right: auto;
  bottom: auto;
  left: 100%;
  transform: translateY(-50%);
  border-top: 5px solid transparent;
  border-bottom: 5px solid transparent;
  border-left: 5px solid #7957d5;
}
.b-tooltip.is-left.is-white .tooltip-content::before {
  border-left-color: white;
}
.b-tooltip.is-left.is-black .tooltip-content::before {
  border-left-color: #0a0a0a;
}
.b-tooltip.is-left.is-light .tooltip-content::before {
  border-left-color: whitesmoke;
}
.b-tooltip.is-left.is-dark .tooltip-content::before {
  border-left-color: #363636;
}
.b-tooltip.is-left.is-primary .tooltip-content::before {
  border-left-color: #7957d5;
}
.b-tooltip.is-left.is-primary.is-light .tooltip-content::before {
  border-left-color: #f2effb;
}
.b-tooltip.is-left.is-link .tooltip-content::before {
  border-left-color: #7957d5;
}
.b-tooltip.is-left.is-link.is-light .tooltip-content::before {
  border-left-color: #f2effb;
}
.b-tooltip.is-left.is-info .tooltip-content::before {
  border-left-color: #167df0;
}
.b-tooltip.is-left.is-info.is-light .tooltip-content::before {
  border-left-color: #ecf4fe;
}
.b-tooltip.is-left.is-success .tooltip-content::before {
  border-left-color: #48c78e;
}
.b-tooltip.is-left.is-success.is-light .tooltip-content::before {
  border-left-color: #effaf5;
}
.b-tooltip.is-left.is-warning .tooltip-content::before {
  border-left-color: #ffe08a;
}
.b-tooltip.is-left.is-warning.is-light .tooltip-content::before {
  border-left-color: #fffaeb;
}
.b-tooltip.is-left.is-danger .tooltip-content::before {
  border-left-color: #f14668;
}
.b-tooltip.is-left.is-danger.is-light .tooltip-content::before {
  border-left-color: #feecf0;
}
.b-tooltip .tooltip-content {
  width: auto;
  padding: 0.35rem 0.75rem;
  border-radius: 6px;
  font-size: 0.85rem;
  font-weight: 400;
  box-shadow: 0px 1px 2px 1px rgba(0, 1, 0, 0.2);
  z-index: 38;
  white-space: nowrap;
  position: absolute;
}
.b-tooltip .tooltip-content::before {
  position: absolute;
  content: "";
  pointer-events: none;
  z-index: 38;
}
.b-tooltip .tooltip-trigger {
  width: 100%;
}
.b-tooltip.is-white .tooltip-content {
  background: white;
  color: #0a0a0a;
}
.b-tooltip.is-black .tooltip-content {
  background: #0a0a0a;
  color: white;
}
.b-tooltip.is-light .tooltip-content {
  background: whitesmoke;
  color: rgba(0, 0, 0, 0.7);
}
.b-tooltip.is-dark .tooltip-content {
  background: #363636;
  color: #fff;
}
.b-tooltip.is-primary .tooltip-content {
  background: #7957d5;
  color: #fff;
}
.b-tooltip.is-primary.is-light .tooltip-content {
  background: #f2effb;
  color: #552fbc;
}
.b-tooltip.is-link .tooltip-content {
  background: #7957d5;
  color: #fff;
}
.b-tooltip.is-link.is-light .tooltip-content {
  background: #f2effb;
  color: #552fbc;
}
.b-tooltip.is-info .tooltip-content {
  background: #167df0;
  color: #fff;
}
.b-tooltip.is-info.is-light .tooltip-content {
  background: #ecf4fe;
  color: #0d68ce;
}
.b-tooltip.is-success .tooltip-content {
  background: #48c78e;
  color: #fff;
}
.b-tooltip.is-success.is-light .tooltip-content {
  background: #effaf5;
  color: #257953;
}
.b-tooltip.is-warning .tooltip-content {
  background: #ffe08a;
  color: rgba(0, 0, 0, 0.7);
}
.b-tooltip.is-warning.is-light .tooltip-content {
  background: #fffaeb;
  color: #946c00;
}
.b-tooltip.is-danger .tooltip-content {
  background: #f14668;
  color: #fff;
}
.b-tooltip.is-danger.is-light .tooltip-content {
  background: #feecf0;
  color: #cc0f35;
}
.b-tooltip.is-always .tooltip-content::before,
.b-tooltip.is-always .tooltip-content {
  opacity: 1;
  visibility: visible;
}
.b-tooltip.is-multiline .tooltip-content {
  display: flex-block;
  text-align: center;
  white-space: normal;
}
.b-tooltip.is-multiline.is-small .tooltip-content {
  width: 180px;
}
.b-tooltip.is-multiline.is-medium .tooltip-content {
  width: 240px;
}
.b-tooltip.is-multiline.is-large .tooltip-content {
  width: 300px;
}
.b-tooltip.is-dashed .tooltip-trigger {
  border-bottom: 1px dashed #b5b5b5;
  cursor: default;
}
.b-tooltip.is-square .tooltip-content {
  border-radius: 0;
}

.upload {
  position: relative;
  display: inline-flex;
}
.upload input[type=file] {
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  height: 100%;
  opacity: 0;
  outline: none;
  cursor: pointer;
  z-index: -1;
}
.upload .upload-draggable {
  cursor: pointer;
  padding: 0.25em;
  border: 1px dashed #b5b5b5;
  border-radius: 6px;
}
.upload .upload-draggable.is-disabled {
  opacity: 0.5;
  cursor: not-allowed;
}
.upload .upload-draggable.is-loading {
  position: relative;
  pointer-events: none;
  opacity: 0.5;
}
.upload .upload-draggable.is-loading:after {
  animation: spinAround 500ms infinite linear;
  border: 2px solid #dbdbdb;
  border-radius: 9999px;
  border-right-color: transparent;
  border-top-color: transparent;
  content: "";
  display: block;
  height: 1em;
  position: relative;
  width: 1em;
  top: 0;
  left: calc(50% - 1.5em);
  width: 3em;
  height: 3em;
  border-width: 0.25em;
}
.upload .upload-draggable:hover.is-white, .upload .upload-draggable.is-hovered.is-white {
  border-color: white;
  background: rgba(255, 255, 255, 0.05);
}
.upload .upload-draggable:hover.is-black, .upload .upload-draggable.is-hovered.is-black {
  border-color: #0a0a0a;
  background: rgba(10, 10, 10, 0.05);
}
.upload .upload-draggable:hover.is-light, .upload .upload-draggable.is-hovered.is-light {
  border-color: whitesmoke;
  background: rgba(245, 245, 245, 0.05);
}
.upload .upload-draggable:hover.is-dark, .upload .upload-draggable.is-hovered.is-dark {
  border-color: #363636;
  background: rgba(54, 54, 54, 0.05);
}
.upload .upload-draggable:hover.is-primary, .upload .upload-draggable.is-hovered.is-primary {
  border-color: #7957d5;
  background: rgba(121, 87, 213, 0.05);
}
.upload .upload-draggable:hover.is-link, .upload .upload-draggable.is-hovered.is-link {
  border-color: #7957d5;
  background: rgba(121, 87, 213, 0.05);
}
.upload .upload-draggable:hover.is-info, .upload .upload-draggable.is-hovered.is-info {
  border-color: #167df0;
  background: rgba(22, 125, 240, 0.05);
}
.upload .upload-draggable:hover.is-success, .upload .upload-draggable.is-hovered.is-success {
  border-color: #48c78e;
  background: rgba(72, 199, 142, 0.05);
}
.upload .upload-draggable:hover.is-warning, .upload .upload-draggable.is-hovered.is-warning {
  border-color: #ffe08a;
  background: rgba(255, 224, 138, 0.05);
}
.upload .upload-draggable:hover.is-danger, .upload .upload-draggable.is-hovered.is-danger {
  border-color: #f14668;
  background: rgba(241, 70, 104, 0.05);
}
.upload .upload-draggable.is-expanded {
  width: 100%;
}
.upload.is-expanded {
  width: 100%;
}
.upload.is-rounded {
  border-radius: 9999px;
}
.upload.is-rounded .file-name {
  border-top-right-radius: 9999px;
  border-bottom-right-radius: 9999px;
}

@media screen and (-ms-high-contrast: active), screen and (-ms-high-contrast: none) {
  .upload input[type=file] {
    z-index: auto;
  }
  .upload .upload-draggable + input[type=file] {
    z-index: -1;
  }
}

/*! bulma.io v0.9.1 | MIT License | github.com/jgthms/bulma */@-webkit-keyframes spinAround{from{-webkit-transform:rotate(0deg);transform:rotate(0deg)}to{-webkit-transform:rotate(359deg);transform:rotate(359deg)}}@keyframes spinAround{from{-webkit-transform:rotate(0deg);transform:rotate(0deg)}to{-webkit-transform:rotate(359deg);transform:rotate(359deg)}}/* line 164, src/assets/sass/sass/utilities/mixins.sass */.delete,.modal-close,.button,.file,.breadcrumb,.pagination-previous,.pagination-next,.pagination-link,.pagination-ellipsis,.tabs,.is-unselectable{-webkit-touch-callout:none;-webkit-user-select:none;-moz-user-select:none;-ms-user-select:none;user-select:none}/* line 183, src/assets/sass/sass/utilities/mixins.sass */.select:not(.is-multiple):not(.is-loading)::after,.navbar-link:not(.is-arrowless)::after{border:3px solid rgba(0,0,0,0);border-radius:2px;border-right:0;border-top:0;content:" ";display:block;height:0.625em;margin-top:-0.4375em;pointer-events:none;position:absolute;top:50%;-webkit-transform:rotate(-45deg);transform:rotate(-45deg);-webkit-transform-origin:center;transform-origin:center;width:0.625em}/* line 187, src/assets/sass/sass/utilities/mixins.sass */.box:not(:last-child),.content:not(:last-child),.notification:not(:last-child),.progress:not(:last-child),.table:not(:last-child),.table-container:not(:last-child),.title:not(:last-child),.subtitle:not(:last-child),.block:not(:last-child),.highlight:not(:last-child),.breadcrumb:not(:last-child),.level:not(:last-child),.message:not(:last-child),.pagination:not(:last-child),.tabs:not(:last-child){margin-bottom:1.5rem}/* line 259, src/assets/sass/sass/utilities/mixins.sass */.delete,.modal-close{-moz-appearance:none;-webkit-appearance:none;background-color:rgba(10,10,10,0.2);border:none;border-radius:290486px;cursor:pointer;pointer-events:auto;display:inline-block;-webkit-box-flex:0;-ms-flex-positive:0;flex-grow:0;-ms-flex-negative:0;flex-shrink:0;font-size:0;height:20px;max-height:20px;max-width:20px;min-height:20px;min-width:20px;outline:none;position:relative;vertical-align:top;width:20px}/* line 215, src/assets/sass/sass/utilities/mixins.sass */.delete::before,.modal-close::before,.delete::after,.modal-close::after{background-color:#fff;content:"";display:block;left:50%;position:absolute;top:50%;-webkit-transform:translateX(-50%) translateY(-50%) rotate(45deg);transform:translateX(-50%) translateY(-50%) rotate(45deg);-webkit-transform-origin:center center;transform-origin:center center}/* line 225, src/assets/sass/sass/utilities/mixins.sass */.delete::before,.modal-close::before{height:2px;width:50%}/* line 228, src/assets/sass/sass/utilities/mixins.sass */.delete::after,.modal-close::after{height:50%;width:2px}/* line 231, src/assets/sass/sass/utilities/mixins.sass */.delete:hover,.modal-close:hover,.delete:focus,.modal-close:focus{background-color:rgba(10,10,10,0.3)}/* line 234, src/assets/sass/sass/utilities/mixins.sass */.delete:active,.modal-close:active{background-color:rgba(10,10,10,0.4)}/* line 237, src/assets/sass/sass/utilities/mixins.sass */.is-small.delete,.is-small.modal-close{height:16px;max-height:16px;max-width:16px;min-height:16px;min-width:16px;width:16px}/* line 244, src/assets/sass/sass/utilities/mixins.sass */.is-medium.delete,.is-medium.modal-close{height:24px;max-height:24px;max-width:24px;min-height:24px;min-width:24px;width:24px}/* line 251, src/assets/sass/sass/utilities/mixins.sass */.is-large.delete,.is-large.modal-close{height:32px;max-height:32px;max-width:32px;min-height:32px;min-width:32px;width:32px}/* line 274, src/assets/sass/sass/utilities/mixins.sass */.button.is-loading::after,.loader,.select.is-loading::after,.control.is-loading::after{-webkit-animation:spinAround 500ms infinite linear;animation:spinAround 500ms infinite linear;border:2px solid #dbdbdb;border-radius:290486px;border-right-color:transparent;border-top-color:transparent;content:"";display:block;height:1em;position:relative;width:1em}/* line 284, src/assets/sass/sass/utilities/mixins.sass */.image.is-square img,.image.is-square .has-ratio,.image.is-1by1 img,.image.is-1by1 .has-ratio,.image.is-5by4 img,.image.is-5by4 .has-ratio,.image.is-4by3 img,.image.is-4by3 .has-ratio,.image.is-3by2 img,.image.is-3by2 .has-ratio,.image.is-5by3 img,.image.is-5by3 .has-ratio,.image.is-16by9 img,.image.is-16by9 .has-ratio,.image.is-2by1 img,.image.is-2by1 .has-ratio,.image.is-3by1 img,.image.is-3by1 .has-ratio,.image.is-4by5 img,.image.is-4by5 .has-ratio,.image.is-3by4 img,.image.is-3by4 .has-ratio,.image.is-2by3 img,.image.is-2by3 .has-ratio,.image.is-3by5 img,.image.is-3by5 .has-ratio,.image.is-9by16 img,.image.is-9by16 .has-ratio,.image.is-1by2 img,.image.is-1by2 .has-ratio,.image.is-1by3 img,.image.is-1by3 .has-ratio,.modal,.modal-background,.is-overlay,.hero-video{bottom:0;left:0;position:absolute;right:0;top:0}/* line 40, src/assets/sass/sass/utilities/controls.sass */.button,.input,.textarea,.select select,.file-cta,.file-name,.pagination-previous,.pagination-next,.pagination-link,.pagination-ellipsis{-moz-appearance:none;-webkit-appearance:none;-webkit-box-align:center;-ms-flex-align:center;align-items:center;border:1px solid transparent;border-radius:4px;-webkit-box-shadow:none;box-shadow:none;display:-webkit-inline-box;display:-ms-inline-flexbox;display:inline-flex;font-size:1rem;height:2.5em;-webkit-box-pack:start;-ms-flex-pack:start;justify-content:flex-start;line-height:1.5;padding-bottom:calc(0.5em - 1px);padding-left:calc(0.75em - 1px);padding-right:calc(0.75em - 1px);padding-top:calc(0.5em - 1px);position:relative;vertical-align:top}/* line 31, src/assets/sass/sass/utilities/controls.sass */.button:focus,.input:focus,.textarea:focus,.select select:focus,.file-cta:focus,.file-name:focus,.pagination-previous:focus,.pagination-next:focus,.pagination-link:focus,.pagination-ellipsis:focus,.is-focused.button,.is-focused.input,.is-focused.textarea,.select select.is-focused,.is-focused.file-cta,.is-focused.file-name,.is-focused.pagination-previous,.is-focused.pagination-next,.is-focused.pagination-link,.is-focused.pagination-ellipsis,.button:active,.input:active,.textarea:active,.select select:active,.file-cta:active,.file-name:active,.pagination-previous:active,.pagination-next:active,.pagination-link:active,.pagination-ellipsis:active,.is-active.button,.is-active.input,.is-active.textarea,.select select.is-active,.is-active.file-cta,.is-active.file-name,.is-active.pagination-previous,.is-active.pagination-next,.is-active.pagination-link,.is-active.pagination-ellipsis{outline:none}/* line 36, src/assets/sass/sass/utilities/controls.sass */.button[disabled],.input[disabled],.textarea[disabled],.select select[disabled],.file-cta[disabled],.file-name[disabled],.pagination-previous[disabled],.pagination-next[disabled],.pagination-link[disabled],.pagination-ellipsis[disabled],fieldset[disabled] .button,fieldset[disabled] .input,fieldset[disabled] .textarea,fieldset[disabled] .select select,.select fieldset[disabled] select,fieldset[disabled] .file-cta,fieldset[disabled] .file-name,fieldset[disabled] .pagination-previous,fieldset[disabled] .pagination-next,fieldset[disabled] .pagination-link,fieldset[disabled] .pagination-ellipsis{cursor:not-allowed}/*! minireset.css v0.0.6 | MIT License | github.com/jgthms/minireset.css *//* line 3, src/assets/sass/sass/base/minireset.sass */html,body,p,ol,ul,li,dl,dt,dd,blockquote,figure,fieldset,legend,textarea,pre,iframe,hr,h1,h2,h3,h4,h5,h6{margin:0;padding:0}/* line 30, src/assets/sass/sass/base/minireset.sass */h1,h2,h3,h4,h5,h6{font-size:100%;font-weight:normal}/* line 40, src/assets/sass/sass/base/minireset.sass */ul{list-style:none}/* line 44, src/assets/sass/sass/base/minireset.sass */button,input,select,textarea{margin:0}/* line 51, src/assets/sass/sass/base/minireset.sass */html{-webkit-box-sizing:border-box;box-sizing:border-box}/* line 55, src/assets/sass/sass/base/minireset.sass */*,*::before,*::after{-webkit-box-sizing:inherit;box-sizing:inherit}/* line 61, src/assets/sass/sass/base/minireset.sass */img,video{height:auto;max-width:100%}/* line 67, src/assets/sass/sass/base/minireset.sass */iframe{border:0}/* line 71, src/assets/sass/sass/base/minireset.sass */table{border-collapse:collapse;border-spacing:0}/* line 75, src/assets/sass/sass/base/minireset.sass */td,th{padding:0}/* line 78, src/assets/sass/sass/base/minireset.sass */td:not([align]),th:not([align]){text-align:inherit}/* line 32, src/assets/sass/sass/base/generic.sass */html{background-color:#fff;font-size:16px;-moz-osx-font-smoothing:grayscale;-webkit-font-smoothing:antialiased;min-width:300px;overflow-x:hidden;overflow-y:scroll;text-rendering:optimizeLegibility;-webkit-text-size-adjust:100%;-moz-text-size-adjust:100%;-ms-text-size-adjust:100%;text-size-adjust:100%}/* line 43, src/assets/sass/sass/base/generic.sass */article,aside,figure,footer,header,hgroup,section{display:block}/* line 52, src/assets/sass/sass/base/generic.sass */body,button,input,optgroup,select,textarea{font-family:BlinkMacSystemFont,-apple-system,"Segoe UI","Roboto","Oxygen","Ubuntu","Cantarell","Fira Sans","Droid Sans","Helvetica Neue","Helvetica","Arial",sans-serif}/* line 60, src/assets/sass/sass/base/generic.sass */code,pre{-moz-osx-font-smoothing:auto;-webkit-font-smoothing:auto;font-family:monospace}/* line 66, src/assets/sass/sass/base/generic.sass */body{color:#4a4a4a;font-size:1em;font-weight:400;line-height:1.5}/* line 74, src/assets/sass/sass/base/generic.sass */a{color:#3273dc;cursor:pointer;text-decoration:none}/* line 78, src/assets/sass/sass/base/generic.sass */a strong{color:currentColor}/* line 80, src/assets/sass/sass/base/generic.sass */a:hover{color:#363636}/* line 83, src/assets/sass/sass/base/generic.sass */code{background-color:#f5f5f5;color:#da1039;font-size:.875em;font-weight:normal;padding:0.25em 0.5em 0.25em}/* line 90, src/assets/sass/sass/base/generic.sass */hr{background-color:#f5f5f5;border:none;display:block;height:2px;margin:1.5rem 0}/* line 97, src/assets/sass/sass/base/generic.sass */img{height:auto;max-width:100%}/* line 101, src/assets/sass/sass/base/generic.sass */input[type="checkbox"],input[type="radio"]{vertical-align:baseline}/* line 105, src/assets/sass/sass/base/generic.sass */small{font-size:.875em}/* line 108, src/assets/sass/sass/base/generic.sass */span{font-style:inherit;font-weight:inherit}/* line 112, src/assets/sass/sass/base/generic.sass */strong{color:#363636;font-weight:700}/* line 118, src/assets/sass/sass/base/generic.sass */fieldset{border:none}/* line 121, src/assets/sass/sass/base/generic.sass */pre{-webkit-overflow-scrolling:touch;background-color:#f5f5f5;color:#4a4a4a;font-size:.875em;overflow-x:auto;padding:1.25rem 1.5rem;white-space:pre;word-wrap:normal}/* line 130, src/assets/sass/sass/base/generic.sass */pre code{background-color:transparent;color:currentColor;font-size:1em;padding:0}/* line 137, src/assets/sass/sass/base/generic.sass */table td,table th{vertical-align:top}/* line 140, src/assets/sass/sass/base/generic.sass */table td:not([align]),table th:not([align]){text-align:inherit}/* line 142, src/assets/sass/sass/base/generic.sass */table th{color:#363636}/* line 10, src/assets/sass/sass/elements/box.sass */.box{background-color:#fff;border-radius:6px;-webkit-box-shadow:0 0.5em 1em -0.125em rgba(10,10,10,0.1),0 0px 0 1px rgba(10,10,10,0.02);box-shadow:0 0.5em 1em -0.125em rgba(10,10,10,0.1),0 0px 0 1px rgba(10,10,10,0.02);color:#4a4a4a;display:block;padding:1.25rem}/* line 20, src/assets/sass/sass/elements/box.sass */a.box:hover,a.box:focus{-webkit-box-shadow:0 0.5em 1em -0.125em rgba(10,10,10,0.1),0 0 0 1px #3273dc;box-shadow:0 0.5em 1em -0.125em rgba(10,10,10,0.1),0 0 0 1px #3273dc}/* line 23, src/assets/sass/sass/elements/box.sass */a.box:active{-webkit-box-shadow:inset 0 1px 2px rgba(10,10,10,0.2),0 0 0 1px #3273dc;box-shadow:inset 0 1px 2px rgba(10,10,10,0.2),0 0 0 1px #3273dc}/* line 49, src/assets/sass/sass/elements/button.sass */.button{background-color:#fff;border-color:#dbdbdb;border-width:1px;color:#363636;cursor:pointer;-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center;padding-bottom:calc(0.5em - 1px);padding-left:1em;padding-right:1em;padding-top:calc(0.5em - 1px);text-align:center;white-space:nowrap}/* line 66, src/assets/sass/sass/elements/button.sass */.button strong{color:inherit}/* line 69, src/assets/sass/sass/elements/button.sass */.button .icon,.button .icon.is-small,.button .icon.is-medium,.button .icon.is-large{height:1.5em;width:1.5em}/* line 75, src/assets/sass/sass/elements/button.sass */.button .icon:first-child:not(:last-child){margin-left:calc(-.5em - 1px);margin-right:.25em}/* line 78, src/assets/sass/sass/elements/button.sass */.button .icon:last-child:not(:first-child){margin-left:.25em;margin-right:calc(-.5em - 1px)}/* line 81, src/assets/sass/sass/elements/button.sass */.button .icon:first-child:last-child{margin-left:calc(-.5em - 1px);margin-right:calc(-.5em - 1px)}/* line 85, src/assets/sass/sass/elements/button.sass */.button:hover,.button.is-hovered{border-color:#b5b5b5;color:#363636}/* line 89, src/assets/sass/sass/elements/button.sass */.button:focus,.button.is-focused{border-color:#3273dc;color:#363636}/* line 93, src/assets/sass/sass/elements/button.sass */.button:focus:not(:active),.button.is-focused:not(:active){-webkit-box-shadow:0 0 0 0.125em rgba(50,115,220,0.25);box-shadow:0 0 0 0.125em rgba(50,115,220,0.25)}/* line 95, src/assets/sass/sass/elements/button.sass */.button:active,.button.is-active{border-color:#4a4a4a;color:#363636}/* line 100, src/assets/sass/sass/elements/button.sass */.button.is-text{background-color:transparent;border-color:transparent;color:#4a4a4a;text-decoration:underline}/* line 105, src/assets/sass/sass/elements/button.sass */.button.is-text:hover,.button.is-text.is-hovered,.button.is-text:focus,.button.is-text.is-focused{background-color:#f5f5f5;color:#363636}/* line 111, src/assets/sass/sass/elements/button.sass */.button.is-text:active,.button.is-text.is-active{background-color:#e8e8e8;color:#363636}/* line 115, src/assets/sass/sass/elements/button.sass */.button.is-text[disabled],fieldset[disabled] .button.is-text{background-color:transparent;border-color:transparent;-webkit-box-shadow:none;box-shadow:none}/* line 123, src/assets/sass/sass/elements/button.sass */.button.is-white{background-color:#fff;border-color:transparent;color:#0a0a0a}/* line 127, src/assets/sass/sass/elements/button.sass */.button.is-white:hover,.button.is-white.is-hovered{background-color:#f9f9f9;border-color:transparent;color:#0a0a0a}/* line 132, src/assets/sass/sass/elements/button.sass */.button.is-white:focus,.button.is-white.is-focused{border-color:transparent;color:#0a0a0a}/* line 136, src/assets/sass/sass/elements/button.sass */.button.is-white:focus:not(:active),.button.is-white.is-focused:not(:active){-webkit-box-shadow:0 0 0 0.125em rgba(255,255,255,0.25);box-shadow:0 0 0 0.125em rgba(255,255,255,0.25)}/* line 138, src/assets/sass/sass/elements/button.sass */.button.is-white:active,.button.is-white.is-active{background-color:#f2f2f2;border-color:transparent;color:#0a0a0a}/* line 143, src/assets/sass/sass/elements/button.sass */.button.is-white[disabled],fieldset[disabled] .button.is-white{background-color:#fff;border-color:transparent;-webkit-box-shadow:none;box-shadow:none}/* line 148, src/assets/sass/sass/elements/button.sass */.button.is-white.is-inverted{background-color:#0a0a0a;color:#fff}/* line 151, src/assets/sass/sass/elements/button.sass */.button.is-white.is-inverted:hover,.button.is-white.is-inverted.is-hovered{background-color:#000}/* line 154, src/assets/sass/sass/elements/button.sass */.button.is-white.is-inverted[disabled],fieldset[disabled] .button.is-white.is-inverted{background-color:#0a0a0a;border-color:transparent;-webkit-box-shadow:none;box-shadow:none;color:#fff}/* line 161, src/assets/sass/sass/elements/button.sass */.button.is-white.is-loading::after{border-color:transparent transparent #0a0a0a #0a0a0a !important}/* line 163, src/assets/sass/sass/elements/button.sass */.button.is-white.is-outlined{background-color:transparent;border-color:#fff;color:#fff}/* line 167, src/assets/sass/sass/elements/button.sass */.button.is-white.is-outlined:hover,.button.is-white.is-outlined.is-hovered,.button.is-white.is-outlined:focus,.button.is-white.is-outlined.is-focused{background-color:#fff;border-color:#fff;color:#0a0a0a}/* line 175, src/assets/sass/sass/elements/button.sass */.button.is-white.is-outlined.is-loading::after{border-color:transparent transparent #fff #fff !important}/* line 181, src/assets/sass/sass/elements/button.sass */.button.is-white.is-outlined.is-loading:hover::after,.button.is-white.is-outlined.is-loading.is-hovered::after,.button.is-white.is-outlined.is-loading:focus::after,.button.is-white.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #0a0a0a #0a0a0a !important}/* line 183, src/assets/sass/sass/elements/button.sass */.button.is-white.is-outlined[disabled],fieldset[disabled] .button.is-white.is-outlined{background-color:transparent;border-color:#fff;-webkit-box-shadow:none;box-shadow:none;color:#fff}/* line 189, src/assets/sass/sass/elements/button.sass */.button.is-white.is-inverted.is-outlined{background-color:transparent;border-color:#0a0a0a;color:#0a0a0a}/* line 193, src/assets/sass/sass/elements/button.sass */.button.is-white.is-inverted.is-outlined:hover,.button.is-white.is-inverted.is-outlined.is-hovered,.button.is-white.is-inverted.is-outlined:focus,.button.is-white.is-inverted.is-outlined.is-focused{background-color:#0a0a0a;color:#fff}/* line 204, src/assets/sass/sass/elements/button.sass */.button.is-white.is-inverted.is-outlined.is-loading:hover::after,.button.is-white.is-inverted.is-outlined.is-loading.is-hovered::after,.button.is-white.is-inverted.is-outlined.is-loading:focus::after,.button.is-white.is-inverted.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #fff #fff !important}/* line 206, src/assets/sass/sass/elements/button.sass */.button.is-white.is-inverted.is-outlined[disabled],fieldset[disabled] .button.is-white.is-inverted.is-outlined{background-color:transparent;border-color:#0a0a0a;-webkit-box-shadow:none;box-shadow:none;color:#0a0a0a}/* line 123, src/assets/sass/sass/elements/button.sass */.button.is-black{background-color:#0a0a0a;border-color:transparent;color:#fff}/* line 127, src/assets/sass/sass/elements/button.sass */.button.is-black:hover,.button.is-black.is-hovered{background-color:#040404;border-color:transparent;color:#fff}/* line 132, src/assets/sass/sass/elements/button.sass */.button.is-black:focus,.button.is-black.is-focused{border-color:transparent;color:#fff}/* line 136, src/assets/sass/sass/elements/button.sass */.button.is-black:focus:not(:active),.button.is-black.is-focused:not(:active){-webkit-box-shadow:0 0 0 0.125em rgba(10,10,10,0.25);box-shadow:0 0 0 0.125em rgba(10,10,10,0.25)}/* line 138, src/assets/sass/sass/elements/button.sass */.button.is-black:active,.button.is-black.is-active{background-color:#000;border-color:transparent;color:#fff}/* line 143, src/assets/sass/sass/elements/button.sass */.button.is-black[disabled],fieldset[disabled] .button.is-black{background-color:#0a0a0a;border-color:transparent;-webkit-box-shadow:none;box-shadow:none}/* line 148, src/assets/sass/sass/elements/button.sass */.button.is-black.is-inverted{background-color:#fff;color:#0a0a0a}/* line 151, src/assets/sass/sass/elements/button.sass */.button.is-black.is-inverted:hover,.button.is-black.is-inverted.is-hovered{background-color:#f2f2f2}/* line 154, src/assets/sass/sass/elements/button.sass */.button.is-black.is-inverted[disabled],fieldset[disabled] .button.is-black.is-inverted{background-color:#fff;border-color:transparent;-webkit-box-shadow:none;box-shadow:none;color:#0a0a0a}/* line 161, src/assets/sass/sass/elements/button.sass */.button.is-black.is-loading::after{border-color:transparent transparent #fff #fff !important}/* line 163, src/assets/sass/sass/elements/button.sass */.button.is-black.is-outlined{background-color:transparent;border-color:#0a0a0a;color:#0a0a0a}/* line 167, src/assets/sass/sass/elements/button.sass */.button.is-black.is-outlined:hover,.button.is-black.is-outlined.is-hovered,.button.is-black.is-outlined:focus,.button.is-black.is-outlined.is-focused{background-color:#0a0a0a;border-color:#0a0a0a;color:#fff}/* line 175, src/assets/sass/sass/elements/button.sass */.button.is-black.is-outlined.is-loading::after{border-color:transparent transparent #0a0a0a #0a0a0a !important}/* line 181, src/assets/sass/sass/elements/button.sass */.button.is-black.is-outlined.is-loading:hover::after,.button.is-black.is-outlined.is-loading.is-hovered::after,.button.is-black.is-outlined.is-loading:focus::after,.button.is-black.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #fff #fff !important}/* line 183, src/assets/sass/sass/elements/button.sass */.button.is-black.is-outlined[disabled],fieldset[disabled] .button.is-black.is-outlined{background-color:transparent;border-color:#0a0a0a;-webkit-box-shadow:none;box-shadow:none;color:#0a0a0a}/* line 189, src/assets/sass/sass/elements/button.sass */.button.is-black.is-inverted.is-outlined{background-color:transparent;border-color:#fff;color:#fff}/* line 193, src/assets/sass/sass/elements/button.sass */.button.is-black.is-inverted.is-outlined:hover,.button.is-black.is-inverted.is-outlined.is-hovered,.button.is-black.is-inverted.is-outlined:focus,.button.is-black.is-inverted.is-outlined.is-focused{background-color:#fff;color:#0a0a0a}/* line 204, src/assets/sass/sass/elements/button.sass */.button.is-black.is-inverted.is-outlined.is-loading:hover::after,.button.is-black.is-inverted.is-outlined.is-loading.is-hovered::after,.button.is-black.is-inverted.is-outlined.is-loading:focus::after,.button.is-black.is-inverted.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #0a0a0a #0a0a0a !important}/* line 206, src/assets/sass/sass/elements/button.sass */.button.is-black.is-inverted.is-outlined[disabled],fieldset[disabled] .button.is-black.is-inverted.is-outlined{background-color:transparent;border-color:#fff;-webkit-box-shadow:none;box-shadow:none;color:#fff}/* line 123, src/assets/sass/sass/elements/button.sass */.button.is-light{background-color:#f5f5f5;border-color:transparent;color:rgba(0,0,0,0.7)}/* line 127, src/assets/sass/sass/elements/button.sass */.button.is-light:hover,.button.is-light.is-hovered{background-color:#eee;border-color:transparent;color:rgba(0,0,0,0.7)}/* line 132, src/assets/sass/sass/elements/button.sass */.button.is-light:focus,.button.is-light.is-focused{border-color:transparent;color:rgba(0,0,0,0.7)}/* line 136, src/assets/sass/sass/elements/button.sass */.button.is-light:focus:not(:active),.button.is-light.is-focused:not(:active){-webkit-box-shadow:0 0 0 0.125em rgba(245,245,245,0.25);box-shadow:0 0 0 0.125em rgba(245,245,245,0.25)}/* line 138, src/assets/sass/sass/elements/button.sass */.button.is-light:active,.button.is-light.is-active{background-color:#e8e8e8;border-color:transparent;color:rgba(0,0,0,0.7)}/* line 143, src/assets/sass/sass/elements/button.sass */.button.is-light[disabled],fieldset[disabled] .button.is-light{background-color:#f5f5f5;border-color:transparent;-webkit-box-shadow:none;box-shadow:none}/* line 148, src/assets/sass/sass/elements/button.sass */.button.is-light.is-inverted{background-color:rgba(0,0,0,0.7);color:#f5f5f5}/* line 151, src/assets/sass/sass/elements/button.sass */.button.is-light.is-inverted:hover,.button.is-light.is-inverted.is-hovered{background-color:rgba(0,0,0,0.7)}/* line 154, src/assets/sass/sass/elements/button.sass */.button.is-light.is-inverted[disabled],fieldset[disabled] .button.is-light.is-inverted{background-color:rgba(0,0,0,0.7);border-color:transparent;-webkit-box-shadow:none;box-shadow:none;color:#f5f5f5}/* line 161, src/assets/sass/sass/elements/button.sass */.button.is-light.is-loading::after{border-color:transparent transparent rgba(0,0,0,0.7) rgba(0,0,0,0.7) !important}/* line 163, src/assets/sass/sass/elements/button.sass */.button.is-light.is-outlined{background-color:transparent;border-color:#f5f5f5;color:#f5f5f5}/* line 167, src/assets/sass/sass/elements/button.sass */.button.is-light.is-outlined:hover,.button.is-light.is-outlined.is-hovered,.button.is-light.is-outlined:focus,.button.is-light.is-outlined.is-focused{background-color:#f5f5f5;border-color:#f5f5f5;color:rgba(0,0,0,0.7)}/* line 175, src/assets/sass/sass/elements/button.sass */.button.is-light.is-outlined.is-loading::after{border-color:transparent transparent #f5f5f5 #f5f5f5 !important}/* line 181, src/assets/sass/sass/elements/button.sass */.button.is-light.is-outlined.is-loading:hover::after,.button.is-light.is-outlined.is-loading.is-hovered::after,.button.is-light.is-outlined.is-loading:focus::after,.button.is-light.is-outlined.is-loading.is-focused::after{border-color:transparent transparent rgba(0,0,0,0.7) rgba(0,0,0,0.7) !important}/* line 183, src/assets/sass/sass/elements/button.sass */.button.is-light.is-outlined[disabled],fieldset[disabled] .button.is-light.is-outlined{background-color:transparent;border-color:#f5f5f5;-webkit-box-shadow:none;box-shadow:none;color:#f5f5f5}/* line 189, src/assets/sass/sass/elements/button.sass */.button.is-light.is-inverted.is-outlined{background-color:transparent;border-color:rgba(0,0,0,0.7);color:rgba(0,0,0,0.7)}/* line 193, src/assets/sass/sass/elements/button.sass */.button.is-light.is-inverted.is-outlined:hover,.button.is-light.is-inverted.is-outlined.is-hovered,.button.is-light.is-inverted.is-outlined:focus,.button.is-light.is-inverted.is-outlined.is-focused{background-color:rgba(0,0,0,0.7);color:#f5f5f5}/* line 204, src/assets/sass/sass/elements/button.sass */.button.is-light.is-inverted.is-outlined.is-loading:hover::after,.button.is-light.is-inverted.is-outlined.is-loading.is-hovered::after,.button.is-light.is-inverted.is-outlined.is-loading:focus::after,.button.is-light.is-inverted.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #f5f5f5 #f5f5f5 !important}/* line 206, src/assets/sass/sass/elements/button.sass */.button.is-light.is-inverted.is-outlined[disabled],fieldset[disabled] .button.is-light.is-inverted.is-outlined{background-color:transparent;border-color:rgba(0,0,0,0.7);-webkit-box-shadow:none;box-shadow:none;color:rgba(0,0,0,0.7)}/* line 123, src/assets/sass/sass/elements/button.sass */.button.is-dark{background-color:#363636;border-color:transparent;color:#fff}/* line 127, src/assets/sass/sass/elements/button.sass */.button.is-dark:hover,.button.is-dark.is-hovered{background-color:#2f2f2f;border-color:transparent;color:#fff}/* line 132, src/assets/sass/sass/elements/button.sass */.button.is-dark:focus,.button.is-dark.is-focused{border-color:transparent;color:#fff}/* line 136, src/assets/sass/sass/elements/button.sass */.button.is-dark:focus:not(:active),.button.is-dark.is-focused:not(:active){-webkit-box-shadow:0 0 0 0.125em rgba(54,54,54,0.25);box-shadow:0 0 0 0.125em rgba(54,54,54,0.25)}/* line 138, src/assets/sass/sass/elements/button.sass */.button.is-dark:active,.button.is-dark.is-active{background-color:#292929;border-color:transparent;color:#fff}/* line 143, src/assets/sass/sass/elements/button.sass */.button.is-dark[disabled],fieldset[disabled] .button.is-dark{background-color:#363636;border-color:transparent;-webkit-box-shadow:none;box-shadow:none}/* line 148, src/assets/sass/sass/elements/button.sass */.button.is-dark.is-inverted{background-color:#fff;color:#363636}/* line 151, src/assets/sass/sass/elements/button.sass */.button.is-dark.is-inverted:hover,.button.is-dark.is-inverted.is-hovered{background-color:#f2f2f2}/* line 154, src/assets/sass/sass/elements/button.sass */.button.is-dark.is-inverted[disabled],fieldset[disabled] .button.is-dark.is-inverted{background-color:#fff;border-color:transparent;-webkit-box-shadow:none;box-shadow:none;color:#363636}/* line 161, src/assets/sass/sass/elements/button.sass */.button.is-dark.is-loading::after{border-color:transparent transparent #fff #fff !important}/* line 163, src/assets/sass/sass/elements/button.sass */.button.is-dark.is-outlined{background-color:transparent;border-color:#363636;color:#363636}/* line 167, src/assets/sass/sass/elements/button.sass */.button.is-dark.is-outlined:hover,.button.is-dark.is-outlined.is-hovered,.button.is-dark.is-outlined:focus,.button.is-dark.is-outlined.is-focused{background-color:#363636;border-color:#363636;color:#fff}/* line 175, src/assets/sass/sass/elements/button.sass */.button.is-dark.is-outlined.is-loading::after{border-color:transparent transparent #363636 #363636 !important}/* line 181, src/assets/sass/sass/elements/button.sass */.button.is-dark.is-outlined.is-loading:hover::after,.button.is-dark.is-outlined.is-loading.is-hovered::after,.button.is-dark.is-outlined.is-loading:focus::after,.button.is-dark.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #fff #fff !important}/* line 183, src/assets/sass/sass/elements/button.sass */.button.is-dark.is-outlined[disabled],fieldset[disabled] .button.is-dark.is-outlined{background-color:transparent;border-color:#363636;-webkit-box-shadow:none;box-shadow:none;color:#363636}/* line 189, src/assets/sass/sass/elements/button.sass */.button.is-dark.is-inverted.is-outlined{background-color:transparent;border-color:#fff;color:#fff}/* line 193, src/assets/sass/sass/elements/button.sass */.button.is-dark.is-inverted.is-outlined:hover,.button.is-dark.is-inverted.is-outlined.is-hovered,.button.is-dark.is-inverted.is-outlined:focus,.button.is-dark.is-inverted.is-outlined.is-focused{background-color:#fff;color:#363636}/* line 204, src/assets/sass/sass/elements/button.sass */.button.is-dark.is-inverted.is-outlined.is-loading:hover::after,.button.is-dark.is-inverted.is-outlined.is-loading.is-hovered::after,.button.is-dark.is-inverted.is-outlined.is-loading:focus::after,.button.is-dark.is-inverted.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #363636 #363636 !important}/* line 206, src/assets/sass/sass/elements/button.sass */.button.is-dark.is-inverted.is-outlined[disabled],fieldset[disabled] .button.is-dark.is-inverted.is-outlined{background-color:transparent;border-color:#fff;-webkit-box-shadow:none;box-shadow:none;color:#fff}/* line 123, src/assets/sass/sass/elements/button.sass */.button.is-primary{background-color:#00d1b2;border-color:transparent;color:#fff}/* line 127, src/assets/sass/sass/elements/button.sass */.button.is-primary:hover,.button.is-primary.is-hovered{background-color:#00c4a7;border-color:transparent;color:#fff}/* line 132, src/assets/sass/sass/elements/button.sass */.button.is-primary:focus,.button.is-primary.is-focused{border-color:transparent;color:#fff}/* line 136, src/assets/sass/sass/elements/button.sass */.button.is-primary:focus:not(:active),.button.is-primary.is-focused:not(:active){-webkit-box-shadow:0 0 0 0.125em rgba(0,209,178,0.25);box-shadow:0 0 0 0.125em rgba(0,209,178,0.25)}/* line 138, src/assets/sass/sass/elements/button.sass */.button.is-primary:active,.button.is-primary.is-active{background-color:#00b89c;border-color:transparent;color:#fff}/* line 143, src/assets/sass/sass/elements/button.sass */.button.is-primary[disabled],fieldset[disabled] .button.is-primary{background-color:#00d1b2;border-color:transparent;-webkit-box-shadow:none;box-shadow:none}/* line 148, src/assets/sass/sass/elements/button.sass */.button.is-primary.is-inverted{background-color:#fff;color:#00d1b2}/* line 151, src/assets/sass/sass/elements/button.sass */.button.is-primary.is-inverted:hover,.button.is-primary.is-inverted.is-hovered{background-color:#f2f2f2}/* line 154, src/assets/sass/sass/elements/button.sass */.button.is-primary.is-inverted[disabled],fieldset[disabled] .button.is-primary.is-inverted{background-color:#fff;border-color:transparent;-webkit-box-shadow:none;box-shadow:none;color:#00d1b2}/* line 161, src/assets/sass/sass/elements/button.sass */.button.is-primary.is-loading::after{border-color:transparent transparent #fff #fff !important}/* line 163, src/assets/sass/sass/elements/button.sass */.button.is-primary.is-outlined{background-color:transparent;border-color:#00d1b2;color:#00d1b2}/* line 167, src/assets/sass/sass/elements/button.sass */.button.is-primary.is-outlined:hover,.button.is-primary.is-outlined.is-hovered,.button.is-primary.is-outlined:focus,.button.is-primary.is-outlined.is-focused{background-color:#00d1b2;border-color:#00d1b2;color:#fff}/* line 175, src/assets/sass/sass/elements/button.sass */.button.is-primary.is-outlined.is-loading::after{border-color:transparent transparent #00d1b2 #00d1b2 !important}/* line 181, src/assets/sass/sass/elements/button.sass */.button.is-primary.is-outlined.is-loading:hover::after,.button.is-primary.is-outlined.is-loading.is-hovered::after,.button.is-primary.is-outlined.is-loading:focus::after,.button.is-primary.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #fff #fff !important}/* line 183, src/assets/sass/sass/elements/button.sass */.button.is-primary.is-outlined[disabled],fieldset[disabled] .button.is-primary.is-outlined{background-color:transparent;border-color:#00d1b2;-webkit-box-shadow:none;box-shadow:none;color:#00d1b2}/* line 189, src/assets/sass/sass/elements/button.sass */.button.is-primary.is-inverted.is-outlined{background-color:transparent;border-color:#fff;color:#fff}/* line 193, src/assets/sass/sass/elements/button.sass */.button.is-primary.is-inverted.is-outlined:hover,.button.is-primary.is-inverted.is-outlined.is-hovered,.button.is-primary.is-inverted.is-outlined:focus,.button.is-primary.is-inverted.is-outlined.is-focused{background-color:#fff;color:#00d1b2}/* line 204, src/assets/sass/sass/elements/button.sass */.button.is-primary.is-inverted.is-outlined.is-loading:hover::after,.button.is-primary.is-inverted.is-outlined.is-loading.is-hovered::after,.button.is-primary.is-inverted.is-outlined.is-loading:focus::after,.button.is-primary.is-inverted.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #00d1b2 #00d1b2 !important}/* line 206, src/assets/sass/sass/elements/button.sass */.button.is-primary.is-inverted.is-outlined[disabled],fieldset[disabled] .button.is-primary.is-inverted.is-outlined{background-color:transparent;border-color:#fff;-webkit-box-shadow:none;box-shadow:none;color:#fff}/* line 216, src/assets/sass/sass/elements/button.sass */.button.is-primary.is-light{background-color:#ebfffc;color:#00947e}/* line 219, src/assets/sass/sass/elements/button.sass */.button.is-primary.is-light:hover,.button.is-primary.is-light.is-hovered{background-color:#defffa;border-color:transparent;color:#00947e}/* line 224, src/assets/sass/sass/elements/button.sass */.button.is-primary.is-light:active,.button.is-primary.is-light.is-active{background-color:#d1fff8;border-color:transparent;color:#00947e}/* line 123, src/assets/sass/sass/elements/button.sass */.button.is-link{background-color:#3273dc;border-color:transparent;color:#fff}/* line 127, src/assets/sass/sass/elements/button.sass */.button.is-link:hover,.button.is-link.is-hovered{background-color:#276cda;border-color:transparent;color:#fff}/* line 132, src/assets/sass/sass/elements/button.sass */.button.is-link:focus,.button.is-link.is-focused{border-color:transparent;color:#fff}/* line 136, src/assets/sass/sass/elements/button.sass */.button.is-link:focus:not(:active),.button.is-link.is-focused:not(:active){-webkit-box-shadow:0 0 0 0.125em rgba(50,115,220,0.25);box-shadow:0 0 0 0.125em rgba(50,115,220,0.25)}/* line 138, src/assets/sass/sass/elements/button.sass */.button.is-link:active,.button.is-link.is-active{background-color:#2366d1;border-color:transparent;color:#fff}/* line 143, src/assets/sass/sass/elements/button.sass */.button.is-link[disabled],fieldset[disabled] .button.is-link{background-color:#3273dc;border-color:transparent;-webkit-box-shadow:none;box-shadow:none}/* line 148, src/assets/sass/sass/elements/button.sass */.button.is-link.is-inverted{background-color:#fff;color:#3273dc}/* line 151, src/assets/sass/sass/elements/button.sass */.button.is-link.is-inverted:hover,.button.is-link.is-inverted.is-hovered{background-color:#f2f2f2}/* line 154, src/assets/sass/sass/elements/button.sass */.button.is-link.is-inverted[disabled],fieldset[disabled] .button.is-link.is-inverted{background-color:#fff;border-color:transparent;-webkit-box-shadow:none;box-shadow:none;color:#3273dc}/* line 161, src/assets/sass/sass/elements/button.sass */.button.is-link.is-loading::after{border-color:transparent transparent #fff #fff !important}/* line 163, src/assets/sass/sass/elements/button.sass */.button.is-link.is-outlined{background-color:transparent;border-color:#3273dc;color:#3273dc}/* line 167, src/assets/sass/sass/elements/button.sass */.button.is-link.is-outlined:hover,.button.is-link.is-outlined.is-hovered,.button.is-link.is-outlined:focus,.button.is-link.is-outlined.is-focused{background-color:#3273dc;border-color:#3273dc;color:#fff}/* line 175, src/assets/sass/sass/elements/button.sass */.button.is-link.is-outlined.is-loading::after{border-color:transparent transparent #3273dc #3273dc !important}/* line 181, src/assets/sass/sass/elements/button.sass */.button.is-link.is-outlined.is-loading:hover::after,.button.is-link.is-outlined.is-loading.is-hovered::after,.button.is-link.is-outlined.is-loading:focus::after,.button.is-link.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #fff #fff !important}/* line 183, src/assets/sass/sass/elements/button.sass */.button.is-link.is-outlined[disabled],fieldset[disabled] .button.is-link.is-outlined{background-color:transparent;border-color:#3273dc;-webkit-box-shadow:none;box-shadow:none;color:#3273dc}/* line 189, src/assets/sass/sass/elements/button.sass */.button.is-link.is-inverted.is-outlined{background-color:transparent;border-color:#fff;color:#fff}/* line 193, src/assets/sass/sass/elements/button.sass */.button.is-link.is-inverted.is-outlined:hover,.button.is-link.is-inverted.is-outlined.is-hovered,.button.is-link.is-inverted.is-outlined:focus,.button.is-link.is-inverted.is-outlined.is-focused{background-color:#fff;color:#3273dc}/* line 204, src/assets/sass/sass/elements/button.sass */.button.is-link.is-inverted.is-outlined.is-loading:hover::after,.button.is-link.is-inverted.is-outlined.is-loading.is-hovered::after,.button.is-link.is-inverted.is-outlined.is-loading:focus::after,.button.is-link.is-inverted.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #3273dc #3273dc !important}/* line 206, src/assets/sass/sass/elements/button.sass */.button.is-link.is-inverted.is-outlined[disabled],fieldset[disabled] .button.is-link.is-inverted.is-outlined{background-color:transparent;border-color:#fff;-webkit-box-shadow:none;box-shadow:none;color:#fff}/* line 216, src/assets/sass/sass/elements/button.sass */.button.is-link.is-light{background-color:#eef3fc;color:#2160c4}/* line 219, src/assets/sass/sass/elements/button.sass */.button.is-link.is-light:hover,.button.is-link.is-light.is-hovered{background-color:#e3ecfa;border-color:transparent;color:#2160c4}/* line 224, src/assets/sass/sass/elements/button.sass */.button.is-link.is-light:active,.button.is-link.is-light.is-active{background-color:#d8e4f8;border-color:transparent;color:#2160c4}/* line 123, src/assets/sass/sass/elements/button.sass */.button.is-info{background-color:#3298dc;border-color:transparent;color:#fff}/* line 127, src/assets/sass/sass/elements/button.sass */.button.is-info:hover,.button.is-info.is-hovered{background-color:#2793da;border-color:transparent;color:#fff}/* line 132, src/assets/sass/sass/elements/button.sass */.button.is-info:focus,.button.is-info.is-focused{border-color:transparent;color:#fff}/* line 136, src/assets/sass/sass/elements/button.sass */.button.is-info:focus:not(:active),.button.is-info.is-focused:not(:active){-webkit-box-shadow:0 0 0 0.125em rgba(50,152,220,0.25);box-shadow:0 0 0 0.125em rgba(50,152,220,0.25)}/* line 138, src/assets/sass/sass/elements/button.sass */.button.is-info:active,.button.is-info.is-active{background-color:#238cd1;border-color:transparent;color:#fff}/* line 143, src/assets/sass/sass/elements/button.sass */.button.is-info[disabled],fieldset[disabled] .button.is-info{background-color:#3298dc;border-color:transparent;-webkit-box-shadow:none;box-shadow:none}/* line 148, src/assets/sass/sass/elements/button.sass */.button.is-info.is-inverted{background-color:#fff;color:#3298dc}/* line 151, src/assets/sass/sass/elements/button.sass */.button.is-info.is-inverted:hover,.button.is-info.is-inverted.is-hovered{background-color:#f2f2f2}/* line 154, src/assets/sass/sass/elements/button.sass */.button.is-info.is-inverted[disabled],fieldset[disabled] .button.is-info.is-inverted{background-color:#fff;border-color:transparent;-webkit-box-shadow:none;box-shadow:none;color:#3298dc}/* line 161, src/assets/sass/sass/elements/button.sass */.button.is-info.is-loading::after{border-color:transparent transparent #fff #fff !important}/* line 163, src/assets/sass/sass/elements/button.sass */.button.is-info.is-outlined{background-color:transparent;border-color:#3298dc;color:#3298dc}/* line 167, src/assets/sass/sass/elements/button.sass */.button.is-info.is-outlined:hover,.button.is-info.is-outlined.is-hovered,.button.is-info.is-outlined:focus,.button.is-info.is-outlined.is-focused{background-color:#3298dc;border-color:#3298dc;color:#fff}/* line 175, src/assets/sass/sass/elements/button.sass */.button.is-info.is-outlined.is-loading::after{border-color:transparent transparent #3298dc #3298dc !important}/* line 181, src/assets/sass/sass/elements/button.sass */.button.is-info.is-outlined.is-loading:hover::after,.button.is-info.is-outlined.is-loading.is-hovered::after,.button.is-info.is-outlined.is-loading:focus::after,.button.is-info.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #fff #fff !important}/* line 183, src/assets/sass/sass/elements/button.sass */.button.is-info.is-outlined[disabled],fieldset[disabled] .button.is-info.is-outlined{background-color:transparent;border-color:#3298dc;-webkit-box-shadow:none;box-shadow:none;color:#3298dc}/* line 189, src/assets/sass/sass/elements/button.sass */.button.is-info.is-inverted.is-outlined{background-color:transparent;border-color:#fff;color:#fff}/* line 193, src/assets/sass/sass/elements/button.sass */.button.is-info.is-inverted.is-outlined:hover,.button.is-info.is-inverted.is-outlined.is-hovered,.button.is-info.is-inverted.is-outlined:focus,.button.is-info.is-inverted.is-outlined.is-focused{background-color:#fff;color:#3298dc}/* line 204, src/assets/sass/sass/elements/button.sass */.button.is-info.is-inverted.is-outlined.is-loading:hover::after,.button.is-info.is-inverted.is-outlined.is-loading.is-hovered::after,.button.is-info.is-inverted.is-outlined.is-loading:focus::after,.button.is-info.is-inverted.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #3298dc #3298dc !important}/* line 206, src/assets/sass/sass/elements/button.sass */.button.is-info.is-inverted.is-outlined[disabled],fieldset[disabled] .button.is-info.is-inverted.is-outlined{background-color:transparent;border-color:#fff;-webkit-box-shadow:none;box-shadow:none;color:#fff}/* line 216, src/assets/sass/sass/elements/button.sass */.button.is-info.is-light{background-color:#eef6fc;color:#1d72aa}/* line 219, src/assets/sass/sass/elements/button.sass */.button.is-info.is-light:hover,.button.is-info.is-light.is-hovered{background-color:#e3f1fa;border-color:transparent;color:#1d72aa}/* line 224, src/assets/sass/sass/elements/button.sass */.button.is-info.is-light:active,.button.is-info.is-light.is-active{background-color:#d8ebf8;border-color:transparent;color:#1d72aa}/* line 123, src/assets/sass/sass/elements/button.sass */.button.is-success{background-color:#48c774;border-color:transparent;color:#fff}/* line 127, src/assets/sass/sass/elements/button.sass */.button.is-success:hover,.button.is-success.is-hovered{background-color:#3ec46d;border-color:transparent;color:#fff}/* line 132, src/assets/sass/sass/elements/button.sass */.button.is-success:focus,.button.is-success.is-focused{border-color:transparent;color:#fff}/* line 136, src/assets/sass/sass/elements/button.sass */.button.is-success:focus:not(:active),.button.is-success.is-focused:not(:active){-webkit-box-shadow:0 0 0 0.125em rgba(72,199,116,0.25);box-shadow:0 0 0 0.125em rgba(72,199,116,0.25)}/* line 138, src/assets/sass/sass/elements/button.sass */.button.is-success:active,.button.is-success.is-active{background-color:#3abb67;border-color:transparent;color:#fff}/* line 143, src/assets/sass/sass/elements/button.sass */.button.is-success[disabled],fieldset[disabled] .button.is-success{background-color:#48c774;border-color:transparent;-webkit-box-shadow:none;box-shadow:none}/* line 148, src/assets/sass/sass/elements/button.sass */.button.is-success.is-inverted{background-color:#fff;color:#48c774}/* line 151, src/assets/sass/sass/elements/button.sass */.button.is-success.is-inverted:hover,.button.is-success.is-inverted.is-hovered{background-color:#f2f2f2}/* line 154, src/assets/sass/sass/elements/button.sass */.button.is-success.is-inverted[disabled],fieldset[disabled] .button.is-success.is-inverted{background-color:#fff;border-color:transparent;-webkit-box-shadow:none;box-shadow:none;color:#48c774}/* line 161, src/assets/sass/sass/elements/button.sass */.button.is-success.is-loading::after{border-color:transparent transparent #fff #fff !important}/* line 163, src/assets/sass/sass/elements/button.sass */.button.is-success.is-outlined{background-color:transparent;border-color:#48c774;color:#48c774}/* line 167, src/assets/sass/sass/elements/button.sass */.button.is-success.is-outlined:hover,.button.is-success.is-outlined.is-hovered,.button.is-success.is-outlined:focus,.button.is-success.is-outlined.is-focused{background-color:#48c774;border-color:#48c774;color:#fff}/* line 175, src/assets/sass/sass/elements/button.sass */.button.is-success.is-outlined.is-loading::after{border-color:transparent transparent #48c774 #48c774 !important}/* line 181, src/assets/sass/sass/elements/button.sass */.button.is-success.is-outlined.is-loading:hover::after,.button.is-success.is-outlined.is-loading.is-hovered::after,.button.is-success.is-outlined.is-loading:focus::after,.button.is-success.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #fff #fff !important}/* line 183, src/assets/sass/sass/elements/button.sass */.button.is-success.is-outlined[disabled],fieldset[disabled] .button.is-success.is-outlined{background-color:transparent;border-color:#48c774;-webkit-box-shadow:none;box-shadow:none;color:#48c774}/* line 189, src/assets/sass/sass/elements/button.sass */.button.is-success.is-inverted.is-outlined{background-color:transparent;border-color:#fff;color:#fff}/* line 193, src/assets/sass/sass/elements/button.sass */.button.is-success.is-inverted.is-outlined:hover,.button.is-success.is-inverted.is-outlined.is-hovered,.button.is-success.is-inverted.is-outlined:focus,.button.is-success.is-inverted.is-outlined.is-focused{background-color:#fff;color:#48c774}/* line 204, src/assets/sass/sass/elements/button.sass */.button.is-success.is-inverted.is-outlined.is-loading:hover::after,.button.is-success.is-inverted.is-outlined.is-loading.is-hovered::after,.button.is-success.is-inverted.is-outlined.is-loading:focus::after,.button.is-success.is-inverted.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #48c774 #48c774 !important}/* line 206, src/assets/sass/sass/elements/button.sass */.button.is-success.is-inverted.is-outlined[disabled],fieldset[disabled] .button.is-success.is-inverted.is-outlined{background-color:transparent;border-color:#fff;-webkit-box-shadow:none;box-shadow:none;color:#fff}/* line 216, src/assets/sass/sass/elements/button.sass */.button.is-success.is-light{background-color:#effaf3;color:#257942}/* line 219, src/assets/sass/sass/elements/button.sass */.button.is-success.is-light:hover,.button.is-success.is-light.is-hovered{background-color:#e6f7ec;border-color:transparent;color:#257942}/* line 224, src/assets/sass/sass/elements/button.sass */.button.is-success.is-light:active,.button.is-success.is-light.is-active{background-color:#dcf4e4;border-color:transparent;color:#257942}/* line 123, src/assets/sass/sass/elements/button.sass */.button.is-warning{background-color:#ffdd57;border-color:transparent;color:rgba(0,0,0,0.7)}/* line 127, src/assets/sass/sass/elements/button.sass */.button.is-warning:hover,.button.is-warning.is-hovered{background-color:#ffdb4a;border-color:transparent;color:rgba(0,0,0,0.7)}/* line 132, src/assets/sass/sass/elements/button.sass */.button.is-warning:focus,.button.is-warning.is-focused{border-color:transparent;color:rgba(0,0,0,0.7)}/* line 136, src/assets/sass/sass/elements/button.sass */.button.is-warning:focus:not(:active),.button.is-warning.is-focused:not(:active){-webkit-box-shadow:0 0 0 0.125em rgba(255,221,87,0.25);box-shadow:0 0 0 0.125em rgba(255,221,87,0.25)}/* line 138, src/assets/sass/sass/elements/button.sass */.button.is-warning:active,.button.is-warning.is-active{background-color:#ffd83d;border-color:transparent;color:rgba(0,0,0,0.7)}/* line 143, src/assets/sass/sass/elements/button.sass */.button.is-warning[disabled],fieldset[disabled] .button.is-warning{background-color:#ffdd57;border-color:transparent;-webkit-box-shadow:none;box-shadow:none}/* line 148, src/assets/sass/sass/elements/button.sass */.button.is-warning.is-inverted{background-color:rgba(0,0,0,0.7);color:#ffdd57}/* line 151, src/assets/sass/sass/elements/button.sass */.button.is-warning.is-inverted:hover,.button.is-warning.is-inverted.is-hovered{background-color:rgba(0,0,0,0.7)}/* line 154, src/assets/sass/sass/elements/button.sass */.button.is-warning.is-inverted[disabled],fieldset[disabled] .button.is-warning.is-inverted{background-color:rgba(0,0,0,0.7);border-color:transparent;-webkit-box-shadow:none;box-shadow:none;color:#ffdd57}/* line 161, src/assets/sass/sass/elements/button.sass */.button.is-warning.is-loading::after{border-color:transparent transparent rgba(0,0,0,0.7) rgba(0,0,0,0.7) !important}/* line 163, src/assets/sass/sass/elements/button.sass */.button.is-warning.is-outlined{background-color:transparent;border-color:#ffdd57;color:#ffdd57}/* line 167, src/assets/sass/sass/elements/button.sass */.button.is-warning.is-outlined:hover,.button.is-warning.is-outlined.is-hovered,.button.is-warning.is-outlined:focus,.button.is-warning.is-outlined.is-focused{background-color:#ffdd57;border-color:#ffdd57;color:rgba(0,0,0,0.7)}/* line 175, src/assets/sass/sass/elements/button.sass */.button.is-warning.is-outlined.is-loading::after{border-color:transparent transparent #ffdd57 #ffdd57 !important}/* line 181, src/assets/sass/sass/elements/button.sass */.button.is-warning.is-outlined.is-loading:hover::after,.button.is-warning.is-outlined.is-loading.is-hovered::after,.button.is-warning.is-outlined.is-loading:focus::after,.button.is-warning.is-outlined.is-loading.is-focused::after{border-color:transparent transparent rgba(0,0,0,0.7) rgba(0,0,0,0.7) !important}/* line 183, src/assets/sass/sass/elements/button.sass */.button.is-warning.is-outlined[disabled],fieldset[disabled] .button.is-warning.is-outlined{background-color:transparent;border-color:#ffdd57;-webkit-box-shadow:none;box-shadow:none;color:#ffdd57}/* line 189, src/assets/sass/sass/elements/button.sass */.button.is-warning.is-inverted.is-outlined{background-color:transparent;border-color:rgba(0,0,0,0.7);color:rgba(0,0,0,0.7)}/* line 193, src/assets/sass/sass/elements/button.sass */.button.is-warning.is-inverted.is-outlined:hover,.button.is-warning.is-inverted.is-outlined.is-hovered,.button.is-warning.is-inverted.is-outlined:focus,.button.is-warning.is-inverted.is-outlined.is-focused{background-color:rgba(0,0,0,0.7);color:#ffdd57}/* line 204, src/assets/sass/sass/elements/button.sass */.button.is-warning.is-inverted.is-outlined.is-loading:hover::after,.button.is-warning.is-inverted.is-outlined.is-loading.is-hovered::after,.button.is-warning.is-inverted.is-outlined.is-loading:focus::after,.button.is-warning.is-inverted.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #ffdd57 #ffdd57 !important}/* line 206, src/assets/sass/sass/elements/button.sass */.button.is-warning.is-inverted.is-outlined[disabled],fieldset[disabled] .button.is-warning.is-inverted.is-outlined{background-color:transparent;border-color:rgba(0,0,0,0.7);-webkit-box-shadow:none;box-shadow:none;color:rgba(0,0,0,0.7)}/* line 216, src/assets/sass/sass/elements/button.sass */.button.is-warning.is-light{background-color:#fffbeb;color:#947600}/* line 219, src/assets/sass/sass/elements/button.sass */.button.is-warning.is-light:hover,.button.is-warning.is-light.is-hovered{background-color:#fff8de;border-color:transparent;color:#947600}/* line 224, src/assets/sass/sass/elements/button.sass */.button.is-warning.is-light:active,.button.is-warning.is-light.is-active{background-color:#fff6d1;border-color:transparent;color:#947600}/* line 123, src/assets/sass/sass/elements/button.sass */.button.is-danger{background-color:#f14668;border-color:transparent;color:#fff}/* line 127, src/assets/sass/sass/elements/button.sass */.button.is-danger:hover,.button.is-danger.is-hovered{background-color:#f03a5f;border-color:transparent;color:#fff}/* line 132, src/assets/sass/sass/elements/button.sass */.button.is-danger:focus,.button.is-danger.is-focused{border-color:transparent;color:#fff}/* line 136, src/assets/sass/sass/elements/button.sass */.button.is-danger:focus:not(:active),.button.is-danger.is-focused:not(:active){-webkit-box-shadow:0 0 0 0.125em rgba(241,70,104,0.25);box-shadow:0 0 0 0.125em rgba(241,70,104,0.25)}/* line 138, src/assets/sass/sass/elements/button.sass */.button.is-danger:active,.button.is-danger.is-active{background-color:#ef2e55;border-color:transparent;color:#fff}/* line 143, src/assets/sass/sass/elements/button.sass */.button.is-danger[disabled],fieldset[disabled] .button.is-danger{background-color:#f14668;border-color:transparent;-webkit-box-shadow:none;box-shadow:none}/* line 148, src/assets/sass/sass/elements/button.sass */.button.is-danger.is-inverted{background-color:#fff;color:#f14668}/* line 151, src/assets/sass/sass/elements/button.sass */.button.is-danger.is-inverted:hover,.button.is-danger.is-inverted.is-hovered{background-color:#f2f2f2}/* line 154, src/assets/sass/sass/elements/button.sass */.button.is-danger.is-inverted[disabled],fieldset[disabled] .button.is-danger.is-inverted{background-color:#fff;border-color:transparent;-webkit-box-shadow:none;box-shadow:none;color:#f14668}/* line 161, src/assets/sass/sass/elements/button.sass */.button.is-danger.is-loading::after{border-color:transparent transparent #fff #fff !important}/* line 163, src/assets/sass/sass/elements/button.sass */.button.is-danger.is-outlined{background-color:transparent;border-color:#f14668;color:#f14668}/* line 167, src/assets/sass/sass/elements/button.sass */.button.is-danger.is-outlined:hover,.button.is-danger.is-outlined.is-hovered,.button.is-danger.is-outlined:focus,.button.is-danger.is-outlined.is-focused{background-color:#f14668;border-color:#f14668;color:#fff}/* line 175, src/assets/sass/sass/elements/button.sass */.button.is-danger.is-outlined.is-loading::after{border-color:transparent transparent #f14668 #f14668 !important}/* line 181, src/assets/sass/sass/elements/button.sass */.button.is-danger.is-outlined.is-loading:hover::after,.button.is-danger.is-outlined.is-loading.is-hovered::after,.button.is-danger.is-outlined.is-loading:focus::after,.button.is-danger.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #fff #fff !important}/* line 183, src/assets/sass/sass/elements/button.sass */.button.is-danger.is-outlined[disabled],fieldset[disabled] .button.is-danger.is-outlined{background-color:transparent;border-color:#f14668;-webkit-box-shadow:none;box-shadow:none;color:#f14668}/* line 189, src/assets/sass/sass/elements/button.sass */.button.is-danger.is-inverted.is-outlined{background-color:transparent;border-color:#fff;color:#fff}/* line 193, src/assets/sass/sass/elements/button.sass */.button.is-danger.is-inverted.is-outlined:hover,.button.is-danger.is-inverted.is-outlined.is-hovered,.button.is-danger.is-inverted.is-outlined:focus,.button.is-danger.is-inverted.is-outlined.is-focused{background-color:#fff;color:#f14668}/* line 204, src/assets/sass/sass/elements/button.sass */.button.is-danger.is-inverted.is-outlined.is-loading:hover::after,.button.is-danger.is-inverted.is-outlined.is-loading.is-hovered::after,.button.is-danger.is-inverted.is-outlined.is-loading:focus::after,.button.is-danger.is-inverted.is-outlined.is-loading.is-focused::after{border-color:transparent transparent #f14668 #f14668 !important}/* line 206, src/assets/sass/sass/elements/button.sass */.button.is-danger.is-inverted.is-outlined[disabled],fieldset[disabled] .button.is-danger.is-inverted.is-outlined{background-color:transparent;border-color:#fff;-webkit-box-shadow:none;box-shadow:none;color:#fff}/* line 216, src/assets/sass/sass/elements/button.sass */.button.is-danger.is-light{background-color:#feecf0;color:#cc0f35}/* line 219, src/assets/sass/sass/elements/button.sass */.button.is-danger.is-light:hover,.button.is-danger.is-light.is-hovered{background-color:#fde0e6;border-color:transparent;color:#cc0f35}/* line 224, src/assets/sass/sass/elements/button.sass */.button.is-danger.is-light:active,.button.is-danger.is-light.is-active{background-color:#fcd4dc;border-color:transparent;color:#cc0f35}/* line 230, src/assets/sass/sass/elements/button.sass */.button.is-small{border-radius:2px;font-size:.75rem}/* line 232, src/assets/sass/sass/elements/button.sass */.button.is-normal{font-size:1rem}/* line 234, src/assets/sass/sass/elements/button.sass */.button.is-medium{font-size:1.25rem}/* line 236, src/assets/sass/sass/elements/button.sass */.button.is-large{font-size:1.5rem}/* line 239, src/assets/sass/sass/elements/button.sass */.button[disabled],fieldset[disabled] .button{background-color:#fff;border-color:#dbdbdb;-webkit-box-shadow:none;box-shadow:none;opacity:.5}/* line 245, src/assets/sass/sass/elements/button.sass */.button.is-fullwidth{display:-webkit-box;display:-ms-flexbox;display:flex;width:100%}/* line 248, src/assets/sass/sass/elements/button.sass */.button.is-loading{color:transparent !important;pointer-events:none}/* line 251, src/assets/sass/sass/elements/button.sass */.button.is-loading::after{position:absolute;left:calc(50% - (1em / 2));top:calc(50% - (1em / 2));position:absolute !important}/* line 255, src/assets/sass/sass/elements/button.sass */.button.is-static{background-color:#f5f5f5;border-color:#dbdbdb;color:#7a7a7a;-webkit-box-shadow:none;box-shadow:none;pointer-events:none}/* line 261, src/assets/sass/sass/elements/button.sass */.button.is-rounded{border-radius:290486px;padding-left:calc(1em + 0.25em);padding-right:calc(1em + 0.25em)}/* line 266, src/assets/sass/sass/elements/button.sass */.buttons{-webkit-box-align:center;-ms-flex-align:center;align-items:center;display:-webkit-box;display:-ms-flexbox;display:flex;-ms-flex-wrap:wrap;flex-wrap:wrap;-webkit-box-pack:start;-ms-flex-pack:start;justify-content:flex-start}/* line 271, src/assets/sass/sass/elements/button.sass */.buttons .button{margin-bottom:0.5rem}/* line 273, src/assets/sass/sass/elements/button.sass */.buttons .button:not(:last-child):not(.is-fullwidth){margin-right:.5rem}/* line 275, src/assets/sass/sass/elements/button.sass */.buttons:last-child{margin-bottom:-0.5rem}/* line 277, src/assets/sass/sass/elements/button.sass */.buttons:not(:last-child){margin-bottom:1rem}/* line 281, src/assets/sass/sass/elements/button.sass */.buttons.are-small .button:not(.is-normal):not(.is-medium):not(.is-large){border-radius:2px;font-size:.75rem}/* line 284, src/assets/sass/sass/elements/button.sass */.buttons.are-medium .button:not(.is-small):not(.is-normal):not(.is-large){font-size:1.25rem}/* line 287, src/assets/sass/sass/elements/button.sass */.buttons.are-large .button:not(.is-small):not(.is-normal):not(.is-medium){font-size:1.5rem}/* line 291, src/assets/sass/sass/elements/button.sass */.buttons.has-addons .button:not(:first-child){border-bottom-left-radius:0;border-top-left-radius:0}/* line 294, src/assets/sass/sass/elements/button.sass */.buttons.has-addons .button:not(:last-child){border-bottom-right-radius:0;border-top-right-radius:0;margin-right:-1px}/* line 298, src/assets/sass/sass/elements/button.sass */.buttons.has-addons .button:last-child{margin-right:0}/* line 300, src/assets/sass/sass/elements/button.sass */.buttons.has-addons .button:hover,.buttons.has-addons .button.is-hovered{z-index:2}/* line 303, src/assets/sass/sass/elements/button.sass */.buttons.has-addons .button:focus,.buttons.has-addons .button.is-focused,.buttons.has-addons .button:active,.buttons.has-addons .button.is-active,.buttons.has-addons .button.is-selected{z-index:3}/* line 309, src/assets/sass/sass/elements/button.sass */.buttons.has-addons .button:focus:hover,.buttons.has-addons .button.is-focused:hover,.buttons.has-addons .button:active:hover,.buttons.has-addons .button.is-active:hover,.buttons.has-addons .button.is-selected:hover{z-index:4}/* line 311, src/assets/sass/sass/elements/button.sass */.buttons.has-addons .button.is-expanded{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:1;flex-shrink:1}/* line 314, src/assets/sass/sass/elements/button.sass */.buttons.is-centered{-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center}/* line 317, src/assets/sass/sass/elements/button.sass */.buttons.is-centered:not(.has-addons) .button:not(.is-fullwidth){margin-left:0.25rem;margin-right:0.25rem}/* line 320, src/assets/sass/sass/elements/button.sass */.buttons.is-right{-webkit-box-pack:end;-ms-flex-pack:end;justify-content:flex-end}/* line 323, src/assets/sass/sass/elements/button.sass */.buttons.is-right:not(.has-addons) .button:not(.is-fullwidth){margin-left:0.25rem;margin-right:0.25rem}/* line 4, src/assets/sass/sass/elements/container.sass */.container{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;margin:0 auto;position:relative;width:auto}/* line 9, src/assets/sass/sass/elements/container.sass */.container.is-fluid{max-width:none !important;padding-left:32px;padding-right:32px;width:100%}@media screen and (min-width: 1024px){/* line 4, src/assets/sass/sass/elements/container.sass */.container{max-width:960px}}@media screen and (max-width: 1215px){/* line 17, src/assets/sass/sass/elements/container.sass */.container.is-widescreen:not(.is-max-desktop){max-width:1152px}}@media screen and (max-width: 1407px){/* line 20, src/assets/sass/sass/elements/container.sass */.container.is-fullhd:not(.is-max-desktop):not(.is-max-widescreen){max-width:1344px}}@media screen and (min-width: 1216px){/* line 23, src/assets/sass/sass/elements/container.sass */.container:not(.is-max-desktop){max-width:1152px}}@media screen and (min-width: 1408px){/* line 26, src/assets/sass/sass/elements/container.sass */.container:not(.is-max-desktop):not(.is-max-widescreen){max-width:1344px}}/* line 23, src/assets/sass/sass/elements/content.sass */.content li+li{margin-top:0.25em}/* line 33, src/assets/sass/sass/elements/content.sass */.content p:not(:last-child),.content dl:not(:last-child),.content ol:not(:last-child),.content ul:not(:last-child),.content blockquote:not(:last-child),.content pre:not(:last-child),.content table:not(:last-child){margin-bottom:1em}/* line 35, src/assets/sass/sass/elements/content.sass */.content h1,.content h2,.content h3,.content h4,.content h5,.content h6{color:#363636;font-weight:600;line-height:1.125}/* line 44, src/assets/sass/sass/elements/content.sass */.content h1{font-size:2em;margin-bottom:0.5em}/* line 47, src/assets/sass/sass/elements/content.sass */.content h1:not(:first-child){margin-top:1em}/* line 49, src/assets/sass/sass/elements/content.sass */.content h2{font-size:1.75em;margin-bottom:0.5714em}/* line 52, src/assets/sass/sass/elements/content.sass */.content h2:not(:first-child){margin-top:1.1428em}/* line 54, src/assets/sass/sass/elements/content.sass */.content h3{font-size:1.5em;margin-bottom:0.6666em}/* line 57, src/assets/sass/sass/elements/content.sass */.content h3:not(:first-child){margin-top:1.3333em}/* line 59, src/assets/sass/sass/elements/content.sass */.content h4{font-size:1.25em;margin-bottom:0.8em}/* line 62, src/assets/sass/sass/elements/content.sass */.content h5{font-size:1.125em;margin-bottom:0.8888em}/* line 65, src/assets/sass/sass/elements/content.sass */.content h6{font-size:1em;margin-bottom:1em}/* line 68, src/assets/sass/sass/elements/content.sass */.content blockquote{background-color:#f5f5f5;border-left:5px solid #dbdbdb;padding:1.25em 1.5em}/* line 72, src/assets/sass/sass/elements/content.sass */.content ol{list-style-position:outside;margin-left:2em;margin-top:1em}/* line 76, src/assets/sass/sass/elements/content.sass */.content ol:not([type]){list-style-type:decimal}/* line 78, src/assets/sass/sass/elements/content.sass */.content ol:not([type]).is-lower-alpha{list-style-type:lower-alpha}/* line 80, src/assets/sass/sass/elements/content.sass */.content ol:not([type]).is-lower-roman{list-style-type:lower-roman}/* line 82, src/assets/sass/sass/elements/content.sass */.content ol:not([type]).is-upper-alpha{list-style-type:upper-alpha}/* line 84, src/assets/sass/sass/elements/content.sass */.content ol:not([type]).is-upper-roman{list-style-type:upper-roman}/* line 86, src/assets/sass/sass/elements/content.sass */.content ul{list-style:disc outside;margin-left:2em;margin-top:1em}/* line 90, src/assets/sass/sass/elements/content.sass */.content ul ul{list-style-type:circle;margin-top:0.5em}/* line 93, src/assets/sass/sass/elements/content.sass */.content ul ul ul{list-style-type:square}/* line 95, src/assets/sass/sass/elements/content.sass */.content dd{margin-left:2em}/* line 97, src/assets/sass/sass/elements/content.sass */.content figure{margin-left:2em;margin-right:2em;text-align:center}/* line 101, src/assets/sass/sass/elements/content.sass */.content figure:not(:first-child){margin-top:2em}/* line 103, src/assets/sass/sass/elements/content.sass */.content figure:not(:last-child){margin-bottom:2em}/* line 105, src/assets/sass/sass/elements/content.sass */.content figure img{display:inline-block}/* line 107, src/assets/sass/sass/elements/content.sass */.content figure figcaption{font-style:italic}/* line 109, src/assets/sass/sass/elements/content.sass */.content pre{-webkit-overflow-scrolling:touch;overflow-x:auto;padding:1.25em 1.5em;white-space:pre;word-wrap:normal}/* line 115, src/assets/sass/sass/elements/content.sass */.content sup,.content sub{font-size:75%}/* line 118, src/assets/sass/sass/elements/content.sass */.content table{width:100%}/* line 120, src/assets/sass/sass/elements/content.sass */.content table td,.content table th{border:1px solid #dbdbdb;border-width:0 0 1px;padding:0.5em 0.75em;vertical-align:top}/* line 126, src/assets/sass/sass/elements/content.sass */.content table th{color:#363636}/* line 128, src/assets/sass/sass/elements/content.sass */.content table th:not([align]){text-align:inherit}/* line 131, src/assets/sass/sass/elements/content.sass */.content table thead td,.content table thead th{border-width:0 0 2px;color:#363636}/* line 136, src/assets/sass/sass/elements/content.sass */.content table tfoot td,.content table tfoot th{border-width:2px 0 0;color:#363636}/* line 143, src/assets/sass/sass/elements/content.sass */.content table tbody tr:last-child td,.content table tbody tr:last-child th{border-bottom-width:0}/* line 147, src/assets/sass/sass/elements/content.sass */.content .tabs li+li{margin-top:0}/* line 150, src/assets/sass/sass/elements/content.sass */.content.is-small{font-size:.75rem}/* line 152, src/assets/sass/sass/elements/content.sass */.content.is-medium{font-size:1.25rem}/* line 154, src/assets/sass/sass/elements/content.sass */.content.is-large{font-size:1.5rem}/* line 6, src/assets/sass/sass/elements/icon.sass */.icon{-webkit-box-align:center;-ms-flex-align:center;align-items:center;display:-webkit-inline-box;display:-ms-inline-flexbox;display:inline-flex;-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center;height:1.5rem;width:1.5rem}/* line 13, src/assets/sass/sass/elements/icon.sass */.icon.is-small{height:1rem;width:1rem}/* line 16, src/assets/sass/sass/elements/icon.sass */.icon.is-medium{height:2rem;width:2rem}/* line 19, src/assets/sass/sass/elements/icon.sass */.icon.is-large{height:3rem;width:3rem}/* line 3, src/assets/sass/sass/elements/image.sass */.image{display:block;position:relative}/* line 6, src/assets/sass/sass/elements/image.sass */.image img{display:block;height:auto;width:100%}/* line 10, src/assets/sass/sass/elements/image.sass */.image img.is-rounded{border-radius:290486px}/* line 12, src/assets/sass/sass/elements/image.sass */.image.is-fullwidth{width:100%}/* line 31, src/assets/sass/sass/elements/image.sass */.image.is-square img,.image.is-square .has-ratio,.image.is-1by1 img,.image.is-1by1 .has-ratio,.image.is-5by4 img,.image.is-5by4 .has-ratio,.image.is-4by3 img,.image.is-4by3 .has-ratio,.image.is-3by2 img,.image.is-3by2 .has-ratio,.image.is-5by3 img,.image.is-5by3 .has-ratio,.image.is-16by9 img,.image.is-16by9 .has-ratio,.image.is-2by1 img,.image.is-2by1 .has-ratio,.image.is-3by1 img,.image.is-3by1 .has-ratio,.image.is-4by5 img,.image.is-4by5 .has-ratio,.image.is-3by4 img,.image.is-3by4 .has-ratio,.image.is-2by3 img,.image.is-2by3 .has-ratio,.image.is-3by5 img,.image.is-3by5 .has-ratio,.image.is-9by16 img,.image.is-9by16 .has-ratio,.image.is-1by2 img,.image.is-1by2 .has-ratio,.image.is-1by3 img,.image.is-1by3 .has-ratio{height:100%;width:100%}/* line 36, src/assets/sass/sass/elements/image.sass */.image.is-square,.image.is-1by1{padding-top:100%}/* line 39, src/assets/sass/sass/elements/image.sass */.image.is-5by4{padding-top:80%}/* line 41, src/assets/sass/sass/elements/image.sass */.image.is-4by3{padding-top:75%}/* line 43, src/assets/sass/sass/elements/image.sass */.image.is-3by2{padding-top:66.6666%}/* line 45, src/assets/sass/sass/elements/image.sass */.image.is-5by3{padding-top:60%}/* line 47, src/assets/sass/sass/elements/image.sass */.image.is-16by9{padding-top:56.25%}/* line 49, src/assets/sass/sass/elements/image.sass */.image.is-2by1{padding-top:50%}/* line 51, src/assets/sass/sass/elements/image.sass */.image.is-3by1{padding-top:33.3333%}/* line 53, src/assets/sass/sass/elements/image.sass */.image.is-4by5{padding-top:125%}/* line 55, src/assets/sass/sass/elements/image.sass */.image.is-3by4{padding-top:133.3333%}/* line 57, src/assets/sass/sass/elements/image.sass */.image.is-2by3{padding-top:150%}/* line 59, src/assets/sass/sass/elements/image.sass */.image.is-3by5{padding-top:166.6666%}/* line 61, src/assets/sass/sass/elements/image.sass */.image.is-9by16{padding-top:177.7777%}/* line 63, src/assets/sass/sass/elements/image.sass */.image.is-1by2{padding-top:200%}/* line 65, src/assets/sass/sass/elements/image.sass */.image.is-1by3{padding-top:300%}/* line 69, src/assets/sass/sass/elements/image.sass */.image.is-16x16{height:16px;width:16px}/* line 69, src/assets/sass/sass/elements/image.sass */.image.is-24x24{height:24px;width:24px}/* line 69, src/assets/sass/sass/elements/image.sass */.image.is-32x32{height:32px;width:32px}/* line 69, src/assets/sass/sass/elements/image.sass */.image.is-48x48{height:48px;width:48px}/* line 69, src/assets/sass/sass/elements/image.sass */.image.is-64x64{height:64px;width:64px}/* line 69, src/assets/sass/sass/elements/image.sass */.image.is-96x96{height:96px;width:96px}/* line 69, src/assets/sass/sass/elements/image.sass */.image.is-128x128{height:128px;width:128px}/* line 10, src/assets/sass/sass/elements/notification.sass */.notification{background-color:#f5f5f5;border-radius:4px;position:relative;padding:1.25rem 2.5rem 1.25rem 1.5rem}/* line 19, src/assets/sass/sass/elements/notification.sass */.notification a:not(.button):not(.dropdown-item){color:currentColor;text-decoration:underline}/* line 22, src/assets/sass/sass/elements/notification.sass */.notification strong{color:currentColor}/* line 24, src/assets/sass/sass/elements/notification.sass */.notification code,.notification pre{background:#fff}/* line 27, src/assets/sass/sass/elements/notification.sass */.notification pre code{background:transparent}/* line 29, src/assets/sass/sass/elements/notification.sass */.notification>.delete{right:.5rem;position:absolute;top:0.5rem}/* line 33, src/assets/sass/sass/elements/notification.sass */.notification .title,.notification .subtitle,.notification .content{color:currentColor}/* line 41, src/assets/sass/sass/elements/notification.sass */.notification.is-white{background-color:#fff;color:#0a0a0a}/* line 41, src/assets/sass/sass/elements/notification.sass */.notification.is-black{background-color:#0a0a0a;color:#fff}/* line 41, src/assets/sass/sass/elements/notification.sass */.notification.is-light{background-color:#f5f5f5;color:rgba(0,0,0,0.7)}/* line 41, src/assets/sass/sass/elements/notification.sass */.notification.is-dark{background-color:#363636;color:#fff}/* line 41, src/assets/sass/sass/elements/notification.sass */.notification.is-primary{background-color:#00d1b2;color:#fff}/* line 48, src/assets/sass/sass/elements/notification.sass */.notification.is-primary.is-light{background-color:#ebfffc;color:#00947e}/* line 41, src/assets/sass/sass/elements/notification.sass */.notification.is-link{background-color:#3273dc;color:#fff}/* line 48, src/assets/sass/sass/elements/notification.sass */.notification.is-link.is-light{background-color:#eef3fc;color:#2160c4}/* line 41, src/assets/sass/sass/elements/notification.sass */.notification.is-info{background-color:#3298dc;color:#fff}/* line 48, src/assets/sass/sass/elements/notification.sass */.notification.is-info.is-light{background-color:#eef6fc;color:#1d72aa}/* line 41, src/assets/sass/sass/elements/notification.sass */.notification.is-success{background-color:#48c774;color:#fff}/* line 48, src/assets/sass/sass/elements/notification.sass */.notification.is-success.is-light{background-color:#effaf3;color:#257942}/* line 41, src/assets/sass/sass/elements/notification.sass */.notification.is-warning{background-color:#ffdd57;color:rgba(0,0,0,0.7)}/* line 48, src/assets/sass/sass/elements/notification.sass */.notification.is-warning.is-light{background-color:#fffbeb;color:#947600}/* line 41, src/assets/sass/sass/elements/notification.sass */.notification.is-danger{background-color:#f14668;color:#fff}/* line 48, src/assets/sass/sass/elements/notification.sass */.notification.is-danger.is-light{background-color:#feecf0;color:#cc0f35}/* line 9, src/assets/sass/sass/elements/progress.sass */.progress{-moz-appearance:none;-webkit-appearance:none;border:none;border-radius:290486px;display:block;height:1rem;overflow:hidden;padding:0;width:100%}/* line 20, src/assets/sass/sass/elements/progress.sass */.progress::-webkit-progress-bar{background-color:#ededed}/* line 22, src/assets/sass/sass/elements/progress.sass */.progress::-webkit-progress-value{background-color:#4a4a4a}/* line 24, src/assets/sass/sass/elements/progress.sass */.progress::-moz-progress-bar{background-color:#4a4a4a}/* line 26, src/assets/sass/sass/elements/progress.sass */.progress::-ms-fill{background-color:#4a4a4a;border:none}/* line 33, src/assets/sass/sass/elements/progress.sass */.progress.is-white::-webkit-progress-value{background-color:#fff}/* line 35, src/assets/sass/sass/elements/progress.sass */.progress.is-white::-moz-progress-bar{background-color:#fff}/* line 37, src/assets/sass/sass/elements/progress.sass */.progress.is-white::-ms-fill{background-color:#fff}/* line 39, src/assets/sass/sass/elements/progress.sass */.progress.is-white:indeterminate{background-image:-webkit-gradient(linear, left top, right top, color-stop(30%, #fff), color-stop(30%, #ededed));background-image:linear-gradient(to right, #fff 30%, #ededed 30%)}/* line 33, src/assets/sass/sass/elements/progress.sass */.progress.is-black::-webkit-progress-value{background-color:#0a0a0a}/* line 35, src/assets/sass/sass/elements/progress.sass */.progress.is-black::-moz-progress-bar{background-color:#0a0a0a}/* line 37, src/assets/sass/sass/elements/progress.sass */.progress.is-black::-ms-fill{background-color:#0a0a0a}/* line 39, src/assets/sass/sass/elements/progress.sass */.progress.is-black:indeterminate{background-image:-webkit-gradient(linear, left top, right top, color-stop(30%, #0a0a0a), color-stop(30%, #ededed));background-image:linear-gradient(to right, #0a0a0a 30%, #ededed 30%)}/* line 33, src/assets/sass/sass/elements/progress.sass */.progress.is-light::-webkit-progress-value{background-color:#f5f5f5}/* line 35, src/assets/sass/sass/elements/progress.sass */.progress.is-light::-moz-progress-bar{background-color:#f5f5f5}/* line 37, src/assets/sass/sass/elements/progress.sass */.progress.is-light::-ms-fill{background-color:#f5f5f5}/* line 39, src/assets/sass/sass/elements/progress.sass */.progress.is-light:indeterminate{background-image:-webkit-gradient(linear, left top, right top, color-stop(30%, #f5f5f5), color-stop(30%, #ededed));background-image:linear-gradient(to right, #f5f5f5 30%, #ededed 30%)}/* line 33, src/assets/sass/sass/elements/progress.sass */.progress.is-dark::-webkit-progress-value{background-color:#363636}/* line 35, src/assets/sass/sass/elements/progress.sass */.progress.is-dark::-moz-progress-bar{background-color:#363636}/* line 37, src/assets/sass/sass/elements/progress.sass */.progress.is-dark::-ms-fill{background-color:#363636}/* line 39, src/assets/sass/sass/elements/progress.sass */.progress.is-dark:indeterminate{background-image:-webkit-gradient(linear, left top, right top, color-stop(30%, #363636), color-stop(30%, #ededed));background-image:linear-gradient(to right, #363636 30%, #ededed 30%)}/* line 33, src/assets/sass/sass/elements/progress.sass */.progress.is-primary::-webkit-progress-value{background-color:#00d1b2}/* line 35, src/assets/sass/sass/elements/progress.sass */.progress.is-primary::-moz-progress-bar{background-color:#00d1b2}/* line 37, src/assets/sass/sass/elements/progress.sass */.progress.is-primary::-ms-fill{background-color:#00d1b2}/* line 39, src/assets/sass/sass/elements/progress.sass */.progress.is-primary:indeterminate{background-image:-webkit-gradient(linear, left top, right top, color-stop(30%, #00d1b2), color-stop(30%, #ededed));background-image:linear-gradient(to right, #00d1b2 30%, #ededed 30%)}/* line 33, src/assets/sass/sass/elements/progress.sass */.progress.is-link::-webkit-progress-value{background-color:#3273dc}/* line 35, src/assets/sass/sass/elements/progress.sass */.progress.is-link::-moz-progress-bar{background-color:#3273dc}/* line 37, src/assets/sass/sass/elements/progress.sass */.progress.is-link::-ms-fill{background-color:#3273dc}/* line 39, src/assets/sass/sass/elements/progress.sass */.progress.is-link:indeterminate{background-image:-webkit-gradient(linear, left top, right top, color-stop(30%, #3273dc), color-stop(30%, #ededed));background-image:linear-gradient(to right, #3273dc 30%, #ededed 30%)}/* line 33, src/assets/sass/sass/elements/progress.sass */.progress.is-info::-webkit-progress-value{background-color:#3298dc}/* line 35, src/assets/sass/sass/elements/progress.sass */.progress.is-info::-moz-progress-bar{background-color:#3298dc}/* line 37, src/assets/sass/sass/elements/progress.sass */.progress.is-info::-ms-fill{background-color:#3298dc}/* line 39, src/assets/sass/sass/elements/progress.sass */.progress.is-info:indeterminate{background-image:-webkit-gradient(linear, left top, right top, color-stop(30%, #3298dc), color-stop(30%, #ededed));background-image:linear-gradient(to right, #3298dc 30%, #ededed 30%)}/* line 33, src/assets/sass/sass/elements/progress.sass */.progress.is-success::-webkit-progress-value{background-color:#48c774}/* line 35, src/assets/sass/sass/elements/progress.sass */.progress.is-success::-moz-progress-bar{background-color:#48c774}/* line 37, src/assets/sass/sass/elements/progress.sass */.progress.is-success::-ms-fill{background-color:#48c774}/* line 39, src/assets/sass/sass/elements/progress.sass */.progress.is-success:indeterminate{background-image:-webkit-gradient(linear, left top, right top, color-stop(30%, #48c774), color-stop(30%, #ededed));background-image:linear-gradient(to right, #48c774 30%, #ededed 30%)}/* line 33, src/assets/sass/sass/elements/progress.sass */.progress.is-warning::-webkit-progress-value{background-color:#ffdd57}/* line 35, src/assets/sass/sass/elements/progress.sass */.progress.is-warning::-moz-progress-bar{background-color:#ffdd57}/* line 37, src/assets/sass/sass/elements/progress.sass */.progress.is-warning::-ms-fill{background-color:#ffdd57}/* line 39, src/assets/sass/sass/elements/progress.sass */.progress.is-warning:indeterminate{background-image:-webkit-gradient(linear, left top, right top, color-stop(30%, #ffdd57), color-stop(30%, #ededed));background-image:linear-gradient(to right, #ffdd57 30%, #ededed 30%)}/* line 33, src/assets/sass/sass/elements/progress.sass */.progress.is-danger::-webkit-progress-value{background-color:#f14668}/* line 35, src/assets/sass/sass/elements/progress.sass */.progress.is-danger::-moz-progress-bar{background-color:#f14668}/* line 37, src/assets/sass/sass/elements/progress.sass */.progress.is-danger::-ms-fill{background-color:#f14668}/* line 39, src/assets/sass/sass/elements/progress.sass */.progress.is-danger:indeterminate{background-image:-webkit-gradient(linear, left top, right top, color-stop(30%, #f14668), color-stop(30%, #ededed));background-image:linear-gradient(to right, #f14668 30%, #ededed 30%)}/* line 42, src/assets/sass/sass/elements/progress.sass */.progress:indeterminate{-webkit-animation-duration:1.5s;animation-duration:1.5s;-webkit-animation-iteration-count:infinite;animation-iteration-count:infinite;-webkit-animation-name:moveIndeterminate;animation-name:moveIndeterminate;-webkit-animation-timing-function:linear;animation-timing-function:linear;background-color:#ededed;background-image:-webkit-gradient(linear, left top, right top, color-stop(30%, #4a4a4a), color-stop(30%, #ededed));background-image:linear-gradient(to right, #4a4a4a 30%, #ededed 30%);background-position:top left;background-repeat:no-repeat;background-size:150% 150%}/* line 52, src/assets/sass/sass/elements/progress.sass */.progress:indeterminate::-webkit-progress-bar{background-color:transparent}/* line 54, src/assets/sass/sass/elements/progress.sass */.progress:indeterminate::-moz-progress-bar{background-color:transparent}/* line 56, src/assets/sass/sass/elements/progress.sass */.progress:indeterminate::-ms-fill{animation-name:none}/* line 60, src/assets/sass/sass/elements/progress.sass */.progress.is-small{height:.75rem}/* line 62, src/assets/sass/sass/elements/progress.sass */.progress.is-medium{height:1.25rem}/* line 64, src/assets/sass/sass/elements/progress.sass */.progress.is-large{height:1.5rem}@-webkit-keyframes moveIndeterminate{from{background-position:200% 0}to{background-position:-200% 0}}@keyframes moveIndeterminate{from{background-position:200% 0}to{background-position:-200% 0}}/* line 28, src/assets/sass/sass/elements/table.sass */.table{background-color:#fff;color:#363636}/* line 32, src/assets/sass/sass/elements/table.sass */.table td,.table th{border:1px solid #dbdbdb;border-width:0 0 1px;padding:0.5em 0.75em;vertical-align:top}/* line 42, src/assets/sass/sass/elements/table.sass */.table td.is-white,.table th.is-white{background-color:#fff;border-color:#fff;color:#0a0a0a}/* line 42, src/assets/sass/sass/elements/table.sass */.table td.is-black,.table th.is-black{background-color:#0a0a0a;border-color:#0a0a0a;color:#fff}/* line 42, src/assets/sass/sass/elements/table.sass */.table td.is-light,.table th.is-light{background-color:#f5f5f5;border-color:#f5f5f5;color:rgba(0,0,0,0.7)}/* line 42, src/assets/sass/sass/elements/table.sass */.table td.is-dark,.table th.is-dark{background-color:#363636;border-color:#363636;color:#fff}/* line 42, src/assets/sass/sass/elements/table.sass */.table td.is-primary,.table th.is-primary{background-color:#00d1b2;border-color:#00d1b2;color:#fff}/* line 42, src/assets/sass/sass/elements/table.sass */.table td.is-link,.table th.is-link{background-color:#3273dc;border-color:#3273dc;color:#fff}/* line 42, src/assets/sass/sass/elements/table.sass */.table td.is-info,.table th.is-info{background-color:#3298dc;border-color:#3298dc;color:#fff}/* line 42, src/assets/sass/sass/elements/table.sass */.table td.is-success,.table th.is-success{background-color:#48c774;border-color:#48c774;color:#fff}/* line 42, src/assets/sass/sass/elements/table.sass */.table td.is-warning,.table th.is-warning{background-color:#ffdd57;border-color:#ffdd57;color:rgba(0,0,0,0.7)}/* line 42, src/assets/sass/sass/elements/table.sass */.table td.is-danger,.table th.is-danger{background-color:#f14668;border-color:#f14668;color:#fff}/* line 47, src/assets/sass/sass/elements/table.sass */.table td.is-narrow,.table th.is-narrow{white-space:nowrap;width:1%}/* line 50, src/assets/sass/sass/elements/table.sass */.table td.is-selected,.table th.is-selected{background-color:#00d1b2;color:#fff}/* line 53, src/assets/sass/sass/elements/table.sass */.table td.is-selected a,.table td.is-selected strong,.table th.is-selected a,.table th.is-selected strong{color:currentColor}/* line 56, src/assets/sass/sass/elements/table.sass */.table td.is-vcentered,.table th.is-vcentered{vertical-align:middle}/* line 58, src/assets/sass/sass/elements/table.sass */.table th{color:#363636}/* line 60, src/assets/sass/sass/elements/table.sass */.table th:not([align]){text-align:inherit}/* line 63, src/assets/sass/sass/elements/table.sass */.table tr.is-selected{background-color:#00d1b2;color:#fff}/* line 66, src/assets/sass/sass/elements/table.sass */.table tr.is-selected a,.table tr.is-selected strong{color:currentColor}/* line 69, src/assets/sass/sass/elements/table.sass */.table tr.is-selected td,.table tr.is-selected th{border-color:#fff;color:currentColor}/* line 73, src/assets/sass/sass/elements/table.sass */.table thead{background-color:rgba(0,0,0,0)}/* line 75, src/assets/sass/sass/elements/table.sass */.table thead td,.table thead th{border-width:0 0 2px;color:#363636}/* line 79, src/assets/sass/sass/elements/table.sass */.table tfoot{background-color:rgba(0,0,0,0)}/* line 81, src/assets/sass/sass/elements/table.sass */.table tfoot td,.table tfoot th{border-width:2px 0 0;color:#363636}/* line 85, src/assets/sass/sass/elements/table.sass */.table tbody{background-color:rgba(0,0,0,0)}/* line 89, src/assets/sass/sass/elements/table.sass */.table tbody tr:last-child td,.table tbody tr:last-child th{border-bottom-width:0}/* line 94, src/assets/sass/sass/elements/table.sass */.table.is-bordered td,.table.is-bordered th{border-width:1px}/* line 99, src/assets/sass/sass/elements/table.sass */.table.is-bordered tr:last-child td,.table.is-bordered tr:last-child th{border-bottom-width:1px}/* line 102, src/assets/sass/sass/elements/table.sass */.table.is-fullwidth{width:100%}/* line 107, src/assets/sass/sass/elements/table.sass */.table.is-hoverable tbody tr:not(.is-selected):hover{background-color:#fafafa}/* line 112, src/assets/sass/sass/elements/table.sass */.table.is-hoverable.is-striped tbody tr:not(.is-selected):hover{background-color:#fafafa}/* line 114, src/assets/sass/sass/elements/table.sass */.table.is-hoverable.is-striped tbody tr:not(.is-selected):hover:nth-child(even){background-color:#f5f5f5}/* line 117, src/assets/sass/sass/elements/table.sass */.table.is-narrow td,.table.is-narrow th{padding:0.25em 0.5em}/* line 123, src/assets/sass/sass/elements/table.sass */.table.is-striped tbody tr:not(.is-selected):nth-child(even){background-color:#fafafa}/* line 126, src/assets/sass/sass/elements/table.sass */.table-container{-webkit-overflow-scrolling:touch;overflow:auto;overflow-y:hidden;max-width:100%}/* line 8, src/assets/sass/sass/elements/tag.sass */.tags{-webkit-box-align:center;-ms-flex-align:center;align-items:center;display:-webkit-box;display:-ms-flexbox;display:flex;-ms-flex-wrap:wrap;flex-wrap:wrap;-webkit-box-pack:start;-ms-flex-pack:start;justify-content:flex-start}/* line 13, src/assets/sass/sass/elements/tag.sass */.tags .tag{margin-bottom:0.5rem}/* line 15, src/assets/sass/sass/elements/tag.sass */.tags .tag:not(:last-child){margin-right:.5rem}/* line 17, src/assets/sass/sass/elements/tag.sass */.tags:last-child{margin-bottom:-0.5rem}/* line 19, src/assets/sass/sass/elements/tag.sass */.tags:not(:last-child){margin-bottom:1rem}/* line 23, src/assets/sass/sass/elements/tag.sass */.tags.are-medium .tag:not(.is-normal):not(.is-large){font-size:1rem}/* line 26, src/assets/sass/sass/elements/tag.sass */.tags.are-large .tag:not(.is-normal):not(.is-medium){font-size:1.25rem}/* line 28, src/assets/sass/sass/elements/tag.sass */.tags.is-centered{-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center}/* line 30, src/assets/sass/sass/elements/tag.sass */.tags.is-centered .tag{margin-right:0.25rem;margin-left:0.25rem}/* line 33, src/assets/sass/sass/elements/tag.sass */.tags.is-right{-webkit-box-pack:end;-ms-flex-pack:end;justify-content:flex-end}/* line 36, src/assets/sass/sass/elements/tag.sass */.tags.is-right .tag:not(:first-child){margin-left:0.5rem}/* line 38, src/assets/sass/sass/elements/tag.sass */.tags.is-right .tag:not(:last-child){margin-right:0}/* line 41, src/assets/sass/sass/elements/tag.sass */.tags.has-addons .tag{margin-right:0}/* line 43, src/assets/sass/sass/elements/tag.sass */.tags.has-addons .tag:not(:first-child){margin-left:0;border-top-left-radius:0;border-bottom-left-radius:0}/* line 51, src/assets/sass/sass/elements/tag.sass */.tags.has-addons .tag:not(:last-child){border-top-right-radius:0;border-bottom-right-radius:0}/* line 59, src/assets/sass/sass/elements/tag.sass */.tag:not(body){-webkit-box-align:center;-ms-flex-align:center;align-items:center;background-color:#f5f5f5;border-radius:4px;color:#4a4a4a;display:-webkit-inline-box;display:-ms-inline-flexbox;display:inline-flex;font-size:.75rem;height:2em;-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center;line-height:1.5;padding-left:0.75em;padding-right:0.75em;white-space:nowrap}/* line 72, src/assets/sass/sass/elements/tag.sass */.tag:not(body) .delete{margin-left:.25rem;margin-right:-.375rem}/* line 79, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-white{background-color:#fff;color:#0a0a0a}/* line 79, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-black{background-color:#0a0a0a;color:#fff}/* line 79, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-light{background-color:#f5f5f5;color:rgba(0,0,0,0.7)}/* line 79, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-dark{background-color:#363636;color:#fff}/* line 79, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-primary{background-color:#00d1b2;color:#fff}/* line 86, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-primary.is-light{background-color:#ebfffc;color:#00947e}/* line 79, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-link{background-color:#3273dc;color:#fff}/* line 86, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-link.is-light{background-color:#eef3fc;color:#2160c4}/* line 79, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-info{background-color:#3298dc;color:#fff}/* line 86, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-info.is-light{background-color:#eef6fc;color:#1d72aa}/* line 79, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-success{background-color:#48c774;color:#fff}/* line 86, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-success.is-light{background-color:#effaf3;color:#257942}/* line 79, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-warning{background-color:#ffdd57;color:rgba(0,0,0,0.7)}/* line 86, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-warning.is-light{background-color:#fffbeb;color:#947600}/* line 79, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-danger{background-color:#f14668;color:#fff}/* line 86, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-danger.is-light{background-color:#feecf0;color:#cc0f35}/* line 90, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-normal{font-size:.75rem}/* line 92, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-medium{font-size:1rem}/* line 94, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-large{font-size:1.25rem}/* line 97, src/assets/sass/sass/elements/tag.sass */.tag:not(body) .icon:first-child:not(:last-child){margin-left:-.375em;margin-right:.1875em}/* line 100, src/assets/sass/sass/elements/tag.sass */.tag:not(body) .icon:last-child:not(:first-child){margin-left:.1875em;margin-right:-.375em}/* line 103, src/assets/sass/sass/elements/tag.sass */.tag:not(body) .icon:first-child:last-child{margin-left:-.375em;margin-right:-.375em}/* line 107, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-delete{margin-left:1px;padding:0;position:relative;width:2em}/* line 112, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-delete::before,.tag:not(body).is-delete::after{background-color:currentColor;content:"";display:block;left:50%;position:absolute;top:50%;-webkit-transform:translateX(-50%) translateY(-50%) rotate(45deg);transform:translateX(-50%) translateY(-50%) rotate(45deg);-webkit-transform-origin:center center;transform-origin:center center}/* line 122, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-delete::before{height:1px;width:50%}/* line 125, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-delete::after{height:50%;width:1px}/* line 128, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-delete:hover,.tag:not(body).is-delete:focus{background-color:#e8e8e8}/* line 131, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-delete:active{background-color:#dbdbdb}/* line 133, src/assets/sass/sass/elements/tag.sass */.tag:not(body).is-rounded{border-radius:290486px}/* line 137, src/assets/sass/sass/elements/tag.sass */a.tag:hover{text-decoration:underline}/* line 20, src/assets/sass/sass/elements/title.sass */.title,.subtitle{word-break:break-word}/* line 24, src/assets/sass/sass/elements/title.sass */.title em,.title span,.subtitle em,.subtitle span{font-weight:inherit}/* line 27, src/assets/sass/sass/elements/title.sass */.title sub,.subtitle sub{font-size:.75em}/* line 29, src/assets/sass/sass/elements/title.sass */.title sup,.subtitle sup{font-size:.75em}/* line 31, src/assets/sass/sass/elements/title.sass */.title .tag,.subtitle .tag{vertical-align:middle}/* line 34, src/assets/sass/sass/elements/title.sass */.title{color:#363636;font-size:2rem;font-weight:600;line-height:1.125}/* line 41, src/assets/sass/sass/elements/title.sass */.title strong{color:inherit;font-weight:inherit}/* line 44, src/assets/sass/sass/elements/title.sass */.title+.highlight{margin-top:-0.75rem}/* line 46, src/assets/sass/sass/elements/title.sass */.title:not(.is-spaced)+.subtitle{margin-top:-1.25rem}/* line 51, src/assets/sass/sass/elements/title.sass */.title.is-1{font-size:3rem}/* line 51, src/assets/sass/sass/elements/title.sass */.title.is-2{font-size:2.5rem}/* line 51, src/assets/sass/sass/elements/title.sass */.title.is-3{font-size:2rem}/* line 51, src/assets/sass/sass/elements/title.sass */.title.is-4{font-size:1.5rem}/* line 51, src/assets/sass/sass/elements/title.sass */.title.is-5{font-size:1.25rem}/* line 51, src/assets/sass/sass/elements/title.sass */.title.is-6{font-size:1rem}/* line 51, src/assets/sass/sass/elements/title.sass */.title.is-7{font-size:.75rem}/* line 54, src/assets/sass/sass/elements/title.sass */.subtitle{color:#4a4a4a;font-size:1.25rem;font-weight:400;line-height:1.25}/* line 61, src/assets/sass/sass/elements/title.sass */.subtitle strong{color:#363636;font-weight:600}/* line 64, src/assets/sass/sass/elements/title.sass */.subtitle:not(.is-spaced)+.title{margin-top:-1.25rem}/* line 69, src/assets/sass/sass/elements/title.sass */.subtitle.is-1{font-size:3rem}/* line 69, src/assets/sass/sass/elements/title.sass */.subtitle.is-2{font-size:2.5rem}/* line 69, src/assets/sass/sass/elements/title.sass */.subtitle.is-3{font-size:2rem}/* line 69, src/assets/sass/sass/elements/title.sass */.subtitle.is-4{font-size:1.5rem}/* line 69, src/assets/sass/sass/elements/title.sass */.subtitle.is-5{font-size:1.25rem}/* line 69, src/assets/sass/sass/elements/title.sass */.subtitle.is-6{font-size:1rem}/* line 69, src/assets/sass/sass/elements/title.sass */.subtitle.is-7{font-size:.75rem}/* line 7, src/assets/sass/sass/elements/other.sass */.heading{display:block;font-size:11px;letter-spacing:1px;margin-bottom:5px;text-transform:uppercase}/* line 14, src/assets/sass/sass/elements/other.sass */.highlight{font-weight:400;max-width:100%;overflow:hidden;padding:0}/* line 20, src/assets/sass/sass/elements/other.sass */.highlight pre{overflow:auto;max-width:100%}/* line 27, src/assets/sass/sass/elements/other.sass */.number{-webkit-box-align:center;-ms-flex-align:center;align-items:center;background-color:#f5f5f5;border-radius:290486px;display:-webkit-inline-box;display:-ms-inline-flexbox;display:inline-flex;font-size:1.25rem;height:2em;-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center;margin-right:1.5rem;min-width:2.5em;padding:0.25rem 0.5rem;text-align:center;vertical-align:top}/* line 56, src/assets/sass/sass/form/shared.sass */.input,.textarea,.select select{background-color:#fff;border-color:#dbdbdb;border-radius:4px;color:#363636}/* line 68, src/assets/sass/sass/utilities/mixins.sass */.input::-moz-placeholder,.textarea::-moz-placeholder,.select select::-moz-placeholder{color:rgba(54,54,54,0.3)}/* line 68, src/assets/sass/sass/utilities/mixins.sass */.input::-webkit-input-placeholder,.textarea::-webkit-input-placeholder,.select select::-webkit-input-placeholder{color:rgba(54,54,54,0.3)}/* line 68, src/assets/sass/sass/utilities/mixins.sass */.input:-moz-placeholder,.textarea:-moz-placeholder,.select select:-moz-placeholder{color:rgba(54,54,54,0.3)}/* line 68, src/assets/sass/sass/utilities/mixins.sass */.input:-ms-input-placeholder,.textarea:-ms-input-placeholder,.select select:-ms-input-placeholder{color:rgba(54,54,54,0.3)}/* line 38, src/assets/sass/sass/form/shared.sass */.input:hover,.textarea:hover,.select select:hover,.is-hovered.input,.is-hovered.textarea,.select select.is-hovered{border-color:#b5b5b5}/* line 41, src/assets/sass/sass/form/shared.sass */.input:focus,.textarea:focus,.select select:focus,.is-focused.input,.is-focused.textarea,.select select.is-focused,.input:active,.textarea:active,.select select:active,.is-active.input,.is-active.textarea,.select select.is-active{border-color:#3273dc;-webkit-box-shadow:0 0 0 0.125em rgba(50,115,220,0.25);box-shadow:0 0 0 0.125em rgba(50,115,220,0.25)}/* line 47, src/assets/sass/sass/form/shared.sass */.input[disabled],.textarea[disabled],.select select[disabled],fieldset[disabled] .input,fieldset[disabled] .textarea,fieldset[disabled] .select select,.select fieldset[disabled] select{background-color:#f5f5f5;border-color:#f5f5f5;-webkit-box-shadow:none;box-shadow:none;color:#7a7a7a}/* line 68, src/assets/sass/sass/utilities/mixins.sass */.input[disabled]::-moz-placeholder,.textarea[disabled]::-moz-placeholder,.select select[disabled]::-moz-placeholder,fieldset[disabled] .input::-moz-placeholder,fieldset[disabled] .textarea::-moz-placeholder,fieldset[disabled] .select select::-moz-placeholder,.select fieldset[disabled] select::-moz-placeholder{color:rgba(122,122,122,0.3)}/* line 68, src/assets/sass/sass/utilities/mixins.sass */.input[disabled]::-webkit-input-placeholder,.textarea[disabled]::-webkit-input-placeholder,.select select[disabled]::-webkit-input-placeholder,fieldset[disabled] .input::-webkit-input-placeholder,fieldset[disabled] .textarea::-webkit-input-placeholder,fieldset[disabled] .select select::-webkit-input-placeholder,.select fieldset[disabled] select::-webkit-input-placeholder{color:rgba(122,122,122,0.3)}/* line 68, src/assets/sass/sass/utilities/mixins.sass */.input[disabled]:-moz-placeholder,.textarea[disabled]:-moz-placeholder,.select select[disabled]:-moz-placeholder,fieldset[disabled] .input:-moz-placeholder,fieldset[disabled] .textarea:-moz-placeholder,fieldset[disabled] .select select:-moz-placeholder,.select fieldset[disabled] select:-moz-placeholder{color:rgba(122,122,122,0.3)}/* line 68, src/assets/sass/sass/utilities/mixins.sass */.input[disabled]:-ms-input-placeholder,.textarea[disabled]:-ms-input-placeholder,.select select[disabled]:-ms-input-placeholder,fieldset[disabled] .input:-ms-input-placeholder,fieldset[disabled] .textarea:-ms-input-placeholder,fieldset[disabled] .select select:-ms-input-placeholder,.select fieldset[disabled] select:-ms-input-placeholder{color:rgba(122,122,122,0.3)}/* line 7, src/assets/sass/sass/form/input-textarea.sass */.input,.textarea{-webkit-box-shadow:inset 0 0.0625em 0.125em rgba(10,10,10,0.05);box-shadow:inset 0 0.0625em 0.125em rgba(10,10,10,0.05);max-width:100%;width:100%}/* line 12, src/assets/sass/sass/form/input-textarea.sass */.input[readonly],.textarea[readonly]{-webkit-box-shadow:none;box-shadow:none}/* line 17, src/assets/sass/sass/form/input-textarea.sass */.is-white.input,.is-white.textarea{border-color:#fff}/* line 19, src/assets/sass/sass/form/input-textarea.sass */.is-white.input:focus,.is-white.textarea:focus,.is-white.is-focused.input,.is-white.is-focused.textarea,.is-white.input:active,.is-white.textarea:active,.is-white.is-active.input,.is-white.is-active.textarea{-webkit-box-shadow:0 0 0 0.125em rgba(255,255,255,0.25);box-shadow:0 0 0 0.125em rgba(255,255,255,0.25)}/* line 17, src/assets/sass/sass/form/input-textarea.sass */.is-black.input,.is-black.textarea{border-color:#0a0a0a}/* line 19, src/assets/sass/sass/form/input-textarea.sass */.is-black.input:focus,.is-black.textarea:focus,.is-black.is-focused.input,.is-black.is-focused.textarea,.is-black.input:active,.is-black.textarea:active,.is-black.is-active.input,.is-black.is-active.textarea{-webkit-box-shadow:0 0 0 0.125em rgba(10,10,10,0.25);box-shadow:0 0 0 0.125em rgba(10,10,10,0.25)}/* line 17, src/assets/sass/sass/form/input-textarea.sass */.is-light.input,.is-light.textarea{border-color:#f5f5f5}/* line 19, src/assets/sass/sass/form/input-textarea.sass */.is-light.input:focus,.is-light.textarea:focus,.is-light.is-focused.input,.is-light.is-focused.textarea,.is-light.input:active,.is-light.textarea:active,.is-light.is-active.input,.is-light.is-active.textarea{-webkit-box-shadow:0 0 0 0.125em rgba(245,245,245,0.25);box-shadow:0 0 0 0.125em rgba(245,245,245,0.25)}/* line 17, src/assets/sass/sass/form/input-textarea.sass */.is-dark.input,.is-dark.textarea{border-color:#363636}/* line 19, src/assets/sass/sass/form/input-textarea.sass */.is-dark.input:focus,.is-dark.textarea:focus,.is-dark.is-focused.input,.is-dark.is-focused.textarea,.is-dark.input:active,.is-dark.textarea:active,.is-dark.is-active.input,.is-dark.is-active.textarea{-webkit-box-shadow:0 0 0 0.125em rgba(54,54,54,0.25);box-shadow:0 0 0 0.125em rgba(54,54,54,0.25)}/* line 17, src/assets/sass/sass/form/input-textarea.sass */.is-primary.input,.is-primary.textarea{border-color:#00d1b2}/* line 19, src/assets/sass/sass/form/input-textarea.sass */.is-primary.input:focus,.is-primary.textarea:focus,.is-primary.is-focused.input,.is-primary.is-focused.textarea,.is-primary.input:active,.is-primary.textarea:active,.is-primary.is-active.input,.is-primary.is-active.textarea{-webkit-box-shadow:0 0 0 0.125em rgba(0,209,178,0.25);box-shadow:0 0 0 0.125em rgba(0,209,178,0.25)}/* line 17, src/assets/sass/sass/form/input-textarea.sass */.is-link.input,.is-link.textarea{border-color:#3273dc}/* line 19, src/assets/sass/sass/form/input-textarea.sass */.is-link.input:focus,.is-link.textarea:focus,.is-link.is-focused.input,.is-link.is-focused.textarea,.is-link.input:active,.is-link.textarea:active,.is-link.is-active.input,.is-link.is-active.textarea{-webkit-box-shadow:0 0 0 0.125em rgba(50,115,220,0.25);box-shadow:0 0 0 0.125em rgba(50,115,220,0.25)}/* line 17, src/assets/sass/sass/form/input-textarea.sass */.is-info.input,.is-info.textarea{border-color:#3298dc}/* line 19, src/assets/sass/sass/form/input-textarea.sass */.is-info.input:focus,.is-info.textarea:focus,.is-info.is-focused.input,.is-info.is-focused.textarea,.is-info.input:active,.is-info.textarea:active,.is-info.is-active.input,.is-info.is-active.textarea{-webkit-box-shadow:0 0 0 0.125em rgba(50,152,220,0.25);box-shadow:0 0 0 0.125em rgba(50,152,220,0.25)}/* line 17, src/assets/sass/sass/form/input-textarea.sass */.is-success.input,.is-success.textarea{border-color:#48c774}/* line 19, src/assets/sass/sass/form/input-textarea.sass */.is-success.input:focus,.is-success.textarea:focus,.is-success.is-focused.input,.is-success.is-focused.textarea,.is-success.input:active,.is-success.textarea:active,.is-success.is-active.input,.is-success.is-active.textarea{-webkit-box-shadow:0 0 0 0.125em rgba(72,199,116,0.25);box-shadow:0 0 0 0.125em rgba(72,199,116,0.25)}/* line 17, src/assets/sass/sass/form/input-textarea.sass */.is-warning.input,.is-warning.textarea{border-color:#ffdd57}/* line 19, src/assets/sass/sass/form/input-textarea.sass */.is-warning.input:focus,.is-warning.textarea:focus,.is-warning.is-focused.input,.is-warning.is-focused.textarea,.is-warning.input:active,.is-warning.textarea:active,.is-warning.is-active.input,.is-warning.is-active.textarea{-webkit-box-shadow:0 0 0 0.125em rgba(255,221,87,0.25);box-shadow:0 0 0 0.125em rgba(255,221,87,0.25)}/* line 17, src/assets/sass/sass/form/input-textarea.sass */.is-danger.input,.is-danger.textarea{border-color:#f14668}/* line 19, src/assets/sass/sass/form/input-textarea.sass */.is-danger.input:focus,.is-danger.textarea:focus,.is-danger.is-focused.input,.is-danger.is-focused.textarea,.is-danger.input:active,.is-danger.textarea:active,.is-danger.is-active.input,.is-danger.is-active.textarea{-webkit-box-shadow:0 0 0 0.125em rgba(241,70,104,0.25);box-shadow:0 0 0 0.125em rgba(241,70,104,0.25)}/* line 25, src/assets/sass/sass/form/input-textarea.sass */.is-small.input,.is-small.textarea{border-radius:2px;font-size:.75rem}/* line 27, src/assets/sass/sass/form/input-textarea.sass */.is-medium.input,.is-medium.textarea{font-size:1.25rem}/* line 29, src/assets/sass/sass/form/input-textarea.sass */.is-large.input,.is-large.textarea{font-size:1.5rem}/* line 32, src/assets/sass/sass/form/input-textarea.sass */.is-fullwidth.input,.is-fullwidth.textarea{display:block;width:100%}/* line 35, src/assets/sass/sass/form/input-textarea.sass */.is-inline.input,.is-inline.textarea{display:inline;width:auto}/* line 41, src/assets/sass/sass/form/input-textarea.sass */.input.is-rounded{border-radius:290486px;padding-left:calc(calc(0.75em - 1px) + 0.375em);padding-right:calc(calc(0.75em - 1px) + 0.375em)}/* line 45, src/assets/sass/sass/form/input-textarea.sass */.input.is-static{background-color:transparent;border-color:transparent;-webkit-box-shadow:none;box-shadow:none;padding-left:0;padding-right:0}/* line 52, src/assets/sass/sass/form/input-textarea.sass */.textarea{display:block;max-width:100%;min-width:100%;padding:calc(0.75em - 1px);resize:vertical}/* line 59, src/assets/sass/sass/form/input-textarea.sass */.textarea:not([rows]){max-height:40em;min-height:8em}/* line 62, src/assets/sass/sass/form/input-textarea.sass */.textarea[rows]{height:initial}/* line 65, src/assets/sass/sass/form/input-textarea.sass */.textarea.has-fixed-size{resize:none}/* line 1, src/assets/sass/sass/form/checkbox-radio.sass */.checkbox,.radio{cursor:pointer;display:inline-block;line-height:1.25;position:relative}/* line 6, src/assets/sass/sass/form/checkbox-radio.sass */.checkbox input,.radio input{cursor:pointer}/* line 8, src/assets/sass/sass/form/checkbox-radio.sass */.checkbox:hover,.radio:hover{color:#363636}/* line 10, src/assets/sass/sass/form/checkbox-radio.sass */.checkbox[disabled],.radio[disabled],fieldset[disabled] .checkbox,fieldset[disabled] .radio,.checkbox input[disabled],.radio input[disabled]{color:#7a7a7a;cursor:not-allowed}/* line 21, src/assets/sass/sass/form/checkbox-radio.sass */.radio+.radio{margin-left:.5em}/* line 3, src/assets/sass/sass/form/select.sass */.select{display:inline-block;max-width:100%;position:relative;vertical-align:top}/* line 8, src/assets/sass/sass/form/select.sass */.select:not(.is-multiple){height:2.5em}/* line 11, src/assets/sass/sass/form/select.sass */.select:not(.is-multiple):not(.is-loading)::after{border-color:#3273dc;right:1.125em;z-index:4}/* line 17, src/assets/sass/sass/form/select.sass */.select.is-rounded select{border-radius:290486px;padding-left:1em}/* line 20, src/assets/sass/sass/form/select.sass */.select select{cursor:pointer;display:block;font-size:1em;max-width:100%;outline:none}/* line 27, src/assets/sass/sass/form/select.sass */.select select::-ms-expand{display:none}/* line 29, src/assets/sass/sass/form/select.sass */.select select[disabled]:hover,fieldset[disabled] .select select:hover{border-color:#f5f5f5}/* line 32, src/assets/sass/sass/form/select.sass */.select select:not([multiple]){padding-right:2.5em}/* line 34, src/assets/sass/sass/form/select.sass */.select select[multiple]{height:auto;padding:0}/* line 37, src/assets/sass/sass/form/select.sass */.select select[multiple] option{padding:0.5em 1em}/* line 41, src/assets/sass/sass/form/select.sass */.select:not(.is-multiple):not(.is-loading):hover::after{border-color:#363636}/* line 47, src/assets/sass/sass/form/select.sass */.select.is-white:not(:hover)::after{border-color:#fff}/* line 49, src/assets/sass/sass/form/select.sass */.select.is-white select{border-color:#fff}/* line 51, src/assets/sass/sass/form/select.sass */.select.is-white select:hover,.select.is-white select.is-hovered{border-color:#f2f2f2}/* line 54, src/assets/sass/sass/form/select.sass */.select.is-white select:focus,.select.is-white select.is-focused,.select.is-white select:active,.select.is-white select.is-active{-webkit-box-shadow:0 0 0 0.125em rgba(255,255,255,0.25);box-shadow:0 0 0 0.125em rgba(255,255,255,0.25)}/* line 47, src/assets/sass/sass/form/select.sass */.select.is-black:not(:hover)::after{border-color:#0a0a0a}/* line 49, src/assets/sass/sass/form/select.sass */.select.is-black select{border-color:#0a0a0a}/* line 51, src/assets/sass/sass/form/select.sass */.select.is-black select:hover,.select.is-black select.is-hovered{border-color:#000}/* line 54, src/assets/sass/sass/form/select.sass */.select.is-black select:focus,.select.is-black select.is-focused,.select.is-black select:active,.select.is-black select.is-active{-webkit-box-shadow:0 0 0 0.125em rgba(10,10,10,0.25);box-shadow:0 0 0 0.125em rgba(10,10,10,0.25)}/* line 47, src/assets/sass/sass/form/select.sass */.select.is-light:not(:hover)::after{border-color:#f5f5f5}/* line 49, src/assets/sass/sass/form/select.sass */.select.is-light select{border-color:#f5f5f5}/* line 51, src/assets/sass/sass/form/select.sass */.select.is-light select:hover,.select.is-light select.is-hovered{border-color:#e8e8e8}/* line 54, src/assets/sass/sass/form/select.sass */.select.is-light select:focus,.select.is-light select.is-focused,.select.is-light select:active,.select.is-light select.is-active{-webkit-box-shadow:0 0 0 0.125em rgba(245,245,245,0.25);box-shadow:0 0 0 0.125em rgba(245,245,245,0.25)}/* line 47, src/assets/sass/sass/form/select.sass */.select.is-dark:not(:hover)::after{border-color:#363636}/* line 49, src/assets/sass/sass/form/select.sass */.select.is-dark select{border-color:#363636}/* line 51, src/assets/sass/sass/form/select.sass */.select.is-dark select:hover,.select.is-dark select.is-hovered{border-color:#292929}/* line 54, src/assets/sass/sass/form/select.sass */.select.is-dark select:focus,.select.is-dark select.is-focused,.select.is-dark select:active,.select.is-dark select.is-active{-webkit-box-shadow:0 0 0 0.125em rgba(54,54,54,0.25);box-shadow:0 0 0 0.125em rgba(54,54,54,0.25)}/* line 47, src/assets/sass/sass/form/select.sass */.select.is-primary:not(:hover)::after{border-color:#00d1b2}/* line 49, src/assets/sass/sass/form/select.sass */.select.is-primary select{border-color:#00d1b2}/* line 51, src/assets/sass/sass/form/select.sass */.select.is-primary select:hover,.select.is-primary select.is-hovered{border-color:#00b89c}/* line 54, src/assets/sass/sass/form/select.sass */.select.is-primary select:focus,.select.is-primary select.is-focused,.select.is-primary select:active,.select.is-primary select.is-active{-webkit-box-shadow:0 0 0 0.125em rgba(0,209,178,0.25);box-shadow:0 0 0 0.125em rgba(0,209,178,0.25)}/* line 47, src/assets/sass/sass/form/select.sass */.select.is-link:not(:hover)::after{border-color:#3273dc}/* line 49, src/assets/sass/sass/form/select.sass */.select.is-link select{border-color:#3273dc}/* line 51, src/assets/sass/sass/form/select.sass */.select.is-link select:hover,.select.is-link select.is-hovered{border-color:#2366d1}/* line 54, src/assets/sass/sass/form/select.sass */.select.is-link select:focus,.select.is-link select.is-focused,.select.is-link select:active,.select.is-link select.is-active{-webkit-box-shadow:0 0 0 0.125em rgba(50,115,220,0.25);box-shadow:0 0 0 0.125em rgba(50,115,220,0.25)}/* line 47, src/assets/sass/sass/form/select.sass */.select.is-info:not(:hover)::after{border-color:#3298dc}/* line 49, src/assets/sass/sass/form/select.sass */.select.is-info select{border-color:#3298dc}/* line 51, src/assets/sass/sass/form/select.sass */.select.is-info select:hover,.select.is-info select.is-hovered{border-color:#238cd1}/* line 54, src/assets/sass/sass/form/select.sass */.select.is-info select:focus,.select.is-info select.is-focused,.select.is-info select:active,.select.is-info select.is-active{-webkit-box-shadow:0 0 0 0.125em rgba(50,152,220,0.25);box-shadow:0 0 0 0.125em rgba(50,152,220,0.25)}/* line 47, src/assets/sass/sass/form/select.sass */.select.is-success:not(:hover)::after{border-color:#48c774}/* line 49, src/assets/sass/sass/form/select.sass */.select.is-success select{border-color:#48c774}/* line 51, src/assets/sass/sass/form/select.sass */.select.is-success select:hover,.select.is-success select.is-hovered{border-color:#3abb67}/* line 54, src/assets/sass/sass/form/select.sass */.select.is-success select:focus,.select.is-success select.is-focused,.select.is-success select:active,.select.is-success select.is-active{-webkit-box-shadow:0 0 0 0.125em rgba(72,199,116,0.25);box-shadow:0 0 0 0.125em rgba(72,199,116,0.25)}/* line 47, src/assets/sass/sass/form/select.sass */.select.is-warning:not(:hover)::after{border-color:#ffdd57}/* line 49, src/assets/sass/sass/form/select.sass */.select.is-warning select{border-color:#ffdd57}/* line 51, src/assets/sass/sass/form/select.sass */.select.is-warning select:hover,.select.is-warning select.is-hovered{border-color:#ffd83d}/* line 54, src/assets/sass/sass/form/select.sass */.select.is-warning select:focus,.select.is-warning select.is-focused,.select.is-warning select:active,.select.is-warning select.is-active{-webkit-box-shadow:0 0 0 0.125em rgba(255,221,87,0.25);box-shadow:0 0 0 0.125em rgba(255,221,87,0.25)}/* line 47, src/assets/sass/sass/form/select.sass */.select.is-danger:not(:hover)::after{border-color:#f14668}/* line 49, src/assets/sass/sass/form/select.sass */.select.is-danger select{border-color:#f14668}/* line 51, src/assets/sass/sass/form/select.sass */.select.is-danger select:hover,.select.is-danger select.is-hovered{border-color:#ef2e55}/* line 54, src/assets/sass/sass/form/select.sass */.select.is-danger select:focus,.select.is-danger select.is-focused,.select.is-danger select:active,.select.is-danger select.is-active{-webkit-box-shadow:0 0 0 0.125em rgba(241,70,104,0.25);box-shadow:0 0 0 0.125em rgba(241,70,104,0.25)}/* line 60, src/assets/sass/sass/form/select.sass */.select.is-small{border-radius:2px;font-size:.75rem}/* line 62, src/assets/sass/sass/form/select.sass */.select.is-medium{font-size:1.25rem}/* line 64, src/assets/sass/sass/form/select.sass */.select.is-large{font-size:1.5rem}/* line 68, src/assets/sass/sass/form/select.sass */.select.is-disabled::after{border-color:#7a7a7a}/* line 70, src/assets/sass/sass/form/select.sass */.select.is-fullwidth{width:100%}/* line 72, src/assets/sass/sass/form/select.sass */.select.is-fullwidth select{width:100%}/* line 75, src/assets/sass/sass/form/select.sass */.select.is-loading::after{margin-top:0;position:absolute;right:.625em;top:0.625em;-webkit-transform:none;transform:none}/* line 82, src/assets/sass/sass/form/select.sass */.select.is-loading.is-small:after{font-size:.75rem}/* line 84, src/assets/sass/sass/form/select.sass */.select.is-loading.is-medium:after{font-size:1.25rem}/* line 86, src/assets/sass/sass/form/select.sass */.select.is-loading.is-large:after{font-size:1.5rem}/* line 16, src/assets/sass/sass/form/file.sass */.file{-webkit-box-align:stretch;-ms-flex-align:stretch;align-items:stretch;display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-pack:start;-ms-flex-pack:start;justify-content:flex-start;position:relative}/* line 27, src/assets/sass/sass/form/file.sass */.file.is-white .file-cta{background-color:#fff;border-color:transparent;color:#0a0a0a}/* line 33, src/assets/sass/sass/form/file.sass */.file.is-white:hover .file-cta,.file.is-white.is-hovered .file-cta{background-color:#f9f9f9;border-color:transparent;color:#0a0a0a}/* line 39, src/assets/sass/sass/form/file.sass */.file.is-white:focus .file-cta,.file.is-white.is-focused .file-cta{border-color:transparent;-webkit-box-shadow:0 0 0.5em rgba(255,255,255,0.25);box-shadow:0 0 0.5em rgba(255,255,255,0.25);color:#0a0a0a}/* line 45, src/assets/sass/sass/form/file.sass */.file.is-white:active .file-cta,.file.is-white.is-active .file-cta{background-color:#f2f2f2;border-color:transparent;color:#0a0a0a}/* line 27, src/assets/sass/sass/form/file.sass */.file.is-black .file-cta{background-color:#0a0a0a;border-color:transparent;color:#fff}/* line 33, src/assets/sass/sass/form/file.sass */.file.is-black:hover .file-cta,.file.is-black.is-hovered .file-cta{background-color:#040404;border-color:transparent;color:#fff}/* line 39, src/assets/sass/sass/form/file.sass */.file.is-black:focus .file-cta,.file.is-black.is-focused .file-cta{border-color:transparent;-webkit-box-shadow:0 0 0.5em rgba(10,10,10,0.25);box-shadow:0 0 0.5em rgba(10,10,10,0.25);color:#fff}/* line 45, src/assets/sass/sass/form/file.sass */.file.is-black:active .file-cta,.file.is-black.is-active .file-cta{background-color:#000;border-color:transparent;color:#fff}/* line 27, src/assets/sass/sass/form/file.sass */.file.is-light .file-cta{background-color:#f5f5f5;border-color:transparent;color:rgba(0,0,0,0.7)}/* line 33, src/assets/sass/sass/form/file.sass */.file.is-light:hover .file-cta,.file.is-light.is-hovered .file-cta{background-color:#eee;border-color:transparent;color:rgba(0,0,0,0.7)}/* line 39, src/assets/sass/sass/form/file.sass */.file.is-light:focus .file-cta,.file.is-light.is-focused .file-cta{border-color:transparent;-webkit-box-shadow:0 0 0.5em rgba(245,245,245,0.25);box-shadow:0 0 0.5em rgba(245,245,245,0.25);color:rgba(0,0,0,0.7)}/* line 45, src/assets/sass/sass/form/file.sass */.file.is-light:active .file-cta,.file.is-light.is-active .file-cta{background-color:#e8e8e8;border-color:transparent;color:rgba(0,0,0,0.7)}/* line 27, src/assets/sass/sass/form/file.sass */.file.is-dark .file-cta{background-color:#363636;border-color:transparent;color:#fff}/* line 33, src/assets/sass/sass/form/file.sass */.file.is-dark:hover .file-cta,.file.is-dark.is-hovered .file-cta{background-color:#2f2f2f;border-color:transparent;color:#fff}/* line 39, src/assets/sass/sass/form/file.sass */.file.is-dark:focus .file-cta,.file.is-dark.is-focused .file-cta{border-color:transparent;-webkit-box-shadow:0 0 0.5em rgba(54,54,54,0.25);box-shadow:0 0 0.5em rgba(54,54,54,0.25);color:#fff}/* line 45, src/assets/sass/sass/form/file.sass */.file.is-dark:active .file-cta,.file.is-dark.is-active .file-cta{background-color:#292929;border-color:transparent;color:#fff}/* line 27, src/assets/sass/sass/form/file.sass */.file.is-primary .file-cta{background-color:#00d1b2;border-color:transparent;color:#fff}/* line 33, src/assets/sass/sass/form/file.sass */.file.is-primary:hover .file-cta,.file.is-primary.is-hovered .file-cta{background-color:#00c4a7;border-color:transparent;color:#fff}/* line 39, src/assets/sass/sass/form/file.sass */.file.is-primary:focus .file-cta,.file.is-primary.is-focused .file-cta{border-color:transparent;-webkit-box-shadow:0 0 0.5em rgba(0,209,178,0.25);box-shadow:0 0 0.5em rgba(0,209,178,0.25);color:#fff}/* line 45, src/assets/sass/sass/form/file.sass */.file.is-primary:active .file-cta,.file.is-primary.is-active .file-cta{background-color:#00b89c;border-color:transparent;color:#fff}/* line 27, src/assets/sass/sass/form/file.sass */.file.is-link .file-cta{background-color:#3273dc;border-color:transparent;color:#fff}/* line 33, src/assets/sass/sass/form/file.sass */.file.is-link:hover .file-cta,.file.is-link.is-hovered .file-cta{background-color:#276cda;border-color:transparent;color:#fff}/* line 39, src/assets/sass/sass/form/file.sass */.file.is-link:focus .file-cta,.file.is-link.is-focused .file-cta{border-color:transparent;-webkit-box-shadow:0 0 0.5em rgba(50,115,220,0.25);box-shadow:0 0 0.5em rgba(50,115,220,0.25);color:#fff}/* line 45, src/assets/sass/sass/form/file.sass */.file.is-link:active .file-cta,.file.is-link.is-active .file-cta{background-color:#2366d1;border-color:transparent;color:#fff}/* line 27, src/assets/sass/sass/form/file.sass */.file.is-info .file-cta{background-color:#3298dc;border-color:transparent;color:#fff}/* line 33, src/assets/sass/sass/form/file.sass */.file.is-info:hover .file-cta,.file.is-info.is-hovered .file-cta{background-color:#2793da;border-color:transparent;color:#fff}/* line 39, src/assets/sass/sass/form/file.sass */.file.is-info:focus .file-cta,.file.is-info.is-focused .file-cta{border-color:transparent;-webkit-box-shadow:0 0 0.5em rgba(50,152,220,0.25);box-shadow:0 0 0.5em rgba(50,152,220,0.25);color:#fff}/* line 45, src/assets/sass/sass/form/file.sass */.file.is-info:active .file-cta,.file.is-info.is-active .file-cta{background-color:#238cd1;border-color:transparent;color:#fff}/* line 27, src/assets/sass/sass/form/file.sass */.file.is-success .file-cta{background-color:#48c774;border-color:transparent;color:#fff}/* line 33, src/assets/sass/sass/form/file.sass */.file.is-success:hover .file-cta,.file.is-success.is-hovered .file-cta{background-color:#3ec46d;border-color:transparent;color:#fff}/* line 39, src/assets/sass/sass/form/file.sass */.file.is-success:focus .file-cta,.file.is-success.is-focused .file-cta{border-color:transparent;-webkit-box-shadow:0 0 0.5em rgba(72,199,116,0.25);box-shadow:0 0 0.5em rgba(72,199,116,0.25);color:#fff}/* line 45, src/assets/sass/sass/form/file.sass */.file.is-success:active .file-cta,.file.is-success.is-active .file-cta{background-color:#3abb67;border-color:transparent;color:#fff}/* line 27, src/assets/sass/sass/form/file.sass */.file.is-warning .file-cta{background-color:#ffdd57;border-color:transparent;color:rgba(0,0,0,0.7)}/* line 33, src/assets/sass/sass/form/file.sass */.file.is-warning:hover .file-cta,.file.is-warning.is-hovered .file-cta{background-color:#ffdb4a;border-color:transparent;color:rgba(0,0,0,0.7)}/* line 39, src/assets/sass/sass/form/file.sass */.file.is-warning:focus .file-cta,.file.is-warning.is-focused .file-cta{border-color:transparent;-webkit-box-shadow:0 0 0.5em rgba(255,221,87,0.25);box-shadow:0 0 0.5em rgba(255,221,87,0.25);color:rgba(0,0,0,0.7)}/* line 45, src/assets/sass/sass/form/file.sass */.file.is-warning:active .file-cta,.file.is-warning.is-active .file-cta{background-color:#ffd83d;border-color:transparent;color:rgba(0,0,0,0.7)}/* line 27, src/assets/sass/sass/form/file.sass */.file.is-danger .file-cta{background-color:#f14668;border-color:transparent;color:#fff}/* line 33, src/assets/sass/sass/form/file.sass */.file.is-danger:hover .file-cta,.file.is-danger.is-hovered .file-cta{background-color:#f03a5f;border-color:transparent;color:#fff}/* line 39, src/assets/sass/sass/form/file.sass */.file.is-danger:focus .file-cta,.file.is-danger.is-focused .file-cta{border-color:transparent;-webkit-box-shadow:0 0 0.5em rgba(241,70,104,0.25);box-shadow:0 0 0.5em rgba(241,70,104,0.25);color:#fff}/* line 45, src/assets/sass/sass/form/file.sass */.file.is-danger:active .file-cta,.file.is-danger.is-active .file-cta{background-color:#ef2e55;border-color:transparent;color:#fff}/* line 50, src/assets/sass/sass/form/file.sass */.file.is-small{font-size:.75rem}/* line 52, src/assets/sass/sass/form/file.sass */.file.is-medium{font-size:1.25rem}/* line 55, src/assets/sass/sass/form/file.sass */.file.is-medium .file-icon .fa{font-size:21px}/* line 57, src/assets/sass/sass/form/file.sass */.file.is-large{font-size:1.5rem}/* line 60, src/assets/sass/sass/form/file.sass */.file.is-large .file-icon .fa{font-size:28px}/* line 64, src/assets/sass/sass/form/file.sass */.file.has-name .file-cta{border-bottom-right-radius:0;border-top-right-radius:0}/* line 67, src/assets/sass/sass/form/file.sass */.file.has-name .file-name{border-bottom-left-radius:0;border-top-left-radius:0}/* line 71, src/assets/sass/sass/form/file.sass */.file.has-name.is-empty .file-cta{border-radius:4px}/* line 73, src/assets/sass/sass/form/file.sass */.file.has-name.is-empty .file-name{display:none}/* line 76, src/assets/sass/sass/form/file.sass */.file.is-boxed .file-label{-webkit-box-orient:vertical;-webkit-box-direction:normal;-ms-flex-direction:column;flex-direction:column}/* line 78, src/assets/sass/sass/form/file.sass */.file.is-boxed .file-cta{-webkit-box-orient:vertical;-webkit-box-direction:normal;-ms-flex-direction:column;flex-direction:column;height:auto;padding:1em 3em}/* line 82, src/assets/sass/sass/form/file.sass */.file.is-boxed .file-name{border-width:0 1px 1px}/* line 84, src/assets/sass/sass/form/file.sass */.file.is-boxed .file-icon{height:1.5em;width:1.5em}/* line 87, src/assets/sass/sass/form/file.sass */.file.is-boxed .file-icon .fa{font-size:21px}/* line 90, src/assets/sass/sass/form/file.sass */.file.is-boxed.is-small .file-icon .fa{font-size:14px}/* line 93, src/assets/sass/sass/form/file.sass */.file.is-boxed.is-medium .file-icon .fa{font-size:28px}/* line 96, src/assets/sass/sass/form/file.sass */.file.is-boxed.is-large .file-icon .fa{font-size:35px}/* line 99, src/assets/sass/sass/form/file.sass */.file.is-boxed.has-name .file-cta{border-radius:4px 4px 0 0}/* line 101, src/assets/sass/sass/form/file.sass */.file.is-boxed.has-name .file-name{border-radius:0 0 4px 4px;border-width:0 1px 1px}/* line 104, src/assets/sass/sass/form/file.sass */.file.is-centered{-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center}/* line 107, src/assets/sass/sass/form/file.sass */.file.is-fullwidth .file-label{width:100%}/* line 109, src/assets/sass/sass/form/file.sass */.file.is-fullwidth .file-name{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;max-width:none}/* line 112, src/assets/sass/sass/form/file.sass */.file.is-right{-webkit-box-pack:end;-ms-flex-pack:end;justify-content:flex-end}/* line 114, src/assets/sass/sass/form/file.sass */.file.is-right .file-cta{border-radius:0 4px 4px 0}/* line 116, src/assets/sass/sass/form/file.sass */.file.is-right .file-name{border-radius:4px 0 0 4px;border-width:1px 0 1px 1px;-webkit-box-ordinal-group:0;-ms-flex-order:-1;order:-1}/* line 121, src/assets/sass/sass/form/file.sass */.file-label{-webkit-box-align:stretch;-ms-flex-align:stretch;align-items:stretch;display:-webkit-box;display:-ms-flexbox;display:flex;cursor:pointer;-webkit-box-pack:start;-ms-flex-pack:start;justify-content:flex-start;overflow:hidden;position:relative}/* line 129, src/assets/sass/sass/form/file.sass */.file-label:hover .file-cta{background-color:#eee;color:#363636}/* line 132, src/assets/sass/sass/form/file.sass */.file-label:hover .file-name{border-color:#d5d5d5}/* line 135, src/assets/sass/sass/form/file.sass */.file-label:active .file-cta{background-color:#e8e8e8;color:#363636}/* line 138, src/assets/sass/sass/form/file.sass */.file-label:active .file-name{border-color:#cfcfcf}/* line 141, src/assets/sass/sass/form/file.sass */.file-input{height:100%;left:0;opacity:0;outline:none;position:absolute;top:0;width:100%}/* line 150, src/assets/sass/sass/form/file.sass */.file-cta,.file-name{border-color:#dbdbdb;border-radius:4px;font-size:1em;padding-left:1em;padding-right:1em;white-space:nowrap}/* line 160, src/assets/sass/sass/form/file.sass */.file-cta{background-color:#f5f5f5;color:#4a4a4a}/* line 164, src/assets/sass/sass/form/file.sass */.file-name{border-color:#dbdbdb;border-style:solid;border-width:1px 1px 1px 0;display:block;max-width:16em;overflow:hidden;text-align:inherit;text-overflow:ellipsis}/* line 174, src/assets/sass/sass/form/file.sass */.file-icon{-webkit-box-align:center;-ms-flex-align:center;align-items:center;display:-webkit-box;display:-ms-flexbox;display:flex;height:1em;-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center;margin-right:.5em;width:1em}/* line 181, src/assets/sass/sass/form/file.sass */.file-icon .fa{font-size:14px}/* line 8, src/assets/sass/sass/form/tools.sass */.label{color:#363636;display:block;font-size:1rem;font-weight:700}/* line 13, src/assets/sass/sass/form/tools.sass */.label:not(:last-child){margin-bottom:0.5em}/* line 16, src/assets/sass/sass/form/tools.sass */.label.is-small{font-size:.75rem}/* line 18, src/assets/sass/sass/form/tools.sass */.label.is-medium{font-size:1.25rem}/* line 20, src/assets/sass/sass/form/tools.sass */.label.is-large{font-size:1.5rem}/* line 23, src/assets/sass/sass/form/tools.sass */.help{display:block;font-size:.75rem;margin-top:0.25rem}/* line 29, src/assets/sass/sass/form/tools.sass */.help.is-white{color:#fff}/* line 29, src/assets/sass/sass/form/tools.sass */.help.is-black{color:#0a0a0a}/* line 29, src/assets/sass/sass/form/tools.sass */.help.is-light{color:#f5f5f5}/* line 29, src/assets/sass/sass/form/tools.sass */.help.is-dark{color:#363636}/* line 29, src/assets/sass/sass/form/tools.sass */.help.is-primary{color:#00d1b2}/* line 29, src/assets/sass/sass/form/tools.sass */.help.is-link{color:#3273dc}/* line 29, src/assets/sass/sass/form/tools.sass */.help.is-info{color:#3298dc}/* line 29, src/assets/sass/sass/form/tools.sass */.help.is-success{color:#48c774}/* line 29, src/assets/sass/sass/form/tools.sass */.help.is-warning{color:#ffdd57}/* line 29, src/assets/sass/sass/form/tools.sass */.help.is-danger{color:#f14668}/* line 35, src/assets/sass/sass/form/tools.sass */.field:not(:last-child){margin-bottom:0.75rem}/* line 38, src/assets/sass/sass/form/tools.sass */.field.has-addons{display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-pack:start;-ms-flex-pack:start;justify-content:flex-start}/* line 42, src/assets/sass/sass/form/tools.sass */.field.has-addons .control:not(:last-child){margin-right:-1px}/* line 45, src/assets/sass/sass/form/tools.sass */.field.has-addons .control:not(:first-child):not(:last-child) .button,.field.has-addons .control:not(:first-child):not(:last-child) .input,.field.has-addons .control:not(:first-child):not(:last-child) .select select{border-radius:0}/* line 50, src/assets/sass/sass/form/tools.sass */.field.has-addons .control:first-child:not(:only-child) .button,.field.has-addons .control:first-child:not(:only-child) .input,.field.has-addons .control:first-child:not(:only-child) .select select{border-bottom-right-radius:0;border-top-right-radius:0}/* line 60, src/assets/sass/sass/form/tools.sass */.field.has-addons .control:last-child:not(:only-child) .button,.field.has-addons .control:last-child:not(:only-child) .input,.field.has-addons .control:last-child:not(:only-child) .select select{border-bottom-left-radius:0;border-top-left-radius:0}/* line 73, src/assets/sass/sass/form/tools.sass */.field.has-addons .control .button:not([disabled]):hover,.field.has-addons .control .button:not([disabled]).is-hovered,.field.has-addons .control .input:not([disabled]):hover,.field.has-addons .control .input:not([disabled]).is-hovered,.field.has-addons .control .select select:not([disabled]):hover,.field.has-addons .control .select select:not([disabled]).is-hovered{z-index:2}/* line 76, src/assets/sass/sass/form/tools.sass */.field.has-addons .control .button:not([disabled]):focus,.field.has-addons .control .button:not([disabled]).is-focused,.field.has-addons .control .button:not([disabled]):active,.field.has-addons .control .button:not([disabled]).is-active,.field.has-addons .control .input:not([disabled]):focus,.field.has-addons .control .input:not([disabled]).is-focused,.field.has-addons .control .input:not([disabled]):active,.field.has-addons .control .input:not([disabled]).is-active,.field.has-addons .control .select select:not([disabled]):focus,.field.has-addons .control .select select:not([disabled]).is-focused,.field.has-addons .control .select select:not([disabled]):active,.field.has-addons .control .select select:not([disabled]).is-active{z-index:3}/* line 81, src/assets/sass/sass/form/tools.sass */.field.has-addons .control .button:not([disabled]):focus:hover,.field.has-addons .control .button:not([disabled]).is-focused:hover,.field.has-addons .control .button:not([disabled]):active:hover,.field.has-addons .control .button:not([disabled]).is-active:hover,.field.has-addons .control .input:not([disabled]):focus:hover,.field.has-addons .control .input:not([disabled]).is-focused:hover,.field.has-addons .control .input:not([disabled]):active:hover,.field.has-addons .control .input:not([disabled]).is-active:hover,.field.has-addons .control .select select:not([disabled]):focus:hover,.field.has-addons .control .select select:not([disabled]).is-focused:hover,.field.has-addons .control .select select:not([disabled]):active:hover,.field.has-addons .control .select select:not([disabled]).is-active:hover{z-index:4}/* line 83, src/assets/sass/sass/form/tools.sass */.field.has-addons .control.is-expanded{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:1;flex-shrink:1}/* line 86, src/assets/sass/sass/form/tools.sass */.field.has-addons.has-addons-centered{-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center}/* line 88, src/assets/sass/sass/form/tools.sass */.field.has-addons.has-addons-right{-webkit-box-pack:end;-ms-flex-pack:end;justify-content:flex-end}/* line 91, src/assets/sass/sass/form/tools.sass */.field.has-addons.has-addons-fullwidth .control{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:0;flex-shrink:0}/* line 94, src/assets/sass/sass/form/tools.sass */.field.is-grouped{display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-pack:start;-ms-flex-pack:start;justify-content:flex-start}/* line 97, src/assets/sass/sass/form/tools.sass */.field.is-grouped>.control{-ms-flex-negative:0;flex-shrink:0}/* line 99, src/assets/sass/sass/form/tools.sass */.field.is-grouped>.control:not(:last-child){margin-bottom:0;margin-right:.75rem}/* line 102, src/assets/sass/sass/form/tools.sass */.field.is-grouped>.control.is-expanded{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:1;flex-shrink:1}/* line 105, src/assets/sass/sass/form/tools.sass */.field.is-grouped.is-grouped-centered{-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center}/* line 107, src/assets/sass/sass/form/tools.sass */.field.is-grouped.is-grouped-right{-webkit-box-pack:end;-ms-flex-pack:end;justify-content:flex-end}/* line 109, src/assets/sass/sass/form/tools.sass */.field.is-grouped.is-grouped-multiline{-ms-flex-wrap:wrap;flex-wrap:wrap}/* line 112, src/assets/sass/sass/form/tools.sass */.field.is-grouped.is-grouped-multiline>.control:last-child,.field.is-grouped.is-grouped-multiline>.control:not(:last-child){margin-bottom:0.75rem}/* line 115, src/assets/sass/sass/form/tools.sass */.field.is-grouped.is-grouped-multiline:last-child{margin-bottom:-0.75rem}/* line 117, src/assets/sass/sass/form/tools.sass */.field.is-grouped.is-grouped-multiline:not(:last-child){margin-bottom:0}@media screen and (min-width: 769px), print{/* line 119, src/assets/sass/sass/form/tools.sass */.field.is-horizontal{display:-webkit-box;display:-ms-flexbox;display:flex}}/* line 124, src/assets/sass/sass/form/tools.sass */.field-label .label{font-size:inherit}@media screen and (max-width: 768px){/* line 123, src/assets/sass/sass/form/tools.sass */.field-label{margin-bottom:0.5rem}}@media screen and (min-width: 769px), print{/* line 123, src/assets/sass/sass/form/tools.sass */.field-label{-ms-flex-preferred-size:0;flex-basis:0;-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:0;flex-shrink:0;margin-right:1.5rem;text-align:right}/* line 134, src/assets/sass/sass/form/tools.sass */.field-label.is-small{font-size:.75rem;padding-top:0.375em}/* line 137, src/assets/sass/sass/form/tools.sass */.field-label.is-normal{padding-top:0.375em}/* line 139, src/assets/sass/sass/form/tools.sass */.field-label.is-medium{font-size:1.25rem;padding-top:0.375em}/* line 142, src/assets/sass/sass/form/tools.sass */.field-label.is-large{font-size:1.5rem;padding-top:0.375em}}/* line 147, src/assets/sass/sass/form/tools.sass */.field-body .field .field{margin-bottom:0}@media screen and (min-width: 769px), print{/* line 146, src/assets/sass/sass/form/tools.sass */.field-body{display:-webkit-box;display:-ms-flexbox;display:flex;-ms-flex-preferred-size:0;flex-basis:0;-webkit-box-flex:5;-ms-flex-positive:5;flex-grow:5;-ms-flex-negative:1;flex-shrink:1}/* line 154, src/assets/sass/sass/form/tools.sass */.field-body .field{margin-bottom:0}/* line 156, src/assets/sass/sass/form/tools.sass */.field-body>.field{-ms-flex-negative:1;flex-shrink:1}/* line 158, src/assets/sass/sass/form/tools.sass */.field-body>.field:not(.is-narrow){-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1}/* line 160, src/assets/sass/sass/form/tools.sass */.field-body>.field:not(:last-child){margin-right:.75rem}}/* line 163, src/assets/sass/sass/form/tools.sass */.control{-webkit-box-sizing:border-box;box-sizing:border-box;clear:both;font-size:1rem;position:relative;text-align:inherit}/* line 175, src/assets/sass/sass/form/tools.sass */.control.has-icons-left .input:focus ~ .icon,.control.has-icons-left .select:focus ~ .icon,.control.has-icons-right .input:focus ~ .icon,.control.has-icons-right .select:focus ~ .icon{color:#4a4a4a}/* line 177, src/assets/sass/sass/form/tools.sass */.control.has-icons-left .input.is-small ~ .icon,.control.has-icons-left .select.is-small ~ .icon,.control.has-icons-right .input.is-small ~ .icon,.control.has-icons-right .select.is-small ~ .icon{font-size:.75rem}/* line 179, src/assets/sass/sass/form/tools.sass */.control.has-icons-left .input.is-medium ~ .icon,.control.has-icons-left .select.is-medium ~ .icon,.control.has-icons-right .input.is-medium ~ .icon,.control.has-icons-right .select.is-medium ~ .icon{font-size:1.25rem}/* line 181, src/assets/sass/sass/form/tools.sass */.control.has-icons-left .input.is-large ~ .icon,.control.has-icons-left .select.is-large ~ .icon,.control.has-icons-right .input.is-large ~ .icon,.control.has-icons-right .select.is-large ~ .icon{font-size:1.5rem}/* line 183, src/assets/sass/sass/form/tools.sass */.control.has-icons-left .icon,.control.has-icons-right .icon{color:#dbdbdb;height:2.5em;pointer-events:none;position:absolute;top:0;width:2.5em;z-index:4}/* line 192, src/assets/sass/sass/form/tools.sass */.control.has-icons-left .input,.control.has-icons-left .select select{padding-left:2.5em}/* line 195, src/assets/sass/sass/form/tools.sass */.control.has-icons-left .icon.is-left{left:0}/* line 198, src/assets/sass/sass/form/tools.sass */.control.has-icons-right .input,.control.has-icons-right .select select{padding-right:2.5em}/* line 201, src/assets/sass/sass/form/tools.sass */.control.has-icons-right .icon.is-right{right:0}/* line 204, src/assets/sass/sass/form/tools.sass */.control.is-loading::after{position:absolute !important;right:.625em;top:0.625em;z-index:4}/* line 210, src/assets/sass/sass/form/tools.sass */.control.is-loading.is-small:after{font-size:.75rem}/* line 212, src/assets/sass/sass/form/tools.sass */.control.is-loading.is-medium:after{font-size:1.25rem}/* line 214, src/assets/sass/sass/form/tools.sass */.control.is-loading.is-large:after{font-size:1.5rem}/* line 10, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb{font-size:1rem;white-space:nowrap}/* line 15, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb a{-webkit-box-align:center;-ms-flex-align:center;align-items:center;color:#3273dc;display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center;padding:0 .75em}/* line 21, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb a:hover{color:#363636}/* line 23, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb li{-webkit-box-align:center;-ms-flex-align:center;align-items:center;display:-webkit-box;display:-ms-flexbox;display:flex}/* line 26, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb li:first-child a{padding-left:0}/* line 29, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb li.is-active a{color:#363636;cursor:default;pointer-events:none}/* line 33, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb li+li::before{color:#b5b5b5;content:"\0002f"}/* line 36, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb ul,.breadcrumb ol{-webkit-box-align:start;-ms-flex-align:start;align-items:flex-start;display:-webkit-box;display:-ms-flexbox;display:flex;-ms-flex-wrap:wrap;flex-wrap:wrap;-webkit-box-pack:start;-ms-flex-pack:start;justify-content:flex-start}/* line 43, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb .icon:first-child{margin-right:.5em}/* line 45, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb .icon:last-child{margin-left:.5em}/* line 49, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb.is-centered ol,.breadcrumb.is-centered ul{-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center}/* line 53, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb.is-right ol,.breadcrumb.is-right ul{-webkit-box-pack:end;-ms-flex-pack:end;justify-content:flex-end}/* line 57, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb.is-small{font-size:.75rem}/* line 59, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb.is-medium{font-size:1.25rem}/* line 61, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb.is-large{font-size:1.5rem}/* line 65, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb.has-arrow-separator li+li::before{content:"\02192"}/* line 68, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb.has-bullet-separator li+li::before{content:"\02022"}/* line 71, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb.has-dot-separator li+li::before{content:"\000b7"}/* line 74, src/assets/sass/sass/components/breadcrumb.sass */.breadcrumb.has-succeeds-separator li+li::before{content:"\0227B"}/* line 22, src/assets/sass/sass/components/card.sass */.card{background-color:#fff;border-radius:.25rem;-webkit-box-shadow:0 0.5em 1em -0.125em rgba(10,10,10,0.1),0 0px 0 1px rgba(10,10,10,0.02);box-shadow:0 0.5em 1em -0.125em rgba(10,10,10,0.1),0 0px 0 1px rgba(10,10,10,0.02);color:#4a4a4a;max-width:100%;overflow:hidden;position:relative}/* line 31, src/assets/sass/sass/components/card.sass */.card-header{background-color:rgba(0,0,0,0);-webkit-box-align:stretch;-ms-flex-align:stretch;align-items:stretch;-webkit-box-shadow:0 0.125em 0.25em rgba(10,10,10,0.1);box-shadow:0 0.125em 0.25em rgba(10,10,10,0.1);display:-webkit-box;display:-ms-flexbox;display:flex}/* line 37, src/assets/sass/sass/components/card.sass */.card-header-title{-webkit-box-align:center;-ms-flex-align:center;align-items:center;color:#363636;display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;font-weight:700;padding:0.75rem 1rem}/* line 44, src/assets/sass/sass/components/card.sass */.card-header-title.is-centered{-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center}/* line 47, src/assets/sass/sass/components/card.sass */.card-header-icon{-webkit-box-align:center;-ms-flex-align:center;align-items:center;cursor:pointer;display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center;padding:0.75rem 1rem}/* line 54, src/assets/sass/sass/components/card.sass */.card-image{display:block;position:relative}/* line 58, src/assets/sass/sass/components/card.sass */.card-content{background-color:rgba(0,0,0,0);padding:1.5rem}/* line 62, src/assets/sass/sass/components/card.sass */.card-footer{background-color:rgba(0,0,0,0);border-top:1px solid #ededed;-webkit-box-align:stretch;-ms-flex-align:stretch;align-items:stretch;display:-webkit-box;display:-ms-flexbox;display:flex}/* line 68, src/assets/sass/sass/components/card.sass */.card-footer-item{-webkit-box-align:center;-ms-flex-align:center;align-items:center;display:-webkit-box;display:-ms-flexbox;display:flex;-ms-flex-preferred-size:0;flex-basis:0;-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:0;flex-shrink:0;-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center;padding:.75rem}/* line 76, src/assets/sass/sass/components/card.sass */.card-footer-item:not(:last-child){border-right:1px solid #ededed}/* line 82, src/assets/sass/sass/components/card.sass */.card .media:not(:last-child){margin-bottom:1.5rem}/* line 20, src/assets/sass/sass/components/dropdown.sass */.dropdown{display:-webkit-inline-box;display:-ms-inline-flexbox;display:inline-flex;position:relative;vertical-align:top}/* line 26, src/assets/sass/sass/components/dropdown.sass */.dropdown.is-active .dropdown-menu,.dropdown.is-hoverable:hover .dropdown-menu{display:block}/* line 29, src/assets/sass/sass/components/dropdown.sass */.dropdown.is-right .dropdown-menu{left:auto;right:0}/* line 33, src/assets/sass/sass/components/dropdown.sass */.dropdown.is-up .dropdown-menu{bottom:100%;padding-bottom:4px;padding-top:initial;top:auto}/* line 39, src/assets/sass/sass/components/dropdown.sass */.dropdown-menu{display:none;left:0;min-width:12rem;padding-top:4px;position:absolute;top:100%;z-index:20}/* line 48, src/assets/sass/sass/components/dropdown.sass */.dropdown-content{background-color:#fff;border-radius:4px;-webkit-box-shadow:0 0.5em 1em -0.125em rgba(10,10,10,0.1),0 0px 0 1px rgba(10,10,10,0.02);box-shadow:0 0.5em 1em -0.125em rgba(10,10,10,0.1),0 0px 0 1px rgba(10,10,10,0.02);padding-bottom:.5rem;padding-top:.5rem}/* line 55, src/assets/sass/sass/components/dropdown.sass */.dropdown-item{color:#4a4a4a;display:block;font-size:0.875rem;line-height:1.5;padding:0.375rem 1rem;position:relative}/* line 63, src/assets/sass/sass/components/dropdown.sass */a.dropdown-item,button.dropdown-item{padding-right:3rem;text-align:inherit;white-space:nowrap;width:100%}/* line 69, src/assets/sass/sass/components/dropdown.sass */a.dropdown-item:hover,button.dropdown-item:hover{background-color:#f5f5f5;color:#0a0a0a}/* line 72, src/assets/sass/sass/components/dropdown.sass */a.dropdown-item.is-active,button.dropdown-item.is-active{background-color:#3273dc;color:#fff}/* line 76, src/assets/sass/sass/components/dropdown.sass */.dropdown-divider{background-color:#ededed;border:none;display:block;height:1px;margin:0.5rem 0}/* line 3, src/assets/sass/sass/components/level.sass */.level{-webkit-box-align:center;-ms-flex-align:center;align-items:center;-webkit-box-pack:justify;-ms-flex-pack:justify;justify-content:space-between}/* line 7, src/assets/sass/sass/components/level.sass */.level code{border-radius:4px}/* line 9, src/assets/sass/sass/components/level.sass */.level img{display:inline-block;vertical-align:top}/* line 13, src/assets/sass/sass/components/level.sass */.level.is-mobile{display:-webkit-box;display:-ms-flexbox;display:flex}/* line 15, src/assets/sass/sass/components/level.sass */.level.is-mobile .level-left,.level.is-mobile .level-right{display:-webkit-box;display:-ms-flexbox;display:flex}/* line 18, src/assets/sass/sass/components/level.sass */.level.is-mobile .level-left+.level-right{margin-top:0}/* line 21, src/assets/sass/sass/components/level.sass */.level.is-mobile .level-item:not(:last-child){margin-bottom:0;margin-right:.75rem}/* line 24, src/assets/sass/sass/components/level.sass */.level.is-mobile .level-item:not(.is-narrow){-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1}@media screen and (min-width: 769px), print{/* line 3, src/assets/sass/sass/components/level.sass */.level{display:-webkit-box;display:-ms-flexbox;display:flex}/* line 30, src/assets/sass/sass/components/level.sass */.level>.level-item:not(.is-narrow){-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1}}/* line 33, src/assets/sass/sass/components/level.sass */.level-item{-webkit-box-align:center;-ms-flex-align:center;align-items:center;display:-webkit-box;display:-ms-flexbox;display:flex;-ms-flex-preferred-size:auto;flex-basis:auto;-webkit-box-flex:0;-ms-flex-positive:0;flex-grow:0;-ms-flex-negative:0;flex-shrink:0;-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center}/* line 40, src/assets/sass/sass/components/level.sass */.level-item .title,.level-item .subtitle{margin-bottom:0}@media screen and (max-width: 768px){/* line 45, src/assets/sass/sass/components/level.sass */.level-item:not(:last-child){margin-bottom:.75rem}}/* line 48, src/assets/sass/sass/components/level.sass */.level-left,.level-right{-ms-flex-preferred-size:auto;flex-basis:auto;-webkit-box-flex:0;-ms-flex-positive:0;flex-grow:0;-ms-flex-negative:0;flex-shrink:0}/* line 55, src/assets/sass/sass/components/level.sass */.level-left .level-item.is-flexible,.level-right .level-item.is-flexible{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1}@media screen and (min-width: 769px), print{/* line 59, src/assets/sass/sass/components/level.sass */.level-left .level-item:not(:last-child),.level-right .level-item:not(:last-child){margin-right:.75rem}}/* line 62, src/assets/sass/sass/components/level.sass */.level-left{-webkit-box-align:center;-ms-flex-align:center;align-items:center;-webkit-box-pack:start;-ms-flex-pack:start;justify-content:flex-start}@media screen and (max-width: 768px){/* line 67, src/assets/sass/sass/components/level.sass */.level-left+.level-right{margin-top:1.5rem}}@media screen and (min-width: 769px), print{/* line 62, src/assets/sass/sass/components/level.sass */.level-left{display:-webkit-box;display:-ms-flexbox;display:flex}}/* line 72, src/assets/sass/sass/components/level.sass */.level-right{-webkit-box-align:center;-ms-flex-align:center;align-items:center;-webkit-box-pack:end;-ms-flex-pack:end;justify-content:flex-end}@media screen and (min-width: 769px), print{/* line 72, src/assets/sass/sass/components/level.sass */.level-right{display:-webkit-box;display:-ms-flexbox;display:flex}}/* line 5, src/assets/sass/sass/components/media.sass */.media{-webkit-box-align:start;-ms-flex-align:start;align-items:flex-start;display:-webkit-box;display:-ms-flexbox;display:flex;text-align:inherit}/* line 9, src/assets/sass/sass/components/media.sass */.media .content:not(:last-child){margin-bottom:0.75rem}/* line 11, src/assets/sass/sass/components/media.sass */.media .media{border-top:1px solid rgba(219,219,219,0.5);display:-webkit-box;display:-ms-flexbox;display:flex;padding-top:0.75rem}/* line 15, src/assets/sass/sass/components/media.sass */.media .media .content:not(:last-child),.media .media .control:not(:last-child){margin-bottom:0.5rem}/* line 18, src/assets/sass/sass/components/media.sass */.media .media .media{padding-top:0.5rem}/* line 20, src/assets/sass/sass/components/media.sass */.media .media .media+.media{margin-top:0.5rem}/* line 22, src/assets/sass/sass/components/media.sass */.media+.media{border-top:1px solid rgba(219,219,219,0.5);margin-top:1rem;padding-top:1rem}/* line 28, src/assets/sass/sass/components/media.sass */.media.is-large+.media{margin-top:1.5rem;padding-top:1.5rem}/* line 32, src/assets/sass/sass/components/media.sass */.media-left,.media-right{-ms-flex-preferred-size:auto;flex-basis:auto;-webkit-box-flex:0;-ms-flex-positive:0;flex-grow:0;-ms-flex-negative:0;flex-shrink:0}/* line 38, src/assets/sass/sass/components/media.sass */.media-left{margin-right:1rem}/* line 41, src/assets/sass/sass/components/media.sass */.media-right{margin-left:1rem}/* line 44, src/assets/sass/sass/components/media.sass */.media-content{-ms-flex-preferred-size:auto;flex-basis:auto;-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:1;flex-shrink:1;text-align:inherit}@media screen and (max-width: 768px){/* line 51, src/assets/sass/sass/components/media.sass */.media-content{overflow-x:auto}}/* line 19, src/assets/sass/sass/components/menu.sass */.menu{font-size:1rem}/* line 22, src/assets/sass/sass/components/menu.sass */.menu.is-small{font-size:.75rem}/* line 24, src/assets/sass/sass/components/menu.sass */.menu.is-medium{font-size:1.25rem}/* line 26, src/assets/sass/sass/components/menu.sass */.menu.is-large{font-size:1.5rem}/* line 29, src/assets/sass/sass/components/menu.sass */.menu-list{line-height:1.25}/* line 31, src/assets/sass/sass/components/menu.sass */.menu-list a{border-radius:2px;color:#4a4a4a;display:block;padding:0.5em 0.75em}/* line 36, src/assets/sass/sass/components/menu.sass */.menu-list a:hover{background-color:#f5f5f5;color:#363636}/* line 40, src/assets/sass/sass/components/menu.sass */.menu-list a.is-active{background-color:#3273dc;color:#fff}/* line 44, src/assets/sass/sass/components/menu.sass */.menu-list li ul{border-left:1px solid #dbdbdb;margin:.75em;padding-left:.75em}/* line 49, src/assets/sass/sass/components/menu.sass */.menu-label{color:#7a7a7a;font-size:.75em;letter-spacing:.1em;text-transform:uppercase}/* line 54, src/assets/sass/sass/components/menu.sass */.menu-label:not(:first-child){margin-top:1em}/* line 56, src/assets/sass/sass/components/menu.sass */.menu-label:not(:last-child){margin-bottom:1em}/* line 22, src/assets/sass/sass/components/message.sass */.message{background-color:#f5f5f5;border-radius:4px;font-size:1rem}/* line 27, src/assets/sass/sass/components/message.sass */.message strong{color:currentColor}/* line 29, src/assets/sass/sass/components/message.sass */.message a:not(.button):not(.tag):not(.dropdown-item){color:currentColor;text-decoration:underline}/* line 33, src/assets/sass/sass/components/message.sass */.message.is-small{font-size:.75rem}/* line 35, src/assets/sass/sass/components/message.sass */.message.is-medium{font-size:1.25rem}/* line 37, src/assets/sass/sass/components/message.sass */.message.is-large{font-size:1.5rem}/* line 59, src/assets/sass/sass/components/message.sass */.message.is-white{background-color:#fff}/* line 61, src/assets/sass/sass/components/message.sass */.message.is-white .message-header{background-color:#fff;color:#0a0a0a}/* line 64, src/assets/sass/sass/components/message.sass */.message.is-white .message-body{border-color:#fff}/* line 59, src/assets/sass/sass/components/message.sass */.message.is-black{background-color:#fafafa}/* line 61, src/assets/sass/sass/components/message.sass */.message.is-black .message-header{background-color:#0a0a0a;color:#fff}/* line 64, src/assets/sass/sass/components/message.sass */.message.is-black .message-body{border-color:#0a0a0a}/* line 59, src/assets/sass/sass/components/message.sass */.message.is-light{background-color:#fafafa}/* line 61, src/assets/sass/sass/components/message.sass */.message.is-light .message-header{background-color:#f5f5f5;color:rgba(0,0,0,0.7)}/* line 64, src/assets/sass/sass/components/message.sass */.message.is-light .message-body{border-color:#f5f5f5}/* line 59, src/assets/sass/sass/components/message.sass */.message.is-dark{background-color:#fafafa}/* line 61, src/assets/sass/sass/components/message.sass */.message.is-dark .message-header{background-color:#363636;color:#fff}/* line 64, src/assets/sass/sass/components/message.sass */.message.is-dark .message-body{border-color:#363636}/* line 59, src/assets/sass/sass/components/message.sass */.message.is-primary{background-color:#ebfffc}/* line 61, src/assets/sass/sass/components/message.sass */.message.is-primary .message-header{background-color:#00d1b2;color:#fff}/* line 64, src/assets/sass/sass/components/message.sass */.message.is-primary .message-body{border-color:#00d1b2;color:#00947e}/* line 59, src/assets/sass/sass/components/message.sass */.message.is-link{background-color:#eef3fc}/* line 61, src/assets/sass/sass/components/message.sass */.message.is-link .message-header{background-color:#3273dc;color:#fff}/* line 64, src/assets/sass/sass/components/message.sass */.message.is-link .message-body{border-color:#3273dc;color:#2160c4}/* line 59, src/assets/sass/sass/components/message.sass */.message.is-info{background-color:#eef6fc}/* line 61, src/assets/sass/sass/components/message.sass */.message.is-info .message-header{background-color:#3298dc;color:#fff}/* line 64, src/assets/sass/sass/components/message.sass */.message.is-info .message-body{border-color:#3298dc;color:#1d72aa}/* line 59, src/assets/sass/sass/components/message.sass */.message.is-success{background-color:#effaf3}/* line 61, src/assets/sass/sass/components/message.sass */.message.is-success .message-header{background-color:#48c774;color:#fff}/* line 64, src/assets/sass/sass/components/message.sass */.message.is-success .message-body{border-color:#48c774;color:#257942}/* line 59, src/assets/sass/sass/components/message.sass */.message.is-warning{background-color:#fffbeb}/* line 61, src/assets/sass/sass/components/message.sass */.message.is-warning .message-header{background-color:#ffdd57;color:rgba(0,0,0,0.7)}/* line 64, src/assets/sass/sass/components/message.sass */.message.is-warning .message-body{border-color:#ffdd57;color:#947600}/* line 59, src/assets/sass/sass/components/message.sass */.message.is-danger{background-color:#feecf0}/* line 61, src/assets/sass/sass/components/message.sass */.message.is-danger .message-header{background-color:#f14668;color:#fff}/* line 64, src/assets/sass/sass/components/message.sass */.message.is-danger .message-body{border-color:#f14668;color:#cc0f35}/* line 68, src/assets/sass/sass/components/message.sass */.message-header{-webkit-box-align:center;-ms-flex-align:center;align-items:center;background-color:#4a4a4a;border-radius:4px 4px 0 0;color:#fff;display:-webkit-box;display:-ms-flexbox;display:flex;font-weight:700;-webkit-box-pack:justify;-ms-flex-pack:justify;justify-content:space-between;line-height:1.25;padding:0.75em 1em;position:relative}/* line 79, src/assets/sass/sass/components/message.sass */.message-header .delete{-webkit-box-flex:0;-ms-flex-positive:0;flex-grow:0;-ms-flex-negative:0;flex-shrink:0;margin-left:.75em}/* line 83, src/assets/sass/sass/components/message.sass */.message-header+.message-body{border-width:0;border-top-left-radius:0;border-top-right-radius:0}/* line 88, src/assets/sass/sass/components/message.sass */.message-body{border-color:#dbdbdb;border-radius:4px;border-style:solid;border-width:0 0 0 4px;color:#4a4a4a;padding:1.25em 1.5em}/* line 95, src/assets/sass/sass/components/message.sass */.message-body code,.message-body pre{background-color:#fff}/* line 98, src/assets/sass/sass/components/message.sass */.message-body pre code{background-color:rgba(0,0,0,0)}/* line 33, src/assets/sass/sass/components/modal.sass */.modal{-webkit-box-align:center;-ms-flex-align:center;align-items:center;display:none;-webkit-box-orient:vertical;-webkit-box-direction:normal;-ms-flex-direction:column;flex-direction:column;-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center;overflow:hidden;position:fixed;z-index:40}/* line 43, src/assets/sass/sass/components/modal.sass */.modal.is-active{display:-webkit-box;display:-ms-flexbox;display:flex}/* line 46, src/assets/sass/sass/components/modal.sass */.modal-background{background-color:rgba(10,10,10,0.86)}/* line 50, src/assets/sass/sass/components/modal.sass */.modal-content,.modal-card{margin:0 20px;max-height:calc(100vh - 160px);overflow:auto;position:relative;width:100%}@media screen and (min-width: 769px){/* line 50, src/assets/sass/sass/components/modal.sass */.modal-content,.modal-card{margin:0 auto;max-height:calc(100vh - 40px);width:640px}}/* line 63, src/assets/sass/sass/components/modal.sass */.modal-close{background:none;height:40px;position:fixed;right:20px;top:20px;width:40px}/* line 72, src/assets/sass/sass/components/modal.sass */.modal-card{display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-orient:vertical;-webkit-box-direction:normal;-ms-flex-direction:column;flex-direction:column;max-height:calc(100vh - 40px);overflow:hidden;-ms-overflow-y:visible}/* line 79, src/assets/sass/sass/components/modal.sass */.modal-card-head,.modal-card-foot{-webkit-box-align:center;-ms-flex-align:center;align-items:center;background-color:#f5f5f5;display:-webkit-box;display:-ms-flexbox;display:flex;-ms-flex-negative:0;flex-shrink:0;-webkit-box-pack:start;-ms-flex-pack:start;justify-content:flex-start;padding:20px;position:relative}/* line 89, src/assets/sass/sass/components/modal.sass */.modal-card-head{border-bottom:1px solid #dbdbdb;border-top-left-radius:6px;border-top-right-radius:6px}/* line 94, src/assets/sass/sass/components/modal.sass */.modal-card-title{color:#363636;-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:0;flex-shrink:0;font-size:1.5rem;line-height:1}/* line 101, src/assets/sass/sass/components/modal.sass */.modal-card-foot{border-bottom-left-radius:6px;border-bottom-right-radius:6px;border-top:1px solid #dbdbdb}/* line 106, src/assets/sass/sass/components/modal.sass */.modal-card-foot .button:not(:last-child){margin-right:.5em}/* line 109, src/assets/sass/sass/components/modal.sass */.modal-card-body{-webkit-overflow-scrolling:touch;background-color:#fff;-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:1;flex-shrink:1;overflow:auto;padding:20px}/* line 57, src/assets/sass/sass/components/navbar.sass */.navbar{background-color:#fff;min-height:3.25rem;position:relative;z-index:30}/* line 65, src/assets/sass/sass/components/navbar.sass */.navbar.is-white{background-color:#fff;color:#0a0a0a}/* line 69, src/assets/sass/sass/components/navbar.sass */.navbar.is-white .navbar-brand>.navbar-item,.navbar.is-white .navbar-brand .navbar-link{color:#0a0a0a}/* line 74, src/assets/sass/sass/components/navbar.sass */.navbar.is-white .navbar-brand>a.navbar-item:focus,.navbar.is-white .navbar-brand>a.navbar-item:hover,.navbar.is-white .navbar-brand>a.navbar-item.is-active,.navbar.is-white .navbar-brand .navbar-link:focus,.navbar.is-white .navbar-brand .navbar-link:hover,.navbar.is-white .navbar-brand .navbar-link.is-active{background-color:#f2f2f2;color:#0a0a0a}/* line 80, src/assets/sass/sass/components/navbar.sass */.navbar.is-white .navbar-brand .navbar-link::after{border-color:#0a0a0a}/* line 82, src/assets/sass/sass/components/navbar.sass */.navbar.is-white .navbar-burger{color:#0a0a0a}@media screen and (min-width: 1024px){/* line 87, src/assets/sass/sass/components/navbar.sass */.navbar.is-white .navbar-start>.navbar-item,.navbar.is-white .navbar-start .navbar-link,.navbar.is-white .navbar-end>.navbar-item,.navbar.is-white .navbar-end .navbar-link{color:#0a0a0a}/* line 92, src/assets/sass/sass/components/navbar.sass */.navbar.is-white .navbar-start>a.navbar-item:focus,.navbar.is-white .navbar-start>a.navbar-item:hover,.navbar.is-white .navbar-start>a.navbar-item.is-active,.navbar.is-white .navbar-start .navbar-link:focus,.navbar.is-white .navbar-start .navbar-link:hover,.navbar.is-white .navbar-start .navbar-link.is-active,.navbar.is-white .navbar-end>a.navbar-item:focus,.navbar.is-white .navbar-end>a.navbar-item:hover,.navbar.is-white .navbar-end>a.navbar-item.is-active,.navbar.is-white .navbar-end .navbar-link:focus,.navbar.is-white .navbar-end .navbar-link:hover,.navbar.is-white .navbar-end .navbar-link.is-active{background-color:#f2f2f2;color:#0a0a0a}/* line 98, src/assets/sass/sass/components/navbar.sass */.navbar.is-white .navbar-start .navbar-link::after,.navbar.is-white .navbar-end .navbar-link::after{border-color:#0a0a0a}/* line 100, src/assets/sass/sass/components/navbar.sass */.navbar.is-white .navbar-item.has-dropdown:focus .navbar-link,.navbar.is-white .navbar-item.has-dropdown:hover .navbar-link,.navbar.is-white .navbar-item.has-dropdown.is-active .navbar-link{background-color:#f2f2f2;color:#0a0a0a}/* line 107, src/assets/sass/sass/components/navbar.sass */.navbar.is-white .navbar-dropdown a.navbar-item.is-active{background-color:#fff;color:#0a0a0a}}/* line 65, src/assets/sass/sass/components/navbar.sass */.navbar.is-black{background-color:#0a0a0a;color:#fff}/* line 69, src/assets/sass/sass/components/navbar.sass */.navbar.is-black .navbar-brand>.navbar-item,.navbar.is-black .navbar-brand .navbar-link{color:#fff}/* line 74, src/assets/sass/sass/components/navbar.sass */.navbar.is-black .navbar-brand>a.navbar-item:focus,.navbar.is-black .navbar-brand>a.navbar-item:hover,.navbar.is-black .navbar-brand>a.navbar-item.is-active,.navbar.is-black .navbar-brand .navbar-link:focus,.navbar.is-black .navbar-brand .navbar-link:hover,.navbar.is-black .navbar-brand .navbar-link.is-active{background-color:#000;color:#fff}/* line 80, src/assets/sass/sass/components/navbar.sass */.navbar.is-black .navbar-brand .navbar-link::after{border-color:#fff}/* line 82, src/assets/sass/sass/components/navbar.sass */.navbar.is-black .navbar-burger{color:#fff}@media screen and (min-width: 1024px){/* line 87, src/assets/sass/sass/components/navbar.sass */.navbar.is-black .navbar-start>.navbar-item,.navbar.is-black .navbar-start .navbar-link,.navbar.is-black .navbar-end>.navbar-item,.navbar.is-black .navbar-end .navbar-link{color:#fff}/* line 92, src/assets/sass/sass/components/navbar.sass */.navbar.is-black .navbar-start>a.navbar-item:focus,.navbar.is-black .navbar-start>a.navbar-item:hover,.navbar.is-black .navbar-start>a.navbar-item.is-active,.navbar.is-black .navbar-start .navbar-link:focus,.navbar.is-black .navbar-start .navbar-link:hover,.navbar.is-black .navbar-start .navbar-link.is-active,.navbar.is-black .navbar-end>a.navbar-item:focus,.navbar.is-black .navbar-end>a.navbar-item:hover,.navbar.is-black .navbar-end>a.navbar-item.is-active,.navbar.is-black .navbar-end .navbar-link:focus,.navbar.is-black .navbar-end .navbar-link:hover,.navbar.is-black .navbar-end .navbar-link.is-active{background-color:#000;color:#fff}/* line 98, src/assets/sass/sass/components/navbar.sass */.navbar.is-black .navbar-start .navbar-link::after,.navbar.is-black .navbar-end .navbar-link::after{border-color:#fff}/* line 100, src/assets/sass/sass/components/navbar.sass */.navbar.is-black .navbar-item.has-dropdown:focus .navbar-link,.navbar.is-black .navbar-item.has-dropdown:hover .navbar-link,.navbar.is-black .navbar-item.has-dropdown.is-active .navbar-link{background-color:#000;color:#fff}/* line 107, src/assets/sass/sass/components/navbar.sass */.navbar.is-black .navbar-dropdown a.navbar-item.is-active{background-color:#0a0a0a;color:#fff}}/* line 65, src/assets/sass/sass/components/navbar.sass */.navbar.is-light{background-color:#f5f5f5;color:rgba(0,0,0,0.7)}/* line 69, src/assets/sass/sass/components/navbar.sass */.navbar.is-light .navbar-brand>.navbar-item,.navbar.is-light .navbar-brand .navbar-link{color:rgba(0,0,0,0.7)}/* line 74, src/assets/sass/sass/components/navbar.sass */.navbar.is-light .navbar-brand>a.navbar-item:focus,.navbar.is-light .navbar-brand>a.navbar-item:hover,.navbar.is-light .navbar-brand>a.navbar-item.is-active,.navbar.is-light .navbar-brand .navbar-link:focus,.navbar.is-light .navbar-brand .navbar-link:hover,.navbar.is-light .navbar-brand .navbar-link.is-active{background-color:#e8e8e8;color:rgba(0,0,0,0.7)}/* line 80, src/assets/sass/sass/components/navbar.sass */.navbar.is-light .navbar-brand .navbar-link::after{border-color:rgba(0,0,0,0.7)}/* line 82, src/assets/sass/sass/components/navbar.sass */.navbar.is-light .navbar-burger{color:rgba(0,0,0,0.7)}@media screen and (min-width: 1024px){/* line 87, src/assets/sass/sass/components/navbar.sass */.navbar.is-light .navbar-start>.navbar-item,.navbar.is-light .navbar-start .navbar-link,.navbar.is-light .navbar-end>.navbar-item,.navbar.is-light .navbar-end .navbar-link{color:rgba(0,0,0,0.7)}/* line 92, src/assets/sass/sass/components/navbar.sass */.navbar.is-light .navbar-start>a.navbar-item:focus,.navbar.is-light .navbar-start>a.navbar-item:hover,.navbar.is-light .navbar-start>a.navbar-item.is-active,.navbar.is-light .navbar-start .navbar-link:focus,.navbar.is-light .navbar-start .navbar-link:hover,.navbar.is-light .navbar-start .navbar-link.is-active,.navbar.is-light .navbar-end>a.navbar-item:focus,.navbar.is-light .navbar-end>a.navbar-item:hover,.navbar.is-light .navbar-end>a.navbar-item.is-active,.navbar.is-light .navbar-end .navbar-link:focus,.navbar.is-light .navbar-end .navbar-link:hover,.navbar.is-light .navbar-end .navbar-link.is-active{background-color:#e8e8e8;color:rgba(0,0,0,0.7)}/* line 98, src/assets/sass/sass/components/navbar.sass */.navbar.is-light .navbar-start .navbar-link::after,.navbar.is-light .navbar-end .navbar-link::after{border-color:rgba(0,0,0,0.7)}/* line 100, src/assets/sass/sass/components/navbar.sass */.navbar.is-light .navbar-item.has-dropdown:focus .navbar-link,.navbar.is-light .navbar-item.has-dropdown:hover .navbar-link,.navbar.is-light .navbar-item.has-dropdown.is-active .navbar-link{background-color:#e8e8e8;color:rgba(0,0,0,0.7)}/* line 107, src/assets/sass/sass/components/navbar.sass */.navbar.is-light .navbar-dropdown a.navbar-item.is-active{background-color:#f5f5f5;color:rgba(0,0,0,0.7)}}/* line 65, src/assets/sass/sass/components/navbar.sass */.navbar.is-dark{background-color:#363636;color:#fff}/* line 69, src/assets/sass/sass/components/navbar.sass */.navbar.is-dark .navbar-brand>.navbar-item,.navbar.is-dark .navbar-brand .navbar-link{color:#fff}/* line 74, src/assets/sass/sass/components/navbar.sass */.navbar.is-dark .navbar-brand>a.navbar-item:focus,.navbar.is-dark .navbar-brand>a.navbar-item:hover,.navbar.is-dark .navbar-brand>a.navbar-item.is-active,.navbar.is-dark .navbar-brand .navbar-link:focus,.navbar.is-dark .navbar-brand .navbar-link:hover,.navbar.is-dark .navbar-brand .navbar-link.is-active{background-color:#292929;color:#fff}/* line 80, src/assets/sass/sass/components/navbar.sass */.navbar.is-dark .navbar-brand .navbar-link::after{border-color:#fff}/* line 82, src/assets/sass/sass/components/navbar.sass */.navbar.is-dark .navbar-burger{color:#fff}@media screen and (min-width: 1024px){/* line 87, src/assets/sass/sass/components/navbar.sass */.navbar.is-dark .navbar-start>.navbar-item,.navbar.is-dark .navbar-start .navbar-link,.navbar.is-dark .navbar-end>.navbar-item,.navbar.is-dark .navbar-end .navbar-link{color:#fff}/* line 92, src/assets/sass/sass/components/navbar.sass */.navbar.is-dark .navbar-start>a.navbar-item:focus,.navbar.is-dark .navbar-start>a.navbar-item:hover,.navbar.is-dark .navbar-start>a.navbar-item.is-active,.navbar.is-dark .navbar-start .navbar-link:focus,.navbar.is-dark .navbar-start .navbar-link:hover,.navbar.is-dark .navbar-start .navbar-link.is-active,.navbar.is-dark .navbar-end>a.navbar-item:focus,.navbar.is-dark .navbar-end>a.navbar-item:hover,.navbar.is-dark .navbar-end>a.navbar-item.is-active,.navbar.is-dark .navbar-end .navbar-link:focus,.navbar.is-dark .navbar-end .navbar-link:hover,.navbar.is-dark .navbar-end .navbar-link.is-active{background-color:#292929;color:#fff}/* line 98, src/assets/sass/sass/components/navbar.sass */.navbar.is-dark .navbar-start .navbar-link::after,.navbar.is-dark .navbar-end .navbar-link::after{border-color:#fff}/* line 100, src/assets/sass/sass/components/navbar.sass */.navbar.is-dark .navbar-item.has-dropdown:focus .navbar-link,.navbar.is-dark .navbar-item.has-dropdown:hover .navbar-link,.navbar.is-dark .navbar-item.has-dropdown.is-active .navbar-link{background-color:#292929;color:#fff}/* line 107, src/assets/sass/sass/components/navbar.sass */.navbar.is-dark .navbar-dropdown a.navbar-item.is-active{background-color:#363636;color:#fff}}/* line 65, src/assets/sass/sass/components/navbar.sass */.navbar.is-primary{background-color:#00d1b2;color:#fff}/* line 69, src/assets/sass/sass/components/navbar.sass */.navbar.is-primary .navbar-brand>.navbar-item,.navbar.is-primary .navbar-brand .navbar-link{color:#fff}/* line 74, src/assets/sass/sass/components/navbar.sass */.navbar.is-primary .navbar-brand>a.navbar-item:focus,.navbar.is-primary .navbar-brand>a.navbar-item:hover,.navbar.is-primary .navbar-brand>a.navbar-item.is-active,.navbar.is-primary .navbar-brand .navbar-link:focus,.navbar.is-primary .navbar-brand .navbar-link:hover,.navbar.is-primary .navbar-brand .navbar-link.is-active{background-color:#00b89c;color:#fff}/* line 80, src/assets/sass/sass/components/navbar.sass */.navbar.is-primary .navbar-brand .navbar-link::after{border-color:#fff}/* line 82, src/assets/sass/sass/components/navbar.sass */.navbar.is-primary .navbar-burger{color:#fff}@media screen and (min-width: 1024px){/* line 87, src/assets/sass/sass/components/navbar.sass */.navbar.is-primary .navbar-start>.navbar-item,.navbar.is-primary .navbar-start .navbar-link,.navbar.is-primary .navbar-end>.navbar-item,.navbar.is-primary .navbar-end .navbar-link{color:#fff}/* line 92, src/assets/sass/sass/components/navbar.sass */.navbar.is-primary .navbar-start>a.navbar-item:focus,.navbar.is-primary .navbar-start>a.navbar-item:hover,.navbar.is-primary .navbar-start>a.navbar-item.is-active,.navbar.is-primary .navbar-start .navbar-link:focus,.navbar.is-primary .navbar-start .navbar-link:hover,.navbar.is-primary .navbar-start .navbar-link.is-active,.navbar.is-primary .navbar-end>a.navbar-item:focus,.navbar.is-primary .navbar-end>a.navbar-item:hover,.navbar.is-primary .navbar-end>a.navbar-item.is-active,.navbar.is-primary .navbar-end .navbar-link:focus,.navbar.is-primary .navbar-end .navbar-link:hover,.navbar.is-primary .navbar-end .navbar-link.is-active{background-color:#00b89c;color:#fff}/* line 98, src/assets/sass/sass/components/navbar.sass */.navbar.is-primary .navbar-start .navbar-link::after,.navbar.is-primary .navbar-end .navbar-link::after{border-color:#fff}/* line 100, src/assets/sass/sass/components/navbar.sass */.navbar.is-primary .navbar-item.has-dropdown:focus .navbar-link,.navbar.is-primary .navbar-item.has-dropdown:hover .navbar-link,.navbar.is-primary .navbar-item.has-dropdown.is-active .navbar-link{background-color:#00b89c;color:#fff}/* line 107, src/assets/sass/sass/components/navbar.sass */.navbar.is-primary .navbar-dropdown a.navbar-item.is-active{background-color:#00d1b2;color:#fff}}/* line 65, src/assets/sass/sass/components/navbar.sass */.navbar.is-link{background-color:#3273dc;color:#fff}/* line 69, src/assets/sass/sass/components/navbar.sass */.navbar.is-link .navbar-brand>.navbar-item,.navbar.is-link .navbar-brand .navbar-link{color:#fff}/* line 74, src/assets/sass/sass/components/navbar.sass */.navbar.is-link .navbar-brand>a.navbar-item:focus,.navbar.is-link .navbar-brand>a.navbar-item:hover,.navbar.is-link .navbar-brand>a.navbar-item.is-active,.navbar.is-link .navbar-brand .navbar-link:focus,.navbar.is-link .navbar-brand .navbar-link:hover,.navbar.is-link .navbar-brand .navbar-link.is-active{background-color:#2366d1;color:#fff}/* line 80, src/assets/sass/sass/components/navbar.sass */.navbar.is-link .navbar-brand .navbar-link::after{border-color:#fff}/* line 82, src/assets/sass/sass/components/navbar.sass */.navbar.is-link .navbar-burger{color:#fff}@media screen and (min-width: 1024px){/* line 87, src/assets/sass/sass/components/navbar.sass */.navbar.is-link .navbar-start>.navbar-item,.navbar.is-link .navbar-start .navbar-link,.navbar.is-link .navbar-end>.navbar-item,.navbar.is-link .navbar-end .navbar-link{color:#fff}/* line 92, src/assets/sass/sass/components/navbar.sass */.navbar.is-link .navbar-start>a.navbar-item:focus,.navbar.is-link .navbar-start>a.navbar-item:hover,.navbar.is-link .navbar-start>a.navbar-item.is-active,.navbar.is-link .navbar-start .navbar-link:focus,.navbar.is-link .navbar-start .navbar-link:hover,.navbar.is-link .navbar-start .navbar-link.is-active,.navbar.is-link .navbar-end>a.navbar-item:focus,.navbar.is-link .navbar-end>a.navbar-item:hover,.navbar.is-link .navbar-end>a.navbar-item.is-active,.navbar.is-link .navbar-end .navbar-link:focus,.navbar.is-link .navbar-end .navbar-link:hover,.navbar.is-link .navbar-end .navbar-link.is-active{background-color:#2366d1;color:#fff}/* line 98, src/assets/sass/sass/components/navbar.sass */.navbar.is-link .navbar-start .navbar-link::after,.navbar.is-link .navbar-end .navbar-link::after{border-color:#fff}/* line 100, src/assets/sass/sass/components/navbar.sass */.navbar.is-link .navbar-item.has-dropdown:focus .navbar-link,.navbar.is-link .navbar-item.has-dropdown:hover .navbar-link,.navbar.is-link .navbar-item.has-dropdown.is-active .navbar-link{background-color:#2366d1;color:#fff}/* line 107, src/assets/sass/sass/components/navbar.sass */.navbar.is-link .navbar-dropdown a.navbar-item.is-active{background-color:#3273dc;color:#fff}}/* line 65, src/assets/sass/sass/components/navbar.sass */.navbar.is-info{background-color:#3298dc;color:#fff}/* line 69, src/assets/sass/sass/components/navbar.sass */.navbar.is-info .navbar-brand>.navbar-item,.navbar.is-info .navbar-brand .navbar-link{color:#fff}/* line 74, src/assets/sass/sass/components/navbar.sass */.navbar.is-info .navbar-brand>a.navbar-item:focus,.navbar.is-info .navbar-brand>a.navbar-item:hover,.navbar.is-info .navbar-brand>a.navbar-item.is-active,.navbar.is-info .navbar-brand .navbar-link:focus,.navbar.is-info .navbar-brand .navbar-link:hover,.navbar.is-info .navbar-brand .navbar-link.is-active{background-color:#238cd1;color:#fff}/* line 80, src/assets/sass/sass/components/navbar.sass */.navbar.is-info .navbar-brand .navbar-link::after{border-color:#fff}/* line 82, src/assets/sass/sass/components/navbar.sass */.navbar.is-info .navbar-burger{color:#fff}@media screen and (min-width: 1024px){/* line 87, src/assets/sass/sass/components/navbar.sass */.navbar.is-info .navbar-start>.navbar-item,.navbar.is-info .navbar-start .navbar-link,.navbar.is-info .navbar-end>.navbar-item,.navbar.is-info .navbar-end .navbar-link{color:#fff}/* line 92, src/assets/sass/sass/components/navbar.sass */.navbar.is-info .navbar-start>a.navbar-item:focus,.navbar.is-info .navbar-start>a.navbar-item:hover,.navbar.is-info .navbar-start>a.navbar-item.is-active,.navbar.is-info .navbar-start .navbar-link:focus,.navbar.is-info .navbar-start .navbar-link:hover,.navbar.is-info .navbar-start .navbar-link.is-active,.navbar.is-info .navbar-end>a.navbar-item:focus,.navbar.is-info .navbar-end>a.navbar-item:hover,.navbar.is-info .navbar-end>a.navbar-item.is-active,.navbar.is-info .navbar-end .navbar-link:focus,.navbar.is-info .navbar-end .navbar-link:hover,.navbar.is-info .navbar-end .navbar-link.is-active{background-color:#238cd1;color:#fff}/* line 98, src/assets/sass/sass/components/navbar.sass */.navbar.is-info .navbar-start .navbar-link::after,.navbar.is-info .navbar-end .navbar-link::after{border-color:#fff}/* line 100, src/assets/sass/sass/components/navbar.sass */.navbar.is-info .navbar-item.has-dropdown:focus .navbar-link,.navbar.is-info .navbar-item.has-dropdown:hover .navbar-link,.navbar.is-info .navbar-item.has-dropdown.is-active .navbar-link{background-color:#238cd1;color:#fff}/* line 107, src/assets/sass/sass/components/navbar.sass */.navbar.is-info .navbar-dropdown a.navbar-item.is-active{background-color:#3298dc;color:#fff}}/* line 65, src/assets/sass/sass/components/navbar.sass */.navbar.is-success{background-color:#48c774;color:#fff}/* line 69, src/assets/sass/sass/components/navbar.sass */.navbar.is-success .navbar-brand>.navbar-item,.navbar.is-success .navbar-brand .navbar-link{color:#fff}/* line 74, src/assets/sass/sass/components/navbar.sass */.navbar.is-success .navbar-brand>a.navbar-item:focus,.navbar.is-success .navbar-brand>a.navbar-item:hover,.navbar.is-success .navbar-brand>a.navbar-item.is-active,.navbar.is-success .navbar-brand .navbar-link:focus,.navbar.is-success .navbar-brand .navbar-link:hover,.navbar.is-success .navbar-brand .navbar-link.is-active{background-color:#3abb67;color:#fff}/* line 80, src/assets/sass/sass/components/navbar.sass */.navbar.is-success .navbar-brand .navbar-link::after{border-color:#fff}/* line 82, src/assets/sass/sass/components/navbar.sass */.navbar.is-success .navbar-burger{color:#fff}@media screen and (min-width: 1024px){/* line 87, src/assets/sass/sass/components/navbar.sass */.navbar.is-success .navbar-start>.navbar-item,.navbar.is-success .navbar-start .navbar-link,.navbar.is-success .navbar-end>.navbar-item,.navbar.is-success .navbar-end .navbar-link{color:#fff}/* line 92, src/assets/sass/sass/components/navbar.sass */.navbar.is-success .navbar-start>a.navbar-item:focus,.navbar.is-success .navbar-start>a.navbar-item:hover,.navbar.is-success .navbar-start>a.navbar-item.is-active,.navbar.is-success .navbar-start .navbar-link:focus,.navbar.is-success .navbar-start .navbar-link:hover,.navbar.is-success .navbar-start .navbar-link.is-active,.navbar.is-success .navbar-end>a.navbar-item:focus,.navbar.is-success .navbar-end>a.navbar-item:hover,.navbar.is-success .navbar-end>a.navbar-item.is-active,.navbar.is-success .navbar-end .navbar-link:focus,.navbar.is-success .navbar-end .navbar-link:hover,.navbar.is-success .navbar-end .navbar-link.is-active{background-color:#3abb67;color:#fff}/* line 98, src/assets/sass/sass/components/navbar.sass */.navbar.is-success .navbar-start .navbar-link::after,.navbar.is-success .navbar-end .navbar-link::after{border-color:#fff}/* line 100, src/assets/sass/sass/components/navbar.sass */.navbar.is-success .navbar-item.has-dropdown:focus .navbar-link,.navbar.is-success .navbar-item.has-dropdown:hover .navbar-link,.navbar.is-success .navbar-item.has-dropdown.is-active .navbar-link{background-color:#3abb67;color:#fff}/* line 107, src/assets/sass/sass/components/navbar.sass */.navbar.is-success .navbar-dropdown a.navbar-item.is-active{background-color:#48c774;color:#fff}}/* line 65, src/assets/sass/sass/components/navbar.sass */.navbar.is-warning{background-color:#ffdd57;color:rgba(0,0,0,0.7)}/* line 69, src/assets/sass/sass/components/navbar.sass */.navbar.is-warning .navbar-brand>.navbar-item,.navbar.is-warning .navbar-brand .navbar-link{color:rgba(0,0,0,0.7)}/* line 74, src/assets/sass/sass/components/navbar.sass */.navbar.is-warning .navbar-brand>a.navbar-item:focus,.navbar.is-warning .navbar-brand>a.navbar-item:hover,.navbar.is-warning .navbar-brand>a.navbar-item.is-active,.navbar.is-warning .navbar-brand .navbar-link:focus,.navbar.is-warning .navbar-brand .navbar-link:hover,.navbar.is-warning .navbar-brand .navbar-link.is-active{background-color:#ffd83d;color:rgba(0,0,0,0.7)}/* line 80, src/assets/sass/sass/components/navbar.sass */.navbar.is-warning .navbar-brand .navbar-link::after{border-color:rgba(0,0,0,0.7)}/* line 82, src/assets/sass/sass/components/navbar.sass */.navbar.is-warning .navbar-burger{color:rgba(0,0,0,0.7)}@media screen and (min-width: 1024px){/* line 87, src/assets/sass/sass/components/navbar.sass */.navbar.is-warning .navbar-start>.navbar-item,.navbar.is-warning .navbar-start .navbar-link,.navbar.is-warning .navbar-end>.navbar-item,.navbar.is-warning .navbar-end .navbar-link{color:rgba(0,0,0,0.7)}/* line 92, src/assets/sass/sass/components/navbar.sass */.navbar.is-warning .navbar-start>a.navbar-item:focus,.navbar.is-warning .navbar-start>a.navbar-item:hover,.navbar.is-warning .navbar-start>a.navbar-item.is-active,.navbar.is-warning .navbar-start .navbar-link:focus,.navbar.is-warning .navbar-start .navbar-link:hover,.navbar.is-warning .navbar-start .navbar-link.is-active,.navbar.is-warning .navbar-end>a.navbar-item:focus,.navbar.is-warning .navbar-end>a.navbar-item:hover,.navbar.is-warning .navbar-end>a.navbar-item.is-active,.navbar.is-warning .navbar-end .navbar-link:focus,.navbar.is-warning .navbar-end .navbar-link:hover,.navbar.is-warning .navbar-end .navbar-link.is-active{background-color:#ffd83d;color:rgba(0,0,0,0.7)}/* line 98, src/assets/sass/sass/components/navbar.sass */.navbar.is-warning .navbar-start .navbar-link::after,.navbar.is-warning .navbar-end .navbar-link::after{border-color:rgba(0,0,0,0.7)}/* line 100, src/assets/sass/sass/components/navbar.sass */.navbar.is-warning .navbar-item.has-dropdown:focus .navbar-link,.navbar.is-warning .navbar-item.has-dropdown:hover .navbar-link,.navbar.is-warning .navbar-item.has-dropdown.is-active .navbar-link{background-color:#ffd83d;color:rgba(0,0,0,0.7)}/* line 107, src/assets/sass/sass/components/navbar.sass */.navbar.is-warning .navbar-dropdown a.navbar-item.is-active{background-color:#ffdd57;color:rgba(0,0,0,0.7)}}/* line 65, src/assets/sass/sass/components/navbar.sass */.navbar.is-danger{background-color:#f14668;color:#fff}/* line 69, src/assets/sass/sass/components/navbar.sass */.navbar.is-danger .navbar-brand>.navbar-item,.navbar.is-danger .navbar-brand .navbar-link{color:#fff}/* line 74, src/assets/sass/sass/components/navbar.sass */.navbar.is-danger .navbar-brand>a.navbar-item:focus,.navbar.is-danger .navbar-brand>a.navbar-item:hover,.navbar.is-danger .navbar-brand>a.navbar-item.is-active,.navbar.is-danger .navbar-brand .navbar-link:focus,.navbar.is-danger .navbar-brand .navbar-link:hover,.navbar.is-danger .navbar-brand .navbar-link.is-active{background-color:#ef2e55;color:#fff}/* line 80, src/assets/sass/sass/components/navbar.sass */.navbar.is-danger .navbar-brand .navbar-link::after{border-color:#fff}/* line 82, src/assets/sass/sass/components/navbar.sass */.navbar.is-danger .navbar-burger{color:#fff}@media screen and (min-width: 1024px){/* line 87, src/assets/sass/sass/components/navbar.sass */.navbar.is-danger .navbar-start>.navbar-item,.navbar.is-danger .navbar-start .navbar-link,.navbar.is-danger .navbar-end>.navbar-item,.navbar.is-danger .navbar-end .navbar-link{color:#fff}/* line 92, src/assets/sass/sass/components/navbar.sass */.navbar.is-danger .navbar-start>a.navbar-item:focus,.navbar.is-danger .navbar-start>a.navbar-item:hover,.navbar.is-danger .navbar-start>a.navbar-item.is-active,.navbar.is-danger .navbar-start .navbar-link:focus,.navbar.is-danger .navbar-start .navbar-link:hover,.navbar.is-danger .navbar-start .navbar-link.is-active,.navbar.is-danger .navbar-end>a.navbar-item:focus,.navbar.is-danger .navbar-end>a.navbar-item:hover,.navbar.is-danger .navbar-end>a.navbar-item.is-active,.navbar.is-danger .navbar-end .navbar-link:focus,.navbar.is-danger .navbar-end .navbar-link:hover,.navbar.is-danger .navbar-end .navbar-link.is-active{background-color:#ef2e55;color:#fff}/* line 98, src/assets/sass/sass/components/navbar.sass */.navbar.is-danger .navbar-start .navbar-link::after,.navbar.is-danger .navbar-end .navbar-link::after{border-color:#fff}/* line 100, src/assets/sass/sass/components/navbar.sass */.navbar.is-danger .navbar-item.has-dropdown:focus .navbar-link,.navbar.is-danger .navbar-item.has-dropdown:hover .navbar-link,.navbar.is-danger .navbar-item.has-dropdown.is-active .navbar-link{background-color:#ef2e55;color:#fff}/* line 107, src/assets/sass/sass/components/navbar.sass */.navbar.is-danger .navbar-dropdown a.navbar-item.is-active{background-color:#f14668;color:#fff}}/* line 110, src/assets/sass/sass/components/navbar.sass */.navbar>.container{-webkit-box-align:stretch;-ms-flex-align:stretch;align-items:stretch;display:-webkit-box;display:-ms-flexbox;display:flex;min-height:3.25rem;width:100%}/* line 115, src/assets/sass/sass/components/navbar.sass */.navbar.has-shadow{-webkit-box-shadow:0 2px 0 0 #f5f5f5;box-shadow:0 2px 0 0 #f5f5f5}/* line 117, src/assets/sass/sass/components/navbar.sass */.navbar.is-fixed-bottom,.navbar.is-fixed-top{left:0;position:fixed;right:0;z-index:30}/* line 120, src/assets/sass/sass/components/navbar.sass */.navbar.is-fixed-bottom{bottom:0}/* line 122, src/assets/sass/sass/components/navbar.sass */.navbar.is-fixed-bottom.has-shadow{-webkit-box-shadow:0 -2px 0 0 #f5f5f5;box-shadow:0 -2px 0 0 #f5f5f5}/* line 124, src/assets/sass/sass/components/navbar.sass */.navbar.is-fixed-top{top:0}/* line 129, src/assets/sass/sass/components/navbar.sass */html.has-navbar-fixed-top,body.has-navbar-fixed-top{padding-top:3.25rem}/* line 131, src/assets/sass/sass/components/navbar.sass */html.has-navbar-fixed-bottom,body.has-navbar-fixed-bottom{padding-bottom:3.25rem}/* line 134, src/assets/sass/sass/components/navbar.sass */.navbar-brand,.navbar-tabs{-webkit-box-align:stretch;-ms-flex-align:stretch;align-items:stretch;display:-webkit-box;display:-ms-flexbox;display:flex;-ms-flex-negative:0;flex-shrink:0;min-height:3.25rem}/* line 143, src/assets/sass/sass/components/navbar.sass */.navbar-brand a.navbar-item:focus,.navbar-brand a.navbar-item:hover{background-color:transparent}/* line 147, src/assets/sass/sass/components/navbar.sass */.navbar-tabs{-webkit-overflow-scrolling:touch;max-width:100vw;overflow-x:auto;overflow-y:hidden}/* line 153, src/assets/sass/sass/components/navbar.sass */.navbar-burger{color:#4a4a4a;cursor:pointer;display:block;height:3.25rem;position:relative;width:3.25rem;margin-left:auto}/* line 33, src/assets/sass/sass/utilities/mixins.sass */.navbar-burger span{background-color:currentColor;display:block;height:1px;left:calc(50% - 8px);position:absolute;-webkit-transform-origin:center;transform-origin:center;-webkit-transition-duration:86ms;transition-duration:86ms;-webkit-transition-property:background-color, opacity, -webkit-transform;transition-property:background-color, opacity, -webkit-transform;transition-property:background-color, opacity, transform;transition-property:background-color, opacity, transform, -webkit-transform;-webkit-transition-timing-function:ease-out;transition-timing-function:ease-out;width:16px}/* line 44, src/assets/sass/sass/utilities/mixins.sass */.navbar-burger span:nth-child(1){top:calc(50% - 6px)}/* line 46, src/assets/sass/sass/utilities/mixins.sass */.navbar-burger span:nth-child(2){top:calc(50% - 1px)}/* line 48, src/assets/sass/sass/utilities/mixins.sass */.navbar-burger span:nth-child(3){top:calc(50% + 4px)}/* line 50, src/assets/sass/sass/utilities/mixins.sass */.navbar-burger:hover{background-color:rgba(0,0,0,0.05)}/* line 55, src/assets/sass/sass/utilities/mixins.sass */.navbar-burger.is-active span:nth-child(1){-webkit-transform:translateY(5px) rotate(45deg);transform:translateY(5px) rotate(45deg)}/* line 57, src/assets/sass/sass/utilities/mixins.sass */.navbar-burger.is-active span:nth-child(2){opacity:0}/* line 59, src/assets/sass/sass/utilities/mixins.sass */.navbar-burger.is-active span:nth-child(3){-webkit-transform:translateY(-5px) rotate(-45deg);transform:translateY(-5px) rotate(-45deg)}/* line 158, src/assets/sass/sass/components/navbar.sass */.navbar-menu{display:none}/* line 161, src/assets/sass/sass/components/navbar.sass */.navbar-item,.navbar-link{color:#4a4a4a;display:block;line-height:1.5;padding:0.5rem 0.75rem;position:relative}/* line 169, src/assets/sass/sass/components/navbar.sass */.navbar-item .icon:only-child,.navbar-link .icon:only-child{margin-left:-0.25rem;margin-right:-0.25rem}/* line 173, src/assets/sass/sass/components/navbar.sass */a.navbar-item,.navbar-link{cursor:pointer}/* line 176, src/assets/sass/sass/components/navbar.sass */a.navbar-item:focus,a.navbar-item:focus-within,a.navbar-item:hover,a.navbar-item.is-active,.navbar-link:focus,.navbar-link:focus-within,.navbar-link:hover,.navbar-link.is-active{background-color:#fafafa;color:#3273dc}/* line 183, src/assets/sass/sass/components/navbar.sass */.navbar-item{-webkit-box-flex:0;-ms-flex-positive:0;flex-grow:0;-ms-flex-negative:0;flex-shrink:0}/* line 186, src/assets/sass/sass/components/navbar.sass */.navbar-item img{max-height:1.75rem}/* line 188, src/assets/sass/sass/components/navbar.sass */.navbar-item.has-dropdown{padding:0}/* line 190, src/assets/sass/sass/components/navbar.sass */.navbar-item.is-expanded{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:1;flex-shrink:1}/* line 193, src/assets/sass/sass/components/navbar.sass */.navbar-item.is-tab{border-bottom:1px solid transparent;min-height:3.25rem;padding-bottom:calc(0.5rem - 1px)}/* line 197, src/assets/sass/sass/components/navbar.sass */.navbar-item.is-tab:focus,.navbar-item.is-tab:hover{background-color:rgba(0,0,0,0);border-bottom-color:#3273dc}/* line 201, src/assets/sass/sass/components/navbar.sass */.navbar-item.is-tab.is-active{background-color:rgba(0,0,0,0);border-bottom-color:#3273dc;border-bottom-style:solid;border-bottom-width:3px;color:#3273dc;padding-bottom:calc(0.5rem - 3px)}/* line 209, src/assets/sass/sass/components/navbar.sass */.navbar-content{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:1;flex-shrink:1}/* line 213, src/assets/sass/sass/components/navbar.sass */.navbar-link:not(.is-arrowless){padding-right:2.5em}/* line 215, src/assets/sass/sass/components/navbar.sass */.navbar-link:not(.is-arrowless)::after{border-color:#3273dc;margin-top:-0.375em;right:1.125em}/* line 221, src/assets/sass/sass/components/navbar.sass */.navbar-dropdown{font-size:0.875rem;padding-bottom:0.5rem;padding-top:0.5rem}/* line 225, src/assets/sass/sass/components/navbar.sass */.navbar-dropdown .navbar-item{padding-left:1.5rem;padding-right:1.5rem}/* line 229, src/assets/sass/sass/components/navbar.sass */.navbar-divider{background-color:#f5f5f5;border:none;display:none;height:2px;margin:0.5rem 0}@media screen and (max-width: 1023px){/* line 237, src/assets/sass/sass/components/navbar.sass */.navbar>.container{display:block}/* line 241, src/assets/sass/sass/components/navbar.sass */.navbar-brand .navbar-item,.navbar-tabs .navbar-item{-webkit-box-align:center;-ms-flex-align:center;align-items:center;display:-webkit-box;display:-ms-flexbox;display:flex}/* line 245, src/assets/sass/sass/components/navbar.sass */.navbar-link::after{display:none}/* line 247, src/assets/sass/sass/components/navbar.sass */.navbar-menu{background-color:#fff;-webkit-box-shadow:0 8px 16px rgba(10,10,10,0.1);box-shadow:0 8px 16px rgba(10,10,10,0.1);padding:0.5rem 0}/* line 251, src/assets/sass/sass/components/navbar.sass */.navbar-menu.is-active{display:block}/* line 255, src/assets/sass/sass/components/navbar.sass */.navbar.is-fixed-bottom-touch,.navbar.is-fixed-top-touch{left:0;position:fixed;right:0;z-index:30}/* line 258, src/assets/sass/sass/components/navbar.sass */.navbar.is-fixed-bottom-touch{bottom:0}/* line 260, src/assets/sass/sass/components/navbar.sass */.navbar.is-fixed-bottom-touch.has-shadow{-webkit-box-shadow:0 -2px 3px rgba(10,10,10,0.1);box-shadow:0 -2px 3px rgba(10,10,10,0.1)}/* line 262, src/assets/sass/sass/components/navbar.sass */.navbar.is-fixed-top-touch{top:0}/* line 266, src/assets/sass/sass/components/navbar.sass */.navbar.is-fixed-top .navbar-menu,.navbar.is-fixed-top-touch .navbar-menu{-webkit-overflow-scrolling:touch;max-height:calc(100vh - 3.25rem);overflow:auto}/* line 272, src/assets/sass/sass/components/navbar.sass */html.has-navbar-fixed-top-touch,body.has-navbar-fixed-top-touch{padding-top:3.25rem}/* line 274, src/assets/sass/sass/components/navbar.sass */html.has-navbar-fixed-bottom-touch,body.has-navbar-fixed-bottom-touch{padding-bottom:3.25rem}}@media screen and (min-width: 1024px){/* line 278, src/assets/sass/sass/components/navbar.sass */.navbar,.navbar-menu,.navbar-start,.navbar-end{-webkit-box-align:stretch;-ms-flex-align:stretch;align-items:stretch;display:-webkit-box;display:-ms-flexbox;display:flex}/* line 284, src/assets/sass/sass/components/navbar.sass */.navbar{min-height:3.25rem}/* line 286, src/assets/sass/sass/components/navbar.sass */.navbar.is-spaced{padding:1rem 2rem}/* line 288, src/assets/sass/sass/components/navbar.sass */.navbar.is-spaced .navbar-start,.navbar.is-spaced .navbar-end{-webkit-box-align:center;-ms-flex-align:center;align-items:center}/* line 291, src/assets/sass/sass/components/navbar.sass */.navbar.is-spaced a.navbar-item,.navbar.is-spaced .navbar-link{border-radius:4px}/* line 297, src/assets/sass/sass/components/navbar.sass */.navbar.is-transparent a.navbar-item:focus,.navbar.is-transparent a.navbar-item:hover,.navbar.is-transparent a.navbar-item.is-active,.navbar.is-transparent .navbar-link:focus,.navbar.is-transparent .navbar-link:hover,.navbar.is-transparent .navbar-link.is-active{background-color:transparent !important}/* line 306, src/assets/sass/sass/components/navbar.sass */.navbar.is-transparent .navbar-item.has-dropdown.is-active .navbar-link,.navbar.is-transparent .navbar-item.has-dropdown.is-hoverable:focus .navbar-link,.navbar.is-transparent .navbar-item.has-dropdown.is-hoverable:focus-within .navbar-link,.navbar.is-transparent .navbar-item.has-dropdown.is-hoverable:hover .navbar-link{background-color:transparent !important}/* line 310, src/assets/sass/sass/components/navbar.sass */.navbar.is-transparent .navbar-dropdown a.navbar-item:focus,.navbar.is-transparent .navbar-dropdown a.navbar-item:hover{background-color:#f5f5f5;color:#0a0a0a}/* line 314, src/assets/sass/sass/components/navbar.sass */.navbar.is-transparent .navbar-dropdown a.navbar-item.is-active{background-color:#f5f5f5;color:#3273dc}/* line 317, src/assets/sass/sass/components/navbar.sass */.navbar-burger{display:none}/* line 319, src/assets/sass/sass/components/navbar.sass */.navbar-item,.navbar-link{-webkit-box-align:center;-ms-flex-align:center;align-items:center;display:-webkit-box;display:-ms-flexbox;display:flex}/* line 324, src/assets/sass/sass/components/navbar.sass */.navbar-item.has-dropdown{-webkit-box-align:stretch;-ms-flex-align:stretch;align-items:stretch}/* line 327, src/assets/sass/sass/components/navbar.sass */.navbar-item.has-dropdown-up .navbar-link::after{-webkit-transform:rotate(135deg) translate(0.25em, -0.25em);transform:rotate(135deg) translate(0.25em, -0.25em)}/* line 329, src/assets/sass/sass/components/navbar.sass */.navbar-item.has-dropdown-up .navbar-dropdown{border-bottom:2px solid #dbdbdb;border-radius:6px 6px 0 0;border-top:none;bottom:100%;-webkit-box-shadow:0 -8px 8px rgba(10,10,10,0.1);box-shadow:0 -8px 8px rgba(10,10,10,0.1);top:auto}/* line 340, src/assets/sass/sass/components/navbar.sass */.navbar-item.is-active .navbar-dropdown,.navbar-item.is-hoverable:focus .navbar-dropdown,.navbar-item.is-hoverable:focus-within .navbar-dropdown,.navbar-item.is-hoverable:hover .navbar-dropdown{display:block}/* line 342, src/assets/sass/sass/components/navbar.sass */.navbar.is-spaced .navbar-item.is-active .navbar-dropdown,.navbar-item.is-active .navbar-dropdown.is-boxed,.navbar.is-spaced .navbar-item.is-hoverable:focus .navbar-dropdown,.navbar-item.is-hoverable:focus .navbar-dropdown.is-boxed,.navbar.is-spaced .navbar-item.is-hoverable:focus-within .navbar-dropdown,.navbar-item.is-hoverable:focus-within .navbar-dropdown.is-boxed,.navbar.is-spaced .navbar-item.is-hoverable:hover .navbar-dropdown,.navbar-item.is-hoverable:hover .navbar-dropdown.is-boxed{opacity:1;pointer-events:auto;-webkit-transform:translateY(0);transform:translateY(0)}/* line 347, src/assets/sass/sass/components/navbar.sass */.navbar-menu{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:0;flex-shrink:0}/* line 350, src/assets/sass/sass/components/navbar.sass */.navbar-start{-webkit-box-pack:start;-ms-flex-pack:start;justify-content:flex-start;margin-right:auto}/* line 353, src/assets/sass/sass/components/navbar.sass */.navbar-end{-webkit-box-pack:end;-ms-flex-pack:end;justify-content:flex-end;margin-left:auto}/* line 356, src/assets/sass/sass/components/navbar.sass */.navbar-dropdown{background-color:#fff;border-bottom-left-radius:6px;border-bottom-right-radius:6px;border-top:2px solid #dbdbdb;-webkit-box-shadow:0 8px 8px rgba(10,10,10,0.1);box-shadow:0 8px 8px rgba(10,10,10,0.1);display:none;font-size:0.875rem;left:0;min-width:100%;position:absolute;top:100%;z-index:20}/* line 369, src/assets/sass/sass/components/navbar.sass */.navbar-dropdown .navbar-item{padding:0.375rem 1rem;white-space:nowrap}/* line 372, src/assets/sass/sass/components/navbar.sass */.navbar-dropdown a.navbar-item{padding-right:3rem}/* line 374, src/assets/sass/sass/components/navbar.sass */.navbar-dropdown a.navbar-item:focus,.navbar-dropdown a.navbar-item:hover{background-color:#f5f5f5;color:#0a0a0a}/* line 378, src/assets/sass/sass/components/navbar.sass */.navbar-dropdown a.navbar-item.is-active{background-color:#f5f5f5;color:#3273dc}/* line 381, src/assets/sass/sass/components/navbar.sass */.navbar.is-spaced .navbar-dropdown,.navbar-dropdown.is-boxed{border-radius:6px;border-top:none;-webkit-box-shadow:0 8px 8px rgba(10,10,10,0.1),0 0 0 1px rgba(10,10,10,0.1);box-shadow:0 8px 8px rgba(10,10,10,0.1),0 0 0 1px rgba(10,10,10,0.1);display:block;opacity:0;pointer-events:none;top:calc(100% + (-4px));-webkit-transform:translateY(-5px);transform:translateY(-5px);-webkit-transition-duration:86ms;transition-duration:86ms;-webkit-transition-property:opacity, -webkit-transform;transition-property:opacity, -webkit-transform;transition-property:opacity, transform;transition-property:opacity, transform, -webkit-transform}/* line 393, src/assets/sass/sass/components/navbar.sass */.navbar-dropdown.is-right{left:auto;right:0}/* line 396, src/assets/sass/sass/components/navbar.sass */.navbar-divider{display:block}/* line 400, src/assets/sass/sass/components/navbar.sass */.navbar>.container .navbar-brand,.container>.navbar .navbar-brand{margin-left:-.75rem}/* line 402, src/assets/sass/sass/components/navbar.sass */.navbar>.container .navbar-menu,.container>.navbar .navbar-menu{margin-right:-.75rem}/* line 406, src/assets/sass/sass/components/navbar.sass */.navbar.is-fixed-bottom-desktop,.navbar.is-fixed-top-desktop{left:0;position:fixed;right:0;z-index:30}/* line 409, src/assets/sass/sass/components/navbar.sass */.navbar.is-fixed-bottom-desktop{bottom:0}/* line 411, src/assets/sass/sass/components/navbar.sass */.navbar.is-fixed-bottom-desktop.has-shadow{-webkit-box-shadow:0 -2px 3px rgba(10,10,10,0.1);box-shadow:0 -2px 3px rgba(10,10,10,0.1)}/* line 413, src/assets/sass/sass/components/navbar.sass */.navbar.is-fixed-top-desktop{top:0}/* line 417, src/assets/sass/sass/components/navbar.sass */html.has-navbar-fixed-top-desktop,body.has-navbar-fixed-top-desktop{padding-top:3.25rem}/* line 419, src/assets/sass/sass/components/navbar.sass */html.has-navbar-fixed-bottom-desktop,body.has-navbar-fixed-bottom-desktop{padding-bottom:3.25rem}/* line 421, src/assets/sass/sass/components/navbar.sass */html.has-spaced-navbar-fixed-top,body.has-spaced-navbar-fixed-top{padding-top:5.25rem}/* line 423, src/assets/sass/sass/components/navbar.sass */html.has-spaced-navbar-fixed-bottom,body.has-spaced-navbar-fixed-bottom{padding-bottom:5.25rem}/* line 428, src/assets/sass/sass/components/navbar.sass */a.navbar-item.is-active,.navbar-link.is-active{color:#0a0a0a}/* line 430, src/assets/sass/sass/components/navbar.sass */a.navbar-item.is-active:not(:focus):not(:hover),.navbar-link.is-active:not(:focus):not(:hover){background-color:rgba(0,0,0,0)}/* line 436, src/assets/sass/sass/components/navbar.sass */.navbar-item.has-dropdown:focus .navbar-link,.navbar-item.has-dropdown:hover .navbar-link,.navbar-item.has-dropdown.is-active .navbar-link{background-color:#fafafa}}/* line 442, src/assets/sass/sass/components/navbar.sass */.hero.is-fullheight-with-navbar{min-height:calc(100vh - 3.25rem)}/* line 32, src/assets/sass/sass/components/pagination.sass */.pagination{font-size:1rem;margin:-.25rem}/* line 37, src/assets/sass/sass/components/pagination.sass */.pagination.is-small{font-size:.75rem}/* line 39, src/assets/sass/sass/components/pagination.sass */.pagination.is-medium{font-size:1.25rem}/* line 41, src/assets/sass/sass/components/pagination.sass */.pagination.is-large{font-size:1.5rem}/* line 44, src/assets/sass/sass/components/pagination.sass */.pagination.is-rounded .pagination-previous,.pagination.is-rounded .pagination-next{padding-left:1em;padding-right:1em;border-radius:290486px}/* line 49, src/assets/sass/sass/components/pagination.sass */.pagination.is-rounded .pagination-link{border-radius:290486px}/* line 52, src/assets/sass/sass/components/pagination.sass */.pagination,.pagination-list{-webkit-box-align:center;-ms-flex-align:center;align-items:center;display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center;text-align:center}/* line 59, src/assets/sass/sass/components/pagination.sass */.pagination-previous,.pagination-next,.pagination-link,.pagination-ellipsis{font-size:1em;-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center;margin:.25rem;padding-left:.5em;padding-right:.5em;text-align:center}/* line 72, src/assets/sass/sass/components/pagination.sass */.pagination-previous,.pagination-next,.pagination-link{border-color:#dbdbdb;color:#363636;min-width:2.5em}/* line 78, src/assets/sass/sass/components/pagination.sass */.pagination-previous:hover,.pagination-next:hover,.pagination-link:hover{border-color:#b5b5b5;color:#363636}/* line 81, src/assets/sass/sass/components/pagination.sass */.pagination-previous:focus,.pagination-next:focus,.pagination-link:focus{border-color:#3273dc}/* line 83, src/assets/sass/sass/components/pagination.sass */.pagination-previous:active,.pagination-next:active,.pagination-link:active{-webkit-box-shadow:inset 0 1px 2px rgba(10,10,10,0.2);box-shadow:inset 0 1px 2px rgba(10,10,10,0.2)}/* line 85, src/assets/sass/sass/components/pagination.sass */.pagination-previous[disabled],.pagination-next[disabled],.pagination-link[disabled]{background-color:#dbdbdb;border-color:#dbdbdb;-webkit-box-shadow:none;box-shadow:none;color:#7a7a7a;opacity:0.5}/* line 92, src/assets/sass/sass/components/pagination.sass */.pagination-previous,.pagination-next{padding-left:0.75em;padding-right:0.75em;white-space:nowrap}/* line 99, src/assets/sass/sass/components/pagination.sass */.pagination-link.is-current{background-color:#3273dc;border-color:#3273dc;color:#fff}/* line 104, src/assets/sass/sass/components/pagination.sass */.pagination-ellipsis{color:#b5b5b5;pointer-events:none}/* line 108, src/assets/sass/sass/components/pagination.sass */.pagination-list{-ms-flex-wrap:wrap;flex-wrap:wrap}@media screen and (max-width: 768px){/* line 112, src/assets/sass/sass/components/pagination.sass */.pagination{-ms-flex-wrap:wrap;flex-wrap:wrap}/* line 114, src/assets/sass/sass/components/pagination.sass */.pagination-previous,.pagination-next{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:1;flex-shrink:1}/* line 119, src/assets/sass/sass/components/pagination.sass */.pagination-list li{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:1;flex-shrink:1}}@media screen and (min-width: 769px), print{/* line 124, src/assets/sass/sass/components/pagination.sass */.pagination-list{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:1;flex-shrink:1;-webkit-box-pack:start;-ms-flex-pack:start;justify-content:flex-start;-webkit-box-ordinal-group:2;-ms-flex-order:1;order:1}/* line 129, src/assets/sass/sass/components/pagination.sass */.pagination-previous{-webkit-box-ordinal-group:3;-ms-flex-order:2;order:2}/* line 131, src/assets/sass/sass/components/pagination.sass */.pagination-next{-webkit-box-ordinal-group:4;-ms-flex-order:3;order:3}/* line 133, src/assets/sass/sass/components/pagination.sass */.pagination{-webkit-box-pack:justify;-ms-flex-pack:justify;justify-content:space-between}/* line 136, src/assets/sass/sass/components/pagination.sass */.pagination.is-centered .pagination-previous{-webkit-box-ordinal-group:2;-ms-flex-order:1;order:1}/* line 138, src/assets/sass/sass/components/pagination.sass */.pagination.is-centered .pagination-list{-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center;-webkit-box-ordinal-group:3;-ms-flex-order:2;order:2}/* line 141, src/assets/sass/sass/components/pagination.sass */.pagination.is-centered .pagination-next{-webkit-box-ordinal-group:4;-ms-flex-order:3;order:3}/* line 144, src/assets/sass/sass/components/pagination.sass */.pagination.is-right .pagination-previous{-webkit-box-ordinal-group:2;-ms-flex-order:1;order:1}/* line 146, src/assets/sass/sass/components/pagination.sass */.pagination.is-right .pagination-next{-webkit-box-ordinal-group:3;-ms-flex-order:2;order:2}/* line 148, src/assets/sass/sass/components/pagination.sass */.pagination.is-right .pagination-list{-webkit-box-pack:end;-ms-flex-pack:end;justify-content:flex-end;-webkit-box-ordinal-group:4;-ms-flex-order:3;order:3}}/* line 31, src/assets/sass/sass/components/panel.sass */.panel{border-radius:6px;-webkit-box-shadow:0 0.5em 1em -0.125em rgba(10,10,10,0.1),0 0px 0 1px rgba(10,10,10,0.02);box-shadow:0 0.5em 1em -0.125em rgba(10,10,10,0.1),0 0px 0 1px rgba(10,10,10,0.02);font-size:1rem}/* line 35, src/assets/sass/sass/components/panel.sass */.panel:not(:last-child){margin-bottom:1.5rem}/* line 42, src/assets/sass/sass/components/panel.sass */.panel.is-white .panel-heading{background-color:#fff;color:#0a0a0a}/* line 45, src/assets/sass/sass/components/panel.sass */.panel.is-white .panel-tabs a.is-active{border-bottom-color:#fff}/* line 47, src/assets/sass/sass/components/panel.sass */.panel.is-white .panel-block.is-active .panel-icon{color:#fff}/* line 42, src/assets/sass/sass/components/panel.sass */.panel.is-black .panel-heading{background-color:#0a0a0a;color:#fff}/* line 45, src/assets/sass/sass/components/panel.sass */.panel.is-black .panel-tabs a.is-active{border-bottom-color:#0a0a0a}/* line 47, src/assets/sass/sass/components/panel.sass */.panel.is-black .panel-block.is-active .panel-icon{color:#0a0a0a}/* line 42, src/assets/sass/sass/components/panel.sass */.panel.is-light .panel-heading{background-color:#f5f5f5;color:rgba(0,0,0,0.7)}/* line 45, src/assets/sass/sass/components/panel.sass */.panel.is-light .panel-tabs a.is-active{border-bottom-color:#f5f5f5}/* line 47, src/assets/sass/sass/components/panel.sass */.panel.is-light .panel-block.is-active .panel-icon{color:#f5f5f5}/* line 42, src/assets/sass/sass/components/panel.sass */.panel.is-dark .panel-heading{background-color:#363636;color:#fff}/* line 45, src/assets/sass/sass/components/panel.sass */.panel.is-dark .panel-tabs a.is-active{border-bottom-color:#363636}/* line 47, src/assets/sass/sass/components/panel.sass */.panel.is-dark .panel-block.is-active .panel-icon{color:#363636}/* line 42, src/assets/sass/sass/components/panel.sass */.panel.is-primary .panel-heading{background-color:#00d1b2;color:#fff}/* line 45, src/assets/sass/sass/components/panel.sass */.panel.is-primary .panel-tabs a.is-active{border-bottom-color:#00d1b2}/* line 47, src/assets/sass/sass/components/panel.sass */.panel.is-primary .panel-block.is-active .panel-icon{color:#00d1b2}/* line 42, src/assets/sass/sass/components/panel.sass */.panel.is-link .panel-heading{background-color:#3273dc;color:#fff}/* line 45, src/assets/sass/sass/components/panel.sass */.panel.is-link .panel-tabs a.is-active{border-bottom-color:#3273dc}/* line 47, src/assets/sass/sass/components/panel.sass */.panel.is-link .panel-block.is-active .panel-icon{color:#3273dc}/* line 42, src/assets/sass/sass/components/panel.sass */.panel.is-info .panel-heading{background-color:#3298dc;color:#fff}/* line 45, src/assets/sass/sass/components/panel.sass */.panel.is-info .panel-tabs a.is-active{border-bottom-color:#3298dc}/* line 47, src/assets/sass/sass/components/panel.sass */.panel.is-info .panel-block.is-active .panel-icon{color:#3298dc}/* line 42, src/assets/sass/sass/components/panel.sass */.panel.is-success .panel-heading{background-color:#48c774;color:#fff}/* line 45, src/assets/sass/sass/components/panel.sass */.panel.is-success .panel-tabs a.is-active{border-bottom-color:#48c774}/* line 47, src/assets/sass/sass/components/panel.sass */.panel.is-success .panel-block.is-active .panel-icon{color:#48c774}/* line 42, src/assets/sass/sass/components/panel.sass */.panel.is-warning .panel-heading{background-color:#ffdd57;color:rgba(0,0,0,0.7)}/* line 45, src/assets/sass/sass/components/panel.sass */.panel.is-warning .panel-tabs a.is-active{border-bottom-color:#ffdd57}/* line 47, src/assets/sass/sass/components/panel.sass */.panel.is-warning .panel-block.is-active .panel-icon{color:#ffdd57}/* line 42, src/assets/sass/sass/components/panel.sass */.panel.is-danger .panel-heading{background-color:#f14668;color:#fff}/* line 45, src/assets/sass/sass/components/panel.sass */.panel.is-danger .panel-tabs a.is-active{border-bottom-color:#f14668}/* line 47, src/assets/sass/sass/components/panel.sass */.panel.is-danger .panel-block.is-active .panel-icon{color:#f14668}/* line 52, src/assets/sass/sass/components/panel.sass */.panel-tabs:not(:last-child),.panel-block:not(:last-child){border-bottom:1px solid #ededed}/* line 55, src/assets/sass/sass/components/panel.sass */.panel-heading{background-color:#ededed;border-radius:6px 6px 0 0;color:#363636;font-size:1.25em;font-weight:700;line-height:1.25;padding:0.75em 1em}/* line 64, src/assets/sass/sass/components/panel.sass */.panel-tabs{-webkit-box-align:end;-ms-flex-align:end;align-items:flex-end;display:-webkit-box;display:-ms-flexbox;display:flex;font-size:.875em;-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center}/* line 69, src/assets/sass/sass/components/panel.sass */.panel-tabs a{border-bottom:1px solid #dbdbdb;margin-bottom:-1px;padding:0.5em}/* line 74, src/assets/sass/sass/components/panel.sass */.panel-tabs a.is-active{border-bottom-color:#4a4a4a;color:#363636}/* line 79, src/assets/sass/sass/components/panel.sass */.panel-list a{color:#4a4a4a}/* line 81, src/assets/sass/sass/components/panel.sass */.panel-list a:hover{color:#3273dc}/* line 84, src/assets/sass/sass/components/panel.sass */.panel-block{-webkit-box-align:center;-ms-flex-align:center;align-items:center;color:#363636;display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-pack:start;-ms-flex-pack:start;justify-content:flex-start;padding:0.5em 0.75em}/* line 90, src/assets/sass/sass/components/panel.sass */.panel-block input[type="checkbox"]{margin-right:.75em}/* line 92, src/assets/sass/sass/components/panel.sass */.panel-block>.control{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:1;flex-shrink:1;width:100%}/* line 96, src/assets/sass/sass/components/panel.sass */.panel-block.is-wrapped{-ms-flex-wrap:wrap;flex-wrap:wrap}/* line 98, src/assets/sass/sass/components/panel.sass */.panel-block.is-active{border-left-color:#3273dc;color:#363636}/* line 101, src/assets/sass/sass/components/panel.sass */.panel-block.is-active .panel-icon{color:#3273dc}/* line 103, src/assets/sass/sass/components/panel.sass */.panel-block:last-child{border-bottom-left-radius:6px;border-bottom-right-radius:6px}/* line 107, src/assets/sass/sass/components/panel.sass */a.panel-block,label.panel-block{cursor:pointer}/* line 110, src/assets/sass/sass/components/panel.sass */a.panel-block:hover,label.panel-block:hover{background-color:#f5f5f5}/* line 113, src/assets/sass/sass/components/panel.sass */.panel-icon{display:inline-block;font-size:14px;height:1em;line-height:1em;text-align:center;vertical-align:top;width:1em;color:#7a7a7a;margin-right:.75em}/* line 117, src/assets/sass/sass/components/panel.sass */.panel-icon .fa{font-size:inherit;line-height:inherit}/* line 29, src/assets/sass/sass/components/tabs.sass */.tabs{-webkit-overflow-scrolling:touch;-webkit-box-align:stretch;-ms-flex-align:stretch;align-items:stretch;display:-webkit-box;display:-ms-flexbox;display:flex;font-size:1rem;-webkit-box-pack:justify;-ms-flex-pack:justify;justify-content:space-between;overflow:hidden;overflow-x:auto;white-space:nowrap}/* line 40, src/assets/sass/sass/components/tabs.sass */.tabs a{-webkit-box-align:center;-ms-flex-align:center;align-items:center;border-bottom-color:#dbdbdb;border-bottom-style:solid;border-bottom-width:1px;color:#4a4a4a;display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center;margin-bottom:-1px;padding:0.5em 1em;vertical-align:top}/* line 51, src/assets/sass/sass/components/tabs.sass */.tabs a:hover{border-bottom-color:#363636;color:#363636}/* line 54, src/assets/sass/sass/components/tabs.sass */.tabs li{display:block}/* line 57, src/assets/sass/sass/components/tabs.sass */.tabs li.is-active a{border-bottom-color:#3273dc;color:#3273dc}/* line 60, src/assets/sass/sass/components/tabs.sass */.tabs ul{-webkit-box-align:center;-ms-flex-align:center;align-items:center;border-bottom-color:#dbdbdb;border-bottom-style:solid;border-bottom-width:1px;display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:0;flex-shrink:0;-webkit-box-pack:start;-ms-flex-pack:start;justify-content:flex-start}/* line 69, src/assets/sass/sass/components/tabs.sass */.tabs ul.is-left{padding-right:0.75em}/* line 71, src/assets/sass/sass/components/tabs.sass */.tabs ul.is-center{-webkit-box-flex:0;-ms-flex:none;flex:none;-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center;padding-left:0.75em;padding-right:0.75em}/* line 76, src/assets/sass/sass/components/tabs.sass */.tabs ul.is-right{-webkit-box-pack:end;-ms-flex-pack:end;justify-content:flex-end;padding-left:0.75em}/* line 80, src/assets/sass/sass/components/tabs.sass */.tabs .icon:first-child{margin-right:.5em}/* line 82, src/assets/sass/sass/components/tabs.sass */.tabs .icon:last-child{margin-left:.5em}/* line 86, src/assets/sass/sass/components/tabs.sass */.tabs.is-centered ul{-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center}/* line 89, src/assets/sass/sass/components/tabs.sass */.tabs.is-right ul{-webkit-box-pack:end;-ms-flex-pack:end;justify-content:flex-end}/* line 93, src/assets/sass/sass/components/tabs.sass */.tabs.is-boxed a{border:1px solid transparent;border-radius:4px 4px 0 0}/* line 99, src/assets/sass/sass/components/tabs.sass */.tabs.is-boxed a:hover{background-color:#f5f5f5;border-bottom-color:#dbdbdb}/* line 104, src/assets/sass/sass/components/tabs.sass */.tabs.is-boxed li.is-active a{background-color:#fff;border-color:#dbdbdb;border-bottom-color:rgba(0,0,0,0) !important}/* line 109, src/assets/sass/sass/components/tabs.sass */.tabs.is-fullwidth li{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:0;flex-shrink:0}/* line 113, src/assets/sass/sass/components/tabs.sass */.tabs.is-toggle a{border-color:#dbdbdb;border-style:solid;border-width:1px;margin-bottom:0;position:relative}/* line 119, src/assets/sass/sass/components/tabs.sass */.tabs.is-toggle a:hover{background-color:#f5f5f5;border-color:#b5b5b5;z-index:2}/* line 124, src/assets/sass/sass/components/tabs.sass */.tabs.is-toggle li+li{margin-left:-1px}/* line 126, src/assets/sass/sass/components/tabs.sass */.tabs.is-toggle li:first-child a{border-top-left-radius:4px;border-bottom-left-radius:4px}/* line 133, src/assets/sass/sass/components/tabs.sass */.tabs.is-toggle li:last-child a{border-top-right-radius:4px;border-bottom-right-radius:4px}/* line 141, src/assets/sass/sass/components/tabs.sass */.tabs.is-toggle li.is-active a{background-color:#3273dc;border-color:#3273dc;color:#fff;z-index:1}/* line 146, src/assets/sass/sass/components/tabs.sass */.tabs.is-toggle ul{border-bottom:none}/* line 150, src/assets/sass/sass/components/tabs.sass */.tabs.is-toggle.is-toggle-rounded li:first-child a{border-bottom-left-radius:290486px;border-top-left-radius:290486px;padding-left:1.25em}/* line 159, src/assets/sass/sass/components/tabs.sass */.tabs.is-toggle.is-toggle-rounded li:last-child a{border-bottom-right-radius:290486px;border-top-right-radius:290486px;padding-right:1.25em}/* line 169, src/assets/sass/sass/components/tabs.sass */.tabs.is-small{font-size:.75rem}/* line 171, src/assets/sass/sass/components/tabs.sass */.tabs.is-medium{font-size:1.25rem}/* line 173, src/assets/sass/sass/components/tabs.sass */.tabs.is-large{font-size:1.5rem}/* line 3, src/assets/sass/sass/grid/columns.sass */.column{display:block;-ms-flex-preferred-size:0;flex-basis:0;-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:1;flex-shrink:1;padding:.75rem}/* line 9, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-narrow{-webkit-box-flex:0;-ms-flex:none;flex:none}/* line 11, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-full{-webkit-box-flex:0;-ms-flex:none;flex:none;width:100%}/* line 14, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-three-quarters{-webkit-box-flex:0;-ms-flex:none;flex:none;width:75%}/* line 17, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-two-thirds{-webkit-box-flex:0;-ms-flex:none;flex:none;width:66.6666%}/* line 20, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-half{-webkit-box-flex:0;-ms-flex:none;flex:none;width:50%}/* line 23, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-one-third{-webkit-box-flex:0;-ms-flex:none;flex:none;width:33.3333%}/* line 26, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-one-quarter{-webkit-box-flex:0;-ms-flex:none;flex:none;width:25%}/* line 29, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-one-fifth{-webkit-box-flex:0;-ms-flex:none;flex:none;width:20%}/* line 32, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-two-fifths{-webkit-box-flex:0;-ms-flex:none;flex:none;width:40%}/* line 35, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-three-fifths{-webkit-box-flex:0;-ms-flex:none;flex:none;width:60%}/* line 38, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-four-fifths{-webkit-box-flex:0;-ms-flex:none;flex:none;width:80%}/* line 41, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-three-quarters{margin-left:75%}/* line 43, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-two-thirds{margin-left:66.6666%}/* line 45, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-half{margin-left:50%}/* line 47, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-one-third{margin-left:33.3333%}/* line 49, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-one-quarter{margin-left:25%}/* line 51, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-one-fifth{margin-left:20%}/* line 53, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-two-fifths{margin-left:40%}/* line 55, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-three-fifths{margin-left:60%}/* line 57, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-four-fifths{margin-left:80%}/* line 60, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-0{-webkit-box-flex:0;-ms-flex:none;flex:none;width:0%}/* line 63, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-0{margin-left:0%}/* line 60, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-1{-webkit-box-flex:0;-ms-flex:none;flex:none;width:8.33333%}/* line 63, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-1{margin-left:8.33333%}/* line 60, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-2{-webkit-box-flex:0;-ms-flex:none;flex:none;width:16.66667%}/* line 63, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-2{margin-left:16.66667%}/* line 60, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-3{-webkit-box-flex:0;-ms-flex:none;flex:none;width:25%}/* line 63, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-3{margin-left:25%}/* line 60, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-4{-webkit-box-flex:0;-ms-flex:none;flex:none;width:33.33333%}/* line 63, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-4{margin-left:33.33333%}/* line 60, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-5{-webkit-box-flex:0;-ms-flex:none;flex:none;width:41.66667%}/* line 63, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-5{margin-left:41.66667%}/* line 60, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-6{-webkit-box-flex:0;-ms-flex:none;flex:none;width:50%}/* line 63, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-6{margin-left:50%}/* line 60, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-7{-webkit-box-flex:0;-ms-flex:none;flex:none;width:58.33333%}/* line 63, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-7{margin-left:58.33333%}/* line 60, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-8{-webkit-box-flex:0;-ms-flex:none;flex:none;width:66.66667%}/* line 63, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-8{margin-left:66.66667%}/* line 60, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-9{-webkit-box-flex:0;-ms-flex:none;flex:none;width:75%}/* line 63, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-9{margin-left:75%}/* line 60, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-10{-webkit-box-flex:0;-ms-flex:none;flex:none;width:83.33333%}/* line 63, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-10{margin-left:83.33333%}/* line 60, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-11{-webkit-box-flex:0;-ms-flex:none;flex:none;width:91.66667%}/* line 63, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-11{margin-left:91.66667%}/* line 60, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-12{-webkit-box-flex:0;-ms-flex:none;flex:none;width:100%}/* line 63, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile>.column.is-offset-12{margin-left:100%}@media screen and (max-width: 768px){/* line 66, src/assets/sass/sass/grid/columns.sass */.column.is-narrow-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none}/* line 68, src/assets/sass/sass/grid/columns.sass */.column.is-full-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:100%}/* line 71, src/assets/sass/sass/grid/columns.sass */.column.is-three-quarters-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:75%}/* line 74, src/assets/sass/sass/grid/columns.sass */.column.is-two-thirds-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:66.6666%}/* line 77, src/assets/sass/sass/grid/columns.sass */.column.is-half-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:50%}/* line 80, src/assets/sass/sass/grid/columns.sass */.column.is-one-third-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:33.3333%}/* line 83, src/assets/sass/sass/grid/columns.sass */.column.is-one-quarter-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:25%}/* line 86, src/assets/sass/sass/grid/columns.sass */.column.is-one-fifth-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:20%}/* line 89, src/assets/sass/sass/grid/columns.sass */.column.is-two-fifths-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:40%}/* line 92, src/assets/sass/sass/grid/columns.sass */.column.is-three-fifths-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:60%}/* line 95, src/assets/sass/sass/grid/columns.sass */.column.is-four-fifths-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:80%}/* line 98, src/assets/sass/sass/grid/columns.sass */.column.is-offset-three-quarters-mobile{margin-left:75%}/* line 100, src/assets/sass/sass/grid/columns.sass */.column.is-offset-two-thirds-mobile{margin-left:66.6666%}/* line 102, src/assets/sass/sass/grid/columns.sass */.column.is-offset-half-mobile{margin-left:50%}/* line 104, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-third-mobile{margin-left:33.3333%}/* line 106, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-quarter-mobile{margin-left:25%}/* line 108, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-fifth-mobile{margin-left:20%}/* line 110, src/assets/sass/sass/grid/columns.sass */.column.is-offset-two-fifths-mobile{margin-left:40%}/* line 112, src/assets/sass/sass/grid/columns.sass */.column.is-offset-three-fifths-mobile{margin-left:60%}/* line 114, src/assets/sass/sass/grid/columns.sass */.column.is-offset-four-fifths-mobile{margin-left:80%}/* line 117, src/assets/sass/sass/grid/columns.sass */.column.is-0-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:0%}/* line 120, src/assets/sass/sass/grid/columns.sass */.column.is-offset-0-mobile{margin-left:0%}/* line 117, src/assets/sass/sass/grid/columns.sass */.column.is-1-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:8.33333%}/* line 120, src/assets/sass/sass/grid/columns.sass */.column.is-offset-1-mobile{margin-left:8.33333%}/* line 117, src/assets/sass/sass/grid/columns.sass */.column.is-2-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:16.66667%}/* line 120, src/assets/sass/sass/grid/columns.sass */.column.is-offset-2-mobile{margin-left:16.66667%}/* line 117, src/assets/sass/sass/grid/columns.sass */.column.is-3-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:25%}/* line 120, src/assets/sass/sass/grid/columns.sass */.column.is-offset-3-mobile{margin-left:25%}/* line 117, src/assets/sass/sass/grid/columns.sass */.column.is-4-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:33.33333%}/* line 120, src/assets/sass/sass/grid/columns.sass */.column.is-offset-4-mobile{margin-left:33.33333%}/* line 117, src/assets/sass/sass/grid/columns.sass */.column.is-5-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:41.66667%}/* line 120, src/assets/sass/sass/grid/columns.sass */.column.is-offset-5-mobile{margin-left:41.66667%}/* line 117, src/assets/sass/sass/grid/columns.sass */.column.is-6-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:50%}/* line 120, src/assets/sass/sass/grid/columns.sass */.column.is-offset-6-mobile{margin-left:50%}/* line 117, src/assets/sass/sass/grid/columns.sass */.column.is-7-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:58.33333%}/* line 120, src/assets/sass/sass/grid/columns.sass */.column.is-offset-7-mobile{margin-left:58.33333%}/* line 117, src/assets/sass/sass/grid/columns.sass */.column.is-8-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:66.66667%}/* line 120, src/assets/sass/sass/grid/columns.sass */.column.is-offset-8-mobile{margin-left:66.66667%}/* line 117, src/assets/sass/sass/grid/columns.sass */.column.is-9-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:75%}/* line 120, src/assets/sass/sass/grid/columns.sass */.column.is-offset-9-mobile{margin-left:75%}/* line 117, src/assets/sass/sass/grid/columns.sass */.column.is-10-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:83.33333%}/* line 120, src/assets/sass/sass/grid/columns.sass */.column.is-offset-10-mobile{margin-left:83.33333%}/* line 117, src/assets/sass/sass/grid/columns.sass */.column.is-11-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:91.66667%}/* line 120, src/assets/sass/sass/grid/columns.sass */.column.is-offset-11-mobile{margin-left:91.66667%}/* line 117, src/assets/sass/sass/grid/columns.sass */.column.is-12-mobile{-webkit-box-flex:0;-ms-flex:none;flex:none;width:100%}/* line 120, src/assets/sass/sass/grid/columns.sass */.column.is-offset-12-mobile{margin-left:100%}}@media screen and (min-width: 769px), print{/* line 123, src/assets/sass/sass/grid/columns.sass */.column.is-narrow,.column.is-narrow-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none}/* line 126, src/assets/sass/sass/grid/columns.sass */.column.is-full,.column.is-full-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:100%}/* line 130, src/assets/sass/sass/grid/columns.sass */.column.is-three-quarters,.column.is-three-quarters-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:75%}/* line 134, src/assets/sass/sass/grid/columns.sass */.column.is-two-thirds,.column.is-two-thirds-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:66.6666%}/* line 138, src/assets/sass/sass/grid/columns.sass */.column.is-half,.column.is-half-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:50%}/* line 142, src/assets/sass/sass/grid/columns.sass */.column.is-one-third,.column.is-one-third-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:33.3333%}/* line 146, src/assets/sass/sass/grid/columns.sass */.column.is-one-quarter,.column.is-one-quarter-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:25%}/* line 150, src/assets/sass/sass/grid/columns.sass */.column.is-one-fifth,.column.is-one-fifth-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:20%}/* line 154, src/assets/sass/sass/grid/columns.sass */.column.is-two-fifths,.column.is-two-fifths-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:40%}/* line 158, src/assets/sass/sass/grid/columns.sass */.column.is-three-fifths,.column.is-three-fifths-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:60%}/* line 162, src/assets/sass/sass/grid/columns.sass */.column.is-four-fifths,.column.is-four-fifths-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:80%}/* line 166, src/assets/sass/sass/grid/columns.sass */.column.is-offset-three-quarters,.column.is-offset-three-quarters-tablet{margin-left:75%}/* line 169, src/assets/sass/sass/grid/columns.sass */.column.is-offset-two-thirds,.column.is-offset-two-thirds-tablet{margin-left:66.6666%}/* line 172, src/assets/sass/sass/grid/columns.sass */.column.is-offset-half,.column.is-offset-half-tablet{margin-left:50%}/* line 175, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-third,.column.is-offset-one-third-tablet{margin-left:33.3333%}/* line 178, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-quarter,.column.is-offset-one-quarter-tablet{margin-left:25%}/* line 181, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-fifth,.column.is-offset-one-fifth-tablet{margin-left:20%}/* line 184, src/assets/sass/sass/grid/columns.sass */.column.is-offset-two-fifths,.column.is-offset-two-fifths-tablet{margin-left:40%}/* line 187, src/assets/sass/sass/grid/columns.sass */.column.is-offset-three-fifths,.column.is-offset-three-fifths-tablet{margin-left:60%}/* line 190, src/assets/sass/sass/grid/columns.sass */.column.is-offset-four-fifths,.column.is-offset-four-fifths-tablet{margin-left:80%}/* line 194, src/assets/sass/sass/grid/columns.sass */.column.is-0,.column.is-0-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:0%}/* line 198, src/assets/sass/sass/grid/columns.sass */.column.is-offset-0,.column.is-offset-0-tablet{margin-left:0%}/* line 194, src/assets/sass/sass/grid/columns.sass */.column.is-1,.column.is-1-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:8.33333%}/* line 198, src/assets/sass/sass/grid/columns.sass */.column.is-offset-1,.column.is-offset-1-tablet{margin-left:8.33333%}/* line 194, src/assets/sass/sass/grid/columns.sass */.column.is-2,.column.is-2-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:16.66667%}/* line 198, src/assets/sass/sass/grid/columns.sass */.column.is-offset-2,.column.is-offset-2-tablet{margin-left:16.66667%}/* line 194, src/assets/sass/sass/grid/columns.sass */.column.is-3,.column.is-3-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:25%}/* line 198, src/assets/sass/sass/grid/columns.sass */.column.is-offset-3,.column.is-offset-3-tablet{margin-left:25%}/* line 194, src/assets/sass/sass/grid/columns.sass */.column.is-4,.column.is-4-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:33.33333%}/* line 198, src/assets/sass/sass/grid/columns.sass */.column.is-offset-4,.column.is-offset-4-tablet{margin-left:33.33333%}/* line 194, src/assets/sass/sass/grid/columns.sass */.column.is-5,.column.is-5-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:41.66667%}/* line 198, src/assets/sass/sass/grid/columns.sass */.column.is-offset-5,.column.is-offset-5-tablet{margin-left:41.66667%}/* line 194, src/assets/sass/sass/grid/columns.sass */.column.is-6,.column.is-6-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:50%}/* line 198, src/assets/sass/sass/grid/columns.sass */.column.is-offset-6,.column.is-offset-6-tablet{margin-left:50%}/* line 194, src/assets/sass/sass/grid/columns.sass */.column.is-7,.column.is-7-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:58.33333%}/* line 198, src/assets/sass/sass/grid/columns.sass */.column.is-offset-7,.column.is-offset-7-tablet{margin-left:58.33333%}/* line 194, src/assets/sass/sass/grid/columns.sass */.column.is-8,.column.is-8-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:66.66667%}/* line 198, src/assets/sass/sass/grid/columns.sass */.column.is-offset-8,.column.is-offset-8-tablet{margin-left:66.66667%}/* line 194, src/assets/sass/sass/grid/columns.sass */.column.is-9,.column.is-9-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:75%}/* line 198, src/assets/sass/sass/grid/columns.sass */.column.is-offset-9,.column.is-offset-9-tablet{margin-left:75%}/* line 194, src/assets/sass/sass/grid/columns.sass */.column.is-10,.column.is-10-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:83.33333%}/* line 198, src/assets/sass/sass/grid/columns.sass */.column.is-offset-10,.column.is-offset-10-tablet{margin-left:83.33333%}/* line 194, src/assets/sass/sass/grid/columns.sass */.column.is-11,.column.is-11-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:91.66667%}/* line 198, src/assets/sass/sass/grid/columns.sass */.column.is-offset-11,.column.is-offset-11-tablet{margin-left:91.66667%}/* line 194, src/assets/sass/sass/grid/columns.sass */.column.is-12,.column.is-12-tablet{-webkit-box-flex:0;-ms-flex:none;flex:none;width:100%}/* line 198, src/assets/sass/sass/grid/columns.sass */.column.is-offset-12,.column.is-offset-12-tablet{margin-left:100%}}@media screen and (max-width: 1023px){/* line 202, src/assets/sass/sass/grid/columns.sass */.column.is-narrow-touch{-webkit-box-flex:0;-ms-flex:none;flex:none}/* line 204, src/assets/sass/sass/grid/columns.sass */.column.is-full-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:100%}/* line 207, src/assets/sass/sass/grid/columns.sass */.column.is-three-quarters-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:75%}/* line 210, src/assets/sass/sass/grid/columns.sass */.column.is-two-thirds-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:66.6666%}/* line 213, src/assets/sass/sass/grid/columns.sass */.column.is-half-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:50%}/* line 216, src/assets/sass/sass/grid/columns.sass */.column.is-one-third-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:33.3333%}/* line 219, src/assets/sass/sass/grid/columns.sass */.column.is-one-quarter-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:25%}/* line 222, src/assets/sass/sass/grid/columns.sass */.column.is-one-fifth-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:20%}/* line 225, src/assets/sass/sass/grid/columns.sass */.column.is-two-fifths-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:40%}/* line 228, src/assets/sass/sass/grid/columns.sass */.column.is-three-fifths-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:60%}/* line 231, src/assets/sass/sass/grid/columns.sass */.column.is-four-fifths-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:80%}/* line 234, src/assets/sass/sass/grid/columns.sass */.column.is-offset-three-quarters-touch{margin-left:75%}/* line 236, src/assets/sass/sass/grid/columns.sass */.column.is-offset-two-thirds-touch{margin-left:66.6666%}/* line 238, src/assets/sass/sass/grid/columns.sass */.column.is-offset-half-touch{margin-left:50%}/* line 240, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-third-touch{margin-left:33.3333%}/* line 242, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-quarter-touch{margin-left:25%}/* line 244, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-fifth-touch{margin-left:20%}/* line 246, src/assets/sass/sass/grid/columns.sass */.column.is-offset-two-fifths-touch{margin-left:40%}/* line 248, src/assets/sass/sass/grid/columns.sass */.column.is-offset-three-fifths-touch{margin-left:60%}/* line 250, src/assets/sass/sass/grid/columns.sass */.column.is-offset-four-fifths-touch{margin-left:80%}/* line 253, src/assets/sass/sass/grid/columns.sass */.column.is-0-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:0%}/* line 256, src/assets/sass/sass/grid/columns.sass */.column.is-offset-0-touch{margin-left:0%}/* line 253, src/assets/sass/sass/grid/columns.sass */.column.is-1-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:8.33333%}/* line 256, src/assets/sass/sass/grid/columns.sass */.column.is-offset-1-touch{margin-left:8.33333%}/* line 253, src/assets/sass/sass/grid/columns.sass */.column.is-2-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:16.66667%}/* line 256, src/assets/sass/sass/grid/columns.sass */.column.is-offset-2-touch{margin-left:16.66667%}/* line 253, src/assets/sass/sass/grid/columns.sass */.column.is-3-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:25%}/* line 256, src/assets/sass/sass/grid/columns.sass */.column.is-offset-3-touch{margin-left:25%}/* line 253, src/assets/sass/sass/grid/columns.sass */.column.is-4-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:33.33333%}/* line 256, src/assets/sass/sass/grid/columns.sass */.column.is-offset-4-touch{margin-left:33.33333%}/* line 253, src/assets/sass/sass/grid/columns.sass */.column.is-5-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:41.66667%}/* line 256, src/assets/sass/sass/grid/columns.sass */.column.is-offset-5-touch{margin-left:41.66667%}/* line 253, src/assets/sass/sass/grid/columns.sass */.column.is-6-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:50%}/* line 256, src/assets/sass/sass/grid/columns.sass */.column.is-offset-6-touch{margin-left:50%}/* line 253, src/assets/sass/sass/grid/columns.sass */.column.is-7-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:58.33333%}/* line 256, src/assets/sass/sass/grid/columns.sass */.column.is-offset-7-touch{margin-left:58.33333%}/* line 253, src/assets/sass/sass/grid/columns.sass */.column.is-8-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:66.66667%}/* line 256, src/assets/sass/sass/grid/columns.sass */.column.is-offset-8-touch{margin-left:66.66667%}/* line 253, src/assets/sass/sass/grid/columns.sass */.column.is-9-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:75%}/* line 256, src/assets/sass/sass/grid/columns.sass */.column.is-offset-9-touch{margin-left:75%}/* line 253, src/assets/sass/sass/grid/columns.sass */.column.is-10-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:83.33333%}/* line 256, src/assets/sass/sass/grid/columns.sass */.column.is-offset-10-touch{margin-left:83.33333%}/* line 253, src/assets/sass/sass/grid/columns.sass */.column.is-11-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:91.66667%}/* line 256, src/assets/sass/sass/grid/columns.sass */.column.is-offset-11-touch{margin-left:91.66667%}/* line 253, src/assets/sass/sass/grid/columns.sass */.column.is-12-touch{-webkit-box-flex:0;-ms-flex:none;flex:none;width:100%}/* line 256, src/assets/sass/sass/grid/columns.sass */.column.is-offset-12-touch{margin-left:100%}}@media screen and (min-width: 1024px){/* line 259, src/assets/sass/sass/grid/columns.sass */.column.is-narrow-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none}/* line 261, src/assets/sass/sass/grid/columns.sass */.column.is-full-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:100%}/* line 264, src/assets/sass/sass/grid/columns.sass */.column.is-three-quarters-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:75%}/* line 267, src/assets/sass/sass/grid/columns.sass */.column.is-two-thirds-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:66.6666%}/* line 270, src/assets/sass/sass/grid/columns.sass */.column.is-half-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:50%}/* line 273, src/assets/sass/sass/grid/columns.sass */.column.is-one-third-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:33.3333%}/* line 276, src/assets/sass/sass/grid/columns.sass */.column.is-one-quarter-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:25%}/* line 279, src/assets/sass/sass/grid/columns.sass */.column.is-one-fifth-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:20%}/* line 282, src/assets/sass/sass/grid/columns.sass */.column.is-two-fifths-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:40%}/* line 285, src/assets/sass/sass/grid/columns.sass */.column.is-three-fifths-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:60%}/* line 288, src/assets/sass/sass/grid/columns.sass */.column.is-four-fifths-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:80%}/* line 291, src/assets/sass/sass/grid/columns.sass */.column.is-offset-three-quarters-desktop{margin-left:75%}/* line 293, src/assets/sass/sass/grid/columns.sass */.column.is-offset-two-thirds-desktop{margin-left:66.6666%}/* line 295, src/assets/sass/sass/grid/columns.sass */.column.is-offset-half-desktop{margin-left:50%}/* line 297, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-third-desktop{margin-left:33.3333%}/* line 299, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-quarter-desktop{margin-left:25%}/* line 301, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-fifth-desktop{margin-left:20%}/* line 303, src/assets/sass/sass/grid/columns.sass */.column.is-offset-two-fifths-desktop{margin-left:40%}/* line 305, src/assets/sass/sass/grid/columns.sass */.column.is-offset-three-fifths-desktop{margin-left:60%}/* line 307, src/assets/sass/sass/grid/columns.sass */.column.is-offset-four-fifths-desktop{margin-left:80%}/* line 310, src/assets/sass/sass/grid/columns.sass */.column.is-0-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:0%}/* line 313, src/assets/sass/sass/grid/columns.sass */.column.is-offset-0-desktop{margin-left:0%}/* line 310, src/assets/sass/sass/grid/columns.sass */.column.is-1-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:8.33333%}/* line 313, src/assets/sass/sass/grid/columns.sass */.column.is-offset-1-desktop{margin-left:8.33333%}/* line 310, src/assets/sass/sass/grid/columns.sass */.column.is-2-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:16.66667%}/* line 313, src/assets/sass/sass/grid/columns.sass */.column.is-offset-2-desktop{margin-left:16.66667%}/* line 310, src/assets/sass/sass/grid/columns.sass */.column.is-3-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:25%}/* line 313, src/assets/sass/sass/grid/columns.sass */.column.is-offset-3-desktop{margin-left:25%}/* line 310, src/assets/sass/sass/grid/columns.sass */.column.is-4-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:33.33333%}/* line 313, src/assets/sass/sass/grid/columns.sass */.column.is-offset-4-desktop{margin-left:33.33333%}/* line 310, src/assets/sass/sass/grid/columns.sass */.column.is-5-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:41.66667%}/* line 313, src/assets/sass/sass/grid/columns.sass */.column.is-offset-5-desktop{margin-left:41.66667%}/* line 310, src/assets/sass/sass/grid/columns.sass */.column.is-6-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:50%}/* line 313, src/assets/sass/sass/grid/columns.sass */.column.is-offset-6-desktop{margin-left:50%}/* line 310, src/assets/sass/sass/grid/columns.sass */.column.is-7-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:58.33333%}/* line 313, src/assets/sass/sass/grid/columns.sass */.column.is-offset-7-desktop{margin-left:58.33333%}/* line 310, src/assets/sass/sass/grid/columns.sass */.column.is-8-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:66.66667%}/* line 313, src/assets/sass/sass/grid/columns.sass */.column.is-offset-8-desktop{margin-left:66.66667%}/* line 310, src/assets/sass/sass/grid/columns.sass */.column.is-9-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:75%}/* line 313, src/assets/sass/sass/grid/columns.sass */.column.is-offset-9-desktop{margin-left:75%}/* line 310, src/assets/sass/sass/grid/columns.sass */.column.is-10-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:83.33333%}/* line 313, src/assets/sass/sass/grid/columns.sass */.column.is-offset-10-desktop{margin-left:83.33333%}/* line 310, src/assets/sass/sass/grid/columns.sass */.column.is-11-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:91.66667%}/* line 313, src/assets/sass/sass/grid/columns.sass */.column.is-offset-11-desktop{margin-left:91.66667%}/* line 310, src/assets/sass/sass/grid/columns.sass */.column.is-12-desktop{-webkit-box-flex:0;-ms-flex:none;flex:none;width:100%}/* line 313, src/assets/sass/sass/grid/columns.sass */.column.is-offset-12-desktop{margin-left:100%}}@media screen and (min-width: 1216px){/* line 316, src/assets/sass/sass/grid/columns.sass */.column.is-narrow-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none}/* line 318, src/assets/sass/sass/grid/columns.sass */.column.is-full-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:100%}/* line 321, src/assets/sass/sass/grid/columns.sass */.column.is-three-quarters-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:75%}/* line 324, src/assets/sass/sass/grid/columns.sass */.column.is-two-thirds-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:66.6666%}/* line 327, src/assets/sass/sass/grid/columns.sass */.column.is-half-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:50%}/* line 330, src/assets/sass/sass/grid/columns.sass */.column.is-one-third-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:33.3333%}/* line 333, src/assets/sass/sass/grid/columns.sass */.column.is-one-quarter-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:25%}/* line 336, src/assets/sass/sass/grid/columns.sass */.column.is-one-fifth-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:20%}/* line 339, src/assets/sass/sass/grid/columns.sass */.column.is-two-fifths-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:40%}/* line 342, src/assets/sass/sass/grid/columns.sass */.column.is-three-fifths-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:60%}/* line 345, src/assets/sass/sass/grid/columns.sass */.column.is-four-fifths-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:80%}/* line 348, src/assets/sass/sass/grid/columns.sass */.column.is-offset-three-quarters-widescreen{margin-left:75%}/* line 350, src/assets/sass/sass/grid/columns.sass */.column.is-offset-two-thirds-widescreen{margin-left:66.6666%}/* line 352, src/assets/sass/sass/grid/columns.sass */.column.is-offset-half-widescreen{margin-left:50%}/* line 354, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-third-widescreen{margin-left:33.3333%}/* line 356, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-quarter-widescreen{margin-left:25%}/* line 358, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-fifth-widescreen{margin-left:20%}/* line 360, src/assets/sass/sass/grid/columns.sass */.column.is-offset-two-fifths-widescreen{margin-left:40%}/* line 362, src/assets/sass/sass/grid/columns.sass */.column.is-offset-three-fifths-widescreen{margin-left:60%}/* line 364, src/assets/sass/sass/grid/columns.sass */.column.is-offset-four-fifths-widescreen{margin-left:80%}/* line 367, src/assets/sass/sass/grid/columns.sass */.column.is-0-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:0%}/* line 370, src/assets/sass/sass/grid/columns.sass */.column.is-offset-0-widescreen{margin-left:0%}/* line 367, src/assets/sass/sass/grid/columns.sass */.column.is-1-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:8.33333%}/* line 370, src/assets/sass/sass/grid/columns.sass */.column.is-offset-1-widescreen{margin-left:8.33333%}/* line 367, src/assets/sass/sass/grid/columns.sass */.column.is-2-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:16.66667%}/* line 370, src/assets/sass/sass/grid/columns.sass */.column.is-offset-2-widescreen{margin-left:16.66667%}/* line 367, src/assets/sass/sass/grid/columns.sass */.column.is-3-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:25%}/* line 370, src/assets/sass/sass/grid/columns.sass */.column.is-offset-3-widescreen{margin-left:25%}/* line 367, src/assets/sass/sass/grid/columns.sass */.column.is-4-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:33.33333%}/* line 370, src/assets/sass/sass/grid/columns.sass */.column.is-offset-4-widescreen{margin-left:33.33333%}/* line 367, src/assets/sass/sass/grid/columns.sass */.column.is-5-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:41.66667%}/* line 370, src/assets/sass/sass/grid/columns.sass */.column.is-offset-5-widescreen{margin-left:41.66667%}/* line 367, src/assets/sass/sass/grid/columns.sass */.column.is-6-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:50%}/* line 370, src/assets/sass/sass/grid/columns.sass */.column.is-offset-6-widescreen{margin-left:50%}/* line 367, src/assets/sass/sass/grid/columns.sass */.column.is-7-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:58.33333%}/* line 370, src/assets/sass/sass/grid/columns.sass */.column.is-offset-7-widescreen{margin-left:58.33333%}/* line 367, src/assets/sass/sass/grid/columns.sass */.column.is-8-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:66.66667%}/* line 370, src/assets/sass/sass/grid/columns.sass */.column.is-offset-8-widescreen{margin-left:66.66667%}/* line 367, src/assets/sass/sass/grid/columns.sass */.column.is-9-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:75%}/* line 370, src/assets/sass/sass/grid/columns.sass */.column.is-offset-9-widescreen{margin-left:75%}/* line 367, src/assets/sass/sass/grid/columns.sass */.column.is-10-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:83.33333%}/* line 370, src/assets/sass/sass/grid/columns.sass */.column.is-offset-10-widescreen{margin-left:83.33333%}/* line 367, src/assets/sass/sass/grid/columns.sass */.column.is-11-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:91.66667%}/* line 370, src/assets/sass/sass/grid/columns.sass */.column.is-offset-11-widescreen{margin-left:91.66667%}/* line 367, src/assets/sass/sass/grid/columns.sass */.column.is-12-widescreen{-webkit-box-flex:0;-ms-flex:none;flex:none;width:100%}/* line 370, src/assets/sass/sass/grid/columns.sass */.column.is-offset-12-widescreen{margin-left:100%}}@media screen and (min-width: 1408px){/* line 373, src/assets/sass/sass/grid/columns.sass */.column.is-narrow-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none}/* line 375, src/assets/sass/sass/grid/columns.sass */.column.is-full-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:100%}/* line 378, src/assets/sass/sass/grid/columns.sass */.column.is-three-quarters-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:75%}/* line 381, src/assets/sass/sass/grid/columns.sass */.column.is-two-thirds-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:66.6666%}/* line 384, src/assets/sass/sass/grid/columns.sass */.column.is-half-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:50%}/* line 387, src/assets/sass/sass/grid/columns.sass */.column.is-one-third-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:33.3333%}/* line 390, src/assets/sass/sass/grid/columns.sass */.column.is-one-quarter-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:25%}/* line 393, src/assets/sass/sass/grid/columns.sass */.column.is-one-fifth-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:20%}/* line 396, src/assets/sass/sass/grid/columns.sass */.column.is-two-fifths-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:40%}/* line 399, src/assets/sass/sass/grid/columns.sass */.column.is-three-fifths-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:60%}/* line 402, src/assets/sass/sass/grid/columns.sass */.column.is-four-fifths-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:80%}/* line 405, src/assets/sass/sass/grid/columns.sass */.column.is-offset-three-quarters-fullhd{margin-left:75%}/* line 407, src/assets/sass/sass/grid/columns.sass */.column.is-offset-two-thirds-fullhd{margin-left:66.6666%}/* line 409, src/assets/sass/sass/grid/columns.sass */.column.is-offset-half-fullhd{margin-left:50%}/* line 411, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-third-fullhd{margin-left:33.3333%}/* line 413, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-quarter-fullhd{margin-left:25%}/* line 415, src/assets/sass/sass/grid/columns.sass */.column.is-offset-one-fifth-fullhd{margin-left:20%}/* line 417, src/assets/sass/sass/grid/columns.sass */.column.is-offset-two-fifths-fullhd{margin-left:40%}/* line 419, src/assets/sass/sass/grid/columns.sass */.column.is-offset-three-fifths-fullhd{margin-left:60%}/* line 421, src/assets/sass/sass/grid/columns.sass */.column.is-offset-four-fifths-fullhd{margin-left:80%}/* line 424, src/assets/sass/sass/grid/columns.sass */.column.is-0-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:0%}/* line 427, src/assets/sass/sass/grid/columns.sass */.column.is-offset-0-fullhd{margin-left:0%}/* line 424, src/assets/sass/sass/grid/columns.sass */.column.is-1-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:8.33333%}/* line 427, src/assets/sass/sass/grid/columns.sass */.column.is-offset-1-fullhd{margin-left:8.33333%}/* line 424, src/assets/sass/sass/grid/columns.sass */.column.is-2-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:16.66667%}/* line 427, src/assets/sass/sass/grid/columns.sass */.column.is-offset-2-fullhd{margin-left:16.66667%}/* line 424, src/assets/sass/sass/grid/columns.sass */.column.is-3-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:25%}/* line 427, src/assets/sass/sass/grid/columns.sass */.column.is-offset-3-fullhd{margin-left:25%}/* line 424, src/assets/sass/sass/grid/columns.sass */.column.is-4-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:33.33333%}/* line 427, src/assets/sass/sass/grid/columns.sass */.column.is-offset-4-fullhd{margin-left:33.33333%}/* line 424, src/assets/sass/sass/grid/columns.sass */.column.is-5-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:41.66667%}/* line 427, src/assets/sass/sass/grid/columns.sass */.column.is-offset-5-fullhd{margin-left:41.66667%}/* line 424, src/assets/sass/sass/grid/columns.sass */.column.is-6-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:50%}/* line 427, src/assets/sass/sass/grid/columns.sass */.column.is-offset-6-fullhd{margin-left:50%}/* line 424, src/assets/sass/sass/grid/columns.sass */.column.is-7-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:58.33333%}/* line 427, src/assets/sass/sass/grid/columns.sass */.column.is-offset-7-fullhd{margin-left:58.33333%}/* line 424, src/assets/sass/sass/grid/columns.sass */.column.is-8-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:66.66667%}/* line 427, src/assets/sass/sass/grid/columns.sass */.column.is-offset-8-fullhd{margin-left:66.66667%}/* line 424, src/assets/sass/sass/grid/columns.sass */.column.is-9-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:75%}/* line 427, src/assets/sass/sass/grid/columns.sass */.column.is-offset-9-fullhd{margin-left:75%}/* line 424, src/assets/sass/sass/grid/columns.sass */.column.is-10-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:83.33333%}/* line 427, src/assets/sass/sass/grid/columns.sass */.column.is-offset-10-fullhd{margin-left:83.33333%}/* line 424, src/assets/sass/sass/grid/columns.sass */.column.is-11-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:91.66667%}/* line 427, src/assets/sass/sass/grid/columns.sass */.column.is-offset-11-fullhd{margin-left:91.66667%}/* line 424, src/assets/sass/sass/grid/columns.sass */.column.is-12-fullhd{-webkit-box-flex:0;-ms-flex:none;flex:none;width:100%}/* line 427, src/assets/sass/sass/grid/columns.sass */.column.is-offset-12-fullhd{margin-left:100%}}/* line 430, src/assets/sass/sass/grid/columns.sass */.columns{margin-left:-.75rem;margin-right:-.75rem;margin-top:-.75rem}/* line 434, src/assets/sass/sass/grid/columns.sass */.columns:last-child{margin-bottom:-.75rem}/* line 436, src/assets/sass/sass/grid/columns.sass */.columns:not(:last-child){margin-bottom:calc(1.5rem - .75rem)}/* line 439, src/assets/sass/sass/grid/columns.sass */.columns.is-centered{-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center}/* line 441, src/assets/sass/sass/grid/columns.sass */.columns.is-gapless{margin-left:0;margin-right:0;margin-top:0}/* line 445, src/assets/sass/sass/grid/columns.sass */.columns.is-gapless>.column{margin:0;padding:0 !important}/* line 448, src/assets/sass/sass/grid/columns.sass */.columns.is-gapless:not(:last-child){margin-bottom:1.5rem}/* line 450, src/assets/sass/sass/grid/columns.sass */.columns.is-gapless:last-child{margin-bottom:0}/* line 452, src/assets/sass/sass/grid/columns.sass */.columns.is-mobile{display:-webkit-box;display:-ms-flexbox;display:flex}/* line 454, src/assets/sass/sass/grid/columns.sass */.columns.is-multiline{-ms-flex-wrap:wrap;flex-wrap:wrap}/* line 456, src/assets/sass/sass/grid/columns.sass */.columns.is-vcentered{-webkit-box-align:center;-ms-flex-align:center;align-items:center}@media screen and (min-width: 769px), print{/* line 460, src/assets/sass/sass/grid/columns.sass */.columns:not(.is-desktop){display:-webkit-box;display:-ms-flexbox;display:flex}}@media screen and (min-width: 1024px){/* line 464, src/assets/sass/sass/grid/columns.sass */.columns.is-desktop{display:-webkit-box;display:-ms-flexbox;display:flex}}/* line 468, src/assets/sass/sass/grid/columns.sass */.columns.is-variable{--columnGap: 0.75rem;margin-left:calc(-1 * var(--columnGap));margin-right:calc(-1 * var(--columnGap))}/* line 472, src/assets/sass/sass/grid/columns.sass */.columns.is-variable .column{padding-left:var(--columnGap);padding-right:var(--columnGap)}/* line 476, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-0{--columnGap: 0rem}@media screen and (max-width: 768px){/* line 479, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-0-mobile{--columnGap: 0rem}}@media screen and (min-width: 769px), print{/* line 482, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-0-tablet{--columnGap: 0rem}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 485, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-0-tablet-only{--columnGap: 0rem}}@media screen and (max-width: 1023px){/* line 488, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-0-touch{--columnGap: 0rem}}@media screen and (min-width: 1024px){/* line 491, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-0-desktop{--columnGap: 0rem}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 494, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-0-desktop-only{--columnGap: 0rem}}@media screen and (min-width: 1216px){/* line 497, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-0-widescreen{--columnGap: 0rem}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 500, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-0-widescreen-only{--columnGap: 0rem}}@media screen and (min-width: 1408px){/* line 503, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-0-fullhd{--columnGap: 0rem}}/* line 476, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-1{--columnGap: .25rem}@media screen and (max-width: 768px){/* line 479, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-1-mobile{--columnGap: .25rem}}@media screen and (min-width: 769px), print{/* line 482, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-1-tablet{--columnGap: .25rem}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 485, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-1-tablet-only{--columnGap: .25rem}}@media screen and (max-width: 1023px){/* line 488, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-1-touch{--columnGap: .25rem}}@media screen and (min-width: 1024px){/* line 491, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-1-desktop{--columnGap: .25rem}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 494, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-1-desktop-only{--columnGap: .25rem}}@media screen and (min-width: 1216px){/* line 497, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-1-widescreen{--columnGap: .25rem}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 500, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-1-widescreen-only{--columnGap: .25rem}}@media screen and (min-width: 1408px){/* line 503, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-1-fullhd{--columnGap: .25rem}}/* line 476, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-2{--columnGap: .5rem}@media screen and (max-width: 768px){/* line 479, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-2-mobile{--columnGap: .5rem}}@media screen and (min-width: 769px), print{/* line 482, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-2-tablet{--columnGap: .5rem}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 485, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-2-tablet-only{--columnGap: .5rem}}@media screen and (max-width: 1023px){/* line 488, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-2-touch{--columnGap: .5rem}}@media screen and (min-width: 1024px){/* line 491, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-2-desktop{--columnGap: .5rem}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 494, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-2-desktop-only{--columnGap: .5rem}}@media screen and (min-width: 1216px){/* line 497, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-2-widescreen{--columnGap: .5rem}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 500, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-2-widescreen-only{--columnGap: .5rem}}@media screen and (min-width: 1408px){/* line 503, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-2-fullhd{--columnGap: .5rem}}/* line 476, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-3{--columnGap: .75rem}@media screen and (max-width: 768px){/* line 479, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-3-mobile{--columnGap: .75rem}}@media screen and (min-width: 769px), print{/* line 482, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-3-tablet{--columnGap: .75rem}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 485, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-3-tablet-only{--columnGap: .75rem}}@media screen and (max-width: 1023px){/* line 488, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-3-touch{--columnGap: .75rem}}@media screen and (min-width: 1024px){/* line 491, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-3-desktop{--columnGap: .75rem}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 494, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-3-desktop-only{--columnGap: .75rem}}@media screen and (min-width: 1216px){/* line 497, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-3-widescreen{--columnGap: .75rem}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 500, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-3-widescreen-only{--columnGap: .75rem}}@media screen and (min-width: 1408px){/* line 503, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-3-fullhd{--columnGap: .75rem}}/* line 476, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-4{--columnGap: 1rem}@media screen and (max-width: 768px){/* line 479, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-4-mobile{--columnGap: 1rem}}@media screen and (min-width: 769px), print{/* line 482, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-4-tablet{--columnGap: 1rem}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 485, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-4-tablet-only{--columnGap: 1rem}}@media screen and (max-width: 1023px){/* line 488, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-4-touch{--columnGap: 1rem}}@media screen and (min-width: 1024px){/* line 491, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-4-desktop{--columnGap: 1rem}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 494, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-4-desktop-only{--columnGap: 1rem}}@media screen and (min-width: 1216px){/* line 497, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-4-widescreen{--columnGap: 1rem}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 500, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-4-widescreen-only{--columnGap: 1rem}}@media screen and (min-width: 1408px){/* line 503, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-4-fullhd{--columnGap: 1rem}}/* line 476, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-5{--columnGap: 1.25rem}@media screen and (max-width: 768px){/* line 479, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-5-mobile{--columnGap: 1.25rem}}@media screen and (min-width: 769px), print{/* line 482, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-5-tablet{--columnGap: 1.25rem}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 485, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-5-tablet-only{--columnGap: 1.25rem}}@media screen and (max-width: 1023px){/* line 488, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-5-touch{--columnGap: 1.25rem}}@media screen and (min-width: 1024px){/* line 491, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-5-desktop{--columnGap: 1.25rem}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 494, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-5-desktop-only{--columnGap: 1.25rem}}@media screen and (min-width: 1216px){/* line 497, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-5-widescreen{--columnGap: 1.25rem}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 500, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-5-widescreen-only{--columnGap: 1.25rem}}@media screen and (min-width: 1408px){/* line 503, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-5-fullhd{--columnGap: 1.25rem}}/* line 476, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-6{--columnGap: 1.5rem}@media screen and (max-width: 768px){/* line 479, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-6-mobile{--columnGap: 1.5rem}}@media screen and (min-width: 769px), print{/* line 482, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-6-tablet{--columnGap: 1.5rem}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 485, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-6-tablet-only{--columnGap: 1.5rem}}@media screen and (max-width: 1023px){/* line 488, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-6-touch{--columnGap: 1.5rem}}@media screen and (min-width: 1024px){/* line 491, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-6-desktop{--columnGap: 1.5rem}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 494, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-6-desktop-only{--columnGap: 1.5rem}}@media screen and (min-width: 1216px){/* line 497, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-6-widescreen{--columnGap: 1.5rem}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 500, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-6-widescreen-only{--columnGap: 1.5rem}}@media screen and (min-width: 1408px){/* line 503, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-6-fullhd{--columnGap: 1.5rem}}/* line 476, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-7{--columnGap: 1.75rem}@media screen and (max-width: 768px){/* line 479, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-7-mobile{--columnGap: 1.75rem}}@media screen and (min-width: 769px), print{/* line 482, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-7-tablet{--columnGap: 1.75rem}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 485, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-7-tablet-only{--columnGap: 1.75rem}}@media screen and (max-width: 1023px){/* line 488, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-7-touch{--columnGap: 1.75rem}}@media screen and (min-width: 1024px){/* line 491, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-7-desktop{--columnGap: 1.75rem}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 494, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-7-desktop-only{--columnGap: 1.75rem}}@media screen and (min-width: 1216px){/* line 497, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-7-widescreen{--columnGap: 1.75rem}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 500, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-7-widescreen-only{--columnGap: 1.75rem}}@media screen and (min-width: 1408px){/* line 503, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-7-fullhd{--columnGap: 1.75rem}}/* line 476, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-8{--columnGap: 2rem}@media screen and (max-width: 768px){/* line 479, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-8-mobile{--columnGap: 2rem}}@media screen and (min-width: 769px), print{/* line 482, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-8-tablet{--columnGap: 2rem}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 485, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-8-tablet-only{--columnGap: 2rem}}@media screen and (max-width: 1023px){/* line 488, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-8-touch{--columnGap: 2rem}}@media screen and (min-width: 1024px){/* line 491, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-8-desktop{--columnGap: 2rem}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 494, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-8-desktop-only{--columnGap: 2rem}}@media screen and (min-width: 1216px){/* line 497, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-8-widescreen{--columnGap: 2rem}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 500, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-8-widescreen-only{--columnGap: 2rem}}@media screen and (min-width: 1408px){/* line 503, src/assets/sass/sass/grid/columns.sass */.columns.is-variable.is-8-fullhd{--columnGap: 2rem}}/* line 3, src/assets/sass/sass/grid/tiles.sass */.tile{-webkit-box-align:stretch;-ms-flex-align:stretch;align-items:stretch;display:block;-ms-flex-preferred-size:0;flex-basis:0;-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:1;flex-shrink:1;min-height:-webkit-min-content;min-height:-moz-min-content;min-height:min-content}/* line 11, src/assets/sass/sass/grid/tiles.sass */.tile.is-ancestor{margin-left:-.75rem;margin-right:-.75rem;margin-top:-.75rem}/* line 15, src/assets/sass/sass/grid/tiles.sass */.tile.is-ancestor:last-child{margin-bottom:-.75rem}/* line 17, src/assets/sass/sass/grid/tiles.sass */.tile.is-ancestor:not(:last-child){margin-bottom:.75rem}/* line 19, src/assets/sass/sass/grid/tiles.sass */.tile.is-child{margin:0 !important}/* line 21, src/assets/sass/sass/grid/tiles.sass */.tile.is-parent{padding:.75rem}/* line 23, src/assets/sass/sass/grid/tiles.sass */.tile.is-vertical{-webkit-box-orient:vertical;-webkit-box-direction:normal;-ms-flex-direction:column;flex-direction:column}/* line 25, src/assets/sass/sass/grid/tiles.sass */.tile.is-vertical>.tile.is-child:not(:last-child){margin-bottom:1.5rem !important}@media screen and (min-width: 769px), print{/* line 29, src/assets/sass/sass/grid/tiles.sass */.tile:not(.is-child){display:-webkit-box;display:-ms-flexbox;display:flex}/* line 32, src/assets/sass/sass/grid/tiles.sass */.tile.is-1{-webkit-box-flex:0;-ms-flex:none;flex:none;width:8.33333%}/* line 32, src/assets/sass/sass/grid/tiles.sass */.tile.is-2{-webkit-box-flex:0;-ms-flex:none;flex:none;width:16.66667%}/* line 32, src/assets/sass/sass/grid/tiles.sass */.tile.is-3{-webkit-box-flex:0;-ms-flex:none;flex:none;width:25%}/* line 32, src/assets/sass/sass/grid/tiles.sass */.tile.is-4{-webkit-box-flex:0;-ms-flex:none;flex:none;width:33.33333%}/* line 32, src/assets/sass/sass/grid/tiles.sass */.tile.is-5{-webkit-box-flex:0;-ms-flex:none;flex:none;width:41.66667%}/* line 32, src/assets/sass/sass/grid/tiles.sass */.tile.is-6{-webkit-box-flex:0;-ms-flex:none;flex:none;width:50%}/* line 32, src/assets/sass/sass/grid/tiles.sass */.tile.is-7{-webkit-box-flex:0;-ms-flex:none;flex:none;width:58.33333%}/* line 32, src/assets/sass/sass/grid/tiles.sass */.tile.is-8{-webkit-box-flex:0;-ms-flex:none;flex:none;width:66.66667%}/* line 32, src/assets/sass/sass/grid/tiles.sass */.tile.is-9{-webkit-box-flex:0;-ms-flex:none;flex:none;width:75%}/* line 32, src/assets/sass/sass/grid/tiles.sass */.tile.is-10{-webkit-box-flex:0;-ms-flex:none;flex:none;width:83.33333%}/* line 32, src/assets/sass/sass/grid/tiles.sass */.tile.is-11{-webkit-box-flex:0;-ms-flex:none;flex:none;width:91.66667%}/* line 32, src/assets/sass/sass/grid/tiles.sass */.tile.is-12{-webkit-box-flex:0;-ms-flex:none;flex:none;width:100%}}/* line 3, src/assets/sass/sass/helpers/color.sass */.has-text-white{color:#fff !important}/* line 6, src/assets/sass/sass/helpers/color.sass */a.has-text-white:hover,a.has-text-white:focus{color:#e6e6e6 !important}/* line 9, src/assets/sass/sass/helpers/color.sass */.has-background-white{background-color:#fff !important}/* line 3, src/assets/sass/sass/helpers/color.sass */.has-text-black{color:#0a0a0a !important}/* line 6, src/assets/sass/sass/helpers/color.sass */a.has-text-black:hover,a.has-text-black:focus{color:#000 !important}/* line 9, src/assets/sass/sass/helpers/color.sass */.has-background-black{background-color:#0a0a0a !important}/* line 3, src/assets/sass/sass/helpers/color.sass */.has-text-light{color:#f5f5f5 !important}/* line 6, src/assets/sass/sass/helpers/color.sass */a.has-text-light:hover,a.has-text-light:focus{color:#dbdbdb !important}/* line 9, src/assets/sass/sass/helpers/color.sass */.has-background-light{background-color:#f5f5f5 !important}/* line 3, src/assets/sass/sass/helpers/color.sass */.has-text-dark{color:#363636 !important}/* line 6, src/assets/sass/sass/helpers/color.sass */a.has-text-dark:hover,a.has-text-dark:focus{color:#1c1c1c !important}/* line 9, src/assets/sass/sass/helpers/color.sass */.has-background-dark{background-color:#363636 !important}/* line 3, src/assets/sass/sass/helpers/color.sass */.has-text-primary{color:#00d1b2 !important}/* line 6, src/assets/sass/sass/helpers/color.sass */a.has-text-primary:hover,a.has-text-primary:focus{color:#009e86 !important}/* line 9, src/assets/sass/sass/helpers/color.sass */.has-background-primary{background-color:#00d1b2 !important}/* line 15, src/assets/sass/sass/helpers/color.sass */.has-text-primary-light{color:#ebfffc !important}/* line 18, src/assets/sass/sass/helpers/color.sass */a.has-text-primary-light:hover,a.has-text-primary-light:focus{color:#b8fff4 !important}/* line 21, src/assets/sass/sass/helpers/color.sass */.has-background-primary-light{background-color:#ebfffc !important}/* line 24, src/assets/sass/sass/helpers/color.sass */.has-text-primary-dark{color:#00947e !important}/* line 27, src/assets/sass/sass/helpers/color.sass */a.has-text-primary-dark:hover,a.has-text-primary-dark:focus{color:#00c7a9 !important}/* line 30, src/assets/sass/sass/helpers/color.sass */.has-background-primary-dark{background-color:#00947e !important}/* line 3, src/assets/sass/sass/helpers/color.sass */.has-text-link{color:#3273dc !important}/* line 6, src/assets/sass/sass/helpers/color.sass */a.has-text-link:hover,a.has-text-link:focus{color:#205bbc !important}/* line 9, src/assets/sass/sass/helpers/color.sass */.has-background-link{background-color:#3273dc !important}/* line 15, src/assets/sass/sass/helpers/color.sass */.has-text-link-light{color:#eef3fc !important}/* line 18, src/assets/sass/sass/helpers/color.sass */a.has-text-link-light:hover,a.has-text-link-light:focus{color:#c2d5f5 !important}/* line 21, src/assets/sass/sass/helpers/color.sass */.has-background-link-light{background-color:#eef3fc !important}/* line 24, src/assets/sass/sass/helpers/color.sass */.has-text-link-dark{color:#2160c4 !important}/* line 27, src/assets/sass/sass/helpers/color.sass */a.has-text-link-dark:hover,a.has-text-link-dark:focus{color:#3b79de !important}/* line 30, src/assets/sass/sass/helpers/color.sass */.has-background-link-dark{background-color:#2160c4 !important}/* line 3, src/assets/sass/sass/helpers/color.sass */.has-text-info{color:#3298dc !important}/* line 6, src/assets/sass/sass/helpers/color.sass */a.has-text-info:hover,a.has-text-info:focus{color:#207dbc !important}/* line 9, src/assets/sass/sass/helpers/color.sass */.has-background-info{background-color:#3298dc !important}/* line 15, src/assets/sass/sass/helpers/color.sass */.has-text-info-light{color:#eef6fc !important}/* line 18, src/assets/sass/sass/helpers/color.sass */a.has-text-info-light:hover,a.has-text-info-light:focus{color:#c2e0f5 !important}/* line 21, src/assets/sass/sass/helpers/color.sass */.has-background-info-light{background-color:#eef6fc !important}/* line 24, src/assets/sass/sass/helpers/color.sass */.has-text-info-dark{color:#1d72aa !important}/* line 27, src/assets/sass/sass/helpers/color.sass */a.has-text-info-dark:hover,a.has-text-info-dark:focus{color:#248fd6 !important}/* line 30, src/assets/sass/sass/helpers/color.sass */.has-background-info-dark{background-color:#1d72aa !important}/* line 3, src/assets/sass/sass/helpers/color.sass */.has-text-success{color:#48c774 !important}/* line 6, src/assets/sass/sass/helpers/color.sass */a.has-text-success:hover,a.has-text-success:focus{color:#34a85c !important}/* line 9, src/assets/sass/sass/helpers/color.sass */.has-background-success{background-color:#48c774 !important}/* line 15, src/assets/sass/sass/helpers/color.sass */.has-text-success-light{color:#effaf3 !important}/* line 18, src/assets/sass/sass/helpers/color.sass */a.has-text-success-light:hover,a.has-text-success-light:focus{color:#c8eed6 !important}/* line 21, src/assets/sass/sass/helpers/color.sass */.has-background-success-light{background-color:#effaf3 !important}/* line 24, src/assets/sass/sass/helpers/color.sass */.has-text-success-dark{color:#257942 !important}/* line 27, src/assets/sass/sass/helpers/color.sass */a.has-text-success-dark:hover,a.has-text-success-dark:focus{color:#31a058 !important}/* line 30, src/assets/sass/sass/helpers/color.sass */.has-background-success-dark{background-color:#257942 !important}/* line 3, src/assets/sass/sass/helpers/color.sass */.has-text-warning{color:#ffdd57 !important}/* line 6, src/assets/sass/sass/helpers/color.sass */a.has-text-warning:hover,a.has-text-warning:focus{color:#ffd324 !important}/* line 9, src/assets/sass/sass/helpers/color.sass */.has-background-warning{background-color:#ffdd57 !important}/* line 15, src/assets/sass/sass/helpers/color.sass */.has-text-warning-light{color:#fffbeb !important}/* line 18, src/assets/sass/sass/helpers/color.sass */a.has-text-warning-light:hover,a.has-text-warning-light:focus{color:#fff1b8 !important}/* line 21, src/assets/sass/sass/helpers/color.sass */.has-background-warning-light{background-color:#fffbeb !important}/* line 24, src/assets/sass/sass/helpers/color.sass */.has-text-warning-dark{color:#947600 !important}/* line 27, src/assets/sass/sass/helpers/color.sass */a.has-text-warning-dark:hover,a.has-text-warning-dark:focus{color:#c79f00 !important}/* line 30, src/assets/sass/sass/helpers/color.sass */.has-background-warning-dark{background-color:#947600 !important}/* line 3, src/assets/sass/sass/helpers/color.sass */.has-text-danger{color:#f14668 !important}/* line 6, src/assets/sass/sass/helpers/color.sass */a.has-text-danger:hover,a.has-text-danger:focus{color:#ee1742 !important}/* line 9, src/assets/sass/sass/helpers/color.sass */.has-background-danger{background-color:#f14668 !important}/* line 15, src/assets/sass/sass/helpers/color.sass */.has-text-danger-light{color:#feecf0 !important}/* line 18, src/assets/sass/sass/helpers/color.sass */a.has-text-danger-light:hover,a.has-text-danger-light:focus{color:#fabdc9 !important}/* line 21, src/assets/sass/sass/helpers/color.sass */.has-background-danger-light{background-color:#feecf0 !important}/* line 24, src/assets/sass/sass/helpers/color.sass */.has-text-danger-dark{color:#cc0f35 !important}/* line 27, src/assets/sass/sass/helpers/color.sass */a.has-text-danger-dark:hover,a.has-text-danger-dark:focus{color:#ee2049 !important}/* line 30, src/assets/sass/sass/helpers/color.sass */.has-background-danger-dark{background-color:#cc0f35 !important}/* line 34, src/assets/sass/sass/helpers/color.sass */.has-text-black-bis{color:#121212 !important}/* line 36, src/assets/sass/sass/helpers/color.sass */.has-background-black-bis{background-color:#121212 !important}/* line 34, src/assets/sass/sass/helpers/color.sass */.has-text-black-ter{color:#242424 !important}/* line 36, src/assets/sass/sass/helpers/color.sass */.has-background-black-ter{background-color:#242424 !important}/* line 34, src/assets/sass/sass/helpers/color.sass */.has-text-grey-darker{color:#363636 !important}/* line 36, src/assets/sass/sass/helpers/color.sass */.has-background-grey-darker{background-color:#363636 !important}/* line 34, src/assets/sass/sass/helpers/color.sass */.has-text-grey-dark{color:#4a4a4a !important}/* line 36, src/assets/sass/sass/helpers/color.sass */.has-background-grey-dark{background-color:#4a4a4a !important}/* line 34, src/assets/sass/sass/helpers/color.sass */.has-text-grey{color:#7a7a7a !important}/* line 36, src/assets/sass/sass/helpers/color.sass */.has-background-grey{background-color:#7a7a7a !important}/* line 34, src/assets/sass/sass/helpers/color.sass */.has-text-grey-light{color:#b5b5b5 !important}/* line 36, src/assets/sass/sass/helpers/color.sass */.has-background-grey-light{background-color:#b5b5b5 !important}/* line 34, src/assets/sass/sass/helpers/color.sass */.has-text-grey-lighter{color:#dbdbdb !important}/* line 36, src/assets/sass/sass/helpers/color.sass */.has-background-grey-lighter{background-color:#dbdbdb !important}/* line 34, src/assets/sass/sass/helpers/color.sass */.has-text-white-ter{color:#f5f5f5 !important}/* line 36, src/assets/sass/sass/helpers/color.sass */.has-background-white-ter{background-color:#f5f5f5 !important}/* line 34, src/assets/sass/sass/helpers/color.sass */.has-text-white-bis{color:#fafafa !important}/* line 36, src/assets/sass/sass/helpers/color.sass */.has-background-white-bis{background-color:#fafafa !important}/* line 3, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-direction-row{-webkit-box-orient:horizontal !important;-webkit-box-direction:normal !important;-ms-flex-direction:row !important;flex-direction:row !important}/* line 3, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-direction-row-reverse{-webkit-box-orient:horizontal !important;-webkit-box-direction:reverse !important;-ms-flex-direction:row-reverse !important;flex-direction:row-reverse !important}/* line 3, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-direction-column{-webkit-box-orient:vertical !important;-webkit-box-direction:normal !important;-ms-flex-direction:column !important;flex-direction:column !important}/* line 3, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-direction-column-reverse{-webkit-box-orient:vertical !important;-webkit-box-direction:reverse !important;-ms-flex-direction:column-reverse !important;flex-direction:column-reverse !important}/* line 8, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-wrap-nowrap{-ms-flex-wrap:nowrap !important;flex-wrap:nowrap !important}/* line 8, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-wrap-wrap{-ms-flex-wrap:wrap !important;flex-wrap:wrap !important}/* line 8, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-wrap-wrap-reverse{-ms-flex-wrap:wrap-reverse !important;flex-wrap:wrap-reverse !important}/* line 13, src/assets/sass/sass/helpers/flexbox.sass */.is-justify-content-flex-start{-webkit-box-pack:start !important;-ms-flex-pack:start !important;justify-content:flex-start !important}/* line 13, src/assets/sass/sass/helpers/flexbox.sass */.is-justify-content-flex-end{-webkit-box-pack:end !important;-ms-flex-pack:end !important;justify-content:flex-end !important}/* line 13, src/assets/sass/sass/helpers/flexbox.sass */.is-justify-content-center{-webkit-box-pack:center !important;-ms-flex-pack:center !important;justify-content:center !important}/* line 13, src/assets/sass/sass/helpers/flexbox.sass */.is-justify-content-space-between{-webkit-box-pack:justify !important;-ms-flex-pack:justify !important;justify-content:space-between !important}/* line 13, src/assets/sass/sass/helpers/flexbox.sass */.is-justify-content-space-around{-ms-flex-pack:distribute !important;justify-content:space-around !important}/* line 13, src/assets/sass/sass/helpers/flexbox.sass */.is-justify-content-space-evenly{-webkit-box-pack:space-evenly !important;-ms-flex-pack:space-evenly !important;justify-content:space-evenly !important}/* line 13, src/assets/sass/sass/helpers/flexbox.sass */.is-justify-content-start{-webkit-box-pack:start !important;-ms-flex-pack:start !important;justify-content:start !important}/* line 13, src/assets/sass/sass/helpers/flexbox.sass */.is-justify-content-end{-webkit-box-pack:end !important;-ms-flex-pack:end !important;justify-content:end !important}/* line 13, src/assets/sass/sass/helpers/flexbox.sass */.is-justify-content-left{-webkit-box-pack:left !important;-ms-flex-pack:left !important;justify-content:left !important}/* line 13, src/assets/sass/sass/helpers/flexbox.sass */.is-justify-content-right{-webkit-box-pack:right !important;-ms-flex-pack:right !important;justify-content:right !important}/* line 18, src/assets/sass/sass/helpers/flexbox.sass */.is-align-content-flex-start{-ms-flex-line-pack:start !important;align-content:flex-start !important}/* line 18, src/assets/sass/sass/helpers/flexbox.sass */.is-align-content-flex-end{-ms-flex-line-pack:end !important;align-content:flex-end !important}/* line 18, src/assets/sass/sass/helpers/flexbox.sass */.is-align-content-center{-ms-flex-line-pack:center !important;align-content:center !important}/* line 18, src/assets/sass/sass/helpers/flexbox.sass */.is-align-content-space-between{-ms-flex-line-pack:justify !important;align-content:space-between !important}/* line 18, src/assets/sass/sass/helpers/flexbox.sass */.is-align-content-space-around{-ms-flex-line-pack:distribute !important;align-content:space-around !important}/* line 18, src/assets/sass/sass/helpers/flexbox.sass */.is-align-content-space-evenly{-ms-flex-line-pack:space-evenly !important;align-content:space-evenly !important}/* line 18, src/assets/sass/sass/helpers/flexbox.sass */.is-align-content-stretch{-ms-flex-line-pack:stretch !important;align-content:stretch !important}/* line 18, src/assets/sass/sass/helpers/flexbox.sass */.is-align-content-start{-ms-flex-line-pack:start !important;align-content:start !important}/* line 18, src/assets/sass/sass/helpers/flexbox.sass */.is-align-content-end{-ms-flex-line-pack:end !important;align-content:end !important}/* line 18, src/assets/sass/sass/helpers/flexbox.sass */.is-align-content-baseline{-ms-flex-line-pack:baseline !important;align-content:baseline !important}/* line 23, src/assets/sass/sass/helpers/flexbox.sass */.is-align-items-stretch{-webkit-box-align:stretch !important;-ms-flex-align:stretch !important;align-items:stretch !important}/* line 23, src/assets/sass/sass/helpers/flexbox.sass */.is-align-items-flex-start{-webkit-box-align:start !important;-ms-flex-align:start !important;align-items:flex-start !important}/* line 23, src/assets/sass/sass/helpers/flexbox.sass */.is-align-items-flex-end{-webkit-box-align:end !important;-ms-flex-align:end !important;align-items:flex-end !important}/* line 23, src/assets/sass/sass/helpers/flexbox.sass */.is-align-items-center{-webkit-box-align:center !important;-ms-flex-align:center !important;align-items:center !important}/* line 23, src/assets/sass/sass/helpers/flexbox.sass */.is-align-items-baseline{-webkit-box-align:baseline !important;-ms-flex-align:baseline !important;align-items:baseline !important}/* line 23, src/assets/sass/sass/helpers/flexbox.sass */.is-align-items-start{-webkit-box-align:start !important;-ms-flex-align:start !important;align-items:start !important}/* line 23, src/assets/sass/sass/helpers/flexbox.sass */.is-align-items-end{-webkit-box-align:end !important;-ms-flex-align:end !important;align-items:end !important}/* line 23, src/assets/sass/sass/helpers/flexbox.sass */.is-align-items-self-start{-webkit-box-align:self-start !important;-ms-flex-align:self-start !important;align-items:self-start !important}/* line 23, src/assets/sass/sass/helpers/flexbox.sass */.is-align-items-self-end{-webkit-box-align:self-end !important;-ms-flex-align:self-end !important;align-items:self-end !important}/* line 28, src/assets/sass/sass/helpers/flexbox.sass */.is-align-self-auto{-ms-flex-item-align:auto !important;align-self:auto !important}/* line 28, src/assets/sass/sass/helpers/flexbox.sass */.is-align-self-flex-start{-ms-flex-item-align:start !important;align-self:flex-start !important}/* line 28, src/assets/sass/sass/helpers/flexbox.sass */.is-align-self-flex-end{-ms-flex-item-align:end !important;align-self:flex-end !important}/* line 28, src/assets/sass/sass/helpers/flexbox.sass */.is-align-self-center{-ms-flex-item-align:center !important;align-self:center !important}/* line 28, src/assets/sass/sass/helpers/flexbox.sass */.is-align-self-baseline{-ms-flex-item-align:baseline !important;align-self:baseline !important}/* line 28, src/assets/sass/sass/helpers/flexbox.sass */.is-align-self-stretch{-ms-flex-item-align:stretch !important;align-self:stretch !important}/* line 34, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-grow-0{-webkit-box-flex:0 !important;-ms-flex-positive:0 !important;flex-grow:0 !important}/* line 34, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-grow-1{-webkit-box-flex:1 !important;-ms-flex-positive:1 !important;flex-grow:1 !important}/* line 34, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-grow-2{-webkit-box-flex:2 !important;-ms-flex-positive:2 !important;flex-grow:2 !important}/* line 34, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-grow-3{-webkit-box-flex:3 !important;-ms-flex-positive:3 !important;flex-grow:3 !important}/* line 34, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-grow-4{-webkit-box-flex:4 !important;-ms-flex-positive:4 !important;flex-grow:4 !important}/* line 34, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-grow-5{-webkit-box-flex:5 !important;-ms-flex-positive:5 !important;flex-grow:5 !important}/* line 34, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-shrink-0{-ms-flex-negative:0 !important;flex-shrink:0 !important}/* line 34, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-shrink-1{-ms-flex-negative:1 !important;flex-shrink:1 !important}/* line 34, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-shrink-2{-ms-flex-negative:2 !important;flex-shrink:2 !important}/* line 34, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-shrink-3{-ms-flex-negative:3 !important;flex-shrink:3 !important}/* line 34, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-shrink-4{-ms-flex-negative:4 !important;flex-shrink:4 !important}/* line 34, src/assets/sass/sass/helpers/flexbox.sass */.is-flex-shrink-5{-ms-flex-negative:5 !important;flex-shrink:5 !important}/* line 4, src/assets/sass/sass/utilities/mixins.sass */.is-clearfix::after{clear:both;content:" ";display:table}/* line 4, src/assets/sass/sass/helpers/float.sass */.is-pulled-left{float:left !important}/* line 7, src/assets/sass/sass/helpers/float.sass */.is-pulled-right{float:right !important}/* line 1, src/assets/sass/sass/helpers/other.sass */.is-radiusless{border-radius:0 !important}/* line 4, src/assets/sass/sass/helpers/other.sass */.is-shadowless{-webkit-box-shadow:none !important;box-shadow:none !important}/* line 7, src/assets/sass/sass/helpers/other.sass */.is-clickable{cursor:pointer !important}/* line 1, src/assets/sass/sass/helpers/overflow.sass */.is-clipped{overflow:hidden !important}/* line 4, src/assets/sass/sass/helpers/position.sass */.is-relative{position:relative !important}/* line 1, src/assets/sass/sass/helpers/spacing.sass */.is-marginless{margin:0 !important}/* line 4, src/assets/sass/sass/helpers/spacing.sass */.is-paddingless{padding:0 !important}/* line 16, src/assets/sass/sass/helpers/spacing.sass */.m-0{margin:0 !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mt-0{margin-top:0 !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mr-0{margin-right:0 !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mb-0{margin-bottom:0 !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.ml-0{margin-left:0 !important}/* line 24, src/assets/sass/sass/helpers/spacing.sass */.mx-0{margin-left:0 !important;margin-right:0 !important}/* line 29, src/assets/sass/sass/helpers/spacing.sass */.my-0{margin-top:0 !important;margin-bottom:0 !important}/* line 16, src/assets/sass/sass/helpers/spacing.sass */.m-1{margin:.25rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mt-1{margin-top:.25rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mr-1{margin-right:.25rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mb-1{margin-bottom:.25rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.ml-1{margin-left:.25rem !important}/* line 24, src/assets/sass/sass/helpers/spacing.sass */.mx-1{margin-left:.25rem !important;margin-right:.25rem !important}/* line 29, src/assets/sass/sass/helpers/spacing.sass */.my-1{margin-top:.25rem !important;margin-bottom:.25rem !important}/* line 16, src/assets/sass/sass/helpers/spacing.sass */.m-2{margin:.5rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mt-2{margin-top:.5rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mr-2{margin-right:.5rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mb-2{margin-bottom:.5rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.ml-2{margin-left:.5rem !important}/* line 24, src/assets/sass/sass/helpers/spacing.sass */.mx-2{margin-left:.5rem !important;margin-right:.5rem !important}/* line 29, src/assets/sass/sass/helpers/spacing.sass */.my-2{margin-top:.5rem !important;margin-bottom:.5rem !important}/* line 16, src/assets/sass/sass/helpers/spacing.sass */.m-3{margin:.75rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mt-3{margin-top:.75rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mr-3{margin-right:.75rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mb-3{margin-bottom:.75rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.ml-3{margin-left:.75rem !important}/* line 24, src/assets/sass/sass/helpers/spacing.sass */.mx-3{margin-left:.75rem !important;margin-right:.75rem !important}/* line 29, src/assets/sass/sass/helpers/spacing.sass */.my-3{margin-top:.75rem !important;margin-bottom:.75rem !important}/* line 16, src/assets/sass/sass/helpers/spacing.sass */.m-4{margin:1rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mt-4{margin-top:1rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mr-4{margin-right:1rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mb-4{margin-bottom:1rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.ml-4{margin-left:1rem !important}/* line 24, src/assets/sass/sass/helpers/spacing.sass */.mx-4{margin-left:1rem !important;margin-right:1rem !important}/* line 29, src/assets/sass/sass/helpers/spacing.sass */.my-4{margin-top:1rem !important;margin-bottom:1rem !important}/* line 16, src/assets/sass/sass/helpers/spacing.sass */.m-5{margin:1.5rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mt-5{margin-top:1.5rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mr-5{margin-right:1.5rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mb-5{margin-bottom:1.5rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.ml-5{margin-left:1.5rem !important}/* line 24, src/assets/sass/sass/helpers/spacing.sass */.mx-5{margin-left:1.5rem !important;margin-right:1.5rem !important}/* line 29, src/assets/sass/sass/helpers/spacing.sass */.my-5{margin-top:1.5rem !important;margin-bottom:1.5rem !important}/* line 16, src/assets/sass/sass/helpers/spacing.sass */.m-6{margin:3rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mt-6{margin-top:3rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mr-6{margin-right:3rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.mb-6{margin-bottom:3rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.ml-6{margin-left:3rem !important}/* line 24, src/assets/sass/sass/helpers/spacing.sass */.mx-6{margin-left:3rem !important;margin-right:3rem !important}/* line 29, src/assets/sass/sass/helpers/spacing.sass */.my-6{margin-top:3rem !important;margin-bottom:3rem !important}/* line 16, src/assets/sass/sass/helpers/spacing.sass */.p-0{padding:0 !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pt-0{padding-top:0 !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pr-0{padding-right:0 !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pb-0{padding-bottom:0 !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pl-0{padding-left:0 !important}/* line 24, src/assets/sass/sass/helpers/spacing.sass */.px-0{padding-left:0 !important;padding-right:0 !important}/* line 29, src/assets/sass/sass/helpers/spacing.sass */.py-0{padding-top:0 !important;padding-bottom:0 !important}/* line 16, src/assets/sass/sass/helpers/spacing.sass */.p-1{padding:.25rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pt-1{padding-top:.25rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pr-1{padding-right:.25rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pb-1{padding-bottom:.25rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pl-1{padding-left:.25rem !important}/* line 24, src/assets/sass/sass/helpers/spacing.sass */.px-1{padding-left:.25rem !important;padding-right:.25rem !important}/* line 29, src/assets/sass/sass/helpers/spacing.sass */.py-1{padding-top:.25rem !important;padding-bottom:.25rem !important}/* line 16, src/assets/sass/sass/helpers/spacing.sass */.p-2{padding:.5rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pt-2{padding-top:.5rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pr-2{padding-right:.5rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pb-2{padding-bottom:.5rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pl-2{padding-left:.5rem !important}/* line 24, src/assets/sass/sass/helpers/spacing.sass */.px-2{padding-left:.5rem !important;padding-right:.5rem !important}/* line 29, src/assets/sass/sass/helpers/spacing.sass */.py-2{padding-top:.5rem !important;padding-bottom:.5rem !important}/* line 16, src/assets/sass/sass/helpers/spacing.sass */.p-3{padding:.75rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pt-3{padding-top:.75rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pr-3{padding-right:.75rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pb-3{padding-bottom:.75rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pl-3{padding-left:.75rem !important}/* line 24, src/assets/sass/sass/helpers/spacing.sass */.px-3{padding-left:.75rem !important;padding-right:.75rem !important}/* line 29, src/assets/sass/sass/helpers/spacing.sass */.py-3{padding-top:.75rem !important;padding-bottom:.75rem !important}/* line 16, src/assets/sass/sass/helpers/spacing.sass */.p-4{padding:1rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pt-4{padding-top:1rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pr-4{padding-right:1rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pb-4{padding-bottom:1rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pl-4{padding-left:1rem !important}/* line 24, src/assets/sass/sass/helpers/spacing.sass */.px-4{padding-left:1rem !important;padding-right:1rem !important}/* line 29, src/assets/sass/sass/helpers/spacing.sass */.py-4{padding-top:1rem !important;padding-bottom:1rem !important}/* line 16, src/assets/sass/sass/helpers/spacing.sass */.p-5{padding:1.5rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pt-5{padding-top:1.5rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pr-5{padding-right:1.5rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pb-5{padding-bottom:1.5rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pl-5{padding-left:1.5rem !important}/* line 24, src/assets/sass/sass/helpers/spacing.sass */.px-5{padding-left:1.5rem !important;padding-right:1.5rem !important}/* line 29, src/assets/sass/sass/helpers/spacing.sass */.py-5{padding-top:1.5rem !important;padding-bottom:1.5rem !important}/* line 16, src/assets/sass/sass/helpers/spacing.sass */.p-6{padding:3rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pt-6{padding-top:3rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pr-6{padding-right:3rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pb-6{padding-bottom:3rem !important}/* line 20, src/assets/sass/sass/helpers/spacing.sass */.pl-6{padding-left:3rem !important}/* line 24, src/assets/sass/sass/helpers/spacing.sass */.px-6{padding-left:3rem !important;padding-right:3rem !important}/* line 29, src/assets/sass/sass/helpers/spacing.sass */.py-6{padding-top:3rem !important;padding-bottom:3rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-1{font-size:3rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-2{font-size:2.5rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-3{font-size:2rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-4{font-size:1.5rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-5{font-size:1.25rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-6{font-size:1rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-7{font-size:.75rem !important}@media screen and (max-width: 768px){/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-1-mobile{font-size:3rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-2-mobile{font-size:2.5rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-3-mobile{font-size:2rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-4-mobile{font-size:1.5rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-5-mobile{font-size:1.25rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-6-mobile{font-size:1rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-7-mobile{font-size:.75rem !important}}@media screen and (min-width: 769px), print{/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-1-tablet{font-size:3rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-2-tablet{font-size:2.5rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-3-tablet{font-size:2rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-4-tablet{font-size:1.5rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-5-tablet{font-size:1.25rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-6-tablet{font-size:1rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-7-tablet{font-size:.75rem !important}}@media screen and (max-width: 1023px){/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-1-touch{font-size:3rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-2-touch{font-size:2.5rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-3-touch{font-size:2rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-4-touch{font-size:1.5rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-5-touch{font-size:1.25rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-6-touch{font-size:1rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-7-touch{font-size:.75rem !important}}@media screen and (min-width: 1024px){/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-1-desktop{font-size:3rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-2-desktop{font-size:2.5rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-3-desktop{font-size:2rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-4-desktop{font-size:1.5rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-5-desktop{font-size:1.25rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-6-desktop{font-size:1rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-7-desktop{font-size:.75rem !important}}@media screen and (min-width: 1216px){/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-1-widescreen{font-size:3rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-2-widescreen{font-size:2.5rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-3-widescreen{font-size:2rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-4-widescreen{font-size:1.5rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-5-widescreen{font-size:1.25rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-6-widescreen{font-size:1rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-7-widescreen{font-size:.75rem !important}}@media screen and (min-width: 1408px){/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-1-fullhd{font-size:3rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-2-fullhd{font-size:2.5rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-3-fullhd{font-size:2rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-4-fullhd{font-size:1.5rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-5-fullhd{font-size:1.25rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-6-fullhd{font-size:1rem !important}/* line 4, src/assets/sass/sass/helpers/typography.sass */.is-size-7-fullhd{font-size:.75rem !important}}/* line 30, src/assets/sass/sass/helpers/typography.sass */.has-text-centered{text-align:center !important}/* line 30, src/assets/sass/sass/helpers/typography.sass */.has-text-justified{text-align:justify !important}/* line 30, src/assets/sass/sass/helpers/typography.sass */.has-text-left{text-align:left !important}/* line 30, src/assets/sass/sass/helpers/typography.sass */.has-text-right{text-align:right !important}@media screen and (max-width: 768px){/* line 35, src/assets/sass/sass/helpers/typography.sass */.has-text-centered-mobile{text-align:center !important}}@media screen and (min-width: 769px), print{/* line 38, src/assets/sass/sass/helpers/typography.sass */.has-text-centered-tablet{text-align:center !important}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 41, src/assets/sass/sass/helpers/typography.sass */.has-text-centered-tablet-only{text-align:center !important}}@media screen and (max-width: 1023px){/* line 44, src/assets/sass/sass/helpers/typography.sass */.has-text-centered-touch{text-align:center !important}}@media screen and (min-width: 1024px){/* line 47, src/assets/sass/sass/helpers/typography.sass */.has-text-centered-desktop{text-align:center !important}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 50, src/assets/sass/sass/helpers/typography.sass */.has-text-centered-desktop-only{text-align:center !important}}@media screen and (min-width: 1216px){/* line 53, src/assets/sass/sass/helpers/typography.sass */.has-text-centered-widescreen{text-align:center !important}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 56, src/assets/sass/sass/helpers/typography.sass */.has-text-centered-widescreen-only{text-align:center !important}}@media screen and (min-width: 1408px){/* line 59, src/assets/sass/sass/helpers/typography.sass */.has-text-centered-fullhd{text-align:center !important}}@media screen and (max-width: 768px){/* line 35, src/assets/sass/sass/helpers/typography.sass */.has-text-justified-mobile{text-align:justify !important}}@media screen and (min-width: 769px), print{/* line 38, src/assets/sass/sass/helpers/typography.sass */.has-text-justified-tablet{text-align:justify !important}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 41, src/assets/sass/sass/helpers/typography.sass */.has-text-justified-tablet-only{text-align:justify !important}}@media screen and (max-width: 1023px){/* line 44, src/assets/sass/sass/helpers/typography.sass */.has-text-justified-touch{text-align:justify !important}}@media screen and (min-width: 1024px){/* line 47, src/assets/sass/sass/helpers/typography.sass */.has-text-justified-desktop{text-align:justify !important}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 50, src/assets/sass/sass/helpers/typography.sass */.has-text-justified-desktop-only{text-align:justify !important}}@media screen and (min-width: 1216px){/* line 53, src/assets/sass/sass/helpers/typography.sass */.has-text-justified-widescreen{text-align:justify !important}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 56, src/assets/sass/sass/helpers/typography.sass */.has-text-justified-widescreen-only{text-align:justify !important}}@media screen and (min-width: 1408px){/* line 59, src/assets/sass/sass/helpers/typography.sass */.has-text-justified-fullhd{text-align:justify !important}}@media screen and (max-width: 768px){/* line 35, src/assets/sass/sass/helpers/typography.sass */.has-text-left-mobile{text-align:left !important}}@media screen and (min-width: 769px), print{/* line 38, src/assets/sass/sass/helpers/typography.sass */.has-text-left-tablet{text-align:left !important}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 41, src/assets/sass/sass/helpers/typography.sass */.has-text-left-tablet-only{text-align:left !important}}@media screen and (max-width: 1023px){/* line 44, src/assets/sass/sass/helpers/typography.sass */.has-text-left-touch{text-align:left !important}}@media screen and (min-width: 1024px){/* line 47, src/assets/sass/sass/helpers/typography.sass */.has-text-left-desktop{text-align:left !important}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 50, src/assets/sass/sass/helpers/typography.sass */.has-text-left-desktop-only{text-align:left !important}}@media screen and (min-width: 1216px){/* line 53, src/assets/sass/sass/helpers/typography.sass */.has-text-left-widescreen{text-align:left !important}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 56, src/assets/sass/sass/helpers/typography.sass */.has-text-left-widescreen-only{text-align:left !important}}@media screen and (min-width: 1408px){/* line 59, src/assets/sass/sass/helpers/typography.sass */.has-text-left-fullhd{text-align:left !important}}@media screen and (max-width: 768px){/* line 35, src/assets/sass/sass/helpers/typography.sass */.has-text-right-mobile{text-align:right !important}}@media screen and (min-width: 769px), print{/* line 38, src/assets/sass/sass/helpers/typography.sass */.has-text-right-tablet{text-align:right !important}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 41, src/assets/sass/sass/helpers/typography.sass */.has-text-right-tablet-only{text-align:right !important}}@media screen and (max-width: 1023px){/* line 44, src/assets/sass/sass/helpers/typography.sass */.has-text-right-touch{text-align:right !important}}@media screen and (min-width: 1024px){/* line 47, src/assets/sass/sass/helpers/typography.sass */.has-text-right-desktop{text-align:right !important}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 50, src/assets/sass/sass/helpers/typography.sass */.has-text-right-desktop-only{text-align:right !important}}@media screen and (min-width: 1216px){/* line 53, src/assets/sass/sass/helpers/typography.sass */.has-text-right-widescreen{text-align:right !important}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 56, src/assets/sass/sass/helpers/typography.sass */.has-text-right-widescreen-only{text-align:right !important}}@media screen and (min-width: 1408px){/* line 59, src/assets/sass/sass/helpers/typography.sass */.has-text-right-fullhd{text-align:right !important}}/* line 62, src/assets/sass/sass/helpers/typography.sass */.is-capitalized{text-transform:capitalize !important}/* line 65, src/assets/sass/sass/helpers/typography.sass */.is-lowercase{text-transform:lowercase !important}/* line 68, src/assets/sass/sass/helpers/typography.sass */.is-uppercase{text-transform:uppercase !important}/* line 71, src/assets/sass/sass/helpers/typography.sass */.is-italic{font-style:italic !important}/* line 74, src/assets/sass/sass/helpers/typography.sass */.has-text-weight-light{font-weight:300 !important}/* line 76, src/assets/sass/sass/helpers/typography.sass */.has-text-weight-normal{font-weight:400 !important}/* line 78, src/assets/sass/sass/helpers/typography.sass */.has-text-weight-medium{font-weight:500 !important}/* line 80, src/assets/sass/sass/helpers/typography.sass */.has-text-weight-semibold{font-weight:600 !important}/* line 82, src/assets/sass/sass/helpers/typography.sass */.has-text-weight-bold{font-weight:700 !important}/* line 85, src/assets/sass/sass/helpers/typography.sass */.is-family-primary{font-family:BlinkMacSystemFont,-apple-system,"Segoe UI","Roboto","Oxygen","Ubuntu","Cantarell","Fira Sans","Droid Sans","Helvetica Neue","Helvetica","Arial",sans-serif !important}/* line 88, src/assets/sass/sass/helpers/typography.sass */.is-family-secondary{font-family:BlinkMacSystemFont,-apple-system,"Segoe UI","Roboto","Oxygen","Ubuntu","Cantarell","Fira Sans","Droid Sans","Helvetica Neue","Helvetica","Arial",sans-serif !important}/* line 91, src/assets/sass/sass/helpers/typography.sass */.is-family-sans-serif{font-family:BlinkMacSystemFont,-apple-system,"Segoe UI","Roboto","Oxygen","Ubuntu","Cantarell","Fira Sans","Droid Sans","Helvetica Neue","Helvetica","Arial",sans-serif !important}/* line 94, src/assets/sass/sass/helpers/typography.sass */.is-family-monospace{font-family:monospace !important}/* line 97, src/assets/sass/sass/helpers/typography.sass */.is-family-code{font-family:monospace !important}/* line 6, src/assets/sass/sass/helpers/visibility.sass */.is-block{display:block !important}@media screen and (max-width: 768px){/* line 9, src/assets/sass/sass/helpers/visibility.sass */.is-block-mobile{display:block !important}}@media screen and (min-width: 769px), print{/* line 12, src/assets/sass/sass/helpers/visibility.sass */.is-block-tablet{display:block !important}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 15, src/assets/sass/sass/helpers/visibility.sass */.is-block-tablet-only{display:block !important}}@media screen and (max-width: 1023px){/* line 18, src/assets/sass/sass/helpers/visibility.sass */.is-block-touch{display:block !important}}@media screen and (min-width: 1024px){/* line 21, src/assets/sass/sass/helpers/visibility.sass */.is-block-desktop{display:block !important}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 24, src/assets/sass/sass/helpers/visibility.sass */.is-block-desktop-only{display:block !important}}@media screen and (min-width: 1216px){/* line 27, src/assets/sass/sass/helpers/visibility.sass */.is-block-widescreen{display:block !important}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 30, src/assets/sass/sass/helpers/visibility.sass */.is-block-widescreen-only{display:block !important}}@media screen and (min-width: 1408px){/* line 33, src/assets/sass/sass/helpers/visibility.sass */.is-block-fullhd{display:block !important}}/* line 6, src/assets/sass/sass/helpers/visibility.sass */.is-flex{display:-webkit-box !important;display:-ms-flexbox !important;display:flex !important}@media screen and (max-width: 768px){/* line 9, src/assets/sass/sass/helpers/visibility.sass */.is-flex-mobile{display:-webkit-box !important;display:-ms-flexbox !important;display:flex !important}}@media screen and (min-width: 769px), print{/* line 12, src/assets/sass/sass/helpers/visibility.sass */.is-flex-tablet{display:-webkit-box !important;display:-ms-flexbox !important;display:flex !important}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 15, src/assets/sass/sass/helpers/visibility.sass */.is-flex-tablet-only{display:-webkit-box !important;display:-ms-flexbox !important;display:flex !important}}@media screen and (max-width: 1023px){/* line 18, src/assets/sass/sass/helpers/visibility.sass */.is-flex-touch{display:-webkit-box !important;display:-ms-flexbox !important;display:flex !important}}@media screen and (min-width: 1024px){/* line 21, src/assets/sass/sass/helpers/visibility.sass */.is-flex-desktop{display:-webkit-box !important;display:-ms-flexbox !important;display:flex !important}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 24, src/assets/sass/sass/helpers/visibility.sass */.is-flex-desktop-only{display:-webkit-box !important;display:-ms-flexbox !important;display:flex !important}}@media screen and (min-width: 1216px){/* line 27, src/assets/sass/sass/helpers/visibility.sass */.is-flex-widescreen{display:-webkit-box !important;display:-ms-flexbox !important;display:flex !important}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 30, src/assets/sass/sass/helpers/visibility.sass */.is-flex-widescreen-only{display:-webkit-box !important;display:-ms-flexbox !important;display:flex !important}}@media screen and (min-width: 1408px){/* line 33, src/assets/sass/sass/helpers/visibility.sass */.is-flex-fullhd{display:-webkit-box !important;display:-ms-flexbox !important;display:flex !important}}/* line 6, src/assets/sass/sass/helpers/visibility.sass */.is-inline{display:inline !important}@media screen and (max-width: 768px){/* line 9, src/assets/sass/sass/helpers/visibility.sass */.is-inline-mobile{display:inline !important}}@media screen and (min-width: 769px), print{/* line 12, src/assets/sass/sass/helpers/visibility.sass */.is-inline-tablet{display:inline !important}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 15, src/assets/sass/sass/helpers/visibility.sass */.is-inline-tablet-only{display:inline !important}}@media screen and (max-width: 1023px){/* line 18, src/assets/sass/sass/helpers/visibility.sass */.is-inline-touch{display:inline !important}}@media screen and (min-width: 1024px){/* line 21, src/assets/sass/sass/helpers/visibility.sass */.is-inline-desktop{display:inline !important}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 24, src/assets/sass/sass/helpers/visibility.sass */.is-inline-desktop-only{display:inline !important}}@media screen and (min-width: 1216px){/* line 27, src/assets/sass/sass/helpers/visibility.sass */.is-inline-widescreen{display:inline !important}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 30, src/assets/sass/sass/helpers/visibility.sass */.is-inline-widescreen-only{display:inline !important}}@media screen and (min-width: 1408px){/* line 33, src/assets/sass/sass/helpers/visibility.sass */.is-inline-fullhd{display:inline !important}}/* line 6, src/assets/sass/sass/helpers/visibility.sass */.is-inline-block{display:inline-block !important}@media screen and (max-width: 768px){/* line 9, src/assets/sass/sass/helpers/visibility.sass */.is-inline-block-mobile{display:inline-block !important}}@media screen and (min-width: 769px), print{/* line 12, src/assets/sass/sass/helpers/visibility.sass */.is-inline-block-tablet{display:inline-block !important}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 15, src/assets/sass/sass/helpers/visibility.sass */.is-inline-block-tablet-only{display:inline-block !important}}@media screen and (max-width: 1023px){/* line 18, src/assets/sass/sass/helpers/visibility.sass */.is-inline-block-touch{display:inline-block !important}}@media screen and (min-width: 1024px){/* line 21, src/assets/sass/sass/helpers/visibility.sass */.is-inline-block-desktop{display:inline-block !important}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 24, src/assets/sass/sass/helpers/visibility.sass */.is-inline-block-desktop-only{display:inline-block !important}}@media screen and (min-width: 1216px){/* line 27, src/assets/sass/sass/helpers/visibility.sass */.is-inline-block-widescreen{display:inline-block !important}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 30, src/assets/sass/sass/helpers/visibility.sass */.is-inline-block-widescreen-only{display:inline-block !important}}@media screen and (min-width: 1408px){/* line 33, src/assets/sass/sass/helpers/visibility.sass */.is-inline-block-fullhd{display:inline-block !important}}/* line 6, src/assets/sass/sass/helpers/visibility.sass */.is-inline-flex{display:-webkit-inline-box !important;display:-ms-inline-flexbox !important;display:inline-flex !important}@media screen and (max-width: 768px){/* line 9, src/assets/sass/sass/helpers/visibility.sass */.is-inline-flex-mobile{display:-webkit-inline-box !important;display:-ms-inline-flexbox !important;display:inline-flex !important}}@media screen and (min-width: 769px), print{/* line 12, src/assets/sass/sass/helpers/visibility.sass */.is-inline-flex-tablet{display:-webkit-inline-box !important;display:-ms-inline-flexbox !important;display:inline-flex !important}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 15, src/assets/sass/sass/helpers/visibility.sass */.is-inline-flex-tablet-only{display:-webkit-inline-box !important;display:-ms-inline-flexbox !important;display:inline-flex !important}}@media screen and (max-width: 1023px){/* line 18, src/assets/sass/sass/helpers/visibility.sass */.is-inline-flex-touch{display:-webkit-inline-box !important;display:-ms-inline-flexbox !important;display:inline-flex !important}}@media screen and (min-width: 1024px){/* line 21, src/assets/sass/sass/helpers/visibility.sass */.is-inline-flex-desktop{display:-webkit-inline-box !important;display:-ms-inline-flexbox !important;display:inline-flex !important}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 24, src/assets/sass/sass/helpers/visibility.sass */.is-inline-flex-desktop-only{display:-webkit-inline-box !important;display:-ms-inline-flexbox !important;display:inline-flex !important}}@media screen and (min-width: 1216px){/* line 27, src/assets/sass/sass/helpers/visibility.sass */.is-inline-flex-widescreen{display:-webkit-inline-box !important;display:-ms-inline-flexbox !important;display:inline-flex !important}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 30, src/assets/sass/sass/helpers/visibility.sass */.is-inline-flex-widescreen-only{display:-webkit-inline-box !important;display:-ms-inline-flexbox !important;display:inline-flex !important}}@media screen and (min-width: 1408px){/* line 33, src/assets/sass/sass/helpers/visibility.sass */.is-inline-flex-fullhd{display:-webkit-inline-box !important;display:-ms-inline-flexbox !important;display:inline-flex !important}}/* line 36, src/assets/sass/sass/helpers/visibility.sass */.is-hidden{display:none !important}/* line 39, src/assets/sass/sass/helpers/visibility.sass */.is-sr-only{border:none !important;clip:rect(0, 0, 0, 0) !important;height:0.01em !important;overflow:hidden !important;padding:0 !important;position:absolute !important;white-space:nowrap !important;width:0.01em !important}@media screen and (max-width: 768px){/* line 50, src/assets/sass/sass/helpers/visibility.sass */.is-hidden-mobile{display:none !important}}@media screen and (min-width: 769px), print{/* line 54, src/assets/sass/sass/helpers/visibility.sass */.is-hidden-tablet{display:none !important}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 58, src/assets/sass/sass/helpers/visibility.sass */.is-hidden-tablet-only{display:none !important}}@media screen and (max-width: 1023px){/* line 62, src/assets/sass/sass/helpers/visibility.sass */.is-hidden-touch{display:none !important}}@media screen and (min-width: 1024px){/* line 66, src/assets/sass/sass/helpers/visibility.sass */.is-hidden-desktop{display:none !important}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 70, src/assets/sass/sass/helpers/visibility.sass */.is-hidden-desktop-only{display:none !important}}@media screen and (min-width: 1216px){/* line 74, src/assets/sass/sass/helpers/visibility.sass */.is-hidden-widescreen{display:none !important}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 78, src/assets/sass/sass/helpers/visibility.sass */.is-hidden-widescreen-only{display:none !important}}@media screen and (min-width: 1408px){/* line 82, src/assets/sass/sass/helpers/visibility.sass */.is-hidden-fullhd{display:none !important}}/* line 85, src/assets/sass/sass/helpers/visibility.sass */.is-invisible{visibility:hidden !important}@media screen and (max-width: 768px){/* line 89, src/assets/sass/sass/helpers/visibility.sass */.is-invisible-mobile{visibility:hidden !important}}@media screen and (min-width: 769px), print{/* line 93, src/assets/sass/sass/helpers/visibility.sass */.is-invisible-tablet{visibility:hidden !important}}@media screen and (min-width: 769px) and (max-width: 1023px){/* line 97, src/assets/sass/sass/helpers/visibility.sass */.is-invisible-tablet-only{visibility:hidden !important}}@media screen and (max-width: 1023px){/* line 101, src/assets/sass/sass/helpers/visibility.sass */.is-invisible-touch{visibility:hidden !important}}@media screen and (min-width: 1024px){/* line 105, src/assets/sass/sass/helpers/visibility.sass */.is-invisible-desktop{visibility:hidden !important}}@media screen and (min-width: 1024px) and (max-width: 1215px){/* line 109, src/assets/sass/sass/helpers/visibility.sass */.is-invisible-desktop-only{visibility:hidden !important}}@media screen and (min-width: 1216px){/* line 113, src/assets/sass/sass/helpers/visibility.sass */.is-invisible-widescreen{visibility:hidden !important}}@media screen and (min-width: 1216px) and (max-width: 1407px){/* line 117, src/assets/sass/sass/helpers/visibility.sass */.is-invisible-widescreen-only{visibility:hidden !important}}@media screen and (min-width: 1408px){/* line 121, src/assets/sass/sass/helpers/visibility.sass */.is-invisible-fullhd{visibility:hidden !important}}/* line 9, src/assets/sass/sass/layout/hero.sass */.hero{-webkit-box-align:stretch;-ms-flex-align:stretch;align-items:stretch;display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-orient:vertical;-webkit-box-direction:normal;-ms-flex-direction:column;flex-direction:column;-webkit-box-pack:justify;-ms-flex-pack:justify;justify-content:space-between}/* line 14, src/assets/sass/sass/layout/hero.sass */.hero .navbar{background:none}/* line 17, src/assets/sass/sass/layout/hero.sass */.hero .tabs ul{border-bottom:none}/* line 23, src/assets/sass/sass/layout/hero.sass */.hero.is-white{background-color:#fff;color:#0a0a0a}/* line 26, src/assets/sass/sass/layout/hero.sass */.hero.is-white a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),.hero.is-white strong{color:inherit}/* line 29, src/assets/sass/sass/layout/hero.sass */.hero.is-white .title{color:#0a0a0a}/* line 31, src/assets/sass/sass/layout/hero.sass */.hero.is-white .subtitle{color:rgba(10,10,10,0.9)}/* line 33, src/assets/sass/sass/layout/hero.sass */.hero.is-white .subtitle a:not(.button),.hero.is-white .subtitle strong{color:#0a0a0a}@media screen and (max-width: 1023px){/* line 36, src/assets/sass/sass/layout/hero.sass */.hero.is-white .navbar-menu{background-color:#fff}}/* line 39, src/assets/sass/sass/layout/hero.sass */.hero.is-white .navbar-item,.hero.is-white .navbar-link{color:rgba(10,10,10,0.7)}/* line 44, src/assets/sass/sass/layout/hero.sass */.hero.is-white a.navbar-item:hover,.hero.is-white a.navbar-item.is-active,.hero.is-white .navbar-link:hover,.hero.is-white .navbar-link.is-active{background-color:#f2f2f2;color:#0a0a0a}/* line 49, src/assets/sass/sass/layout/hero.sass */.hero.is-white .tabs a{color:#0a0a0a;opacity:0.9}/* line 52, src/assets/sass/sass/layout/hero.sass */.hero.is-white .tabs a:hover{opacity:1}/* line 55, src/assets/sass/sass/layout/hero.sass */.hero.is-white .tabs li.is-active a{opacity:1}/* line 59, src/assets/sass/sass/layout/hero.sass */.hero.is-white .tabs.is-boxed a,.hero.is-white .tabs.is-toggle a{color:#0a0a0a}/* line 61, src/assets/sass/sass/layout/hero.sass */.hero.is-white .tabs.is-boxed a:hover,.hero.is-white .tabs.is-toggle a:hover{background-color:rgba(10,10,10,0.1)}/* line 64, src/assets/sass/sass/layout/hero.sass */.hero.is-white .tabs.is-boxed li.is-active a,.hero.is-white .tabs.is-boxed li.is-active a:hover,.hero.is-white .tabs.is-toggle li.is-active a,.hero.is-white .tabs.is-toggle li.is-active a:hover{background-color:#0a0a0a;border-color:#0a0a0a;color:#fff}/* line 71, src/assets/sass/sass/layout/hero.sass */.hero.is-white.is-bold{background-image:linear-gradient(141deg, #e6e6e6 0%, #fff 71%, #fff 100%)}@media screen and (max-width: 768px){/* line 76, src/assets/sass/sass/layout/hero.sass */.hero.is-white.is-bold .navbar-menu{background-image:linear-gradient(141deg, #e6e6e6 0%, #fff 71%, #fff 100%)}}/* line 23, src/assets/sass/sass/layout/hero.sass */.hero.is-black{background-color:#0a0a0a;color:#fff}/* line 26, src/assets/sass/sass/layout/hero.sass */.hero.is-black a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),.hero.is-black strong{color:inherit}/* line 29, src/assets/sass/sass/layout/hero.sass */.hero.is-black .title{color:#fff}/* line 31, src/assets/sass/sass/layout/hero.sass */.hero.is-black .subtitle{color:rgba(255,255,255,0.9)}/* line 33, src/assets/sass/sass/layout/hero.sass */.hero.is-black .subtitle a:not(.button),.hero.is-black .subtitle strong{color:#fff}@media screen and (max-width: 1023px){/* line 36, src/assets/sass/sass/layout/hero.sass */.hero.is-black .navbar-menu{background-color:#0a0a0a}}/* line 39, src/assets/sass/sass/layout/hero.sass */.hero.is-black .navbar-item,.hero.is-black .navbar-link{color:rgba(255,255,255,0.7)}/* line 44, src/assets/sass/sass/layout/hero.sass */.hero.is-black a.navbar-item:hover,.hero.is-black a.navbar-item.is-active,.hero.is-black .navbar-link:hover,.hero.is-black .navbar-link.is-active{background-color:#000;color:#fff}/* line 49, src/assets/sass/sass/layout/hero.sass */.hero.is-black .tabs a{color:#fff;opacity:0.9}/* line 52, src/assets/sass/sass/layout/hero.sass */.hero.is-black .tabs a:hover{opacity:1}/* line 55, src/assets/sass/sass/layout/hero.sass */.hero.is-black .tabs li.is-active a{opacity:1}/* line 59, src/assets/sass/sass/layout/hero.sass */.hero.is-black .tabs.is-boxed a,.hero.is-black .tabs.is-toggle a{color:#fff}/* line 61, src/assets/sass/sass/layout/hero.sass */.hero.is-black .tabs.is-boxed a:hover,.hero.is-black .tabs.is-toggle a:hover{background-color:rgba(10,10,10,0.1)}/* line 64, src/assets/sass/sass/layout/hero.sass */.hero.is-black .tabs.is-boxed li.is-active a,.hero.is-black .tabs.is-boxed li.is-active a:hover,.hero.is-black .tabs.is-toggle li.is-active a,.hero.is-black .tabs.is-toggle li.is-active a:hover{background-color:#fff;border-color:#fff;color:#0a0a0a}/* line 71, src/assets/sass/sass/layout/hero.sass */.hero.is-black.is-bold{background-image:linear-gradient(141deg, #000 0%, #0a0a0a 71%, #181616 100%)}@media screen and (max-width: 768px){/* line 76, src/assets/sass/sass/layout/hero.sass */.hero.is-black.is-bold .navbar-menu{background-image:linear-gradient(141deg, #000 0%, #0a0a0a 71%, #181616 100%)}}/* line 23, src/assets/sass/sass/layout/hero.sass */.hero.is-light{background-color:#f5f5f5;color:rgba(0,0,0,0.7)}/* line 26, src/assets/sass/sass/layout/hero.sass */.hero.is-light a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),.hero.is-light strong{color:inherit}/* line 29, src/assets/sass/sass/layout/hero.sass */.hero.is-light .title{color:rgba(0,0,0,0.7)}/* line 31, src/assets/sass/sass/layout/hero.sass */.hero.is-light .subtitle{color:rgba(0,0,0,0.9)}/* line 33, src/assets/sass/sass/layout/hero.sass */.hero.is-light .subtitle a:not(.button),.hero.is-light .subtitle strong{color:rgba(0,0,0,0.7)}@media screen and (max-width: 1023px){/* line 36, src/assets/sass/sass/layout/hero.sass */.hero.is-light .navbar-menu{background-color:#f5f5f5}}/* line 39, src/assets/sass/sass/layout/hero.sass */.hero.is-light .navbar-item,.hero.is-light .navbar-link{color:rgba(0,0,0,0.7)}/* line 44, src/assets/sass/sass/layout/hero.sass */.hero.is-light a.navbar-item:hover,.hero.is-light a.navbar-item.is-active,.hero.is-light .navbar-link:hover,.hero.is-light .navbar-link.is-active{background-color:#e8e8e8;color:rgba(0,0,0,0.7)}/* line 49, src/assets/sass/sass/layout/hero.sass */.hero.is-light .tabs a{color:rgba(0,0,0,0.7);opacity:0.9}/* line 52, src/assets/sass/sass/layout/hero.sass */.hero.is-light .tabs a:hover{opacity:1}/* line 55, src/assets/sass/sass/layout/hero.sass */.hero.is-light .tabs li.is-active a{opacity:1}/* line 59, src/assets/sass/sass/layout/hero.sass */.hero.is-light .tabs.is-boxed a,.hero.is-light .tabs.is-toggle a{color:rgba(0,0,0,0.7)}/* line 61, src/assets/sass/sass/layout/hero.sass */.hero.is-light .tabs.is-boxed a:hover,.hero.is-light .tabs.is-toggle a:hover{background-color:rgba(10,10,10,0.1)}/* line 64, src/assets/sass/sass/layout/hero.sass */.hero.is-light .tabs.is-boxed li.is-active a,.hero.is-light .tabs.is-boxed li.is-active a:hover,.hero.is-light .tabs.is-toggle li.is-active a,.hero.is-light .tabs.is-toggle li.is-active a:hover{background-color:rgba(0,0,0,0.7);border-color:rgba(0,0,0,0.7);color:#f5f5f5}/* line 71, src/assets/sass/sass/layout/hero.sass */.hero.is-light.is-bold{background-image:linear-gradient(141deg, #dfd8d9 0%, #f5f5f5 71%, #fff 100%)}@media screen and (max-width: 768px){/* line 76, src/assets/sass/sass/layout/hero.sass */.hero.is-light.is-bold .navbar-menu{background-image:linear-gradient(141deg, #dfd8d9 0%, #f5f5f5 71%, #fff 100%)}}/* line 23, src/assets/sass/sass/layout/hero.sass */.hero.is-dark{background-color:#363636;color:#fff}/* line 26, src/assets/sass/sass/layout/hero.sass */.hero.is-dark a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),.hero.is-dark strong{color:inherit}/* line 29, src/assets/sass/sass/layout/hero.sass */.hero.is-dark .title{color:#fff}/* line 31, src/assets/sass/sass/layout/hero.sass */.hero.is-dark .subtitle{color:rgba(255,255,255,0.9)}/* line 33, src/assets/sass/sass/layout/hero.sass */.hero.is-dark .subtitle a:not(.button),.hero.is-dark .subtitle strong{color:#fff}@media screen and (max-width: 1023px){/* line 36, src/assets/sass/sass/layout/hero.sass */.hero.is-dark .navbar-menu{background-color:#363636}}/* line 39, src/assets/sass/sass/layout/hero.sass */.hero.is-dark .navbar-item,.hero.is-dark .navbar-link{color:rgba(255,255,255,0.7)}/* line 44, src/assets/sass/sass/layout/hero.sass */.hero.is-dark a.navbar-item:hover,.hero.is-dark a.navbar-item.is-active,.hero.is-dark .navbar-link:hover,.hero.is-dark .navbar-link.is-active{background-color:#292929;color:#fff}/* line 49, src/assets/sass/sass/layout/hero.sass */.hero.is-dark .tabs a{color:#fff;opacity:0.9}/* line 52, src/assets/sass/sass/layout/hero.sass */.hero.is-dark .tabs a:hover{opacity:1}/* line 55, src/assets/sass/sass/layout/hero.sass */.hero.is-dark .tabs li.is-active a{opacity:1}/* line 59, src/assets/sass/sass/layout/hero.sass */.hero.is-dark .tabs.is-boxed a,.hero.is-dark .tabs.is-toggle a{color:#fff}/* line 61, src/assets/sass/sass/layout/hero.sass */.hero.is-dark .tabs.is-boxed a:hover,.hero.is-dark .tabs.is-toggle a:hover{background-color:rgba(10,10,10,0.1)}/* line 64, src/assets/sass/sass/layout/hero.sass */.hero.is-dark .tabs.is-boxed li.is-active a,.hero.is-dark .tabs.is-boxed li.is-active a:hover,.hero.is-dark .tabs.is-toggle li.is-active a,.hero.is-dark .tabs.is-toggle li.is-active a:hover{background-color:#fff;border-color:#fff;color:#363636}/* line 71, src/assets/sass/sass/layout/hero.sass */.hero.is-dark.is-bold{background-image:linear-gradient(141deg, #1f191a 0%, #363636 71%, #46403f 100%)}@media screen and (max-width: 768px){/* line 76, src/assets/sass/sass/layout/hero.sass */.hero.is-dark.is-bold .navbar-menu{background-image:linear-gradient(141deg, #1f191a 0%, #363636 71%, #46403f 100%)}}/* line 23, src/assets/sass/sass/layout/hero.sass */.hero.is-primary{background-color:#00d1b2;color:#fff}/* line 26, src/assets/sass/sass/layout/hero.sass */.hero.is-primary a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),.hero.is-primary strong{color:inherit}/* line 29, src/assets/sass/sass/layout/hero.sass */.hero.is-primary .title{color:#fff}/* line 31, src/assets/sass/sass/layout/hero.sass */.hero.is-primary .subtitle{color:rgba(255,255,255,0.9)}/* line 33, src/assets/sass/sass/layout/hero.sass */.hero.is-primary .subtitle a:not(.button),.hero.is-primary .subtitle strong{color:#fff}@media screen and (max-width: 1023px){/* line 36, src/assets/sass/sass/layout/hero.sass */.hero.is-primary .navbar-menu{background-color:#00d1b2}}/* line 39, src/assets/sass/sass/layout/hero.sass */.hero.is-primary .navbar-item,.hero.is-primary .navbar-link{color:rgba(255,255,255,0.7)}/* line 44, src/assets/sass/sass/layout/hero.sass */.hero.is-primary a.navbar-item:hover,.hero.is-primary a.navbar-item.is-active,.hero.is-primary .navbar-link:hover,.hero.is-primary .navbar-link.is-active{background-color:#00b89c;color:#fff}/* line 49, src/assets/sass/sass/layout/hero.sass */.hero.is-primary .tabs a{color:#fff;opacity:0.9}/* line 52, src/assets/sass/sass/layout/hero.sass */.hero.is-primary .tabs a:hover{opacity:1}/* line 55, src/assets/sass/sass/layout/hero.sass */.hero.is-primary .tabs li.is-active a{opacity:1}/* line 59, src/assets/sass/sass/layout/hero.sass */.hero.is-primary .tabs.is-boxed a,.hero.is-primary .tabs.is-toggle a{color:#fff}/* line 61, src/assets/sass/sass/layout/hero.sass */.hero.is-primary .tabs.is-boxed a:hover,.hero.is-primary .tabs.is-toggle a:hover{background-color:rgba(10,10,10,0.1)}/* line 64, src/assets/sass/sass/layout/hero.sass */.hero.is-primary .tabs.is-boxed li.is-active a,.hero.is-primary .tabs.is-boxed li.is-active a:hover,.hero.is-primary .tabs.is-toggle li.is-active a,.hero.is-primary .tabs.is-toggle li.is-active a:hover{background-color:#fff;border-color:#fff;color:#00d1b2}/* line 71, src/assets/sass/sass/layout/hero.sass */.hero.is-primary.is-bold{background-image:linear-gradient(141deg, #009e6c 0%, #00d1b2 71%, #00e7eb 100%)}@media screen and (max-width: 768px){/* line 76, src/assets/sass/sass/layout/hero.sass */.hero.is-primary.is-bold .navbar-menu{background-image:linear-gradient(141deg, #009e6c 0%, #00d1b2 71%, #00e7eb 100%)}}/* line 23, src/assets/sass/sass/layout/hero.sass */.hero.is-link{background-color:#3273dc;color:#fff}/* line 26, src/assets/sass/sass/layout/hero.sass */.hero.is-link a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),.hero.is-link strong{color:inherit}/* line 29, src/assets/sass/sass/layout/hero.sass */.hero.is-link .title{color:#fff}/* line 31, src/assets/sass/sass/layout/hero.sass */.hero.is-link .subtitle{color:rgba(255,255,255,0.9)}/* line 33, src/assets/sass/sass/layout/hero.sass */.hero.is-link .subtitle a:not(.button),.hero.is-link .subtitle strong{color:#fff}@media screen and (max-width: 1023px){/* line 36, src/assets/sass/sass/layout/hero.sass */.hero.is-link .navbar-menu{background-color:#3273dc}}/* line 39, src/assets/sass/sass/layout/hero.sass */.hero.is-link .navbar-item,.hero.is-link .navbar-link{color:rgba(255,255,255,0.7)}/* line 44, src/assets/sass/sass/layout/hero.sass */.hero.is-link a.navbar-item:hover,.hero.is-link a.navbar-item.is-active,.hero.is-link .navbar-link:hover,.hero.is-link .navbar-link.is-active{background-color:#2366d1;color:#fff}/* line 49, src/assets/sass/sass/layout/hero.sass */.hero.is-link .tabs a{color:#fff;opacity:0.9}/* line 52, src/assets/sass/sass/layout/hero.sass */.hero.is-link .tabs a:hover{opacity:1}/* line 55, src/assets/sass/sass/layout/hero.sass */.hero.is-link .tabs li.is-active a{opacity:1}/* line 59, src/assets/sass/sass/layout/hero.sass */.hero.is-link .tabs.is-boxed a,.hero.is-link .tabs.is-toggle a{color:#fff}/* line 61, src/assets/sass/sass/layout/hero.sass */.hero.is-link .tabs.is-boxed a:hover,.hero.is-link .tabs.is-toggle a:hover{background-color:rgba(10,10,10,0.1)}/* line 64, src/assets/sass/sass/layout/hero.sass */.hero.is-link .tabs.is-boxed li.is-active a,.hero.is-link .tabs.is-boxed li.is-active a:hover,.hero.is-link .tabs.is-toggle li.is-active a,.hero.is-link .tabs.is-toggle li.is-active a:hover{background-color:#fff;border-color:#fff;color:#3273dc}/* line 71, src/assets/sass/sass/layout/hero.sass */.hero.is-link.is-bold{background-image:linear-gradient(141deg, #1577c6 0%, #3273dc 71%, #4366e5 100%)}@media screen and (max-width: 768px){/* line 76, src/assets/sass/sass/layout/hero.sass */.hero.is-link.is-bold .navbar-menu{background-image:linear-gradient(141deg, #1577c6 0%, #3273dc 71%, #4366e5 100%)}}/* line 23, src/assets/sass/sass/layout/hero.sass */.hero.is-info{background-color:#3298dc;color:#fff}/* line 26, src/assets/sass/sass/layout/hero.sass */.hero.is-info a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),.hero.is-info strong{color:inherit}/* line 29, src/assets/sass/sass/layout/hero.sass */.hero.is-info .title{color:#fff}/* line 31, src/assets/sass/sass/layout/hero.sass */.hero.is-info .subtitle{color:rgba(255,255,255,0.9)}/* line 33, src/assets/sass/sass/layout/hero.sass */.hero.is-info .subtitle a:not(.button),.hero.is-info .subtitle strong{color:#fff}@media screen and (max-width: 1023px){/* line 36, src/assets/sass/sass/layout/hero.sass */.hero.is-info .navbar-menu{background-color:#3298dc}}/* line 39, src/assets/sass/sass/layout/hero.sass */.hero.is-info .navbar-item,.hero.is-info .navbar-link{color:rgba(255,255,255,0.7)}/* line 44, src/assets/sass/sass/layout/hero.sass */.hero.is-info a.navbar-item:hover,.hero.is-info a.navbar-item.is-active,.hero.is-info .navbar-link:hover,.hero.is-info .navbar-link.is-active{background-color:#238cd1;color:#fff}/* line 49, src/assets/sass/sass/layout/hero.sass */.hero.is-info .tabs a{color:#fff;opacity:0.9}/* line 52, src/assets/sass/sass/layout/hero.sass */.hero.is-info .tabs a:hover{opacity:1}/* line 55, src/assets/sass/sass/layout/hero.sass */.hero.is-info .tabs li.is-active a{opacity:1}/* line 59, src/assets/sass/sass/layout/hero.sass */.hero.is-info .tabs.is-boxed a,.hero.is-info .tabs.is-toggle a{color:#fff}/* line 61, src/assets/sass/sass/layout/hero.sass */.hero.is-info .tabs.is-boxed a:hover,.hero.is-info .tabs.is-toggle a:hover{background-color:rgba(10,10,10,0.1)}/* line 64, src/assets/sass/sass/layout/hero.sass */.hero.is-info .tabs.is-boxed li.is-active a,.hero.is-info .tabs.is-boxed li.is-active a:hover,.hero.is-info .tabs.is-toggle li.is-active a,.hero.is-info .tabs.is-toggle li.is-active a:hover{background-color:#fff;border-color:#fff;color:#3298dc}/* line 71, src/assets/sass/sass/layout/hero.sass */.hero.is-info.is-bold{background-image:linear-gradient(141deg, #159dc6 0%, #3298dc 71%, #4389e5 100%)}@media screen and (max-width: 768px){/* line 76, src/assets/sass/sass/layout/hero.sass */.hero.is-info.is-bold .navbar-menu{background-image:linear-gradient(141deg, #159dc6 0%, #3298dc 71%, #4389e5 100%)}}/* line 23, src/assets/sass/sass/layout/hero.sass */.hero.is-success{background-color:#48c774;color:#fff}/* line 26, src/assets/sass/sass/layout/hero.sass */.hero.is-success a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),.hero.is-success strong{color:inherit}/* line 29, src/assets/sass/sass/layout/hero.sass */.hero.is-success .title{color:#fff}/* line 31, src/assets/sass/sass/layout/hero.sass */.hero.is-success .subtitle{color:rgba(255,255,255,0.9)}/* line 33, src/assets/sass/sass/layout/hero.sass */.hero.is-success .subtitle a:not(.button),.hero.is-success .subtitle strong{color:#fff}@media screen and (max-width: 1023px){/* line 36, src/assets/sass/sass/layout/hero.sass */.hero.is-success .navbar-menu{background-color:#48c774}}/* line 39, src/assets/sass/sass/layout/hero.sass */.hero.is-success .navbar-item,.hero.is-success .navbar-link{color:rgba(255,255,255,0.7)}/* line 44, src/assets/sass/sass/layout/hero.sass */.hero.is-success a.navbar-item:hover,.hero.is-success a.navbar-item.is-active,.hero.is-success .navbar-link:hover,.hero.is-success .navbar-link.is-active{background-color:#3abb67;color:#fff}/* line 49, src/assets/sass/sass/layout/hero.sass */.hero.is-success .tabs a{color:#fff;opacity:0.9}/* line 52, src/assets/sass/sass/layout/hero.sass */.hero.is-success .tabs a:hover{opacity:1}/* line 55, src/assets/sass/sass/layout/hero.sass */.hero.is-success .tabs li.is-active a{opacity:1}/* line 59, src/assets/sass/sass/layout/hero.sass */.hero.is-success .tabs.is-boxed a,.hero.is-success .tabs.is-toggle a{color:#fff}/* line 61, src/assets/sass/sass/layout/hero.sass */.hero.is-success .tabs.is-boxed a:hover,.hero.is-success .tabs.is-toggle a:hover{background-color:rgba(10,10,10,0.1)}/* line 64, src/assets/sass/sass/layout/hero.sass */.hero.is-success .tabs.is-boxed li.is-active a,.hero.is-success .tabs.is-boxed li.is-active a:hover,.hero.is-success .tabs.is-toggle li.is-active a,.hero.is-success .tabs.is-toggle li.is-active a:hover{background-color:#fff;border-color:#fff;color:#48c774}/* line 71, src/assets/sass/sass/layout/hero.sass */.hero.is-success.is-bold{background-image:linear-gradient(141deg, #29b342 0%, #48c774 71%, #56d296 100%)}@media screen and (max-width: 768px){/* line 76, src/assets/sass/sass/layout/hero.sass */.hero.is-success.is-bold .navbar-menu{background-image:linear-gradient(141deg, #29b342 0%, #48c774 71%, #56d296 100%)}}/* line 23, src/assets/sass/sass/layout/hero.sass */.hero.is-warning{background-color:#ffdd57;color:rgba(0,0,0,0.7)}/* line 26, src/assets/sass/sass/layout/hero.sass */.hero.is-warning a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),.hero.is-warning strong{color:inherit}/* line 29, src/assets/sass/sass/layout/hero.sass */.hero.is-warning .title{color:rgba(0,0,0,0.7)}/* line 31, src/assets/sass/sass/layout/hero.sass */.hero.is-warning .subtitle{color:rgba(0,0,0,0.9)}/* line 33, src/assets/sass/sass/layout/hero.sass */.hero.is-warning .subtitle a:not(.button),.hero.is-warning .subtitle strong{color:rgba(0,0,0,0.7)}@media screen and (max-width: 1023px){/* line 36, src/assets/sass/sass/layout/hero.sass */.hero.is-warning .navbar-menu{background-color:#ffdd57}}/* line 39, src/assets/sass/sass/layout/hero.sass */.hero.is-warning .navbar-item,.hero.is-warning .navbar-link{color:rgba(0,0,0,0.7)}/* line 44, src/assets/sass/sass/layout/hero.sass */.hero.is-warning a.navbar-item:hover,.hero.is-warning a.navbar-item.is-active,.hero.is-warning .navbar-link:hover,.hero.is-warning .navbar-link.is-active{background-color:#ffd83d;color:rgba(0,0,0,0.7)}/* line 49, src/assets/sass/sass/layout/hero.sass */.hero.is-warning .tabs a{color:rgba(0,0,0,0.7);opacity:0.9}/* line 52, src/assets/sass/sass/layout/hero.sass */.hero.is-warning .tabs a:hover{opacity:1}/* line 55, src/assets/sass/sass/layout/hero.sass */.hero.is-warning .tabs li.is-active a{opacity:1}/* line 59, src/assets/sass/sass/layout/hero.sass */.hero.is-warning .tabs.is-boxed a,.hero.is-warning .tabs.is-toggle a{color:rgba(0,0,0,0.7)}/* line 61, src/assets/sass/sass/layout/hero.sass */.hero.is-warning .tabs.is-boxed a:hover,.hero.is-warning .tabs.is-toggle a:hover{background-color:rgba(10,10,10,0.1)}/* line 64, src/assets/sass/sass/layout/hero.sass */.hero.is-warning .tabs.is-boxed li.is-active a,.hero.is-warning .tabs.is-boxed li.is-active a:hover,.hero.is-warning .tabs.is-toggle li.is-active a,.hero.is-warning .tabs.is-toggle li.is-active a:hover{background-color:rgba(0,0,0,0.7);border-color:rgba(0,0,0,0.7);color:#ffdd57}/* line 71, src/assets/sass/sass/layout/hero.sass */.hero.is-warning.is-bold{background-image:linear-gradient(141deg, #ffaf24 0%, #ffdd57 71%, #fffa70 100%)}@media screen and (max-width: 768px){/* line 76, src/assets/sass/sass/layout/hero.sass */.hero.is-warning.is-bold .navbar-menu{background-image:linear-gradient(141deg, #ffaf24 0%, #ffdd57 71%, #fffa70 100%)}}/* line 23, src/assets/sass/sass/layout/hero.sass */.hero.is-danger{background-color:#f14668;color:#fff}/* line 26, src/assets/sass/sass/layout/hero.sass */.hero.is-danger a:not(.button):not(.dropdown-item):not(.tag):not(.pagination-link.is-current),.hero.is-danger strong{color:inherit}/* line 29, src/assets/sass/sass/layout/hero.sass */.hero.is-danger .title{color:#fff}/* line 31, src/assets/sass/sass/layout/hero.sass */.hero.is-danger .subtitle{color:rgba(255,255,255,0.9)}/* line 33, src/assets/sass/sass/layout/hero.sass */.hero.is-danger .subtitle a:not(.button),.hero.is-danger .subtitle strong{color:#fff}@media screen and (max-width: 1023px){/* line 36, src/assets/sass/sass/layout/hero.sass */.hero.is-danger .navbar-menu{background-color:#f14668}}/* line 39, src/assets/sass/sass/layout/hero.sass */.hero.is-danger .navbar-item,.hero.is-danger .navbar-link{color:rgba(255,255,255,0.7)}/* line 44, src/assets/sass/sass/layout/hero.sass */.hero.is-danger a.navbar-item:hover,.hero.is-danger a.navbar-item.is-active,.hero.is-danger .navbar-link:hover,.hero.is-danger .navbar-link.is-active{background-color:#ef2e55;color:#fff}/* line 49, src/assets/sass/sass/layout/hero.sass */.hero.is-danger .tabs a{color:#fff;opacity:0.9}/* line 52, src/assets/sass/sass/layout/hero.sass */.hero.is-danger .tabs a:hover{opacity:1}/* line 55, src/assets/sass/sass/layout/hero.sass */.hero.is-danger .tabs li.is-active a{opacity:1}/* line 59, src/assets/sass/sass/layout/hero.sass */.hero.is-danger .tabs.is-boxed a,.hero.is-danger .tabs.is-toggle a{color:#fff}/* line 61, src/assets/sass/sass/layout/hero.sass */.hero.is-danger .tabs.is-boxed a:hover,.hero.is-danger .tabs.is-toggle a:hover{background-color:rgba(10,10,10,0.1)}/* line 64, src/assets/sass/sass/layout/hero.sass */.hero.is-danger .tabs.is-boxed li.is-active a,.hero.is-danger .tabs.is-boxed li.is-active a:hover,.hero.is-danger .tabs.is-toggle li.is-active a,.hero.is-danger .tabs.is-toggle li.is-active a:hover{background-color:#fff;border-color:#fff;color:#f14668}/* line 71, src/assets/sass/sass/layout/hero.sass */.hero.is-danger.is-bold{background-image:linear-gradient(141deg, #fa0a62 0%, #f14668 71%, #f7595f 100%)}@media screen and (max-width: 768px){/* line 76, src/assets/sass/sass/layout/hero.sass */.hero.is-danger.is-bold .navbar-menu{background-image:linear-gradient(141deg, #fa0a62 0%, #f14668 71%, #f7595f 100%)}}/* line 80, src/assets/sass/sass/layout/hero.sass */.hero.is-small .hero-body{padding:1.5rem}@media screen and (min-width: 769px), print{/* line 84, src/assets/sass/sass/layout/hero.sass */.hero.is-medium .hero-body{padding:9rem 1.5rem}}@media screen and (min-width: 769px), print{/* line 88, src/assets/sass/sass/layout/hero.sass */.hero.is-large .hero-body{padding:18rem 1.5rem}}/* line 93, src/assets/sass/sass/layout/hero.sass */.hero.is-halfheight .hero-body,.hero.is-fullheight .hero-body,.hero.is-fullheight-with-navbar .hero-body{-webkit-box-align:center;-ms-flex-align:center;align-items:center;display:-webkit-box;display:-ms-flexbox;display:flex}/* line 96, src/assets/sass/sass/layout/hero.sass */.hero.is-halfheight .hero-body>.container,.hero.is-fullheight .hero-body>.container,.hero.is-fullheight-with-navbar .hero-body>.container{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:1;flex-shrink:1}/* line 99, src/assets/sass/sass/layout/hero.sass */.hero.is-halfheight{min-height:50vh}/* line 101, src/assets/sass/sass/layout/hero.sass */.hero.is-fullheight{min-height:100vh}/* line 106, src/assets/sass/sass/layout/hero.sass */.hero-video{overflow:hidden}/* line 109, src/assets/sass/sass/layout/hero.sass */.hero-video video{left:50%;min-height:100%;min-width:100%;position:absolute;top:50%;-webkit-transform:translate3d(-50%, -50%, 0);transform:translate3d(-50%, -50%, 0)}/* line 117, src/assets/sass/sass/layout/hero.sass */.hero-video.is-transparent{opacity:0.3}@media screen and (max-width: 768px){/* line 106, src/assets/sass/sass/layout/hero.sass */.hero-video{display:none}}/* line 123, src/assets/sass/sass/layout/hero.sass */.hero-buttons{margin-top:1.5rem}@media screen and (max-width: 768px){/* line 127, src/assets/sass/sass/layout/hero.sass */.hero-buttons .button{display:-webkit-box;display:-ms-flexbox;display:flex}/* line 129, src/assets/sass/sass/layout/hero.sass */.hero-buttons .button:not(:last-child){margin-bottom:0.75rem}}@media screen and (min-width: 769px), print{/* line 123, src/assets/sass/sass/layout/hero.sass */.hero-buttons{display:-webkit-box;display:-ms-flexbox;display:flex;-webkit-box-pack:center;-ms-flex-pack:center;justify-content:center}/* line 134, src/assets/sass/sass/layout/hero.sass */.hero-buttons .button:not(:last-child){margin-right:1.5rem}}/* line 139, src/assets/sass/sass/layout/hero.sass */.hero-head,.hero-foot{-webkit-box-flex:0;-ms-flex-positive:0;flex-grow:0;-ms-flex-negative:0;flex-shrink:0}/* line 144, src/assets/sass/sass/layout/hero.sass */.hero-body{-webkit-box-flex:1;-ms-flex-positive:1;flex-grow:1;-ms-flex-negative:0;flex-shrink:0;padding:3rem 1.5rem}/* line 5, src/assets/sass/sass/layout/section.sass */.section{padding:3rem 1.5rem}@media screen and (min-width: 1024px){/* line 10, src/assets/sass/sass/layout/section.sass */.section.is-medium{padding:9rem 1.5rem}/* line 12, src/assets/sass/sass/layout/section.sass */.section.is-large{padding:18rem 1.5rem}}/* line 5, src/assets/sass/sass/layout/footer.sass */.footer{background-color:#fafafa;padding:3rem 1.5rem 6rem}

.is-borderless{border:none !important}body:not(.is-dark){--border-color: #e0e0e0;--dataset-container-del-color: #dd5a43;--dataset-container-del-bg-color: #f2dede;--dataset-container-ins-color: #69aa46;--dataset-container-ins-bg-color: #dff0d8;--soft-text-color: #999;--table-bg-color: #fff;--table-bg-color-alt: #f9f9fb;--table-hover-bg-color: #fafafc;--list-item-hover-or-border-color: #dbdbdb;--a-href-color: #3f88e3;--featured-contest-bg-color: #f9f9fb;--bg-error-color: #ffdede;--text-error-color: #ff3860}body.is-dark{--border-color: #3b4963;--dataset-container-del-color: #fe3564;--dataset-container-del-bg-color: #260f0f;--dataset-container-ins-color: #69aa46;--dataset-container-ins-bg-color: #0f2008;--soft-text-color: #a2a5b9;--table-bg-color: #242d3c;--table-bg-color-alt: #202938;--table-hover-bg-color: #2b3649;--list-item-hover-or-border-color: #242d3c;--a-href-color: #5596e6;--featured-contest-bg-color: #202938;--vs-search-input-bg: #242d3c;--vs-border-color: #3b4963;--vs-dropdown-bg: #242d3c;--vs-disabled-bg: #2b3649;--vs-selected-bg: #242d3c;--bg-error-color: #431418;--text-error-color: #ff3860}body:not(.is-dark) .is-white{background:white !important}body:not(.is-dark) .statement p{color:#4a4a4a !important}body:not(.is-dark) .editor-footer{border-top:1px solid var(--border-color) !important}body.is-dark{color:#a2a5b9 !important}body.is-dark a:hover{color:#e1e1e1}body.is-dark table,body.is-dark .card,body.is-dark .dataset-container,body.is-dark .step-title,body.is-dark .subtitle,body.is-dark .vue-simplemde .CodeMirror,body.is-dark .author-sidebar .menu-list a{color:#a2a5b9 !important}body.is-dark .event-list{background-color:#2f3c4f}body.is-dark .is-bg-1,body.is-dark .markdown-body table,body.is-dark .editor-footer,body.is-dark .vue-simplemde .editor-toolbar,body.is-dark .vue-simplemde .editor-preview,body.is-dark .vue-simplemde .editor-preview-side{background:#202836 !important}body.is-dark .vue-simplemde .editor-toolbar.disabled-for-preview a:not(.no-disable){background:transparent !important}body.is-dark .markdown-body pre{background-color:#192431 !important}body.is-dark .markdown-body img{background-color:transparent}body.is-dark .markdown-body pre code{color:#f8f8f2 !important}body.is-dark .markdown-body pre code .hljs-symbol,body.is-dark .markdown-body pre code .hljs-meta{color:#fafaf2}body.is-dark .markdown-body pre code .hljs-keyword{color:#ff7de9}body.is-dark .markdown-body pre code .hljs-string{color:#f6fb04 !important}body.is-dark .markdown-body pre code .hljs-attr{color:#72c05d !important}body.is-dark .markdown-body pre code .hljs-title{color:#72c05d !important}body.is-dark .markdown-body pre code .hljs-number{color:#ca94ff !important}body.is-dark .markdown-body pre code .hljs-built_in{color:#ffb86c !important}body.is-dark .markdown-body pre code .hljs-comment{color:#5c98cd !important;font-style:normal !important}body.is-dark .editor-footer-buttons,body.is-dark .custom-input-box{border-top:1px solid #3b4963 !important;border-right:1px solid #283143 !important}body.is-dark .is-bg-2{background:#293446 !important;color:#a2a5b9 !important}body.is-dark table,body.is-dark .vue-simplemde .CodeMirror,body.is-dark .markdown-body table tr,body.is-dark .custom-input-box,body.is-dark .b-table .table tr.detail{background-color:var(--table-bg-color) !important}body.is-dark .vue-simplemde .CodeMirror-selected{background-color:#2e394c !important}body.is-dark .nav-drop-header a h3{color:#e1e1e1 !important}body.is-dark .navbar-item:focus-within,body.is-dark .navbar-item:hover{background:#262f40 !important}body.is-dark small{color:#757a91 !important}body.is-dark .markdown-body code,body.is-dark .pagination-link,body.is-dark .pagination-next,body.is-dark .pagination-previous{color:#fafafa;background-color:#293446}body.is-dark .title,body.is-dark .table thead th,body.is-dark .table thead td,body.is-dark table th,body.is-dark .vue-simplemde .cm-strong,body.is-dark .vue-simplemde .editor-toolbar a,body.is-dark strong,body.is-dark .field label,body.is-dark .breadcrumb li.is-active a,body.is-dark h4,body.is-dark h3,body.is-dark .card-header-title{color:#fafafa !important}body.is-dark .table.is-striped tbody tr:not(.is-selected):nth-child(2n),body.is-dark .markdown-body table tr:nth-child(2n){background-color:#293446 !important}body.is-dark .vue-simplemde .CodeMirror-cursor{border-left:1px solid white !important}body.is-dark .vue-simplemde .editor-toolbar.fullscreen::before,body.is-dark .vue-simplemde .editor-toolbar.fullscreen::after,body.is-dark .b-tabs .tabs ul li.is-active a,body.is-dark .category-box img{background:none !important}body.is-dark .tile.box,body.is-dark .vue-simplemde .editor-toolbar a:hover,body.is-dark .vue-simplemde .editor-toolbar a.active{background:#141922 !important}body.is-dark .hero-gradient,body.is-dark .panel-heading{background:#151b24 !important}body.is-dark .loj-list-item-box{background:#141922 !important}body.is-dark .b-tabs .tabs ul li a,body.is-dark .menu-list li a{color:#a2a5b9}body.is-dark .b-tabs .tabs ul li a:hover,body.is-dark .menu-list li a:hover{background-color:#151a23}body.is-dark .b-tabs .tabs ul li.is-active a,body.is-dark .menu-list li a.is-active{color:#fff}body.is-dark .resize-bar:hover{background-color:#243145}body.is-dark .vs__selected,body.is-dark .vs__clear,body.is-dark .vs__open-indicator,body.is-dark .vs__search{color:#fff;fill:#fff}body.is-dark .vs__dropdown-menu li,body.is-dark .autocomplete .dropdown-content,body.is-dark .autocomplete .dropdown-menu a{color:#fff;background-color:#37445c}body.is-dark .vs__dropdown-menu li:hover,body.is-dark .autocomplete .dropdown-menu a:hover{background-color:#141922}body.is-dark .has-text-grey-dark,body.is-dark .apexcharts-text{color:#fff !important;fill:#fff}body.is-dark .label::before{background-color:unset !important}body.is-dark .modal-card-foot,body.is-dark .modal-card-head{background-color:#202836;border-color:#3b4963}body.is-dark .modal-card-body{background-color:#202836}body.is-dark .modal-card-title,body.is-dark .stat-number,body.is-dark .apexcharts-legend-text{color:#fff !important}body.is-dark .modal-background{background-color:rgba(10,10,10,0.97)}body.is-dark .b-sidebar .sidebar-content{background-color:#202836;border-left:1px solid #3b4963}body.is-dark .b-sidebar .sidebar-content.is-light{background-color:#202836}body.is-dark .strongtag .tag{background-color:#3b4963;color:#fff}body.is-dark .taginput-container.is-focusable,body.is-dark .taginput-container.is-focusable:hover,body.is-dark .taginput-container.is-focusable:focus{background-color:#202836;border-color:#3b4963;box-shadow:none}.table tbody tr:not(.is-selected):not(:hover) .table-bg-color-alt{background-color:var(--table-bg-color-alt)}.table.is-hoverable tbody tr:not(.is-selected):hover{background-color:var(--table-hover-bg-color)}.table.is-hoverable tbody tr:not(.is-selected):hover td:first-child{background-color:var(--table-hover-bg-color) !important}.markdown-body pre{padding:5px !important;background-color:#f5f5fc !important}.markdown-body pre code .hljs-symbol,.markdown-body pre code .hljs-meta{color:#4a4a4a}a{color:var(--a-href-color)}.modal .autocomplete{margin-bottom:200px}.modal .taginput-container .autocomplete{margin-bottom:0}.tag-difficulty{width:86px}.tag-success-rate{width:136px}.tag-solved-by{width:110px}.is-bg-3,.dataset-container{background-color:var(--table-bg-color) !important}.select select{font-size:0.9rem;height:36px;transition:all 0.3s;box-shadow:none !important}.is-header-font{font-family:'Montserrat', sans-serif}.is-bg-2{background-color:#f5f5f5;color:#4a4a4a}.is-min-max-height-less{min-height:initial !important;max-height:initial !important}.has-border-base-color{border-color:var(--border-color) !important}.basic-infos-wrapper .is-about .flex-block a{color:var(--a-href-color)}.b-tabs .tabs.is-boxed ul li a{margin-bottom:0 !important}.b-tabs .tabs.is-boxed ul li.is-active a{border-color:var(--border-color) !important;border-bottom-color:var(--table-bg-color) !important}.b-tabs .tabs.is-boxed ul li:not(.is-active) a:hover{border-bottom-color:var(--border-color) !important}del{text-decoration:none;color:var(--dataset-container-del-color) !important;background-color:var(--dataset-container-del-bg-color) !important}ins{text-decoration:none;color:var(--dataset-container-ins-color) !important;background-color:var(--dataset-container-ins-bg-color) !important}.is-bordered,.table.is-bordered td,.table.is-bordered th,.markdown-body table td,.markdown-body pre,.markdown-body table th{border:1px solid var(--border-color) !important}.no-top-border{border-top:none !important}.is-bottom-bordered{border-bottom:1px solid var(--border-color) !important}.is-left-bordered{border-left:1px solid var(--border-color) !important}.is-right-bordered{border-right:1px solid var(--border-color) !important}.is-top-bordered{border-top:1px solid var(--border-color) !important}.is-bg-transparent{background-color:transparent !important}.markdown-body code{color:#546e7a;background-color:#f7f9fa}.markdown-body pre code{background-color:transparent !important;color:unset !important}.CodeMirror .CodeMirror-code .cm-comment{background-color:transparent !important}code{word-break:normal}.problem-tutorial img{max-height:500px !important}.main-content{min-height:500px}#custom-dataset .card-footer-item{padding:5px}.action-card .icon{margin-right:5px}.action-card{margin-bottom:10px}.valign-middle{vertical-align:middle !important}.add-page:hover{background:none !important}.has-bg-error{background-color:var(--bg-error-color)}.has-text-error{color:var(--text-error-color)}.has-warning-border{border-color:#ff745d;border-width:thin;border-style:solid}.has-info-border{border-color:#3198dc;border-width:thin;border-style:solid}.navbar.is-info{background-color:#3298dc;color:#fff}.sample-dataset-section{margin:20px 10px}.loj-list-item-box{background-color:white}.loj-list-items{border-width:0.5px;border-style:solid;border-color:var(--list-item-hover-or-border-color)}.loj-list-item{padding:15px}.loj-list-item:not(:last-child){border-bottom:1px solid var(--list-item-hover-or-border-color)}.loj-list-item:first-child{border-top-left-radius:4px;border-top-right-radius:4px}.loj-list-item:hover{background-color:var(--list-item-hover-or-border-color);cursor:pointer}.home-card .home-image{height:120px;margin-top:15px}.flex-table .flex-table-item{height:60px}.has-soft-text{font-size:0.8rem;color:var(--soft-text-color)}.no-underline-link{text-decoration:none !important}.title{margin-bottom:15px !important}.subtitle{margin-bottom:10px !important}.panel.is-secondary .panel-heading{background:#7f00ff;color:white}.loj-navbar{background:linear-gradient(45deg, rgba(19,100,195,0.478431), #1364c3)}.navbar{position:fixed;left:0;top:0;z-index:19;height:58px;width:100%}.footer-bg{background-image:url(/_nuxt/img/wavy-alt-dark.7a1b775.png)}.dropdown-menu div[role=list]{min-height:200px !important}div.centerme table{display:inline !important;text-align:left}.current-participant-row{border-color:#ff9800 !important}.vs--open .vs__dropdown-toggle{min-width:200px}p.centerme,pre.centerme,div.centerme{text-align:center}td.centerme{text-align:center !important}img[src*='centerme'],img.centerme{display:block;margin:0 auto}img.is-64x64{height:64px !important;width:64px !important}img.is-50x50{height:50px !important;width:50px !important}img[src*='leftme'],img.leftme{float:left}img[src*='bgwhite'],img.bgwhite{background-color:white !important}.rightme,img[src*='rightme'],img.rightme{float:right}img[src*='haveborder'],img.haveborder,div.haveborder,pre.haveborder,p.haveborder{border:1px solid var(--border-color);padding:8px}td>img[src*='haveborder']{padding:2px !important}div.haveborder,pre.haveborder,p.haveborder{margin:8px}img[src*='smallme']{max-width:200px;max-height:200px}img[src*='minime']{max-width:180px;max-height:180px}img[src*='mediumme']{max-width:300px;max-height:300px}.has-width-200-px{width:200px !important}.has-width-180-px{width:180px !important}.has-width-150-px{width:150px !important}.has-width-100-px{width:100px !important}.has-width-120-px{width:120px !important}.has-height-200px{height:200px}.has-max-height-200-px{max-height:200px !important}.has-max-height-500-px{max-height:500px !important}.has-editor-height-100-percent .CodeMirror{height:100% !important}.datepicker.has-height-36-px input{height:36px !important}.has-height-36-px{height:36px}.b-tooltip.is-multiline:after{z-index:10;width:120px !important}.has-shadow{box-shadow:0 0.5em 1em -0.125em rgba(10,10,10,0.1),0 0 0 1px rgba(10,10,10,0.02) !important}.has-hover-shadow:hover{box-shadow:0 0.5em 1em -0.125em rgba(10,10,10,0.1),0 0 0 1px rgba(10,10,10,0.02) !important}.margin-5px{margin:5px}.event-subtitle{margin-top:10px !important}.info-body{margin:5px 0px 0px 0px}.problem-solved-progress{margin-top:10px}.problem-solved-progress .progress-value{color:black !important}.fake-nav img{max-width:100% !important}.login-container{padding:60px !important;height:100% !important}.limit-section{margin:-5px 0 5px 0px}.problem-desc-main .tab-content{padding-left:0 !important;padding-right:0 !important}.problem-desc-main .tab-item div.card:first-of-type{margin-top:-30px}.stats-wrapper .stats-header .main-stats .stat-block p{font-size:2rem !important}.main-stats,.stat-nightingale-chart,.stat-histogram{margin-left:auto;margin-right:auto}.stat-donut-chart{margin-left:auto}.loading-verdict{font-size:0.8em}.recent-submission-table td{vertical-align:middle !important;text-align:center !important}.is-right-opened{width:50% !important}.table_wrapper{overflow-x:auto}.hide-table-header thead{display:none}.settings-wrapper .tab-content{padding:0 !important}.settings-wrapper .settings-section.is-active{max-width:720px !important}.notification-menu{margin:8px 0px 0px 10px;padding-right:10px}.notification-count{position:absolute;top:-12px;right:-10px;padding:2px 8px;border-radius:50%;background-color:red;color:white}.notification-list{max-height:60vh;overflow-y:scroll}.notification-item{display:flex;flex-direction:row;justify-content:space-between}.dataset-container{white-space:pre-wrap !important}.markdown-body{color:unset !important}.markdown-body div.centerme{margin-bottom:15px !important}.markdown-body ul{list-style-type:disc !important}details>summary:focus{outline:none}.post-text .markdown-body{font-size:0.9em !important;font-family:unset !important}.monaco-editor,.CodeMirror,.dataset-container,.code-viewer{font-family:Menlo, Monaco, 'Lucida Console', "Courier New", monospace !important}.dataset-container,.code-viewer,.font-size-13px{font-size:13px !important}.font-size-12px{font-size:12px !important}.font-size-14px{font-size:14px !important}.font-size-15px{font-size:15px !important}.font-size-16px{font-size:16px !important}.code-viewer.p-0 .CodeMirror{padding:0 !important}.code-viewer.borderless .CodeMirror{border:none !important}.CodeMirror-fullscreen,.editor-toolbar.fullscreen,.editor-preview-side,.editor-toolbar.fullscreen::before,.editor-toolbar.fullscreen::after{z-index:9 !important;margin-top:58px !important}.code-viewer{height:100%}.vue-simplemde.code-viewer .CodeMirror:not(.CodeMirror-fullscreen){height:300px !important}.vue-simplemde.code-viewer .CodeMirror-fullscreen{height:calc(100vh - 100px) !important}:not(.vue-simplemde).code-viewer .CodeMirror-scroll{height:100%;max-width:100%}.editor-option-item{display:flex;padding:5px 5px !important}.editor-option-item .right-field{margin-left:auto;margin-right:0px}.editor-option-item .left-field{margin-left:5px;margin-top:3px;font-weight:500}.category-title-box{display:flex;justify-content:space-between;flex-direction:column}.categories-tile-grid{border-bottom:1px solid #dedede}.category-title-box h3{height:30px}.problem-detail .title{display:flex}.problem-detail .tags .tag{border:1px solid #ddd !important}.strongtag .tag{margin-right:5px;font-weight:bold}.avatar-icon{margin:-15px 0 0 25px;position:absolute;z-index:10000}.avatar-icon:hover{box-shadow:0 0 11px rgba(33,33,33,0.2)}.avatar-image{object-fit:cover}.avatar-wrap .avatar{width:inherit;height:inherit}.g-recaptcha{transform:scale(0.77);transform-origin:0 0}.problem-list-heading{display:flex !important;justify-content:flex-end !important;border-bottom:1px solid var(--border-color)}.auth-middle-border{margin-bottom:5px;display:flex;justify-content:center}.auth-middle-border .bar{border-bottom:thin solid gray;width:100%;margin:0px 3px 10px 3px}.auth-middle-border span{text-align:center}.tag:not(body).is-purple.is-light{background-color:#f6ecfe;color:#b00fcc}.is-account .dropdown-content{all:revert !important}.is-lang-dropdown .dropdown-menu{width:600px !important;z-index:1001 !important;margin-top:4px;margin-left:3px}.is-lang-dropdown .dropdown-menu .dropdown-content{padding-left:25px !important}.is-lang-dropdown .dropdown-menu .is-lang-closeable{position:absolute;top:1px;right:1px;z-index:9}.is-button{height:36px !important;border-radius:4px !important}.is-button:hover{border-color:#b5b5b5 !important}.is-button:focus{border-color:#5596e6 !important}.devicon{font-size:1.4rem !important}.navbar-item .nav-drop{margin-top:10px}.nav-drop-body{max-height:480px !important}.nav-drop-header{padding-left:0 !important}.nav-drop-header .media .media-left img,.nav-drop-header .media .media-left .avatar-image{height:35px !important;width:35px !important}.nav-drop-header .icon{font-size:1rem !important}.nav-drop-header a{display:block !important;width:200px !important;text-transform:unset !important}.nav-drop-header a h3{color:#393a4f !important;font-size:0.8rem !important;font-weight:500 !important}.nav-drop-header a small{color:#757a91 !important;font-size:0.75rem !important}.table.has-sticky-column th,.b-table .table-wrapper.has-sticky-header tr:first-child th,.b-table .table td.is-sticky{background-color:var(--table-bg-color) !important}.custom-input-box{width:100%;border-top:1px solid #d9deea;border-right:1px solid #d9deea;padding-top:15px;padding-left:15px;padding-right:15px;padding-bottom:10px;min-height:240px;background:white;overflow-y:scroll}.editor-footer-buttons{height:65px;width:100%;padding:10px}@media (min-width: 1240px){.problem-page{display:flex;padding:0 0 20px 0;position:fixed;top:57px;height:100%;width:100%;overflow:hidden}.desc-language-select{margin-top:-10px !important;margin-left:-16px !important}.problem-detail{overflow-x:hidden;overflow-y:auto;height:auto;flex:1 auto;padding-top:2%;padding-left:10px;padding-bottom:2px;padding-right:0;scrollbar-width:thin;scrollbar-color:#d3d3d3 #f8f8f8}.problem-page .left{width:55%;-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box;display:flex;flex-direction:column;height:auto}.resize-bar{-webkit-transition:background-color 0.5s ease;transition:background-color 0.5s ease;width:10px;z-index:10;cursor:col-resize;flex:0 0 10px;margin-top:-5px}.resize-bar .resize-bar-icon{margin-top:48vh;margin-left:-7px;position:absolute;opacity:0.5}.resize-bar .collapse-button-right,.resize-bar .collapse-button-left{top:calc(50vh - 35px);display:none;position:absolute;opacity:0.6}.resize-bar .collapse-button-right:hover,.resize-bar .collapse-button-left:hover{opacity:0.8}.resize-bar .collapse-button-left{margin-left:-36px;border-top-left-radius:50px;border-bottom-left-radius:50px}.resize-bar .collapse-button-right{margin-left:10px;border-top-right-radius:50px;border-bottom-right-radius:50px}.resize-bar:hover{background-color:#d9d9d9}.resize-bar:hover .collapse-button-right,.resize-bar:hover .collapse-button-left{display:inline}.make-sidebar-full-height{height:100vh}.problem-page .right{flex:1;-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box;position:relative;flex-direction:column;padding-left:0;padding-bottom:2%}.editor-footer{position:absolute;bottom:31px !important;width:100%;z-index:10}.sidebar-code-editor .cm-editor-wrapper{height:calc(100vh - 450px) !important;min-height:350px}.sidebar-code-editor .is-lang-dropdown .dropdown-content{max-height:calc(100vh - 550px) !important;min-height:250px}}@media (max-width: 1240px){.problem-page{flex:1;flex-direction:column;padding:20px 10px 20px 0;width:100%;overflow:hidden;margin:58px 10px 0 10px}.stat-donut-chart{margin-left:0px}.limit-section{margin-top:5px}.problem-page .left{display:block;width:100% !important;padding-right:1%}.problem-page .right{display:block;width:100% !important;padding-right:1%}.resize-bar{display:none}.editor-header{justify-content:space-between !important}.editor-header .editor-header-left-section{display:flex;flex-direction:row}.editor-footer-buttons .button,.editor-header .button{padding-left:15px;padding-right:15px}.has-width-180-px{width:120px !important}.has-width-200-px{width:150px !important}.has-width-100-px{width:80px !important}.button{font-size:.65rem}.mdi-24px.mdi:before{font-size:18px !important}.icon{height:.9rem;width:.9rem}.m-4{margin:0 !important}}#institution-select .vs__dropdown-toggle{padding:2px 0 8px !important}#country-select{width:100%}#country-select select{width:calc(100% - 10px)}.padding-top-100{padding-top:100px !important}.margin-top-50{margin-top:50px}.has-full-width{width:100% !important}.is-full-width{width:100%}.is-full-height{height:100%}.has-scroll-x{overflow-x:scroll !important}.has-scroll-y{overflow-y:scroll !important}.margin-left-auto{margin-left:auto}.problem-filters{display:flex}.problem-filters div{margin-left:5px}.contest-arena .sidebar-title,.contest-arena .contest-title{font-family:'Montserrat', sans-serif;font-weight:700;font-size:1.5rem;color:#393a4f}.contest-arena .contest-problem-title{display:flex;justify-content:space-between}.contest-arena .problem-description{margin:0px 5px 50px 5px}.contest-arena .CodeMirror{height:500px}.contest-arena .code-submission-buttons{margin-top:-1.2rem}.contest-arena .arena-dynamic-section{display:flex}.contest-arena .arena-middle-section{width:100%}.contest-arena .right-sidebar{right:0;width:20vw !important;position:fixed}.contest-banner img{height:380px !important;width:100%;object-fit:fill !important}.width-100{width:100%}.is-featured-contest{background-color:var(--featured-contest-bg-color) !important}.loader{color:#5a57e5;font-size:20px;margin:100px auto;width:1em;height:1em;border-radius:50%;position:relative;text-indent:-9999em;-webkit-animation:load4 1.3s infinite linear;animation:load4 1.3s infinite linear;-webkit-transform:translateZ(0);-ms-transform:translateZ(0);transform:translateZ(0)}@-webkit-keyframes load4{0%,100%{box-shadow:0 -3em 0 0.2em, 2em -2em 0 0em, 3em 0 0 -1em, 2em 2em 0 -1em, 0 3em 0 -1em, -2em 2em 0 -1em, -3em 0 0 -1em, -2em -2em 0 0}12.5%{box-shadow:0 -3em 0 0, 2em -2em 0 0.2em, 3em 0 0 0, 2em 2em 0 -1em, 0 3em 0 -1em, -2em 2em 0 -1em, -3em 0 0 -1em, -2em -2em 0 -1em}25%{box-shadow:0 -3em 0 -0.5em, 2em -2em 0 0, 3em 0 0 0.2em, 2em 2em 0 0, 0 3em 0 -1em, -2em 2em 0 -1em, -3em 0 0 -1em, -2em -2em 0 -1em}37.5%{box-shadow:0 -3em 0 -1em, 2em -2em 0 -1em, 3em 0em 0 0, 2em 2em 0 0.2em, 0 3em 0 0em, -2em 2em 0 -1em, -3em 0em 0 -1em, -2em -2em 0 -1em}50%{box-shadow:0 -3em 0 -1em, 2em -2em 0 -1em, 3em 0 0 -1em, 2em 2em 0 0em, 0 3em 0 0.2em, -2em 2em 0 0, -3em 0em 0 -1em, -2em -2em 0 -1em}62.5%{box-shadow:0 -3em 0 -1em, 2em -2em 0 -1em, 3em 0 0 -1em, 2em 2em 0 -1em, 0 3em 0 0, -2em 2em 0 0.2em, -3em 0 0 0, -2em -2em 0 -1em}75%{box-shadow:0em -3em 0 -1em, 2em -2em 0 -1em, 3em 0em 0 -1em, 2em 2em 0 -1em, 0 3em 0 -1em, -2em 2em 0 0, -3em 0em 0 0.2em, -2em -2em 0 0}87.5%{box-shadow:0em -3em 0 0, 2em -2em 0 -1em, 3em 0 0 -1em, 2em 2em 0 -1em, 0 3em 0 -1em, -2em 2em 0 0, -3em 0em 0 0, -2em -2em 0 0.2em}}@keyframes load4{0%,100%{box-shadow:0 -3em 0 0.2em, 2em -2em 0 0em, 3em 0 0 -1em, 2em 2em 0 -1em, 0 3em 0 -1em, -2em 2em 0 -1em, -3em 0 0 -1em, -2em -2em 0 0}12.5%{box-shadow:0 -3em 0 0, 2em -2em 0 0.2em, 3em 0 0 0, 2em 2em 0 -1em, 0 3em 0 -1em, -2em 2em 0 -1em, -3em 0 0 -1em, -2em -2em 0 -1em}25%{box-shadow:0 -3em 0 -0.5em, 2em -2em 0 0, 3em 0 0 0.2em, 2em 2em 0 0, 0 3em 0 -1em, -2em 2em 0 -1em, -3em 0 0 -1em, -2em -2em 0 -1em}37.5%{box-shadow:0 -3em 0 -1em, 2em -2em 0 -1em, 3em 0em 0 0, 2em 2em 0 0.2em, 0 3em 0 0em, -2em 2em 0 -1em, -3em 0em 0 -1em, -2em -2em 0 -1em}50%{box-shadow:0 -3em 0 -1em, 2em -2em 0 -1em, 3em 0 0 -1em, 2em 2em 0 0em, 0 3em 0 0.2em, -2em 2em 0 0, -3em 0em 0 -1em, -2em -2em 0 -1em}62.5%{box-shadow:0 -3em 0 -1em, 2em -2em 0 -1em, 3em 0 0 -1em, 2em 2em 0 -1em, 0 3em 0 0, -2em 2em 0 0.2em, -3em 0 0 0, -2em -2em 0 -1em}75%{box-shadow:0em -3em 0 -1em, 2em -2em 0 -1em, 3em 0em 0 -1em, 2em 2em 0 -1em, 0 3em 0 -1em, -2em 2em 0 0, -3em 0em 0 0.2em, -2em -2em 0 0}87.5%{box-shadow:0em -3em 0 0, 2em -2em 0 -1em, 3em 0 0 -1em, 2em 2em 0 -1em, 0 3em 0 -1em, -2em 2em 0 0, -3em 0em 0 0, -2em -2em 0 0.2em}}

/* MaterialDesignIcons.com */
@font-face {
  font-family: "Material Design Icons";
  src: url(/_nuxt/fonts/materialdesignicons-webfont.de316c4.eot);
  src: url(/_nuxt/fonts/materialdesignicons-webfont.de316c4.eot?#iefix&v=6.9.96) format("embedded-opentype"), url(/_nuxt/fonts/materialdesignicons-webfont.d5cba82.woff2) format("woff2"), url(/_nuxt/fonts/materialdesignicons-webfont.059ea00.woff) format("woff"), url(/_nuxt/fonts/materialdesignicons-webfont.ac55aef.ttf) format("truetype");
  font-weight: normal;
  font-style: normal;
}

.mdi:before,
.mdi-set {
  display: inline-block;
  font: normal normal normal 24px/1 "Material Design Icons";
  font-size: inherit;
  text-rendering: auto;
  line-height: inherit;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
}

.mdi-ab-testing::before {
  content: "\F01C9";
}

.mdi-abacus::before {
  content: "\F16E0";
}

.mdi-abjad-arabic::before {
  content: "\F1328";
}

.mdi-abjad-hebrew::before {
  content: "\F1329";
}

.mdi-abugida-devanagari::before {
  content: "\F132A";
}

.mdi-abugida-thai::before {
  content: "\F132B";
}

.mdi-access-point::before {
  content: "\F0003";
}

.mdi-access-point-check::before {
  content: "\F1538";
}

.mdi-access-point-minus::before {
  content: "\F1539";
}

.mdi-access-point-network::before {
  content: "\F0002";
}

.mdi-access-point-network-off::before {
  content: "\F0BE1";
}

.mdi-access-point-off::before {
  content: "\F1511";
}

.mdi-access-point-plus::before {
  content: "\F153A";
}

.mdi-access-point-remove::before {
  content: "\F153B";
}

.mdi-account::before {
  content: "\F0004";
}

.mdi-account-alert::before {
  content: "\F0005";
}

.mdi-account-alert-outline::before {
  content: "\F0B50";
}

.mdi-account-arrow-down::before {
  content: "\F1868";
}

.mdi-account-arrow-down-outline::before {
  content: "\F1869";
}

.mdi-account-arrow-left::before {
  content: "\F0B51";
}

.mdi-account-arrow-left-outline::before {
  content: "\F0B52";
}

.mdi-account-arrow-right::before {
  content: "\F0B53";
}

.mdi-account-arrow-right-outline::before {
  content: "\F0B54";
}

.mdi-account-arrow-up::before {
  content: "\F1867";
}

.mdi-account-arrow-up-outline::before {
  content: "\F186A";
}

.mdi-account-badge::before {
  content: "\F1B0A";
}

.mdi-account-badge-outline::before {
  content: "\F1B0B";
}

.mdi-account-box::before {
  content: "\F0006";
}

.mdi-account-box-multiple::before {
  content: "\F0934";
}

.mdi-account-box-multiple-outline::before {
  content: "\F100A";
}

.mdi-account-box-outline::before {
  content: "\F0007";
}

.mdi-account-cancel::before {
  content: "\F12DF";
}

.mdi-account-cancel-outline::before {
  content: "\F12E0";
}

.mdi-account-cash::before {
  content: "\F1097";
}

.mdi-account-cash-outline::before {
  content: "\F1098";
}

.mdi-account-check::before {
  content: "\F0008";
}

.mdi-account-check-outline::before {
  content: "\F0BE2";
}

.mdi-account-child::before {
  content: "\F0A89";
}

.mdi-account-child-circle::before {
  content: "\F0A8A";
}

.mdi-account-child-outline::before {
  content: "\F10C8";
}

.mdi-account-circle::before {
  content: "\F0009";
}

.mdi-account-circle-outline::before {
  content: "\F0B55";
}

.mdi-account-clock::before {
  content: "\F0B56";
}

.mdi-account-clock-outline::before {
  content: "\F0B57";
}

.mdi-account-cog::before {
  content: "\F1370";
}

.mdi-account-cog-outline::before {
  content: "\F1371";
}

.mdi-account-convert::before {
  content: "\F000A";
}

.mdi-account-convert-outline::before {
  content: "\F1301";
}

.mdi-account-cowboy-hat::before {
  content: "\F0E9B";
}

.mdi-account-cowboy-hat-outline::before {
  content: "\F17F3";
}

.mdi-account-details::before {
  content: "\F0631";
}

.mdi-account-details-outline::before {
  content: "\F1372";
}

.mdi-account-edit::before {
  content: "\F06BC";
}

.mdi-account-edit-outline::before {
  content: "\F0FFB";
}

.mdi-account-eye::before {
  content: "\F0420";
}

.mdi-account-eye-outline::before {
  content: "\F127B";
}

.mdi-account-filter::before {
  content: "\F0936";
}

.mdi-account-filter-outline::before {
  content: "\F0F9D";
}

.mdi-account-group::before {
  content: "\F0849";
}

.mdi-account-group-outline::before {
  content: "\F0B58";
}

.mdi-account-hard-hat::before {
  content: "\F05B5";
}

.mdi-account-hard-hat-outline::before {
  content: "\F1A1F";
}

.mdi-account-heart::before {
  content: "\F0899";
}

.mdi-account-heart-outline::before {
  content: "\F0BE3";
}

.mdi-account-injury::before {
  content: "\F1815";
}

.mdi-account-injury-outline::before {
  content: "\F1816";
}

.mdi-account-key::before {
  content: "\F000B";
}

.mdi-account-key-outline::before {
  content: "\F0BE4";
}

.mdi-account-lock::before {
  content: "\F115E";
}

.mdi-account-lock-open::before {
  content: "\F1960";
}

.mdi-account-lock-open-outline::before {
  content: "\F1961";
}

.mdi-account-lock-outline::before {
  content: "\F115F";
}

.mdi-account-minus::before {
  content: "\F000D";
}

.mdi-account-minus-outline::before {
  content: "\F0AEC";
}

.mdi-account-multiple::before {
  content: "\F000E";
}

.mdi-account-multiple-check::before {
  content: "\F08C5";
}

.mdi-account-multiple-check-outline::before {
  content: "\F11FE";
}

.mdi-account-multiple-minus::before {
  content: "\F05D3";
}

.mdi-account-multiple-minus-outline::before {
  content: "\F0BE5";
}

.mdi-account-multiple-outline::before {
  content: "\F000F";
}

.mdi-account-multiple-plus::before {
  content: "\F0010";
}

.mdi-account-multiple-plus-outline::before {
  content: "\F0800";
}

.mdi-account-multiple-remove::before {
  content: "\F120A";
}

.mdi-account-multiple-remove-outline::before {
  content: "\F120B";
}

.mdi-account-music::before {
  content: "\F0803";
}

.mdi-account-music-outline::before {
  content: "\F0CE9";
}

.mdi-account-network::before {
  content: "\F0011";
}

.mdi-account-network-off::before {
  content: "\F1AF1";
}

.mdi-account-network-off-outline::before {
  content: "\F1AF2";
}

.mdi-account-network-outline::before {
  content: "\F0BE6";
}

.mdi-account-off::before {
  content: "\F0012";
}

.mdi-account-off-outline::before {
  content: "\F0BE7";
}

.mdi-account-outline::before {
  content: "\F0013";
}

.mdi-account-plus::before {
  content: "\F0014";
}

.mdi-account-plus-outline::before {
  content: "\F0801";
}

.mdi-account-question::before {
  content: "\F0B59";
}

.mdi-account-question-outline::before {
  content: "\F0B5A";
}

.mdi-account-reactivate::before {
  content: "\F152B";
}

.mdi-account-reactivate-outline::before {
  content: "\F152C";
}

.mdi-account-remove::before {
  content: "\F0015";
}

.mdi-account-remove-outline::before {
  content: "\F0AED";
}

.mdi-account-school::before {
  content: "\F1A20";
}

.mdi-account-school-outline::before {
  content: "\F1A21";
}

.mdi-account-search::before {
  content: "\F0016";
}

.mdi-account-search-outline::before {
  content: "\F0935";
}

.mdi-account-settings::before {
  content: "\F0630";
}

.mdi-account-settings-outline::before {
  content: "\F10C9";
}

.mdi-account-star::before {
  content: "\F0017";
}

.mdi-account-star-outline::before {
  content: "\F0BE8";
}

.mdi-account-supervisor::before {
  content: "\F0A8B";
}

.mdi-account-supervisor-circle::before {
  content: "\F0A8C";
}

.mdi-account-supervisor-circle-outline::before {
  content: "\F14EC";
}

.mdi-account-supervisor-outline::before {
  content: "\F112D";
}

.mdi-account-switch::before {
  content: "\F0019";
}

.mdi-account-switch-outline::before {
  content: "\F04CB";
}

.mdi-account-sync::before {
  content: "\F191B";
}

.mdi-account-sync-outline::before {
  content: "\F191C";
}

.mdi-account-tie::before {
  content: "\F0CE3";
}

.mdi-account-tie-hat::before {
  content: "\F1898";
}

.mdi-account-tie-hat-outline::before {
  content: "\F1899";
}

.mdi-account-tie-outline::before {
  content: "\F10CA";
}

.mdi-account-tie-voice::before {
  content: "\F1308";
}

.mdi-account-tie-voice-off::before {
  content: "\F130A";
}

.mdi-account-tie-voice-off-outline::before {
  content: "\F130B";
}

.mdi-account-tie-voice-outline::before {
  content: "\F1309";
}

.mdi-account-tie-woman::before {
  content: "\F1A8C";
}

.mdi-account-voice::before {
  content: "\F05CB";
}

.mdi-account-voice-off::before {
  content: "\F0ED4";
}

.mdi-account-wrench::before {
  content: "\F189A";
}

.mdi-account-wrench-outline::before {
  content: "\F189B";
}

.mdi-adjust::before {
  content: "\F001A";
}

.mdi-advertisements::before {
  content: "\F192A";
}

.mdi-advertisements-off::before {
  content: "\F192B";
}

.mdi-air-conditioner::before {
  content: "\F001B";
}

.mdi-air-filter::before {
  content: "\F0D43";
}

.mdi-air-horn::before {
  content: "\F0DAC";
}

.mdi-air-humidifier::before {
  content: "\F1099";
}

.mdi-air-humidifier-off::before {
  content: "\F1466";
}

.mdi-air-purifier::before {
  content: "\F0D44";
}

.mdi-airbag::before {
  content: "\F0BE9";
}

.mdi-airballoon::before {
  content: "\F001C";
}

.mdi-airballoon-outline::before {
  content: "\F100B";
}

.mdi-airplane::before {
  content: "\F001D";
}

.mdi-airplane-alert::before {
  content: "\F187A";
}

.mdi-airplane-check::before {
  content: "\F187B";
}

.mdi-airplane-clock::before {
  content: "\F187C";
}

.mdi-airplane-cog::before {
  content: "\F187D";
}

.mdi-airplane-edit::before {
  content: "\F187E";
}

.mdi-airplane-landing::before {
  content: "\F05D4";
}

.mdi-airplane-marker::before {
  content: "\F187F";
}

.mdi-airplane-minus::before {
  content: "\F1880";
}

.mdi-airplane-off::before {
  content: "\F001E";
}

.mdi-airplane-plus::before {
  content: "\F1881";
}

.mdi-airplane-remove::before {
  content: "\F1882";
}

.mdi-airplane-search::before {
  content: "\F1883";
}

.mdi-airplane-settings::before {
  content: "\F1884";
}

.mdi-airplane-takeoff::before {
  content: "\F05D5";
}

.mdi-airport::before {
  content: "\F084B";
}

.mdi-alarm::before {
  content: "\F0020";
}

.mdi-alarm-bell::before {
  content: "\F078E";
}

.mdi-alarm-check::before {
  content: "\F0021";
}

.mdi-alarm-light::before {
  content: "\F078F";
}

.mdi-alarm-light-off::before {
  content: "\F171E";
}

.mdi-alarm-light-off-outline::before {
  content: "\F171F";
}

.mdi-alarm-light-outline::before {
  content: "\F0BEA";
}

.mdi-alarm-multiple::before {
  content: "\F0022";
}

.mdi-alarm-note::before {
  content: "\F0E71";
}

.mdi-alarm-note-off::before {
  content: "\F0E72";
}

.mdi-alarm-off::before {
  content: "\F0023";
}

.mdi-alarm-panel::before {
  content: "\F15C4";
}

.mdi-alarm-panel-outline::before {
  content: "\F15C5";
}

.mdi-alarm-plus::before {
  content: "\F0024";
}

.mdi-alarm-snooze::before {
  content: "\F068E";
}

.mdi-album::before {
  content: "\F0025";
}

.mdi-alert::before {
  content: "\F0026";
}

.mdi-alert-box::before {
  content: "\F0027";
}

.mdi-alert-box-outline::before {
  content: "\F0CE4";
}

.mdi-alert-circle::before {
  content: "\F0028";
}

.mdi-alert-circle-check::before {
  content: "\F11ED";
}

.mdi-alert-circle-check-outline::before {
  content: "\F11EE";
}

.mdi-alert-circle-outline::before {
  content: "\F05D6";
}

.mdi-alert-decagram::before {
  content: "\F06BD";
}

.mdi-alert-decagram-outline::before {
  content: "\F0CE5";
}

.mdi-alert-minus::before {
  content: "\F14BB";
}

.mdi-alert-minus-outline::before {
  content: "\F14BE";
}

.mdi-alert-octagon::before {
  content: "\F0029";
}

.mdi-alert-octagon-outline::before {
  content: "\F0CE6";
}

.mdi-alert-octagram::before {
  content: "\F0767";
}

.mdi-alert-octagram-outline::before {
  content: "\F0CE7";
}

.mdi-alert-outline::before {
  content: "\F002A";
}

.mdi-alert-plus::before {
  content: "\F14BA";
}

.mdi-alert-plus-outline::before {
  content: "\F14BD";
}

.mdi-alert-remove::before {
  content: "\F14BC";
}

.mdi-alert-remove-outline::before {
  content: "\F14BF";
}

.mdi-alert-rhombus::before {
  content: "\F11CE";
}

.mdi-alert-rhombus-outline::before {
  content: "\F11CF";
}

.mdi-alien::before {
  content: "\F089A";
}

.mdi-alien-outline::before {
  content: "\F10CB";
}

.mdi-align-horizontal-center::before {
  content: "\F11C3";
}

.mdi-align-horizontal-distribute::before {
  content: "\F1962";
}

.mdi-align-horizontal-left::before {
  content: "\F11C2";
}

.mdi-align-horizontal-right::before {
  content: "\F11C4";
}

.mdi-align-vertical-bottom::before {
  content: "\F11C5";
}

.mdi-align-vertical-center::before {
  content: "\F11C6";
}

.mdi-align-vertical-distribute::before {
  content: "\F1963";
}

.mdi-align-vertical-top::before {
  content: "\F11C7";
}

.mdi-all-inclusive::before {
  content: "\F06BE";
}

.mdi-all-inclusive-box::before {
  content: "\F188D";
}

.mdi-all-inclusive-box-outline::before {
  content: "\F188E";
}

.mdi-allergy::before {
  content: "\F1258";
}

.mdi-alpha::before {
  content: "\F002B";
}

.mdi-alpha-a::before {
  content: "\F0AEE";
}

.mdi-alpha-a-box::before {
  content: "\F0B08";
}

.mdi-alpha-a-box-outline::before {
  content: "\F0BEB";
}

.mdi-alpha-a-circle::before {
  content: "\F0BEC";
}

.mdi-alpha-a-circle-outline::before {
  content: "\F0BED";
}

.mdi-alpha-b::before {
  content: "\F0AEF";
}

.mdi-alpha-b-box::before {
  content: "\F0B09";
}

.mdi-alpha-b-box-outline::before {
  content: "\F0BEE";
}

.mdi-alpha-b-circle::before {
  content: "\F0BEF";
}

.mdi-alpha-b-circle-outline::before {
  content: "\F0BF0";
}

.mdi-alpha-c::before {
  content: "\F0AF0";
}

.mdi-alpha-c-box::before {
  content: "\F0B0A";
}

.mdi-alpha-c-box-outline::before {
  content: "\F0BF1";
}

.mdi-alpha-c-circle::before {
  content: "\F0BF2";
}

.mdi-alpha-c-circle-outline::before {
  content: "\F0BF3";
}

.mdi-alpha-d::before {
  content: "\F0AF1";
}

.mdi-alpha-d-box::before {
  content: "\F0B0B";
}

.mdi-alpha-d-box-outline::before {
  content: "\F0BF4";
}

.mdi-alpha-d-circle::before {
  content: "\F0BF5";
}

.mdi-alpha-d-circle-outline::before {
  content: "\F0BF6";
}

.mdi-alpha-e::before {
  content: "\F0AF2";
}

.mdi-alpha-e-box::before {
  content: "\F0B0C";
}

.mdi-alpha-e-box-outline::before {
  content: "\F0BF7";
}

.mdi-alpha-e-circle::before {
  content: "\F0BF8";
}

.mdi-alpha-e-circle-outline::before {
  content: "\F0BF9";
}

.mdi-alpha-f::before {
  content: "\F0AF3";
}

.mdi-alpha-f-box::before {
  content: "\F0B0D";
}

.mdi-alpha-f-box-outline::before {
  content: "\F0BFA";
}

.mdi-alpha-f-circle::before {
  content: "\F0BFB";
}

.mdi-alpha-f-circle-outline::before {
  content: "\F0BFC";
}

.mdi-alpha-g::before {
  content: "\F0AF4";
}

.mdi-alpha-g-box::before {
  content: "\F0B0E";
}

.mdi-alpha-g-box-outline::before {
  content: "\F0BFD";
}

.mdi-alpha-g-circle::before {
  content: "\F0BFE";
}

.mdi-alpha-g-circle-outline::before {
  content: "\F0BFF";
}

.mdi-alpha-h::before {
  content: "\F0AF5";
}

.mdi-alpha-h-box::before {
  content: "\F0B0F";
}

.mdi-alpha-h-box-outline::before {
  content: "\F0C00";
}

.mdi-alpha-h-circle::before {
  content: "\F0C01";
}

.mdi-alpha-h-circle-outline::before {
  content: "\F0C02";
}

.mdi-alpha-i::before {
  content: "\F0AF6";
}

.mdi-alpha-i-box::before {
  content: "\F0B10";
}

.mdi-alpha-i-box-outline::before {
  content: "\F0C03";
}

.mdi-alpha-i-circle::before {
  content: "\F0C04";
}

.mdi-alpha-i-circle-outline::before {
  content: "\F0C05";
}

.mdi-alpha-j::before {
  content: "\F0AF7";
}

.mdi-alpha-j-box::before {
  content: "\F0B11";
}

.mdi-alpha-j-box-outline::before {
  content: "\F0C06";
}

.mdi-alpha-j-circle::before {
  content: "\F0C07";
}

.mdi-alpha-j-circle-outline::before {
  content: "\F0C08";
}

.mdi-alpha-k::before {
  content: "\F0AF8";
}

.mdi-alpha-k-box::before {
  content: "\F0B12";
}

.mdi-alpha-k-box-outline::before {
  content: "\F0C09";
}

.mdi-alpha-k-circle::before {
  content: "\F0C0A";
}

.mdi-alpha-k-circle-outline::before {
  content: "\F0C0B";
}

.mdi-alpha-l::before {
  content: "\F0AF9";
}

.mdi-alpha-l-box::before {
  content: "\F0B13";
}

.mdi-alpha-l-box-outline::before {
  content: "\F0C0C";
}

.mdi-alpha-l-circle::before {
  content: "\F0C0D";
}

.mdi-alpha-l-circle-outline::before {
  content: "\F0C0E";
}

.mdi-alpha-m::before {
  content: "\F0AFA";
}

.mdi-alpha-m-box::before {
  content: "\F0B14";
}

.mdi-alpha-m-box-outline::before {
  content: "\F0C0F";
}

.mdi-alpha-m-circle::before {
  content: "\F0C10";
}

.mdi-alpha-m-circle-outline::before {
  content: "\F0C11";
}

.mdi-alpha-n::before {
  content: "\F0AFB";
}

.mdi-alpha-n-box::before {
  content: "\F0B15";
}

.mdi-alpha-n-box-outline::before {
  content: "\F0C12";
}

.mdi-alpha-n-circle::before {
  content: "\F0C13";
}

.mdi-alpha-n-circle-outline::before {
  content: "\F0C14";
}

.mdi-alpha-o::before {
  content: "\F0AFC";
}

.mdi-alpha-o-box::before {
  content: "\F0B16";
}

.mdi-alpha-o-box-outline::before {
  content: "\F0C15";
}

.mdi-alpha-o-circle::before {
  content: "\F0C16";
}

.mdi-alpha-o-circle-outline::before {
  content: "\F0C17";
}

.mdi-alpha-p::before {
  content: "\F0AFD";
}

.mdi-alpha-p-box::before {
  content: "\F0B17";
}

.mdi-alpha-p-box-outline::before {
  content: "\F0C18";
}

.mdi-alpha-p-circle::before {
  content: "\F0C19";
}

.mdi-alpha-p-circle-outline::before {
  content: "\F0C1A";
}

.mdi-alpha-q::before {
  content: "\F0AFE";
}

.mdi-alpha-q-box::before {
  content: "\F0B18";
}

.mdi-alpha-q-box-outline::before {
  content: "\F0C1B";
}

.mdi-alpha-q-circle::before {
  content: "\F0C1C";
}

.mdi-alpha-q-circle-outline::before {
  content: "\F0C1D";
}

.mdi-alpha-r::before {
  content: "\F0AFF";
}

.mdi-alpha-r-box::before {
  content: "\F0B19";
}

.mdi-alpha-r-box-outline::before {
  content: "\F0C1E";
}

.mdi-alpha-r-circle::before {
  content: "\F0C1F";
}

.mdi-alpha-r-circle-outline::before {
  content: "\F0C20";
}

.mdi-alpha-s::before {
  content: "\F0B00";
}

.mdi-alpha-s-box::before {
  content: "\F0B1A";
}

.mdi-alpha-s-box-outline::before {
  content: "\F0C21";
}

.mdi-alpha-s-circle::before {
  content: "\F0C22";
}

.mdi-alpha-s-circle-outline::before {
  content: "\F0C23";
}

.mdi-alpha-t::before {
  content: "\F0B01";
}

.mdi-alpha-t-box::before {
  content: "\F0B1B";
}

.mdi-alpha-t-box-outline::before {
  content: "\F0C24";
}

.mdi-alpha-t-circle::before {
  content: "\F0C25";
}

.mdi-alpha-t-circle-outline::before {
  content: "\F0C26";
}

.mdi-alpha-u::before {
  content: "\F0B02";
}

.mdi-alpha-u-box::before {
  content: "\F0B1C";
}

.mdi-alpha-u-box-outline::before {
  content: "\F0C27";
}

.mdi-alpha-u-circle::before {
  content: "\F0C28";
}

.mdi-alpha-u-circle-outline::before {
  content: "\F0C29";
}

.mdi-alpha-v::before {
  content: "\F0B03";
}

.mdi-alpha-v-box::before {
  content: "\F0B1D";
}

.mdi-alpha-v-box-outline::before {
  content: "\F0C2A";
}

.mdi-alpha-v-circle::before {
  content: "\F0C2B";
}

.mdi-alpha-v-circle-outline::before {
  content: "\F0C2C";
}

.mdi-alpha-w::before {
  content: "\F0B04";
}

.mdi-alpha-w-box::before {
  content: "\F0B1E";
}

.mdi-alpha-w-box-outline::before {
  content: "\F0C2D";
}

.mdi-alpha-w-circle::before {
  content: "\F0C2E";
}

.mdi-alpha-w-circle-outline::before {
  content: "\F0C2F";
}

.mdi-alpha-x::before {
  content: "\F0B05";
}

.mdi-alpha-x-box::before {
  content: "\F0B1F";
}

.mdi-alpha-x-box-outline::before {
  content: "\F0C30";
}

.mdi-alpha-x-circle::before {
  content: "\F0C31";
}

.mdi-alpha-x-circle-outline::before {
  content: "\F0C32";
}

.mdi-alpha-y::before {
  content: "\F0B06";
}

.mdi-alpha-y-box::before {
  content: "\F0B20";
}

.mdi-alpha-y-box-outline::before {
  content: "\F0C33";
}

.mdi-alpha-y-circle::before {
  content: "\F0C34";
}

.mdi-alpha-y-circle-outline::before {
  content: "\F0C35";
}

.mdi-alpha-z::before {
  content: "\F0B07";
}

.mdi-alpha-z-box::before {
  content: "\F0B21";
}

.mdi-alpha-z-box-outline::before {
  content: "\F0C36";
}

.mdi-alpha-z-circle::before {
  content: "\F0C37";
}

.mdi-alpha-z-circle-outline::before {
  content: "\F0C38";
}

.mdi-alphabet-aurebesh::before {
  content: "\F132C";
}

.mdi-alphabet-cyrillic::before {
  content: "\F132D";
}

.mdi-alphabet-greek::before {
  content: "\F132E";
}

.mdi-alphabet-latin::before {
  content: "\F132F";
}

.mdi-alphabet-piqad::before {
  content: "\F1330";
}

.mdi-alphabet-tengwar::before {
  content: "\F1337";
}

.mdi-alphabetical::before {
  content: "\F002C";
}

.mdi-alphabetical-off::before {
  content: "\F100C";
}

.mdi-alphabetical-variant::before {
  content: "\F100D";
}

.mdi-alphabetical-variant-off::before {
  content: "\F100E";
}

.mdi-altimeter::before {
  content: "\F05D7";
}

.mdi-ambulance::before {
  content: "\F002F";
}

.mdi-ammunition::before {
  content: "\F0CE8";
}

.mdi-ampersand::before {
  content: "\F0A8D";
}

.mdi-amplifier::before {
  content: "\F0030";
}

.mdi-amplifier-off::before {
  content: "\F11B5";
}

.mdi-anchor::before {
  content: "\F0031";
}

.mdi-android::before {
  content: "\F0032";
}

.mdi-android-messages::before {
  content: "\F0D45";
}

.mdi-android-studio::before {
  content: "\F0034";
}

.mdi-angle-acute::before {
  content: "\F0937";
}

.mdi-angle-obtuse::before {
  content: "\F0938";
}

.mdi-angle-right::before {
  content: "\F0939";
}

.mdi-angular::before {
  content: "\F06B2";
}

.mdi-angularjs::before {
  content: "\F06BF";
}

.mdi-animation::before {
  content: "\F05D8";
}

.mdi-animation-outline::before {
  content: "\F0A8F";
}

.mdi-animation-play::before {
  content: "\F093A";
}

.mdi-animation-play-outline::before {
  content: "\F0A90";
}

.mdi-ansible::before {
  content: "\F109A";
}

.mdi-antenna::before {
  content: "\F1119";
}

.mdi-anvil::before {
  content: "\F089B";
}

.mdi-apache-kafka::before {
  content: "\F100F";
}

.mdi-api::before {
  content: "\F109B";
}

.mdi-api-off::before {
  content: "\F1257";
}

.mdi-apple::before {
  content: "\F0035";
}

.mdi-apple-finder::before {
  content: "\F0036";
}

.mdi-apple-icloud::before {
  content: "\F0038";
}

.mdi-apple-ios::before {
  content: "\F0037";
}

.mdi-apple-keyboard-caps::before {
  content: "\F0632";
}

.mdi-apple-keyboard-command::before {
  content: "\F0633";
}

.mdi-apple-keyboard-control::before {
  content: "\F0634";
}

.mdi-apple-keyboard-option::before {
  content: "\F0635";
}

.mdi-apple-keyboard-shift::before {
  content: "\F0636";
}

.mdi-apple-safari::before {
  content: "\F0039";
}

.mdi-application::before {
  content: "\F08C6";
}

.mdi-application-array::before {
  content: "\F10F5";
}

.mdi-application-array-outline::before {
  content: "\F10F6";
}

.mdi-application-braces::before {
  content: "\F10F7";
}

.mdi-application-braces-outline::before {
  content: "\F10F8";
}

.mdi-application-brackets::before {
  content: "\F0C8B";
}

.mdi-application-brackets-outline::before {
  content: "\F0C8C";
}

.mdi-application-cog::before {
  content: "\F0675";
}

.mdi-application-cog-outline::before {
  content: "\F1577";
}

.mdi-application-edit::before {
  content: "\F00AE";
}

.mdi-application-edit-outline::before {
  content: "\F0619";
}

.mdi-application-export::before {
  content: "\F0DAD";
}

.mdi-application-import::before {
  content: "\F0DAE";
}

.mdi-application-outline::before {
  content: "\F0614";
}

.mdi-application-parentheses::before {
  content: "\F10F9";
}

.mdi-application-parentheses-outline::before {
  content: "\F10FA";
}

.mdi-application-settings::before {
  content: "\F0B60";
}

.mdi-application-settings-outline::before {
  content: "\F1555";
}

.mdi-application-variable::before {
  content: "\F10FB";
}

.mdi-application-variable-outline::before {
  content: "\F10FC";
}

.mdi-approximately-equal::before {
  content: "\F0F9E";
}

.mdi-approximately-equal-box::before {
  content: "\F0F9F";
}

.mdi-apps::before {
  content: "\F003B";
}

.mdi-apps-box::before {
  content: "\F0D46";
}

.mdi-arch::before {
  content: "\F08C7";
}

.mdi-archive::before {
  content: "\F003C";
}

.mdi-archive-alert::before {
  content: "\F14FD";
}

.mdi-archive-alert-outline::before {
  content: "\F14FE";
}

.mdi-archive-arrow-down::before {
  content: "\F1259";
}

.mdi-archive-arrow-down-outline::before {
  content: "\F125A";
}

.mdi-archive-arrow-up::before {
  content: "\F125B";
}

.mdi-archive-arrow-up-outline::before {
  content: "\F125C";
}

.mdi-archive-cancel::before {
  content: "\F174B";
}

.mdi-archive-cancel-outline::before {
  content: "\F174C";
}

.mdi-archive-check::before {
  content: "\F174D";
}

.mdi-archive-check-outline::before {
  content: "\F174E";
}

.mdi-archive-clock::before {
  content: "\F174F";
}

.mdi-archive-clock-outline::before {
  content: "\F1750";
}

.mdi-archive-cog::before {
  content: "\F1751";
}

.mdi-archive-cog-outline::before {
  content: "\F1752";
}

.mdi-archive-edit::before {
  content: "\F1753";
}

.mdi-archive-edit-outline::before {
  content: "\F1754";
}

.mdi-archive-eye::before {
  content: "\F1755";
}

.mdi-archive-eye-outline::before {
  content: "\F1756";
}

.mdi-archive-lock::before {
  content: "\F1757";
}

.mdi-archive-lock-open::before {
  content: "\F1758";
}

.mdi-archive-lock-open-outline::before {
  content: "\F1759";
}

.mdi-archive-lock-outline::before {
  content: "\F175A";
}

.mdi-archive-marker::before {
  content: "\F175B";
}

.mdi-archive-marker-outline::before {
  content: "\F175C";
}

.mdi-archive-minus::before {
  content: "\F175D";
}

.mdi-archive-minus-outline::before {
  content: "\F175E";
}

.mdi-archive-music::before {
  content: "\F175F";
}

.mdi-archive-music-outline::before {
  content: "\F1760";
}

.mdi-archive-off::before {
  content: "\F1761";
}

.mdi-archive-off-outline::before {
  content: "\F1762";
}

.mdi-archive-outline::before {
  content: "\F120E";
}

.mdi-archive-plus::before {
  content: "\F1763";
}

.mdi-archive-plus-outline::before {
  content: "\F1764";
}

.mdi-archive-refresh::before {
  content: "\F1765";
}

.mdi-archive-refresh-outline::before {
  content: "\F1766";
}

.mdi-archive-remove::before {
  content: "\F1767";
}

.mdi-archive-remove-outline::before {
  content: "\F1768";
}

.mdi-archive-search::before {
  content: "\F1769";
}

.mdi-archive-search-outline::before {
  content: "\F176A";
}

.mdi-archive-settings::before {
  content: "\F176B";
}

.mdi-archive-settings-outline::before {
  content: "\F176C";
}

.mdi-archive-star::before {
  content: "\F176D";
}

.mdi-archive-star-outline::before {
  content: "\F176E";
}

.mdi-archive-sync::before {
  content: "\F176F";
}

.mdi-archive-sync-outline::before {
  content: "\F1770";
}

.mdi-arm-flex::before {
  content: "\F0FD7";
}

.mdi-arm-flex-outline::before {
  content: "\F0FD6";
}

.mdi-arrange-bring-forward::before {
  content: "\F003D";
}

.mdi-arrange-bring-to-front::before {
  content: "\F003E";
}

.mdi-arrange-send-backward::before {
  content: "\F003F";
}

.mdi-arrange-send-to-back::before {
  content: "\F0040";
}

.mdi-arrow-all::before {
  content: "\F0041";
}

.mdi-arrow-bottom-left::before {
  content: "\F0042";
}

.mdi-arrow-bottom-left-bold-box::before {
  content: "\F1964";
}

.mdi-arrow-bottom-left-bold-box-outline::before {
  content: "\F1965";
}

.mdi-arrow-bottom-left-bold-outline::before {
  content: "\F09B7";
}

.mdi-arrow-bottom-left-thick::before {
  content: "\F09B8";
}

.mdi-arrow-bottom-left-thin::before {
  content: "\F19B6";
}

.mdi-arrow-bottom-left-thin-circle-outline::before {
  content: "\F1596";
}

.mdi-arrow-bottom-right::before {
  content: "\F0043";
}

.mdi-arrow-bottom-right-bold-box::before {
  content: "\F1966";
}

.mdi-arrow-bottom-right-bold-box-outline::before {
  content: "\F1967";
}

.mdi-arrow-bottom-right-bold-outline::before {
  content: "\F09B9";
}

.mdi-arrow-bottom-right-thick::before {
  content: "\F09BA";
}

.mdi-arrow-bottom-right-thin::before {
  content: "\F19B7";
}

.mdi-arrow-bottom-right-thin-circle-outline::before {
  content: "\F1595";
}

.mdi-arrow-collapse::before {
  content: "\F0615";
}

.mdi-arrow-collapse-all::before {
  content: "\F0044";
}

.mdi-arrow-collapse-down::before {
  content: "\F0792";
}

.mdi-arrow-collapse-horizontal::before {
  content: "\F084C";
}

.mdi-arrow-collapse-left::before {
  content: "\F0793";
}

.mdi-arrow-collapse-right::before {
  content: "\F0794";
}

.mdi-arrow-collapse-up::before {
  content: "\F0795";
}

.mdi-arrow-collapse-vertical::before {
  content: "\F084D";
}

.mdi-arrow-decision::before {
  content: "\F09BB";
}

.mdi-arrow-decision-auto::before {
  content: "\F09BC";
}

.mdi-arrow-decision-auto-outline::before {
  content: "\F09BD";
}

.mdi-arrow-decision-outline::before {
  content: "\F09BE";
}

.mdi-arrow-down::before {
  content: "\F0045";
}

.mdi-arrow-down-bold::before {
  content: "\F072E";
}

.mdi-arrow-down-bold-box::before {
  content: "\F072F";
}

.mdi-arrow-down-bold-box-outline::before {
  content: "\F0730";
}

.mdi-arrow-down-bold-circle::before {
  content: "\F0047";
}

.mdi-arrow-down-bold-circle-outline::before {
  content: "\F0048";
}

.mdi-arrow-down-bold-hexagon-outline::before {
  content: "\F0049";
}

.mdi-arrow-down-bold-outline::before {
  content: "\F09BF";
}

.mdi-arrow-down-box::before {
  content: "\F06C0";
}

.mdi-arrow-down-circle::before {
  content: "\F0CDB";
}

.mdi-arrow-down-circle-outline::before {
  content: "\F0CDC";
}

.mdi-arrow-down-drop-circle::before {
  content: "\F004A";
}

.mdi-arrow-down-drop-circle-outline::before {
  content: "\F004B";
}

.mdi-arrow-down-left::before {
  content: "\F17A1";
}

.mdi-arrow-down-left-bold::before {
  content: "\F17A2";
}

.mdi-arrow-down-right::before {
  content: "\F17A3";
}

.mdi-arrow-down-right-bold::before {
  content: "\F17A4";
}

.mdi-arrow-down-thick::before {
  content: "\F0046";
}

.mdi-arrow-down-thin::before {
  content: "\F19B3";
}

.mdi-arrow-down-thin-circle-outline::before {
  content: "\F1599";
}

.mdi-arrow-expand::before {
  content: "\F0616";
}

.mdi-arrow-expand-all::before {
  content: "\F004C";
}

.mdi-arrow-expand-down::before {
  content: "\F0796";
}

.mdi-arrow-expand-horizontal::before {
  content: "\F084E";
}

.mdi-arrow-expand-left::before {
  content: "\F0797";
}

.mdi-arrow-expand-right::before {
  content: "\F0798";
}

.mdi-arrow-expand-up::before {
  content: "\F0799";
}

.mdi-arrow-expand-vertical::before {
  content: "\F084F";
}

.mdi-arrow-horizontal-lock::before {
  content: "\F115B";
}

.mdi-arrow-left::before {
  content: "\F004D";
}

.mdi-arrow-left-bold::before {
  content: "\F0731";
}

.mdi-arrow-left-bold-box::before {
  content: "\F0732";
}

.mdi-arrow-left-bold-box-outline::before {
  content: "\F0733";
}

.mdi-arrow-left-bold-circle::before {
  content: "\F004F";
}

.mdi-arrow-left-bold-circle-outline::before {
  content: "\F0050";
}

.mdi-arrow-left-bold-hexagon-outline::before {
  content: "\F0051";
}

.mdi-arrow-left-bold-outline::before {
  content: "\F09C0";
}

.mdi-arrow-left-bottom::before {
  content: "\F17A5";
}

.mdi-arrow-left-bottom-bold::before {
  content: "\F17A6";
}

.mdi-arrow-left-box::before {
  content: "\F06C1";
}

.mdi-arrow-left-circle::before {
  content: "\F0CDD";
}

.mdi-arrow-left-circle-outline::before {
  content: "\F0CDE";
}

.mdi-arrow-left-drop-circle::before {
  content: "\F0052";
}

.mdi-arrow-left-drop-circle-outline::before {
  content: "\F0053";
}

.mdi-arrow-left-right::before {
  content: "\F0E73";
}

.mdi-arrow-left-right-bold::before {
  content: "\F0E74";
}

.mdi-arrow-left-right-bold-outline::before {
  content: "\F09C1";
}

.mdi-arrow-left-thick::before {
  content: "\F004E";
}

.mdi-arrow-left-thin::before {
  content: "\F19B1";
}

.mdi-arrow-left-thin-circle-outline::before {
  content: "\F159A";
}

.mdi-arrow-left-top::before {
  content: "\F17A7";
}

.mdi-arrow-left-top-bold::before {
  content: "\F17A8";
}

.mdi-arrow-projectile::before {
  content: "\F1840";
}

.mdi-arrow-projectile-multiple::before {
  content: "\F183F";
}

.mdi-arrow-right::before {
  content: "\F0054";
}

.mdi-arrow-right-bold::before {
  content: "\F0734";
}

.mdi-arrow-right-bold-box::before {
  content: "\F0735";
}

.mdi-arrow-right-bold-box-outline::before {
  content: "\F0736";
}

.mdi-arrow-right-bold-circle::before {
  content: "\F0056";
}

.mdi-arrow-right-bold-circle-outline::before {
  content: "\F0057";
}

.mdi-arrow-right-bold-hexagon-outline::before {
  content: "\F0058";
}

.mdi-arrow-right-bold-outline::before {
  content: "\F09C2";
}

.mdi-arrow-right-bottom::before {
  content: "\F17A9";
}

.mdi-arrow-right-bottom-bold::before {
  content: "\F17AA";
}

.mdi-arrow-right-box::before {
  content: "\F06C2";
}

.mdi-arrow-right-circle::before {
  content: "\F0CDF";
}

.mdi-arrow-right-circle-outline::before {
  content: "\F0CE0";
}

.mdi-arrow-right-drop-circle::before {
  content: "\F0059";
}

.mdi-arrow-right-drop-circle-outline::before {
  content: "\F005A";
}

.mdi-arrow-right-thick::before {
  content: "\F0055";
}

.mdi-arrow-right-thin::before {
  content: "\F19B0";
}

.mdi-arrow-right-thin-circle-outline::before {
  content: "\F1598";
}

.mdi-arrow-right-top::before {
  content: "\F17AB";
}

.mdi-arrow-right-top-bold::before {
  content: "\F17AC";
}

.mdi-arrow-split-horizontal::before {
  content: "\F093B";
}

.mdi-arrow-split-vertical::before {
  content: "\F093C";
}

.mdi-arrow-top-left::before {
  content: "\F005B";
}

.mdi-arrow-top-left-bold-box::before {
  content: "\F1968";
}

.mdi-arrow-top-left-bold-box-outline::before {
  content: "\F1969";
}

.mdi-arrow-top-left-bold-outline::before {
  content: "\F09C3";
}

.mdi-arrow-top-left-bottom-right::before {
  content: "\F0E75";
}

.mdi-arrow-top-left-bottom-right-bold::before {
  content: "\F0E76";
}

.mdi-arrow-top-left-thick::before {
  content: "\F09C4";
}

.mdi-arrow-top-left-thin::before {
  content: "\F19B5";
}

.mdi-arrow-top-left-thin-circle-outline::before {
  content: "\F1593";
}

.mdi-arrow-top-right::before {
  content: "\F005C";
}

.mdi-arrow-top-right-bold-box::before {
  content: "\F196A";
}

.mdi-arrow-top-right-bold-box-outline::before {
  content: "\F196B";
}

.mdi-arrow-top-right-bold-outline::before {
  content: "\F09C5";
}

.mdi-arrow-top-right-bottom-left::before {
  content: "\F0E77";
}

.mdi-arrow-top-right-bottom-left-bold::before {
  content: "\F0E78";
}

.mdi-arrow-top-right-thick::before {
  content: "\F09C6";
}

.mdi-arrow-top-right-thin::before {
  content: "\F19B4";
}

.mdi-arrow-top-right-thin-circle-outline::before {
  content: "\F1594";
}

.mdi-arrow-u-down-left::before {
  content: "\F17AD";
}

.mdi-arrow-u-down-left-bold::before {
  content: "\F17AE";
}

.mdi-arrow-u-down-right::before {
  content: "\F17AF";
}

.mdi-arrow-u-down-right-bold::before {
  content: "\F17B0";
}

.mdi-arrow-u-left-bottom::before {
  content: "\F17B1";
}

.mdi-arrow-u-left-bottom-bold::before {
  content: "\F17B2";
}

.mdi-arrow-u-left-top::before {
  content: "\F17B3";
}

.mdi-arrow-u-left-top-bold::before {
  content: "\F17B4";
}

.mdi-arrow-u-right-bottom::before {
  content: "\F17B5";
}

.mdi-arrow-u-right-bottom-bold::before {
  content: "\F17B6";
}

.mdi-arrow-u-right-top::before {
  content: "\F17B7";
}

.mdi-arrow-u-right-top-bold::before {
  content: "\F17B8";
}

.mdi-arrow-u-up-left::before {
  content: "\F17B9";
}

.mdi-arrow-u-up-left-bold::before {
  content: "\F17BA";
}

.mdi-arrow-u-up-right::before {
  content: "\F17BB";
}

.mdi-arrow-u-up-right-bold::before {
  content: "\F17BC";
}

.mdi-arrow-up::before {
  content: "\F005D";
}

.mdi-arrow-up-bold::before {
  content: "\F0737";
}

.mdi-arrow-up-bold-box::before {
  content: "\F0738";
}

.mdi-arrow-up-bold-box-outline::before {
  content: "\F0739";
}

.mdi-arrow-up-bold-circle::before {
  content: "\F005F";
}

.mdi-arrow-up-bold-circle-outline::before {
  content: "\F0060";
}

.mdi-arrow-up-bold-hexagon-outline::before {
  content: "\F0061";
}

.mdi-arrow-up-bold-outline::before {
  content: "\F09C7";
}

.mdi-arrow-up-box::before {
  content: "\F06C3";
}

.mdi-arrow-up-circle::before {
  content: "\F0CE1";
}

.mdi-arrow-up-circle-outline::before {
  content: "\F0CE2";
}

.mdi-arrow-up-down::before {
  content: "\F0E79";
}

.mdi-arrow-up-down-bold::before {
  content: "\F0E7A";
}

.mdi-arrow-up-down-bold-outline::before {
  content: "\F09C8";
}

.mdi-arrow-up-drop-circle::before {
  content: "\F0062";
}

.mdi-arrow-up-drop-circle-outline::before {
  content: "\F0063";
}

.mdi-arrow-up-left::before {
  content: "\F17BD";
}

.mdi-arrow-up-left-bold::before {
  content: "\F17BE";
}

.mdi-arrow-up-right::before {
  content: "\F17BF";
}

.mdi-arrow-up-right-bold::before {
  content: "\F17C0";
}

.mdi-arrow-up-thick::before {
  content: "\F005E";
}

.mdi-arrow-up-thin::before {
  content: "\F19B2";
}

.mdi-arrow-up-thin-circle-outline::before {
  content: "\F1597";
}

.mdi-arrow-vertical-lock::before {
  content: "\F115C";
}

.mdi-artstation::before {
  content: "\F0B5B";
}

.mdi-aspect-ratio::before {
  content: "\F0A24";
}

.mdi-assistant::before {
  content: "\F0064";
}

.mdi-asterisk::before {
  content: "\F06C4";
}

.mdi-asterisk-circle-outline::before {
  content: "\F1A27";
}

.mdi-at::before {
  content: "\F0065";
}

.mdi-atlassian::before {
  content: "\F0804";
}

.mdi-atm::before {
  content: "\F0D47";
}

.mdi-atom::before {
  content: "\F0768";
}

.mdi-atom-variant::before {
  content: "\F0E7B";
}

.mdi-attachment::before {
  content: "\F0066";
}

.mdi-attachment-check::before {
  content: "\F1AC1";
}

.mdi-attachment-lock::before {
  content: "\F19C4";
}

.mdi-attachment-minus::before {
  content: "\F1AC2";
}

.mdi-attachment-off::before {
  content: "\F1AC3";
}

.mdi-attachment-plus::before {
  content: "\F1AC4";
}

.mdi-attachment-remove::before {
  content: "\F1AC5";
}

.mdi-audio-input-rca::before {
  content: "\F186B";
}

.mdi-audio-input-stereo-minijack::before {
  content: "\F186C";
}

.mdi-audio-input-xlr::before {
  content: "\F186D";
}

.mdi-audio-video::before {
  content: "\F093D";
}

.mdi-audio-video-off::before {
  content: "\F11B6";
}

.mdi-augmented-reality::before {
  content: "\F0850";
}

.mdi-auto-download::before {
  content: "\F137E";
}

.mdi-auto-fix::before {
  content: "\F0068";
}

.mdi-auto-upload::before {
  content: "\F0069";
}

.mdi-autorenew::before {
  content: "\F006A";
}

.mdi-autorenew-off::before {
  content: "\F19E7";
}

.mdi-av-timer::before {
  content: "\F006B";
}

.mdi-aws::before {
  content: "\F0E0F";
}

.mdi-axe::before {
  content: "\F08C8";
}

.mdi-axe-battle::before {
  content: "\F1842";
}

.mdi-axis::before {
  content: "\F0D48";
}

.mdi-axis-arrow::before {
  content: "\F0D49";
}

.mdi-axis-arrow-info::before {
  content: "\F140E";
}

.mdi-axis-arrow-lock::before {
  content: "\F0D4A";
}

.mdi-axis-lock::before {
  content: "\F0D4B";
}

.mdi-axis-x-arrow::before {
  content: "\F0D4C";
}

.mdi-axis-x-arrow-lock::before {
  content: "\F0D4D";
}

.mdi-axis-x-rotate-clockwise::before {
  content: "\F0D4E";
}

.mdi-axis-x-rotate-counterclockwise::before {
  content: "\F0D4F";
}

.mdi-axis-x-y-arrow-lock::before {
  content: "\F0D50";
}

.mdi-axis-y-arrow::before {
  content: "\F0D51";
}

.mdi-axis-y-arrow-lock::before {
  content: "\F0D52";
}

.mdi-axis-y-rotate-clockwise::before {
  content: "\F0D53";
}

.mdi-axis-y-rotate-counterclockwise::before {
  content: "\F0D54";
}

.mdi-axis-z-arrow::before {
  content: "\F0D55";
}

.mdi-axis-z-arrow-lock::before {
  content: "\F0D56";
}

.mdi-axis-z-rotate-clockwise::before {
  content: "\F0D57";
}

.mdi-axis-z-rotate-counterclockwise::before {
  content: "\F0D58";
}

.mdi-babel::before {
  content: "\F0A25";
}

.mdi-baby::before {
  content: "\F006C";
}

.mdi-baby-bottle::before {
  content: "\F0F39";
}

.mdi-baby-bottle-outline::before {
  content: "\F0F3A";
}

.mdi-baby-buggy::before {
  content: "\F13E0";
}

.mdi-baby-buggy-off::before {
  content: "\F1AF3";
}

.mdi-baby-carriage::before {
  content: "\F068F";
}

.mdi-baby-carriage-off::before {
  content: "\F0FA0";
}

.mdi-baby-face::before {
  content: "\F0E7C";
}

.mdi-baby-face-outline::before {
  content: "\F0E7D";
}

.mdi-backburger::before {
  content: "\F006D";
}

.mdi-backspace::before {
  content: "\F006E";
}

.mdi-backspace-outline::before {
  content: "\F0B5C";
}

.mdi-backspace-reverse::before {
  content: "\F0E7E";
}

.mdi-backspace-reverse-outline::before {
  content: "\F0E7F";
}

.mdi-backup-restore::before {
  content: "\F006F";
}

.mdi-bacteria::before {
  content: "\F0ED5";
}

.mdi-bacteria-outline::before {
  content: "\F0ED6";
}

.mdi-badge-account::before {
  content: "\F0DA7";
}

.mdi-badge-account-alert::before {
  content: "\F0DA8";
}

.mdi-badge-account-alert-outline::before {
  content: "\F0DA9";
}

.mdi-badge-account-horizontal::before {
  content: "\F0E0D";
}

.mdi-badge-account-horizontal-outline::before {
  content: "\F0E0E";
}

.mdi-badge-account-outline::before {
  content: "\F0DAA";
}

.mdi-badminton::before {
  content: "\F0851";
}

.mdi-bag-carry-on::before {
  content: "\F0F3B";
}

.mdi-bag-carry-on-check::before {
  content: "\F0D65";
}

.mdi-bag-carry-on-off::before {
  content: "\F0F3C";
}

.mdi-bag-checked::before {
  content: "\F0F3D";
}

.mdi-bag-personal::before {
  content: "\F0E10";
}

.mdi-bag-personal-off::before {
  content: "\F0E11";
}

.mdi-bag-personal-off-outline::before {
  content: "\F0E12";
}

.mdi-bag-personal-outline::before {
  content: "\F0E13";
}

.mdi-bag-personal-tag::before {
  content: "\F1B0C";
}

.mdi-bag-personal-tag-outline::before {
  content: "\F1B0D";
}

.mdi-bag-suitcase::before {
  content: "\F158B";
}

.mdi-bag-suitcase-off::before {
  content: "\F158D";
}

.mdi-bag-suitcase-off-outline::before {
  content: "\F158E";
}

.mdi-bag-suitcase-outline::before {
  content: "\F158C";
}

.mdi-baguette::before {
  content: "\F0F3E";
}

.mdi-balcony::before {
  content: "\F1817";
}

.mdi-balloon::before {
  content: "\F0A26";
}

.mdi-ballot::before {
  content: "\F09C9";
}

.mdi-ballot-outline::before {
  content: "\F09CA";
}

.mdi-ballot-recount::before {
  content: "\F0C39";
}

.mdi-ballot-recount-outline::before {
  content: "\F0C3A";
}

.mdi-bandage::before {
  content: "\F0DAF";
}

.mdi-bank::before {
  content: "\F0070";
}

.mdi-bank-check::before {
  content: "\F1655";
}

.mdi-bank-minus::before {
  content: "\F0DB0";
}

.mdi-bank-off::before {
  content: "\F1656";
}

.mdi-bank-off-outline::before {
  content: "\F1657";
}

.mdi-bank-outline::before {
  content: "\F0E80";
}

.mdi-bank-plus::before {
  content: "\F0DB1";
}

.mdi-bank-remove::before {
  content: "\F0DB2";
}

.mdi-bank-transfer::before {
  content: "\F0A27";
}

.mdi-bank-transfer-in::before {
  content: "\F0A28";
}

.mdi-bank-transfer-out::before {
  content: "\F0A29";
}

.mdi-barcode::before {
  content: "\F0071";
}

.mdi-barcode-off::before {
  content: "\F1236";
}

.mdi-barcode-scan::before {
  content: "\F0072";
}

.mdi-barley::before {
  content: "\F0073";
}

.mdi-barley-off::before {
  content: "\F0B5D";
}

.mdi-barn::before {
  content: "\F0B5E";
}

.mdi-barrel::before {
  content: "\F0074";
}

.mdi-barrel-outline::before {
  content: "\F1A28";
}

.mdi-baseball::before {
  content: "\F0852";
}

.mdi-baseball-bat::before {
  content: "\F0853";
}

.mdi-baseball-diamond::before {
  content: "\F15EC";
}

.mdi-baseball-diamond-outline::before {
  content: "\F15ED";
}

.mdi-bash::before {
  content: "\F1183";
}

.mdi-basket::before {
  content: "\F0076";
}

.mdi-basket-check::before {
  content: "\F18E5";
}

.mdi-basket-check-outline::before {
  content: "\F18E6";
}

.mdi-basket-fill::before {
  content: "\F0077";
}

.mdi-basket-minus::before {
  content: "\F1523";
}

.mdi-basket-minus-outline::before {
  content: "\F1524";
}

.mdi-basket-off::before {
  content: "\F1525";
}

.mdi-basket-off-outline::before {
  content: "\F1526";
}

.mdi-basket-outline::before {
  content: "\F1181";
}

.mdi-basket-plus::before {
  content: "\F1527";
}

.mdi-basket-plus-outline::before {
  content: "\F1528";
}

.mdi-basket-remove::before {
  content: "\F1529";
}

.mdi-basket-remove-outline::before {
  content: "\F152A";
}

.mdi-basket-unfill::before {
  content: "\F0078";
}

.mdi-basketball::before {
  content: "\F0806";
}

.mdi-basketball-hoop::before {
  content: "\F0C3B";
}

.mdi-basketball-hoop-outline::before {
  content: "\F0C3C";
}

.mdi-bat::before {
  content: "\F0B5F";
}

.mdi-bathtub::before {
  content: "\F1818";
}

.mdi-bathtub-outline::before {
  content: "\F1819";
}

.mdi-battery::before {
  content: "\F0079";
}

.mdi-battery-10::before {
  content: "\F007A";
}

.mdi-battery-10-bluetooth::before {
  content: "\F093E";
}

.mdi-battery-20::before {
  content: "\F007B";
}

.mdi-battery-20-bluetooth::before {
  content: "\F093F";
}

.mdi-battery-30::before {
  content: "\F007C";
}

.mdi-battery-30-bluetooth::before {
  content: "\F0940";
}

.mdi-battery-40::before {
  content: "\F007D";
}

.mdi-battery-40-bluetooth::before {
  content: "\F0941";
}

.mdi-battery-50::before {
  content: "\F007E";
}

.mdi-battery-50-bluetooth::before {
  content: "\F0942";
}

.mdi-battery-60::before {
  content: "\F007F";
}

.mdi-battery-60-bluetooth::before {
  content: "\F0943";
}

.mdi-battery-70::before {
  content: "\F0080";
}

.mdi-battery-70-bluetooth::before {
  content: "\F0944";
}

.mdi-battery-80::before {
  content: "\F0081";
}

.mdi-battery-80-bluetooth::before {
  content: "\F0945";
}

.mdi-battery-90::before {
  content: "\F0082";
}

.mdi-battery-90-bluetooth::before {
  content: "\F0946";
}

.mdi-battery-alert::before {
  content: "\F0083";
}

.mdi-battery-alert-bluetooth::before {
  content: "\F0947";
}

.mdi-battery-alert-variant::before {
  content: "\F10CC";
}

.mdi-battery-alert-variant-outline::before {
  content: "\F10CD";
}

.mdi-battery-arrow-down::before {
  content: "\F17DE";
}

.mdi-battery-arrow-down-outline::before {
  content: "\F17DF";
}

.mdi-battery-arrow-up::before {
  content: "\F17E0";
}

.mdi-battery-arrow-up-outline::before {
  content: "\F17E1";
}

.mdi-battery-bluetooth::before {
  content: "\F0948";
}

.mdi-battery-bluetooth-variant::before {
  content: "\F0949";
}

.mdi-battery-charging::before {
  content: "\F0084";
}

.mdi-battery-charging-10::before {
  content: "\F089C";
}

.mdi-battery-charging-100::before {
  content: "\F0085";
}

.mdi-battery-charging-20::before {
  content: "\F0086";
}

.mdi-battery-charging-30::before {
  content: "\F0087";
}

.mdi-battery-charging-40::before {
  content: "\F0088";
}

.mdi-battery-charging-50::before {
  content: "\F089D";
}

.mdi-battery-charging-60::before {
  content: "\F0089";
}

.mdi-battery-charging-70::before {
  content: "\F089E";
}

.mdi-battery-charging-80::before {
  content: "\F008A";
}

.mdi-battery-charging-90::before {
  content: "\F008B";
}

.mdi-battery-charging-high::before {
  content: "\F12A6";
}

.mdi-battery-charging-low::before {
  content: "\F12A4";
}

.mdi-battery-charging-medium::before {
  content: "\F12A5";
}

.mdi-battery-charging-outline::before {
  content: "\F089F";
}

.mdi-battery-charging-wireless::before {
  content: "\F0807";
}

.mdi-battery-charging-wireless-10::before {
  content: "\F0808";
}

.mdi-battery-charging-wireless-20::before {
  content: "\F0809";
}

.mdi-battery-charging-wireless-30::before {
  content: "\F080A";
}

.mdi-battery-charging-wireless-40::before {
  content: "\F080B";
}

.mdi-battery-charging-wireless-50::before {
  content: "\F080C";
}

.mdi-battery-charging-wireless-60::before {
  content: "\F080D";
}

.mdi-battery-charging-wireless-70::before {
  content: "\F080E";
}

.mdi-battery-charging-wireless-80::before {
  content: "\F080F";
}

.mdi-battery-charging-wireless-90::before {
  content: "\F0810";
}

.mdi-battery-charging-wireless-alert::before {
  content: "\F0811";
}

.mdi-battery-charging-wireless-outline::before {
  content: "\F0812";
}

.mdi-battery-check::before {
  content: "\F17E2";
}

.mdi-battery-check-outline::before {
  content: "\F17E3";
}

.mdi-battery-clock::before {
  content: "\F19E5";
}

.mdi-battery-clock-outline::before {
  content: "\F19E6";
}

.mdi-battery-heart::before {
  content: "\F120F";
}

.mdi-battery-heart-outline::before {
  content: "\F1210";
}

.mdi-battery-heart-variant::before {
  content: "\F1211";
}

.mdi-battery-high::before {
  content: "\F12A3";
}

.mdi-battery-lock::before {
  content: "\F179C";
}

.mdi-battery-lock-open::before {
  content: "\F179D";
}

.mdi-battery-low::before {
  content: "\F12A1";
}

.mdi-battery-medium::before {
  content: "\F12A2";
}

.mdi-battery-minus::before {
  content: "\F17E4";
}

.mdi-battery-minus-outline::before {
  content: "\F17E5";
}

.mdi-battery-minus-variant::before {
  content: "\F008C";
}

.mdi-battery-negative::before {
  content: "\F008D";
}

.mdi-battery-off::before {
  content: "\F125D";
}

.mdi-battery-off-outline::before {
  content: "\F125E";
}

.mdi-battery-outline::before {
  content: "\F008E";
}

.mdi-battery-plus::before {
  content: "\F17E6";
}

.mdi-battery-plus-outline::before {
  content: "\F17E7";
}

.mdi-battery-plus-variant::before {
  content: "\F008F";
}

.mdi-battery-positive::before {
  content: "\F0090";
}

.mdi-battery-remove::before {
  content: "\F17E8";
}

.mdi-battery-remove-outline::before {
  content: "\F17E9";
}

.mdi-battery-sync::before {
  content: "\F1834";
}

.mdi-battery-sync-outline::before {
  content: "\F1835";
}

.mdi-battery-unknown::before {
  content: "\F0091";
}

.mdi-battery-unknown-bluetooth::before {
  content: "\F094A";
}

.mdi-beach::before {
  content: "\F0092";
}

.mdi-beaker::before {
  content: "\F0CEA";
}

.mdi-beaker-alert::before {
  content: "\F1229";
}

.mdi-beaker-alert-outline::before {
  content: "\F122A";
}

.mdi-beaker-check::before {
  content: "\F122B";
}

.mdi-beaker-check-outline::before {
  content: "\F122C";
}

.mdi-beaker-minus::before {
  content: "\F122D";
}

.mdi-beaker-minus-outline::before {
  content: "\F122E";
}

.mdi-beaker-outline::before {
  content: "\F0690";
}

.mdi-beaker-plus::before {
  content: "\F122F";
}

.mdi-beaker-plus-outline::before {
  content: "\F1230";
}

.mdi-beaker-question::before {
  content: "\F1231";
}

.mdi-beaker-question-outline::before {
  content: "\F1232";
}

.mdi-beaker-remove::before {
  content: "\F1233";
}

.mdi-beaker-remove-outline::before {
  content: "\F1234";
}

.mdi-bed::before {
  content: "\F02E3";
}

.mdi-bed-double::before {
  content: "\F0FD4";
}

.mdi-bed-double-outline::before {
  content: "\F0FD3";
}

.mdi-bed-empty::before {
  content: "\F08A0";
}

.mdi-bed-king::before {
  content: "\F0FD2";
}

.mdi-bed-king-outline::before {
  content: "\F0FD1";
}

.mdi-bed-outline::before {
  content: "\F0099";
}

.mdi-bed-queen::before {
  content: "\F0FD0";
}

.mdi-bed-queen-outline::before {
  content: "\F0FDB";
}

.mdi-bed-single::before {
  content: "\F106D";
}

.mdi-bed-single-outline::before {
  content: "\F106E";
}

.mdi-bee::before {
  content: "\F0FA1";
}

.mdi-bee-flower::before {
  content: "\F0FA2";
}

.mdi-beehive-off-outline::before {
  content: "\F13ED";
}

.mdi-beehive-outline::before {
  content: "\F10CE";
}

.mdi-beekeeper::before {
  content: "\F14E2";
}

.mdi-beer::before {
  content: "\F0098";
}

.mdi-beer-outline::before {
  content: "\F130C";
}

.mdi-bell::before {
  content: "\F009A";
}

.mdi-bell-alert::before {
  content: "\F0D59";
}

.mdi-bell-alert-outline::before {
  content: "\F0E81";
}

.mdi-bell-badge::before {
  content: "\F116B";
}

.mdi-bell-badge-outline::before {
  content: "\F0178";
}

.mdi-bell-cancel::before {
  content: "\F13E7";
}

.mdi-bell-cancel-outline::before {
  content: "\F13E8";
}

.mdi-bell-check::before {
  content: "\F11E5";
}

.mdi-bell-check-outline::before {
  content: "\F11E6";
}

.mdi-bell-circle::before {
  content: "\F0D5A";
}

.mdi-bell-circle-outline::before {
  content: "\F0D5B";
}

.mdi-bell-cog::before {
  content: "\F1A29";
}

.mdi-bell-cog-outline::before {
  content: "\F1A2A";
}

.mdi-bell-minus::before {
  content: "\F13E9";
}

.mdi-bell-minus-outline::before {
  content: "\F13EA";
}

.mdi-bell-off::before {
  content: "\F009B";
}

.mdi-bell-off-outline::before {
  content: "\F0A91";
}

.mdi-bell-outline::before {
  content: "\F009C";
}

.mdi-bell-plus::before {
  content: "\F009D";
}

.mdi-bell-plus-outline::before {
  content: "\F0A92";
}

.mdi-bell-remove::before {
  content: "\F13EB";
}

.mdi-bell-remove-outline::before {
  content: "\F13EC";
}

.mdi-bell-ring::before {
  content: "\F009E";
}

.mdi-bell-ring-outline::before {
  content: "\F009F";
}

.mdi-bell-sleep::before {
  content: "\F00A0";
}

.mdi-bell-sleep-outline::before {
  content: "\F0A93";
}

.mdi-beta::before {
  content: "\F00A1";
}

.mdi-betamax::before {
  content: "\F09CB";
}

.mdi-biathlon::before {
  content: "\F0E14";
}

.mdi-bicycle::before {
  content: "\F109C";
}

.mdi-bicycle-basket::before {
  content: "\F1235";
}

.mdi-bicycle-cargo::before {
  content: "\F189C";
}

.mdi-bicycle-electric::before {
  content: "\F15B4";
}

.mdi-bicycle-penny-farthing::before {
  content: "\F15E9";
}

.mdi-bike::before {
  content: "\F00A3";
}

.mdi-bike-fast::before {
  content: "\F111F";
}

.mdi-billboard::before {
  content: "\F1010";
}

.mdi-billiards::before {
  content: "\F0B61";
}

.mdi-billiards-rack::before {
  content: "\F0B62";
}

.mdi-binoculars::before {
  content: "\F00A5";
}

.mdi-bio::before {
  content: "\F00A6";
}

.mdi-biohazard::before {
  content: "\F00A7";
}

.mdi-bird::before {
  content: "\F15C6";
}

.mdi-bitbucket::before {
  content: "\F00A8";
}

.mdi-bitcoin::before {
  content: "\F0813";
}

.mdi-black-mesa::before {
  content: "\F00A9";
}

.mdi-blender::before {
  content: "\F0CEB";
}

.mdi-blender-outline::before {
  content: "\F181A";
}

.mdi-blender-software::before {
  content: "\F00AB";
}

.mdi-blinds::before {
  content: "\F00AC";
}

.mdi-blinds-horizontal::before {
  content: "\F1A2B";
}

.mdi-blinds-horizontal-closed::before {
  content: "\F1A2C";
}

.mdi-blinds-open::before {
  content: "\F1011";
}

.mdi-blinds-vertical::before {
  content: "\F1A2D";
}

.mdi-blinds-vertical-closed::before {
  content: "\F1A2E";
}

.mdi-block-helper::before {
  content: "\F00AD";
}

.mdi-blood-bag::before {
  content: "\F0CEC";
}

.mdi-bluetooth::before {
  content: "\F00AF";
}

.mdi-bluetooth-audio::before {
  content: "\F00B0";
}

.mdi-bluetooth-connect::before {
  content: "\F00B1";
}

.mdi-bluetooth-off::before {
  content: "\F00B2";
}

.mdi-bluetooth-settings::before {
  content: "\F00B3";
}

.mdi-bluetooth-transfer::before {
  content: "\F00B4";
}

.mdi-blur::before {
  content: "\F00B5";
}

.mdi-blur-linear::before {
  content: "\F00B6";
}

.mdi-blur-off::before {
  content: "\F00B7";
}

.mdi-blur-radial::before {
  content: "\F00B8";
}

.mdi-bolt::before {
  content: "\F0DB3";
}

.mdi-bomb::before {
  content: "\F0691";
}

.mdi-bomb-off::before {
  content: "\F06C5";
}

.mdi-bone::before {
  content: "\F00B9";
}

.mdi-bone-off::before {
  content: "\F19E0";
}

.mdi-book::before {
  content: "\F00BA";
}

.mdi-book-account::before {
  content: "\F13AD";
}

.mdi-book-account-outline::before {
  content: "\F13AE";
}

.mdi-book-alert::before {
  content: "\F167C";
}

.mdi-book-alert-outline::before {
  content: "\F167D";
}

.mdi-book-alphabet::before {
  content: "\F061D";
}

.mdi-book-arrow-down::before {
  content: "\F167E";
}

.mdi-book-arrow-down-outline::before {
  content: "\F167F";
}

.mdi-book-arrow-left::before {
  content: "\F1680";
}

.mdi-book-arrow-left-outline::before {
  content: "\F1681";
}

.mdi-book-arrow-right::before {
  content: "\F1682";
}

.mdi-book-arrow-right-outline::before {
  content: "\F1683";
}

.mdi-book-arrow-up::before {
  content: "\F1684";
}

.mdi-book-arrow-up-outline::before {
  content: "\F1685";
}

.mdi-book-cancel::before {
  content: "\F1686";
}

.mdi-book-cancel-outline::before {
  content: "\F1687";
}

.mdi-book-check::before {
  content: "\F14F3";
}

.mdi-book-check-outline::before {
  content: "\F14F4";
}

.mdi-book-clock::before {
  content: "\F1688";
}

.mdi-book-clock-outline::before {
  content: "\F1689";
}

.mdi-book-cog::before {
  content: "\F168A";
}

.mdi-book-cog-outline::before {
  content: "\F168B";
}

.mdi-book-cross::before {
  content: "\F00A2";
}

.mdi-book-edit::before {
  content: "\F168C";
}

.mdi-book-edit-outline::before {
  content: "\F168D";
}

.mdi-book-education::before {
  content: "\F16C9";
}

.mdi-book-education-outline::before {
  content: "\F16CA";
}

.mdi-book-heart::before {
  content: "\F1A1D";
}

.mdi-book-heart-outline::before {
  content: "\F1A1E";
}

.mdi-book-information-variant::before {
  content: "\F106F";
}

.mdi-book-lock::before {
  content: "\F079A";
}

.mdi-book-lock-open::before {
  content: "\F079B";
}

.mdi-book-lock-open-outline::before {
  content: "\F168E";
}

.mdi-book-lock-outline::before {
  content: "\F168F";
}

.mdi-book-marker::before {
  content: "\F1690";
}

.mdi-book-marker-outline::before {
  content: "\F1691";
}

.mdi-book-minus::before {
  content: "\F05D9";
}

.mdi-book-minus-multiple::before {
  content: "\F0A94";
}

.mdi-book-minus-multiple-outline::before {
  content: "\F090B";
}

.mdi-book-minus-outline::before {
  content: "\F1692";
}

.mdi-book-multiple::before {
  content: "\F00BB";
}

.mdi-book-multiple-outline::before {
  content: "\F0436";
}

.mdi-book-music::before {
  content: "\F0067";
}

.mdi-book-music-outline::before {
  content: "\F1693";
}

.mdi-book-off::before {
  content: "\F1694";
}

.mdi-book-off-outline::before {
  content: "\F1695";
}

.mdi-book-open::before {
  content: "\F00BD";
}

.mdi-book-open-blank-variant::before {
  content: "\F00BE";
}

.mdi-book-open-outline::before {
  content: "\F0B63";
}

.mdi-book-open-page-variant::before {
  content: "\F05DA";
}

.mdi-book-open-page-variant-outline::before {
  content: "\F15D6";
}

.mdi-book-open-variant::before {
  content: "\F14F7";
}

.mdi-book-outline::before {
  content: "\F0B64";
}

.mdi-book-play::before {
  content: "\F0E82";
}

.mdi-book-play-outline::before {
  content: "\F0E83";
}

.mdi-book-plus::before {
  content: "\F05DB";
}

.mdi-book-plus-multiple::before {
  content: "\F0A95";
}

.mdi-book-plus-multiple-outline::before {
  content: "\F0ADE";
}

.mdi-book-plus-outline::before {
  content: "\F1696";
}

.mdi-book-refresh::before {
  content: "\F1697";
}

.mdi-book-refresh-outline::before {
  content: "\F1698";
}

.mdi-book-remove::before {
  content: "\F0A97";
}

.mdi-book-remove-multiple::before {
  content: "\F0A96";
}

.mdi-book-remove-multiple-outline::before {
  content: "\F04CA";
}

.mdi-book-remove-outline::before {
  content: "\F1699";
}

.mdi-book-search::before {
  content: "\F0E84";
}

.mdi-book-search-outline::before {
  content: "\F0E85";
}

.mdi-book-settings::before {
  content: "\F169A";
}

.mdi-book-settings-outline::before {
  content: "\F169B";
}

.mdi-book-sync::before {
  content: "\F169C";
}

.mdi-book-sync-outline::before {
  content: "\F16C8";
}

.mdi-book-variant::before {
  content: "\F00BF";
}

.mdi-book-variant-multiple::before {
  content: "\F00BC";
}

.mdi-bookmark::before {
  content: "\F00C0";
}

.mdi-bookmark-box-multiple::before {
  content: "\F196C";
}

.mdi-bookmark-box-multiple-outline::before {
  content: "\F196D";
}

.mdi-bookmark-check::before {
  content: "\F00C1";
}

.mdi-bookmark-check-outline::before {
  content: "\F137B";
}

.mdi-bookmark-minus::before {
  content: "\F09CC";
}

.mdi-bookmark-minus-outline::before {
  content: "\F09CD";
}

.mdi-bookmark-multiple::before {
  content: "\F0E15";
}

.mdi-bookmark-multiple-outline::before {
  content: "\F0E16";
}

.mdi-bookmark-music::before {
  content: "\F00C2";
}

.mdi-bookmark-music-outline::before {
  content: "\F1379";
}

.mdi-bookmark-off::before {
  content: "\F09CE";
}

.mdi-bookmark-off-outline::before {
  content: "\F09CF";
}

.mdi-bookmark-outline::before {
  content: "\F00C3";
}

.mdi-bookmark-plus::before {
  content: "\F00C5";
}

.mdi-bookmark-plus-outline::before {
  content: "\F00C4";
}

.mdi-bookmark-remove::before {
  content: "\F00C6";
}

.mdi-bookmark-remove-outline::before {
  content: "\F137A";
}

.mdi-bookshelf::before {
  content: "\F125F";
}

.mdi-boom-gate::before {
  content: "\F0E86";
}

.mdi-boom-gate-alert::before {
  content: "\F0E87";
}

.mdi-boom-gate-alert-outline::before {
  content: "\F0E88";
}

.mdi-boom-gate-arrow-down::before {
  content: "\F0E89";
}

.mdi-boom-gate-arrow-down-outline::before {
  content: "\F0E8A";
}

.mdi-boom-gate-arrow-up::before {
  content: "\F0E8C";
}

.mdi-boom-gate-arrow-up-outline::before {
  content: "\F0E8D";
}

.mdi-boom-gate-outline::before {
  content: "\F0E8B";
}

.mdi-boom-gate-up::before {
  content: "\F17F9";
}

.mdi-boom-gate-up-outline::before {
  content: "\F17FA";
}

.mdi-boombox::before {
  content: "\F05DC";
}

.mdi-boomerang::before {
  content: "\F10CF";
}

.mdi-bootstrap::before {
  content: "\F06C6";
}

.mdi-border-all::before {
  content: "\F00C7";
}

.mdi-border-all-variant::before {
  content: "\F08A1";
}

.mdi-border-bottom::before {
  content: "\F00C8";
}

.mdi-border-bottom-variant::before {
  content: "\F08A2";
}

.mdi-border-color::before {
  content: "\F00C9";
}

.mdi-border-horizontal::before {
  content: "\F00CA";
}

.mdi-border-inside::before {
  content: "\F00CB";
}

.mdi-border-left::before {
  content: "\F00CC";
}

.mdi-border-left-variant::before {
  content: "\F08A3";
}

.mdi-border-none::before {
  content: "\F00CD";
}

.mdi-border-none-variant::before {
  content: "\F08A4";
}

.mdi-border-outside::before {
  content: "\F00CE";
}

.mdi-border-radius::before {
  content: "\F1AF4";
}

.mdi-border-right::before {
  content: "\F00CF";
}

.mdi-border-right-variant::before {
  content: "\F08A5";
}

.mdi-border-style::before {
  content: "\F00D0";
}

.mdi-border-top::before {
  content: "\F00D1";
}

.mdi-border-top-variant::before {
  content: "\F08A6";
}

.mdi-border-vertical::before {
  content: "\F00D2";
}

.mdi-bottle-soda::before {
  content: "\F1070";
}

.mdi-bottle-soda-classic::before {
  content: "\F1071";
}

.mdi-bottle-soda-classic-outline::before {
  content: "\F1363";
}

.mdi-bottle-soda-outline::before {
  content: "\F1072";
}

.mdi-bottle-tonic::before {
  content: "\F112E";
}

.mdi-bottle-tonic-outline::before {
  content: "\F112F";
}

.mdi-bottle-tonic-plus::before {
  content: "\F1130";
}

.mdi-bottle-tonic-plus-outline::before {
  content: "\F1131";
}

.mdi-bottle-tonic-skull::before {
  content: "\F1132";
}

.mdi-bottle-tonic-skull-outline::before {
  content: "\F1133";
}

.mdi-bottle-wine::before {
  content: "\F0854";
}

.mdi-bottle-wine-outline::before {
  content: "\F1310";
}

.mdi-bow-arrow::before {
  content: "\F1841";
}

.mdi-bow-tie::before {
  content: "\F0678";
}

.mdi-bowl::before {
  content: "\F028E";
}

.mdi-bowl-mix::before {
  content: "\F0617";
}

.mdi-bowl-mix-outline::before {
  content: "\F02E4";
}

.mdi-bowl-outline::before {
  content: "\F02A9";
}

.mdi-bowling::before {
  content: "\F00D3";
}

.mdi-box::before {
  content: "\F00D4";
}

.mdi-box-cutter::before {
  content: "\F00D5";
}

.mdi-box-cutter-off::before {
  content: "\F0B4A";
}

.mdi-box-shadow::before {
  content: "\F0637";
}

.mdi-boxing-glove::before {
  content: "\F0B65";
}

.mdi-braille::before {
  content: "\F09D0";
}

.mdi-brain::before {
  content: "\F09D1";
}

.mdi-bread-slice::before {
  content: "\F0CEE";
}

.mdi-bread-slice-outline::before {
  content: "\F0CEF";
}

.mdi-bridge::before {
  content: "\F0618";
}

.mdi-briefcase::before {
  content: "\F00D6";
}

.mdi-briefcase-account::before {
  content: "\F0CF0";
}

.mdi-briefcase-account-outline::before {
  content: "\F0CF1";
}

.mdi-briefcase-arrow-left-right::before {
  content: "\F1A8D";
}

.mdi-briefcase-arrow-left-right-outline::before {
  content: "\F1A8E";
}

.mdi-briefcase-arrow-up-down::before {
  content: "\F1A8F";
}

.mdi-briefcase-arrow-up-down-outline::before {
  content: "\F1A90";
}

.mdi-briefcase-check::before {
  content: "\F00D7";
}

.mdi-briefcase-check-outline::before {
  content: "\F131E";
}

.mdi-briefcase-clock::before {
  content: "\F10D0";
}

.mdi-briefcase-clock-outline::before {
  content: "\F10D1";
}

.mdi-briefcase-download::before {
  content: "\F00D8";
}

.mdi-briefcase-download-outline::before {
  content: "\F0C3D";
}

.mdi-briefcase-edit::before {
  content: "\F0A98";
}

.mdi-briefcase-edit-outline::before {
  content: "\F0C3E";
}

.mdi-briefcase-eye::before {
  content: "\F17D9";
}

.mdi-briefcase-eye-outline::before {
  content: "\F17DA";
}

.mdi-briefcase-minus::before {
  content: "\F0A2A";
}

.mdi-briefcase-minus-outline::before {
  content: "\F0C3F";
}

.mdi-briefcase-off::before {
}

}

}

