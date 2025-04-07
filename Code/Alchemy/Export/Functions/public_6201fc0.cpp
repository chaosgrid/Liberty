#include "Alchemy-PCH.h"


#define public_6201ffa _public_6201ffa

PROC_DECLARE(0x6201fc0, internal_6201fc0, public_6201fc0);
extern "C" NAKED register_t __cdecl internal_6201fc0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xC]
        push ecx
        push esi
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        or eax, 0x80000000
        push eax
        push esi
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [edx+0x24]
        mov eax, dword ptr ds : [public_6257914]
        test eax, eax
        je public_6201ffa
        push 0
        push esi
        push 0
        call eax
        add esp, 0xC
        public_6201ffa : nop
        mov eax, dword ptr ds : [edi]
        push esi
        push edi
        call dword ptr ds : [eax+0x58]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6201fc0)
    }
}

#undef public_6201ffa
