#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_575970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_57598e _public_57598e
#define public_575992 _public_575992
#define public_5759c1 _public_5759c1
#define public_5759e9 _public_5759e9
#define public_5759ff _public_5759ff
#define public_575a1e _public_575a1e
#define public_575a2a _public_575a2a
#define public_575a3e _public_575a3e
#define public_575a51 _public_575a51
#define public_575a6d _public_575a6d
#define public_575a84 _public_575a84
#define public_575a97 _public_575a97
#define public_575abc _public_575abc
#define public_575ad2 _public_575ad2
#define public_575af2 _public_575af2
#define public_575b00 _public_575b00
#define public_575b15 _public_575b15
#define public_575b29 _public_575b29
#define public_575b44 _public_575b44
#define public_575b5c _public_575b5c
#define public_575b6e _public_575b6e

PROC_DECLARE(0x575970, internal_575970, public_575970);
extern "C" NAKED register_t __cdecl internal_575970()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp dword ptr ss : [esp+4], eax
        je public_575b6e
        mov ecx, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        push edi
        lea esi, ds:[ecx+8]
        lea ebp, ds:[eax+8]
        jmp public_575992
        public_57598e : nop
        mov eax, dword ptr ss : [esp+0x18]
        public_575992 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax-0x24]
        sub eax, 0x24
        sub ecx, 0x24
        sub ebp, 0x24
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov edi, ecx
        sub esi, 0x24
        cmp eax, edi
        jae public_5759c1
        mov edi, eax
        public_5759c1 : nop
        lea edx, ss:[ebp-4]
        lea ebx, ds:[esi-4]
        cmp ebx, edx
        jne public_5759e9
        push eax
        lea ebx, ds:[esi-4]
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_5c6f8c]
        push 0
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_5c6f8c]
        jmp public_575a84
        public_5759e9 : nop
        xor ebx, ebx
        cmp edi, ebx
        jbe public_575a51
        cmp edi, ecx
        jne public_575a51
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebx
        jne public_5759ff
        mov eax, dword ptr ds : [public_5c700c]
        public_5759ff : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_575a51
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        je public_575a2a
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_575a1e
        cmp cl, 0xFF
        je public_575a1e
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_575a2a
        public_575a1e : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_575a2a : nop
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebx
        jne public_575a3e
        mov eax, dword ptr ds : [public_5c700c]
        public_575a3e : nop
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], edx
        inc byte ptr ds : [eax-1]
        jmp public_575a84
        public_575a51 : nop
        push 1
        lea ecx, ds:[esi-4]
        push edi
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_575a84
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        jne public_575a6d
        mov eax, dword ptr ds : [public_5c700c]
        public_575a6d : nop
        push edi
        push eax
        mov eax, dword ptr ds : [esi]
        push eax
        call public_41d8a0
        add esp, 0xC
        push edi
        lea ecx, ds:[esi-4]
        call dword ptr ds : [public_5c7054]
        public_575a84 : nop
        mov ecx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edi, ecx
        cmp eax, edi
        jae public_575a97
        mov edi, eax
        public_575a97 : nop
        lea ebx, ds:[esi+0xC]
        lea edx, ss:[ebp+0xC]
        cmp ebx, edx
        jne public_575abc
        push eax
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_5c6f8c]
        push 0
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_5c6f8c]
        jmp public_575b5c
        public_575abc : nop
        xor edx, edx
        cmp edi, edx
        jbe public_575b29
        cmp edi, ecx
        jne public_575b29
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, edx
        jne public_575ad2
        mov eax, dword ptr ds : [public_5c700c]
        public_575ad2 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_575b29
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, edx
        je public_575b00
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_575af2
        cmp cl, 0xFF
        je public_575af2
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_575b00
        public_575af2 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        xor edx, edx
        public_575b00 : nop
        mov dword ptr ds : [esi+0x10], edx
        mov dword ptr ds : [esi+0x14], edx
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, edx
        jne public_575b15
        mov eax, dword ptr ds : [public_5c700c]
        public_575b15 : nop
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [esi+0x18], edx
        inc byte ptr ds : [eax-1]
        jmp public_575b5c
        public_575b29 : nop
        push 1
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_575b5c
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jne public_575b44
        mov eax, dword ptr ds : [public_5c700c]
        public_575b44 : nop
        push edi
        push eax
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call public_41d8a0
        add esp, 0xC
        push edi
        lea ecx, ds:[esi+0xC]
        call dword ptr ds : [public_5c7054]
        public_575b5c : nop
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ss : [esp+0x14]
        jne public_57598e
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_575b6e : nop
        mov eax, dword ptr ss : [esp+0xC]
        ret 
        UNREACHABLE_TRAP(0x575970)
    }
}

#undef public_57598e
#undef public_575992
#undef public_5759c1
#undef public_5759e9
#undef public_5759ff
#undef public_575a1e
#undef public_575a2a
#undef public_575a3e
#undef public_575a51
#undef public_575a6d
#undef public_575a84
#undef public_575a97
#undef public_575abc
#undef public_575ad2
#undef public_575af2
#undef public_575b00
#undef public_575b15
#undef public_575b29
#undef public_575b44
#undef public_575b5c
#undef public_575b6e
