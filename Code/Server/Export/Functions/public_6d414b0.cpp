#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d414b0);

#define public_6d414be _public_6d414be
#define public_6d414c1 _public_6d414c1
#define public_6d414c5 _public_6d414c5

PROC_DECLARE(0x6d414b0, internal_6d414b0, public_6d414b0);
extern "C" NAKED register_t __cdecl internal_6d414b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        sub eax, 0
        je public_6d414c5
        dec eax
        je public_6d414be
        dec eax
        je public_6d414c1
        public_6d414be : nop
        xor al, al
        ret 
        public_6d414c1 : nop
        mov al, byte ptr ds : [ecx+0xE]
        ret 
        public_6d414c5 : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6d414b0)
    }
}

#undef public_6d414be
#undef public_6d414c1
#undef public_6d414c5
