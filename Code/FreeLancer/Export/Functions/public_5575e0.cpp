#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5575e0);

#define public_557602 _public_557602
#define public_557624 _public_557624

PROC_DECLARE(0x5575e0, internal_5575e0, public_5575e0);
extern "C" NAKED register_t __cdecl internal_5575e0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6799c0]
        test ecx, ecx
        je public_557602
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [public_6799c0], 0
        public_557602 : nop
        mov ecx, dword ptr ds : [public_6799c4]
        test ecx, ecx
        je public_557624
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov dword ptr ds : [public_6799c4], 0
        public_557624 : nop
        ret 
        UNREACHABLE_TRAP(0x5575e0)
    }
}

#undef public_557602
#undef public_557624
