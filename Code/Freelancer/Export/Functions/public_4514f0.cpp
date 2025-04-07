#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_451528 _public_451528

PROC_DECLARE(0x4514f0, internal_4514f0, public_4514f0);
extern "C" NAKED register_t __cdecl internal_4514f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        sub esp, 0x18
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        lea edi, ds:[esi+0xA4]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [public_66d11c]
        test eax, eax
        jne public_451528
        call public_5b73e0
        mov dword ptr ds : [public_66d11c], eax
        public_451528 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x74]
        push edx
        lea edx, ds:[esi+0xB0]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [edi]
        mov eax, dword ptr ds : [public_5c6d90]
        lea edx, ss:[esp+0x14]
        push edx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[esi+0x20]
        call dword ptr ds : [public_5c6270]
        mov ecx, dword ptr ds : [esi+0x64]
        mov edx, dword ptr ds : [public_5c6d90]
        push eax
        mov eax, dword ptr ds : [edx]
        push ecx
        push eax
        call dword ptr ds : [edi+0x8C]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x64]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x6C]
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x4514f0)
    }
}

#undef public_451528
