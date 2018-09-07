{
    "targets": [{
        "target_name": "binding",
        "sources": ["./lib/parse.cc","./lib/main.cc"],
        "include_dirs": [
            "<!(node -e \"require('nan')\")>"
        ]
    }]
}