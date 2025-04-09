#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5abc60);

#define public_5abc7e _public_5abc7e

PROC_DECLARE(0x5abc60, internal_5abc60, public_5abc60);
extern "C" NAKED register_t __cdecl internal_5abc60()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x234]
        test ecx, ecx
        je public_5abc7e
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x234], 0
        public_5abc7e : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5abc60)
    }
}

#undef public_5abc7e
