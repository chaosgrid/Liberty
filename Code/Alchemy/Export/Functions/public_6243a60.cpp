#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_6217ab0);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_6243c50);

#define public_6243b00 _public_6243b00
#define public_6243ba6 _public_6243ba6
#define public_6243bde _public_6243bde
#define public_6243c2a _public_6243c2a
#define public_6243c2c _public_6243c2c

PROC_DECLARE(0x6243a60, internal_6243a60, public_6243a60);
extern "C" NAKED register_t __cdecl internal_6243a60()
{
    __asm
    {
        sub esp, 0x9C
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0xB4]
        mov ecx, edi
        call public_6206c70
        mov ebx, dword ptr ss : [esp+0xA8]
        xor eax, eax
        mov dword ptr ds : [edi+0x2C], eax
        mov dword ptr ds : [edi+0x28], eax
        mov dword ptr ds : [edi+0x24], eax
        mov eax, dword ptr ds : [ebx+8]
        cmp eax, 0x1FF
        je public_6243c2c
        and eax, 0x38
        push ebp
        mov ebp, dword ptr ss : [esp+0xB4]
        push esi
        mov esi, dword ptr ss : [esp+0xB4]
        cmp al, 0x38
        je public_6243b00
        mov eax, dword ptr ds : [ebx+0x1C]
        mov ecx, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [eax]
        push ebp
        push esi
        push eax
        mov dword ptr ss : [esp+0x20], edx
        call dword ptr ds : [ecx+0x1C]
        push ebp
        push esi
        mov eax, dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x1C]
        push ebp
        push esi
        mov eax, dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x1C]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        push eax
        push ecx
        mov ecx, edi
        call public_6243c50
        public_6243b00 : nop
        mov edx, dword ptr ds : [ebx+8]
        and edx, 0x1C0
        cmp edx, 0x1C0
        je public_6243bde
        lea ecx, ss:[esp+0x1C]
        call public_6206c70
        mov eax, dword ptr ds : [ebx+0x24]
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov ecx, dword ptr ds : [eax]
        push ebp
        push esi
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ebx+0x28]
        mov dword ptr ss : [esp+0x28], 0
        fstp dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x34], 0
        mov edx, dword ptr ds : [eax]
        push ebp
        push esi
        push eax
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [ebx+0x2C]
        mov dword ptr ss : [esp+0x20], 0
        fstp dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x38], 0
        mov ecx, dword ptr ds : [eax]
        push ebp
        push esi
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [public_6257c58]
        mov dword ptr ss : [esp+0x24], 0
        fstp dword ptr ss : [esp+0x3C]
        test eax, eax
        mov dword ptr ss : [esp+0x30], 0
        jne public_6243ba6
        call public_623e830
        mov dword ptr ds : [public_6257c58], eax
        public_6243ba6 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push edi
        push ecx
        lea ecx, ss:[esp+0x54]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        lea edx, ss:[esp+0x4C]
        lea ecx, ss:[esp+0x7C]
        push edx
        call public_6217ab0
        mov ecx, 0xC
        lea esi, ss:[esp+0x7C]
        rep movsd
        mov esi, dword ptr ss : [esp+0xB4]
        mov edi, dword ptr ss : [esp+0xBC]
        public_6243bde : nop
        mov eax, dword ptr ds : [ebx+8]
        and eax, 7
        cmp al, 7
        je public_6243c2a
        mov eax, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [ebx+0x10]
        mov ebx, dword ptr ds : [ebx+0xC]
        push ebp
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        mov dword ptr ss : [esp+0x1C], ecx
        call dword ptr ds : [edx+0x1C]
        push ebp
        push esi
        mov eax, dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ebx]
        push ebp
        fstp dword ptr ss : [esp+0x14]
        push esi
        push ebx
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [edi+0x24]
        mov dword ptr ds : [edi+0x28], eax
        mov dword ptr ds : [edi+0x2C], ecx
        public_6243c2a : nop
        pop esi
        pop ebp
        public_6243c2c : nop
        pop edi
        xor eax, eax
        pop ebx
        add esp, 0x9C
        ret 0x10
        UNREACHABLE_TRAP(0x6243a60)
    }
}

#undef public_6243b00
#undef public_6243ba6
#undef public_6243bde
#undef public_6243c2a
#undef public_6243c2c
