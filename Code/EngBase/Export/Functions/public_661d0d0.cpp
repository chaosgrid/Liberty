#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d0d0);

#define public_661d0e5 _public_661d0e5

PROC_DECLARE(0x661d0d0, internal_661d0d0, public_661d0d0);
extern "C" NAKED register_t __cdecl internal_661d0d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x400]
        test eax, eax
        je public_661d0e5
        dec eax
        mov dword ptr ds : [ecx+0x400], eax
        mov eax, dword ptr ds : [ecx+eax*4]
        ret 
        public_661d0e5 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x661d0d0)
    }
}

#undef public_661d0e5
