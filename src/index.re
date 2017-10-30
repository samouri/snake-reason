/* [%bs.raw {|require('./index.css')|}]; */ 
/* external register_service_worker : unit => unit = "default" [@@bs.module "./registerServiceWorker"]; */ 
/* ReactDOMRe.renderToElementWithId <App message="Welcome to React and Reason" /> "root"; */ 
/* register_service_worker (); */

let init = fun () => { 
    open ReasonJs.Dom;
    let canvasEl = DocumentRe.querySelector("canvas", document);
    switch canvasEl {
    | Some(canv) => Js.log(canv)
    | None => Js.log("couldnt get canvas")
    };
    /* Input.bindListeners(); */
    /* startOnAnyKey(); */
    /* Js.Global.setInterval(gameLoop, 33) */
    /* Js.log( 'hiii' ); */
 };
  
init();

  Js.log( a );