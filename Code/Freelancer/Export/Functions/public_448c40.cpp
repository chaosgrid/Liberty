#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_447b60);
CLANG_FORWARD_PROC_SYMBOL(public_447bb0);
CLANG_FORWARD_PROC_SYMBOL(public_447be0);
CLANG_FORWARD_PROC_SYMBOL(public_448c40);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_448d0f _public_448d0f
#define public_448e1e _public_448e1e

PROC_DECLARE(0x448c40, internal_448c40, public_448c40);
extern "C" NAKED register_t __cdecl internal_448c40()
{
    __asm
    {
        sub esp, 0x174
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        mov ebx, dword ptr ss : [esp+0x17C]
        push esi
        push edi
        push ebx
        push eax
        call dword ptr ds : [ecx+0x64]
/*FIXUP push offset public_5cbe50 @0x448c5e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbe50
        mov esi, eax
        mov dword ptr ss : [esp+0x10], offset public_5cbe50
        call dword ptr ds : [public_5c6d14]
        mov edx, dword ptr ds : [public_5c6d5c]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x48]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0xC]
        test al, al
        jne public_448d0f
        mov dword ptr ss : [esp+0xC], 0
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x50], ecx
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x78], 0x3F800000
        mov dword ptr ss : [esp+0x68], 0x3F800000
        mov dword ptr ss : [esp+0x58], 0x3F800000
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x5C], 0
        public_448d0f : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, 9
        lea esi, ss:[esp+0x58]
        lea edi, ss:[esp+0x18]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x3C], edx
        lea edx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x40], eax
        push edx
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x48], ecx
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_447be0
        lea ecx, ss:[esp+0x9C]
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push eax
        mov eax, dword ptr ss : [esp+0x38]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0xF0]
        call public_447b60
        lea edx, ss:[esp+0x90]
        push edx
        lea eax, ss:[esp+0xD0]
        push eax
        lea ecx, ss:[esp+0x158]
        call public_447bb0
        mov eax, dword ptr ss : [esp+0x188]
        mov edx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+0xC]
        mov ecx, 9
        lea edi, ss:[esp+0x9C]
        rep movsd
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC8], eax
        mov eax, dword ptr ds : [public_668aac]
        test eax, eax
        mov dword ptr ss : [esp+0xC0], ecx
        mov dword ptr ss : [esp+0xC4], edx
        jne public_448e1e
        call public_5b73e0
        mov dword ptr ds : [public_668aac], eax
        public_448e1e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x150]
        push edx
        lea edx, ss:[esp+0xA0]
        push edx
        lea edx, ss:[esp+0xF8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [public_5c6d90]
        lea edx, ss:[esp+0x120]
        push edx
        mov ecx, 0xC
        lea esi, ss:[esp+0xF4]
        lea edi, ss:[esp+0x124]
        rep movsd
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push ebx
        push eax
        call dword ptr ds : [ecx+0x6C]
        pop edi
        pop esi
        pop ebx
        add esp, 0x174
        ret 
        UNREACHABLE_TRAP(0x448c40)
    }
}

#undef public_448d0f
#undef public_448e1e
