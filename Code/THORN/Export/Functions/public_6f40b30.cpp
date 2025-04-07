#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f40b30);
CLANG_FORWARD_PROC_SYMBOL(public_6f428b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f40b6e _public_6f40b6e
#define public_6f40c0e _public_6f40c0e
#define public_6f40c2d _public_6f40c2d

PROC_DECLARE(0x6f40b30, internal_6f40b30, public_6f40b30);
extern "C" NAKED register_t __cdecl internal_6f40b30()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6f40c2d
        mov ecx, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ds : [eax]
        lea ebx, ds:[ecx+0x14]
        push ebx
        push eax
        call dword ptr ds : [edx+0x18]
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_6f40c2d
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f40b6e
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f40b6e : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ds:[esi+0x24]
        push edx
        push esi
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x14]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x24]
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
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
        lea ecx, ss:[esp+0x48]
        call public_6f428b0
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x24]
        lea edi, ss:[esp+0x48]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        mov dword ptr ss : [esp+0x70], ecx
        mov dword ptr ss : [esp+0x74], edx
        jne public_6f40c0e
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f40c0e : nop
        mov ecx, dword ptr ds : [eax]
        push ebx
        lea edx, ss:[esp+0x4C]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x24]
        mov edi, ebx
        rep movsd
        pop edi
        public_6f40c2d : nop
        pop esi
        pop ebx
        add esp, 0x6C
        ret 4
        UNREACHABLE_TRAP(0x6f40b30)
    }
}

#undef public_6f40b6e
#undef public_6f40c0e
#undef public_6f40c2d
