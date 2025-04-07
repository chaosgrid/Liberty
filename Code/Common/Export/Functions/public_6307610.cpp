#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6307649 _public_6307649

PROC_DECLARE(0x6307610, internal_6307610, public_6307610);
extern "C" NAKED register_t __cdecl internal_6307610()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax]
        push esi
        mov esi, ecx
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_63fceb8]
        test eax, eax
        fsub dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0xC]
        jne public_6307649
        call public_6391cf0
        mov dword ptr ds : [public_63fceb8], eax
        public_6307649 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        add esi, 0xC
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6307610)
    }
}

#undef public_6307649
