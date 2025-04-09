#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422120);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_425080);
CLANG_FORWARD_PROC_SYMBOL(public_5b27c0);

#define public_4250ec _public_4250ec
#define public_425112 _public_425112
#define public_42512b _public_42512b
#define public_425138 _public_425138

PROC_DECLARE(0x425080, internal_425080, public_425080);
extern "C" NAKED register_t __cdecl internal_425080()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [ecx+0x28]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xE8]
        push 0xB60
        call public_421ed0
        push 1
        call public_422190
        push 0xBE2
        call public_421ed0
        push 0xB71
        call public_421dd0
        push 4
        call public_422120
        push 0xB44
        call public_421dd0
        mov al, byte ptr ds : [public_67ecbc]
        add esp, 0x18
        test al, al
        je public_4250ec
        push 1
        call public_5b27c0
        add esp, 4
        public_4250ec : nop
        mov eax, dword ptr ds : [public_610848]
        cmp dword ptr ds : [public_61084c], eax
        je public_425138
        cmp eax, 0x18
        jne public_425112
        push 0x30000
        push 0x20000
        call dword ptr ds : [public_5c70cc]
        add esp, 8
        ret 
        public_425112 : nop
        cmp eax, 0x35
        jne public_42512b
        push 0x30000
        push 0x10000
        call dword ptr ds : [public_5c70cc]
        add esp, 8
        ret 
        public_42512b : nop
        push 0
        push 0
        call dword ptr ds : [public_5c70cc]
        add esp, 8
        public_425138 : nop
        ret 
        UNREACHABLE_TRAP(0x425080)
    }
}

#undef public_4250ec
#undef public_425112
#undef public_42512b
#undef public_425138
