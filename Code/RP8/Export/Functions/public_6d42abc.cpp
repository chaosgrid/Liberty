#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42abc);

#define public_6d42aeb _public_6d42aeb
#define public_6d42afa _public_6d42afa
#define public_6d42b00 _public_6d42b00
#define public_6d42b04 _public_6d42b04
#define public_6d42b08 _public_6d42b08
#define public_6d42b17 _public_6d42b17
#define public_6d42b27 _public_6d42b27
#define public_6d42b3a _public_6d42b3a
#define public_6d42b4c _public_6d42b4c
#define public_6d42b5c _public_6d42b5c
#define public_6d42b6f _public_6d42b6f
#define public_6d42b73 _public_6d42b73
#define public_6d42b7b _public_6d42b7b
#define public_6d42b8a _public_6d42b8a
#define public_6d42b8d _public_6d42b8d

PROC_DECLARE(0x6d42abc, internal_6d42abc, public_6d42abc);
extern "C" NAKED register_t __cdecl internal_6d42abc()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        xor ebx, ebx
        test byte ptr ds : [eax+0x61], 0x10
        je public_6d42b08
        mov dl, byte ptr ds : [ecx+0x19]
        cmp dl, 3
        jne public_6d42aeb
        cmp word ptr ds : [eax+0x10A], bx
        setne dl
        lea edx, ds:[edx*4+2]
        mov byte ptr ds : [ecx+0x19], dl
        jmp public_6d42b00
        public_6d42aeb : nop
        cmp word ptr ds : [eax+0x10A], bx
        je public_6d42afa
        or dl, 4
        mov byte ptr ds : [ecx+0x19], dl
        public_6d42afa : nop
        cmp byte ptr ds : [ecx+0x18], 8
        jae public_6d42b04
        public_6d42b00 : nop
        mov byte ptr ds : [ecx+0x18], 8
        public_6d42b04 : nop
        mov word ptr ds : [ecx+0x16], bx
        public_6d42b08 : nop
        test byte ptr ds : [eax+0x61], 0x20
        je public_6d42b17
        mov edx, dword ptr ds : [eax+0x130]
        mov dword ptr ds : [ecx+0x28], edx
        public_6d42b17 : nop
        test byte ptr ds : [eax+0x61], 4
        je public_6d42b27
        cmp byte ptr ds : [ecx+0x18], 0x10
        jne public_6d42b27
        mov byte ptr ds : [ecx+0x18], 8
        public_6d42b27 : nop
        test byte ptr ds : [eax+0x60], 0x40
        je public_6d42b4c
        mov dl, byte ptr ds : [ecx+0x19]
        cmp dl, 2
        je public_6d42b3a
        cmp dl, 6
        jne public_6d42b4c
        public_6d42b3a : nop
        cmp dword ptr ds : [eax+0x174], ebx
        je public_6d42b4c
        cmp byte ptr ds : [ecx+0x18], 8
        jne public_6d42b4c
        mov byte ptr ds : [ecx+0x19], 3
        public_6d42b4c : nop
        test byte ptr ds : [eax+0x60], 4
        je public_6d42b5c
        cmp byte ptr ds : [ecx+0x18], 8
        jae public_6d42b5c
        mov byte ptr ds : [ecx+0x18], 8
        public_6d42b5c : nop
        mov dl, byte ptr ds : [ecx+0x19]
        cmp dl, 3
        je public_6d42b6f
        test dl, 2
        je public_6d42b6f
        mov byte ptr ds : [ecx+0x1D], 3
        jmp public_6d42b73
        public_6d42b6f : nop
        mov byte ptr ds : [ecx+0x1D], 1
        public_6d42b73 : nop
        test dl, 4
        je public_6d42b7b
        inc byte ptr ds : [ecx+0x1D]
        public_6d42b7b : nop
        test byte ptr ds : [eax+0x61], 0x80
        je public_6d42b8d
        cmp dl, 2
        je public_6d42b8a
        cmp dl, bl
        jne public_6d42b8d
        public_6d42b8a : nop
        inc byte ptr ds : [ecx+0x1D]
        public_6d42b8d : nop
        mov al, byte ptr ds : [ecx+0x18]
        imul byte ptr ds : [ecx+0x1D]
        mov byte ptr ds : [ecx+0x1E], al
        movzx eax, al
        imul eax, dword ptr ds : [ecx]
        add eax, 7
        shr eax, 3
        mov dword ptr ds : [ecx+0xC], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d42abc)
    }
}

#undef public_6d42aeb
#undef public_6d42afa
#undef public_6d42b00
#undef public_6d42b04
#undef public_6d42b08
#undef public_6d42b17
#undef public_6d42b27
#undef public_6d42b3a
#undef public_6d42b4c
#undef public_6d42b5c
#undef public_6d42b6f
#undef public_6d42b73
#undef public_6d42b7b
#undef public_6d42b8a
#undef public_6d42b8d
