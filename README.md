# bs-node-url

URL and URLSearchParams bindings for BuckleScript.

## Install

yarn:

```
yarn add bs-node-url
```

npm:

```
npm install bs-node-url
```

Add `bs-node-url` to `bs-dependencies` in `bsconfig.json`.

## Example

```reason
let url1 = Url.make("https://api.github.com/", ());
let url2 = Url.make("/emojis", ~base="https://api.github.com", ());
Js.log(Url.toString(url1));
Js.log(Url.toString(url2));

let searchParams = UrlSearchParams.fromString("key=value");
UrlSearchParams.set(searchParams, "anotherKey", "anotherValue");
Js.log(UrlSearchParams.toString(searchParams));
```
