#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627c690);

#define public_627c78b _public_627c78b

PROC_DECLARE(0x627c760, internal_627c760, public_627c760);
extern "C" NAKED register_t __cdecl internal_627c760()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_627c690
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_627c78b
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 4
        public_627c78b : nop
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x627c760)
    }
}

#undef public_627c78b
