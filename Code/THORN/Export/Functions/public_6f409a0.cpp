#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f409a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f428b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f409de _public_6f409de
#define public_6f40a74 _public_6f40a74
#define public_6f40a99 _public_6f40a99

PROC_DECLARE(0x6f409a0, internal_6f409a0, public_6f409a0);
extern "C" NAKED register_t __cdecl internal_6f409a0()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6f40a99
        mov ecx, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ds : [eax]
        lea ebx, ds:[ecx+8]
        push ebx
        push eax
        call dword ptr ds : [edx+0x14]
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_6f40a99
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f409de
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f409de : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ds:[esi+0x24]
        push edx
        push esi
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x20]
        fchs 
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
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x30]
        push edx
        mov edx, dword ptr ds : [esi]
        fchs 
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x38]
        push eax
        push ecx
        fchs 
        fstp dword ptr ss : [esp+0x34]
        push edx
        lea ecx, ss:[esp+0x48]
        call public_6f428b0
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, 9
        lea esi, ss:[esp+0x24]
        lea edi, ss:[esp+0x48]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        mov dword ptr ss : [esp+0x70], ecx
        mov dword ptr ss : [esp+0x74], edx
        pop edi
        jne public_6f40a74
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f40a74 : nop
        mov ecx, dword ptr ds : [eax]
        push ebx
        lea edx, ss:[esp+0x48]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        public_6f40a99 : nop
        pop esi
        pop ebx
        add esp, 0x6C
        ret 4
        UNREACHABLE_TRAP(0x6f409a0)
    }
}

#undef public_6f409de
#undef public_6f40a74
#undef public_6f40a99
