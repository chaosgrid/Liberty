#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ca480);

#define public_4ca4a7 _public_4ca4a7

PROC_DECLARE(0x4ca480, internal_4ca480, public_4ca480);
extern "C" NAKED register_t __cdecl internal_4ca480()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ds : [ecx]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        mov dword ptr ss : [esp], eax
        je public_4ca4a7
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push esi
        lea esi, ss:[esp+4]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x48]
        mov eax, dword ptr ss : [esp+4]
        pop esi
        public_4ca4a7 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4ca480)
    }
}

#undef public_4ca4a7
