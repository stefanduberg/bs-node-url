type t;

[@bs.new] [@bs.module "url"] external make : unit => t = "URLSearchParams";

[@bs.new] [@bs.module "url"]
external fromString : string => t = "URLSearchParams";

[@bs.new] [@bs.module "url"]
external fromArray : array((string, string)) => t = "URLSearchParams";

[@bs.send] external append : (t, string, string) => unit = "";

[@bs.send] external delete : (t, string) => unit = "";

[@bs.send] external forEach : (t, (string, string, t) => unit) => unit = "";

[@bs.send]
external forEachU : (t, (. string, string, t) => unit) => unit = "forEach";

[@bs.send] external get : (t, string) => Js.Nullable.t(string) = "";

[@bs.send] external getAll : (t, string) => array(string) = "";

[@bs.send] external has : (t, string) => bool = "";

[@bs.send] external set : (t, string, string) => unit = "";

[@bs.send] external sort : t => unit = "";

[@bs.send] external toString : t => string = "";