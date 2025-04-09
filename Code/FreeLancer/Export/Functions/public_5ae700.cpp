#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ae700);
CLANG_FORWARD_PROC_SYMBOL(public_5afe60);

#define public_5ae72b _public_5ae72b

PROC_DECLARE(0x5ae700, internal_5ae700, public_5ae700);
extern "C" NAKED register_t __cdecl internal_5ae700()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5afe60
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_5ae72b
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 4
        public_5ae72b : nop
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5ae700)
    }
}

#undef public_5ae72b
