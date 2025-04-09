#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);

#define public_5a0b55 _public_5a0b55

PROC_DECLARE(0x5a0a70, internal_5a0a70, public_5a0a70);
extern "C" NAKED register_t __cdecl internal_5a0a70()
{
    __asm
    {
        sub esp, 0x80
        push ebx
        mov ebx, ecx
        push esi
        lea ecx, ds:[ebx+0x80]
        call public_420d60
        test al, al
        je public_5a0b55
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x64]
        mov esi, eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov eax, dword ptr ss : [esp+0x8C]
        push eax
        mov dword ptr ss : [esp+0xC], eax
        call dword ptr ds : [public_5c6d14]
        mov edx, dword ptr ds : [public_5c6d5c]
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0xC]
        test al, al
        je public_5a0b55
        mov eax, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x4C]
        push edi
        mov ecx, 9
        lea esi, ss:[esp+0x54]
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+0x3C], ecx
        mov edi, eax
        mov ecx, 0xC
        lea esi, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x40], edx
        rep movsd
        fld dword ptr ds : [ebx+0xA8]
        fadd dword ptr ds : [eax+0x24]
        fstp dword ptr ds : [eax+0x24]
        fld dword ptr ds : [ebx+0xAC]
        fadd dword ptr ds : [eax+0x28]
        fstp dword ptr ds : [eax+0x28]
        fld dword ptr ds : [ebx+0xB0]
        fadd dword ptr ds : [eax+0x2C]
        pop edi
        pop esi
        pop ebx
        fstp dword ptr ds : [eax+0x2C]
        mov al, 1
        add esp, 0x80
        ret 8
        public_5a0b55 : nop
        mov eax, dword ptr ss : [esp+0x90]
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        fld dword ptr ds : [ebx+0xA8]
        fadd dword ptr ds : [eax+0x24]
        pop esi
        fstp dword ptr ds : [eax+0x24]
        fld dword ptr ds : [ebx+0xAC]
        fadd dword ptr ds : [eax+0x28]
        fstp dword ptr ds : [eax+0x28]
        fld dword ptr ds : [ebx+0xB0]
        pop ebx
        fadd dword ptr ds : [eax+0x2C]
        fstp dword ptr ds : [eax+0x2C]
        xor al, al
        add esp, 0x80
        ret 8
        UNREACHABLE_TRAP(0x5a0a70)
    }
}

#undef public_5a0b55
