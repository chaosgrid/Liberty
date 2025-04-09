#include "FreeLancer-PCH.h"


#define public_4315ad _public_4315ad
#define public_431623 _public_431623

PROC_DECLARE(0x431590, internal_431590, public_431590);
extern "C" NAKED register_t __cdecl internal_431590()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x34]
        sub esp, 0x38
        test eax, eax
        je public_431623
        mov eax, dword ptr ds : [ecx+0x30]
        test eax, eax
        mov edx, dword ptr ds : [public_5c7078]
        je public_4315ad
        mov edx, eax
        public_4315ad : nop
        push edi
        xor eax, eax
        mov dword ptr ss : [esp+0xC], offset public_5c7388
        mov ecx, 0xB
        lea edi, ss:[esp+0x10]
        rep stosd
        mov eax, dword ptr ds : [public_5c6dd8]
        mov dword ptr ss : [esp+0x14], edx
        lea edx, ss:[esp+4]
        push edx
        mov dword ptr ss : [esp+0x1C], 0x80000000
        mov dword ptr ss : [esp+0x20], 1
        mov dword ptr ss : [esp+0x28], 3
        mov dword ptr ss : [esp+0x2C], 0x8000080
        mov dword ptr ss : [esp+0xC], 0x34
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], offset public_5c944c
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        pop edi
        jne public_431623
        mov eax, dword ptr ss : [esp]
        add esp, 0x38
        ret 
        public_431623 : nop
        xor eax, eax
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x431590)
    }
}

#undef public_4315ad
#undef public_431623
