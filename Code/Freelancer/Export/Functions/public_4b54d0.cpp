#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b59b0);
CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_5a1c50);
CLANG_FORWARD_PROC_SYMBOL(public_5b0880);

#define public_4b55be _public_4b55be

PROC_DECLARE(0x4b54d0, internal_4b54d0, public_4b54d0);
extern "C" NAKED register_t __cdecl internal_4b54d0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        push eax
        push esi
        call public_59dd00
        push esi
        call public_59dbf0
        mov cl, byte ptr ds : [esi+0x6C]
        and cl, 0xFB
        or cl, 3
        mov byte ptr ds : [esi+0x6C], cl
        add esp, 0xC
        mov ecx, esi
        call public_5a1c50
        mov dl, byte ptr ds : [esi+0x6C]
        mov eax, 0x3DCCCCCD
        mov dword ptr ds : [esi+0xB4], eax
        mov dword ptr ds : [esi+0xB8], eax
        mov al, 0x43
        mov byte ptr ss : [esp+0x14], al
        mov byte ptr ss : [esp+0x15], al
        mov byte ptr ss : [esp+0x16], al
        and dl, 0xFD
        mov al, 0xFF
        mov byte ptr ss : [esp+0x17], al
        mov byte ptr ds : [esi+0x6C], dl
        mov edx, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0x17], al
        mov byte ptr ss : [esp+0x14], 0x87
        mov byte ptr ss : [esp+0x15], 0xC3
        mov byte ptr ss : [esp+0x16], 0xE0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x78], 7
        mov byte ptr ds : [esi+0xE0], 0
        mov dword ptr ds : [esi+0xB0], 0x3A902DE0
        mov byte ptr ds : [esi+0xE1], 1
        mov dword ptr ds : [esi+0xD8], edx
        mov dword ptr ds : [esi+0xCC], eax
        call public_5b0880
        test al, al
        mov dword ptr ss : [esp+0xC], 0xBF800000
        mov dword ptr ss : [esp+8], 0x3EC51EB8
        je public_4b55be
        fld dword ptr ds : [esi+0x188]
        mov eax, dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+4]
        lea ecx, ds:[esi+0x16C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov ecx, esi
        call public_4b59b0
        mov al, 1
        pop esi
        add esp, 0xC
        ret 8
        public_4b55be : nop
        fld dword ptr ds : [esi+0x184]
        mov edx, dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+4]
        lea eax, ds:[esi+0x16C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esi
        call public_4b59b0
        mov al, 1
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x4b54d0)
    }
}

#undef public_4b55be
