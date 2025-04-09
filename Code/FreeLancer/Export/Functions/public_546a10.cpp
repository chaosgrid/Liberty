#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_546a39 _public_546a39
#define public_546a3e _public_546a3e
#define public_546a59 _public_546a59
#define public_546a7f _public_546a7f
#define public_546a81 _public_546a81
#define public_546ad2 _public_546ad2
#define public_546ae0 _public_546ae0
#define public_546b1f _public_546b1f
#define public_546b2b _public_546b2b
#define public_546b3a _public_546b3a

PROC_DECLARE(0x546a10, internal_546a10, public_546a10);
extern "C" NAKED register_t __cdecl internal_546a10()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        cmp esi, 0xFFFFFFFF
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov edi, 0xFFFFFFFB
        je public_546a39
        call public_54bb00
        cmp esi, eax
        mov byte ptr ss : [esp+0x28], 0
        jne public_546a3e
        public_546a39 : nop
        mov byte ptr ss : [esp+0x28], 1
        public_546a3e : nop
        mov byte ptr ss : [esp+0x13], 0
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_546a59
        mov al, byte ptr ss : [esp+0x28]
        test al, al
        je public_546b3a
        public_546a59 : nop
        lea edi, ss:[ebp-4]
        test edi, edi
        je public_546a7f
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_546a7f
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_546a7f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_546a81
        public_546a7f : nop
        xor eax, eax
        public_546a81 : nop
        push 0x20000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c649c]
        push eax
        call dword ptr ds : [public_5c6498]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_546b2b
        mov ebx, dword ptr ss : [esp+0x20]
        cmp byte ptr ds : [esi+0x54], bl
        je public_546ae0
        test bl, bl
        mov byte ptr ss : [esp+0x13], 1
        je public_546ad2
        mov al, byte ptr ss : [esp+0x28]
        test al, al
        je public_546ad2
        mov ebp, dword ptr ss : [ebp]
        call public_54bb00
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push 0
        call dword ptr ss : [ebp+0x54]
        public_546ad2 : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6b18]
        public_546ae0 : nop
        mov al, byte ptr ss : [esp+0x13]
        xor esi, esi
        test al, al
        je public_546b1f
        mov al, byte ptr ss : [esp+0x28]
        test al, al
        je public_546b1f
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        mov cl, byte ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x19], cl
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        mov eax, dword ptr ds : [public_673344]
        mov byte ptr ss : [esp+0x1C], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        public_546b1f : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_546b2b : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        add esp, 0xC
        ret 0xC
        public_546b3a : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x546a10)
    }
}

#undef public_546a39
#undef public_546a3e
#undef public_546a59
#undef public_546a7f
#undef public_546a81
#undef public_546ad2
#undef public_546ae0
#undef public_546b1f
#undef public_546b2b
#undef public_546b3a
