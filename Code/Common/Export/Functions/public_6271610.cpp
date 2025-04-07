#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271610);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);

#define public_6271649 _public_6271649

PROC_DECLARE(0x6271610, internal_6271610, public_6271610);
extern "C" NAKED register_t __cdecl internal_6271610()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push esi
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        mov ecx, offset public_63fbb94
        xor esi, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_6301640
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_63fbb98]
        je public_6271649
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6271649
        mov eax, dword ptr ds : [eax+0x48]
        pop esi
        pop ecx
        ret 
        public_6271649 : nop
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6271610)
    }
}

#undef public_6271649
