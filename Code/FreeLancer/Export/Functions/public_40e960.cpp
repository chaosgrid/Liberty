#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e960);
CLANG_FORWARD_PROC_SYMBOL(public_42e080);

#define public_40e96f _public_40e96f
#define public_40e97b _public_40e97b

PROC_DECLARE(0x40e960, internal_40e960, public_40e960);
extern "C" NAKED register_t __cdecl internal_40e960()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_40e96f
        call public_42e080
        public_40e96f : nop
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_40e97b
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        public_40e97b : nop
        mov eax, dword ptr ds : [esi+0x54]
        inc eax
        mov dword ptr ds : [esi+0x54], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40e960)
    }
}

#undef public_40e96f
#undef public_40e97b
