#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9560);
CLANG_FORWARD_PROC_SYMBOL(public_62b9d50);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);

#define public_62b6a76 _public_62b6a76
#define public_62b6a95 _public_62b6a95
#define public_62b6aa9 _public_62b6aa9
#define public_62b6ac5 _public_62b6ac5
#define public_62b6ad9 _public_62b6ad9
#define public_62b6af5 _public_62b6af5
#define public_62b6b11 _public_62b6b11
#define public_62b6b15 _public_62b6b15
#define public_62b6b32 _public_62b6b32
#define public_62b6b51 _public_62b6b51
#define public_62b6b65 _public_62b6b65
#define public_62b6b81 _public_62b6b81
#define public_62b6b95 _public_62b6b95
#define public_62b6bb1 _public_62b6bb1
#define public_62b6bcd _public_62b6bcd
#define public_62b6bd1 _public_62b6bd1
#define public_62b6bf5 _public_62b6bf5
#define public_62b6c1c _public_62b6c1c
#define public_62b6c24 _public_62b6c24
#define public_62b6c49 _public_62b6c49
#define public_62b6c65 _public_62b6c65

PROC_DECLARE(0x62b6a30, internal_62b6a30, public_62b6a30);
extern "C" NAKED register_t __cdecl internal_62b6a30()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ds:[esi+4]
        push eax
        lea ecx, ds:[edi+4]
        mov dword ptr ss : [esp+0x1C], edi
        call dword ptr ds : [public_63991a8]
        mov ecx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x1C]
        add esi, 0x14
        mov ebx, ecx
        cmp eax, ebx
        lea ebp, ds:[edi+0x14]
        jae public_62b6a76
        mov ebx, eax
        public_62b6a76 : nop
        cmp ebp, esi
        jne public_62b6a95
        push eax
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6399198]
        push 0
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6399198]
        jmp public_62b6b15
        public_62b6a95 : nop
        test ebx, ebx
        jbe public_62b6ad9
        cmp ebx, ecx
        jne public_62b6ad9
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_62b6aa9
        mov eax, dword ptr ds : [public_63991d0]
        public_62b6aa9 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_62b6ad9
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_62b6ac5
        mov eax, dword ptr ds : [public_63991d0]
        public_62b6ac5 : nop
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], edx
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_62b6b15
        public_62b6ad9 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62b6b11
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_62b6af5
        mov esi, dword ptr ds : [public_63991d0]
        public_62b6af5 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d8]
        public_62b6b11 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_62b6b15 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [public_63991c0]
        lea esi, ds:[eax+0x24]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+8]
        mov ebx, ecx
        cmp eax, ebx
        lea ebp, ds:[edi+0x24]
        jae public_62b6b32
        mov ebx, eax
        public_62b6b32 : nop
        cmp ebp, esi
        jne public_62b6b51
        push eax
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6399198]
        push 0
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6399198]
        jmp public_62b6bd1
        public_62b6b51 : nop
        test ebx, ebx
        jbe public_62b6b95
        cmp ebx, ecx
        jne public_62b6b95
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_62b6b65
        mov eax, dword ptr ds : [public_63991d0]
        public_62b6b65 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_62b6b95
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_62b6b81
        mov eax, dword ptr ds : [public_63991d0]
        public_62b6b81 : nop
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], edx
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_62b6bd1
        public_62b6b95 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62b6bcd
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_62b6bb1
        mov esi, dword ptr ds : [public_63991d0]
        public_62b6bb1 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d8]
        public_62b6bcd : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_62b6bd1 : nop
        mov eax, dword ptr ss : [esp+0x24]
        add eax, 0x34
        lea ebx, ds:[edi+0x34]
        cmp ebx, eax
        je public_62b6c65
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov eax, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], eax
        je public_62b6c1c
        public_62b6bf5 : nop
        cmp ebp, dword ptr ss : [esp+0x14]
        je public_62b6c1c
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ss:[ebp+8]
        push eax
        lea ecx, ds:[esi+8]
        call dword ptr ds : [public_63991a8]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        mov ebp, dword ptr ss : [ebp]
        jne public_62b6bf5
        public_62b6c1c : nop
        cmp esi, edi
        mov dword ptr ss : [esp+0x24], esi
        je public_62b6c49
        public_62b6c24 : nop
        push 0
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_632ca20
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        call public_62b9d50
        cmp dword ptr ss : [esp+0x24], edi
        jne public_62b6c24
        public_62b6c49 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push ebp
        push edi
        mov ecx, ebx
        call public_62b9560
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        public_62b6c65 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62b6a30)
    }
}

#undef public_62b6a76
#undef public_62b6a95
#undef public_62b6aa9
#undef public_62b6ac5
#undef public_62b6ad9
#undef public_62b6af5
#undef public_62b6b11
#undef public_62b6b15
#undef public_62b6b32
#undef public_62b6b51
#undef public_62b6b65
#undef public_62b6b81
#undef public_62b6b95
#undef public_62b6bb1
#undef public_62b6bcd
#undef public_62b6bd1
#undef public_62b6bf5
#undef public_62b6c1c
#undef public_62b6c24
#undef public_62b6c49
#undef public_62b6c65
