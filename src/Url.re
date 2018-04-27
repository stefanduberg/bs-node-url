type t;

[@bs.new] [@bs.module "url"]
external make : (string, ~base: string=?, unit) => t = "URL";

[@bs.get] external hash : t => string = "";

[@bs.set] external setHash : (t, string) => string = "hash";

[@bs.get] external host : t => string = "";

[@bs.set] external setHost : (t, string) => string = "host";

[@bs.get] external hostname : t => string = "";

[@bs.set] external setHostname : (t, string) => string = "hostname";

[@bs.get] external href : t => string = "";

[@bs.set] external setHref : (t, string) => string = "href";

[@bs.get] external origin : t => string = "";

[@bs.get] external password : t => string = "";

[@bs.set] external setPassword : (t, string) => string = "password";

[@bs.get] external pathname : t => string = "";

[@bs.set] external setPathname : (t, string) => string = "pathname";

[@bs.get] external port : t => string = "";

[@bs.set] external setPort : (t, string) => string = "port";

[@bs.get] external protocol : t => string = "";

[@bs.set] external setProtocol : (t, string) => string = "protocol";

[@bs.get] external search : t => string = "";

[@bs.set] external setSearch : (t, string) => string = "search";

[@bs.get] external searchParams : t => UrlSearchParams.t = "searchParams";

[@bs.get] external username : t => string = "";

[@bs.set] external setUsername : (t, string) => string = "username";

[@bs.send] external toString : t => string = "";