#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f428b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f496cc _public_6f496cc
#define public_6f49787 _public_6f49787
#define public_6f497a3 _public_6f497a3

PROC_DECLARE(0x6f496a0, internal_6f496a0, public_6f496a0);
extern "C" NAKED register_t __cdecl internal_6f496a0()
{
    __asm
    {
        sub esp, 0x78
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x84]
        test esi, esi
        mov ebx, ecx
        mov dword ptr ds : [ebx+4], esi
        je public_6f497a3
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f496cc
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f496cc : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ds:[esi+0x24]
        push edx
        push esi
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x20]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x30]
        fld dword ptr ss : [esp+0x28]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fchs 
        fstp dword ptr ss : [esp]
        call public_6f22d50
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+8]
        push eax
        mov eax, dword ptr ds : [esi+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push eax
        mov eax, dword ptr ds : [esi+0x18]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        push edx
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x54]
        call public_6f428b0
        fld dword ptr ds : [ebx+0x54]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, 9
        lea esi, ss:[esp+0x30]
        lea edi, ss:[esp+0x54]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x78], eax
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        mov dword ptr ss : [esp+0x7C], ecx
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x80], edx
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x14], 0
        pop edi
        jne public_6f49787
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f49787 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        lea edx, ss:[esp+0x54]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ebx+0x54], eax
        public_6f497a3 : nop
        pop esi
        pop ebx
        add esp, 0x78
        ret 4
        UNREACHABLE_TRAP(0x6f496a0)
    }
}

#undef public_6f496cc
#undef public_6f49787
#undef public_6f497a3
