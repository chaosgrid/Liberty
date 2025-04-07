#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627c690);

#define public_627c70c _public_627c70c

PROC_DECLARE(0x627c6e0, internal_627c6e0, public_627c6e0);
extern "C" NAKED register_t __cdecl internal_627c6e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_627c690
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_627c70c
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [esi+4], eax
        pop esi
        ret 4
        public_627c70c : nop
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x627c6e0)
    }
}

#undef public_627c70c
