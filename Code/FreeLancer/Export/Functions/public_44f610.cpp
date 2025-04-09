#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428680);
CLANG_FORWARD_PROC_SYMBOL(public_42a2a0);
CLANG_FORWARD_PROC_SYMBOL(public_44f270);
CLANG_FORWARD_PROC_SYMBOL(public_44f610);

#define public_44f630 _public_44f630
#define public_44f644 _public_44f644
#define public_44f6dc _public_44f6dc
#define public_44f6ea _public_44f6ea

PROC_DECLARE(0x44f610, internal_44f610, public_44f610);
extern "C" NAKED register_t __cdecl internal_44f610()
{
    __asm
    {
        sub esp, 0x30
        mov edx, dword ptr ds : [ecx+0xAC]
        push ebx
        xor ebx, ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+8], ebx
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        push esi
        push edi
        je public_44f644
        lea ecx, ds:[ecx]
        public_44f630 : nop
        mov edi, dword ptr ds : [eax+0x1C]
        cmp edi, ebp
        lea esi, ds:[eax+8]
        je public_44f6ea
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_44f630
        public_44f644 : nop
        lea edx, ss:[esp+0x14]
        push edx
        push ebp
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], bl
        call public_44f270
        test al, al
        je public_44f6dc
        mov al, byte ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x14]
        and al, 0xF8
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ss : [esp+0x2C], al
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        mov cl, byte ptr ss : [esp+0x2C]
        mov dl, byte ptr ss : [esp+0x25]
        shl al, 2
        xor al, cl
        and al, 4
        xor cl, al
        mov al, byte ptr ss : [esp+0x24]
        shl dl, 1
        xor dl, cl
        and dl, 2
        xor cl, dl
        xor al, cl
        and al, 1
        xor cl, al
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x34], cl
        mov ecx, dword ptr ss : [esp+0x50]
        push eax
        push esi
        mov dword ptr ss : [esp+0x38], ecx
        call public_428680
        add esp, 0x10
        public_44f6dc : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 8
        public_44f6ea : nop
        cmp esi, ebx
        je public_44f644
        mov edi, dword ptr ds : [esi+0x18]
        cmp edi, ebx
        je public_44f644
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, edi
        call public_42a2a0
        mov eax, edi
        pop edi
        mov byte ptr ds : [esi+0x1C], bl
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x44f610)
    }
}

#undef public_44f630
#undef public_44f644
#undef public_44f6dc
#undef public_44f6ea
