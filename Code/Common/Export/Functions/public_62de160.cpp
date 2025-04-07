#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62de160);

#define public_62de16f _public_62de16f
#define public_62de184 _public_62de184

PROC_DECLARE(0x62de160, internal_62de160, public_62de160);
extern "C" NAKED register_t __cdecl internal_62de160()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+0x574]
        xor al, al
        cmp dl, 1
        jne public_62de16f
        mov al, 1
        public_62de16f : nop
        cmp dword ptr ds : [ecx+0x16C], 3
        je public_62de184
        mov dl, byte ptr ds : [ecx+0x180]
        test dl, dl
        je public_62de184
        mov al, 1
        public_62de184 : nop
        xor ecx, ecx
        test al, al
        sete cl
        mov al, cl
        ret 
        UNREACHABLE_TRAP(0x62de160)
    }
}

#undef public_62de16f
#undef public_62de184
