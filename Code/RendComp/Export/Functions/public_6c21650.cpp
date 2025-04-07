#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c25730);
CLANG_FORWARD_PROC_SYMBOL(public_6c258c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c29360);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a060);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a270);

#define public_6c21662 _public_6c21662
#define public_6c2166c _public_6c2166c
#define public_6c2168f _public_6c2168f
#define public_6c216b1 _public_6c216b1
#define public_6c216ba _public_6c216ba
#define public_6c216d9 _public_6c216d9
#define public_6c2170f _public_6c2170f
#define public_6c21727 _public_6c21727
#define public_6c21757 _public_6c21757

PROC_DECLARE(0x6c21650, internal_6c21650, public_6c21650);
extern "C" NAKED register_t __cdecl internal_6c21650()
{
    __asm
    {
        sub esp, 0x20
        push ebp
        mov ebp, dword ptr ss : [esp+0x30]
        cmp ebp, 0xFFFFFFFF
        push esi
        je public_6c21662
        test ebp, ebp
        jne public_6c2166c
        public_6c21662 : nop
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x20
        ret 0xC
        public_6c2166c : nop
        mov esi, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi+4]
        mov al, byte ptr ds : [esi+0x28]
        inc ecx
        test al, al
        mov dword ptr ds : [esi+4], ecx
        je public_6c2168f
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [esp+0x30]
        jne public_6c2168f
        inc dword ptr ds : [esi+8]
        jmp public_6c216b1
        public_6c2168f : nop
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ds:[esi+0xC]
        call public_6c2a270
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, dword ptr ds : [esi+0x10]
        je public_6c216ba
        mov dword ptr ds : [esi+0x24], eax
        mov byte ptr ds : [esi+0x28], 1
        public_6c216b1 : nop
        cmp eax, dword ptr ds : [esi+0x10]
        jne public_6c21757
        public_6c216ba : nop
        mov edx, dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x34]
        push ecx
        push edx
        mov ecx, ebp
        call public_6c25730
        test eax, eax
        jge public_6c216d9
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x20
        ret 0xC
        public_6c216d9 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        push edi
        mov edi, dword ptr ds : [esi+0x10]
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        push edx
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        lea ecx, ds:[esi+0xC]
        call public_6c2a060
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+0x10]
        je public_6c2170f
        mov dword ptr ds : [esi+0x24], eax
        mov byte ptr ds : [esi+0x28], 1
        public_6c2170f : nop
        cmp eax, edi
        pop edi
        jne public_6c21727
        mov ecx, dword ptr ss : [esp+0x34]
        call public_6c29360
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x20
        ret 0xC
        public_6c21727 : nop
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebp
        call public_6c258c0
        mov eax, dword ptr ds : [public_6c37d4c]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0x84]
        public_6c21757 : nop
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0x20
        ret 0xC
        UNREACHABLE_TRAP(0x6c21650)
    }
}

#undef public_6c21662
#undef public_6c2166c
#undef public_6c2168f
#undef public_6c216b1
#undef public_6c216ba
#undef public_6c216d9
#undef public_6c2170f
#undef public_6c21727
#undef public_6c21757
