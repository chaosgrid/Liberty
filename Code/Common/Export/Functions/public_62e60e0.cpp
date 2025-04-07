#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);

#define public_62e6120 _public_62e6120
#define public_62e6127 _public_62e6127

PROC_DECLARE(0x62e60e0, internal_62e60e0, public_62e60e0);
extern "C" NAKED register_t __cdecl internal_62e60e0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        je public_62e6127
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+4]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x2C]
        test eax, eax
        jne public_62e6120
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0xC
        ret 
        public_62e6120 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        public_62e6127 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+8], 0
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62e60e0)
    }
}

#undef public_62e6120
#undef public_62e6127
