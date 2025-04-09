#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022f0);
CLANG_FORWARD_PROC_SYMBOL(public_402500);

#define public_40b41c _public_40b41c
#define public_40b42a _public_40b42a
#define public_40b456 _public_40b456
#define public_40b45b _public_40b45b
#define public_40b470 _public_40b470
#define public_40b484 _public_40b484
#define public_40b49c _public_40b49c
#define public_40b4ab _public_40b4ab

PROC_DECLARE(0x40b3f0, internal_40b3f0, public_40b3f0);
extern "C" NAKED register_t __cdecl internal_40b3f0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+4]
        mov esi, ecx
        push eax
        lea ebx, ds:[esi+4]
        push ebx
        call public_402500
        fld dword ptr ds : [edi+8]
        fcomp dword ptr ds : [esi+8]
        add esp, 8
        fnstsw ax
        test ah, 0x44
        jnp public_40b41c
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        public_40b41c : nop
        cmp dword ptr ds : [ebx], 0
        jne public_40b42a
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_40b484
        public_40b42a : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call dword ptr ds : [public_5c602c]
        test al, al
        je public_40b484
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 3
        je public_40b456
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 2
        mov byte ptr ss : [esp+0x10], 0
        jne public_40b45b
        public_40b456 : nop
        mov byte ptr ss : [esp+0x10], 1
        public_40b45b : nop
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [ecx+0x40]
        jne public_40b470
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_40b484
        public_40b470 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push 0
        push eax
        push ecx
        call public_4022f0
        fstp dword ptr ds : [esi+0xC]
        add esp, 0x10
        public_40b484 : nop
        mov al, byte ptr ds : [edi+0x54]
        cmp al, byte ptr ds : [esi+0x54]
        jne public_40b49c
        mov cl, byte ptr ds : [edi+0x55]
        cmp cl, byte ptr ds : [esi+0x55]
        jne public_40b49c
        mov dl, byte ptr ds : [edi+0x56]
        cmp dl, byte ptr ds : [esi+0x56]
        je public_40b4ab
        public_40b49c : nop
        mov byte ptr ds : [esi+0x54], al
        mov al, byte ptr ds : [edi+0x55]
        mov byte ptr ds : [esi+0x55], al
        mov cl, byte ptr ds : [edi+0x56]
        mov byte ptr ds : [esi+0x56], cl
        public_40b4ab : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40b3f0)
    }
}

#undef public_40b41c
#undef public_40b42a
#undef public_40b456
#undef public_40b45b
#undef public_40b470
#undef public_40b484
#undef public_40b49c
#undef public_40b4ab
