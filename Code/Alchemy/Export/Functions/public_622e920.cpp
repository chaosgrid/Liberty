#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e920);

#define public_622e92d _public_622e92d

PROC_DECLARE(0x622e920, internal_622e920, public_622e920);
extern "C" NAKED register_t __cdecl internal_622e920()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_622e92d
        dec dword ptr ds : [eax+0xE4]
        public_622e92d : nop
        ret 
        UNREACHABLE_TRAP(0x622e920)
    }
}

#undef public_622e92d
