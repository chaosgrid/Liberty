#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e53e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e61a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e8280);
CLANG_FORWARD_PROC_SYMBOL(public_62e8810);
CLANG_FORWARD_PROC_SYMBOL(public_62e8870);
CLANG_FORWARD_PROC_SYMBOL(public_62ecb20);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62c7af6 _public_62c7af6
#define public_62c7b1e _public_62c7b1e
#define public_62c7b2d _public_62c7b2d
#define public_62c7b58 _public_62c7b58
#define public_62c7b67 _public_62c7b67
#define public_62c7b88 _public_62c7b88
#define public_62c7b8a _public_62c7b8a
#define public_62c7b96 _public_62c7b96
#define public_62c7bbe _public_62c7bbe
#define public_62c7bc0 _public_62c7bc0
#define public_62c7be1 _public_62c7be1
#define public_62c7be3 _public_62c7be3
#define public_62c7c04 _public_62c7c04
#define public_62c7c06 _public_62c7c06
#define public_62c7c46 _public_62c7c46
#define public_62c7c68 _public_62c7c68
#define public_62c7c82 _public_62c7c82
#define public_62c7c99 _public_62c7c99
#define public_62c7c9b _public_62c7c9b
#define public_62c7cd8 _public_62c7cd8
#define public_62c7cdd _public_62c7cdd
#define public_62c7ced _public_62c7ced

PROC_DECLARE(0x62c7ab0, internal_62c7ab0, public_62c7ab0);
extern "C" NAKED register_t __cdecl internal_62c7ab0()
{
    __asm
    {
        sub esp, 0x4C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        mov cl, byte ptr ds : [eax+0x1958]
        test cl, cl
        push edi
        mov edi, 2
        mov dword ptr ss : [esp+0x14], edi
        je public_62c7af6
        lea ecx, ds:[eax+0x34]
        call public_62e8810
        test al, al
        je public_62c7af6
        mov eax, dword ptr ds : [esi+0x2A8]
        mov byte ptr ds : [esi+0x2B4], 1
        mov dword ptr ds : [esi+0x2B0], eax
        mov dword ptr ss : [esp+0x14], 0
        public_62c7af6 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x34
        call public_62e8870
        test al, al
        je public_62c7b2d
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        je public_62c7b1e
        pop edi
        mov eax, 3
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4C
        ret 4
        public_62c7b1e : nop
        pop edi
        xor eax, eax
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4C
        ret 4
        public_62c7b2d : nop
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x1364
        call public_62ecb20
        test al, al
        je public_62c7b67
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        je public_62c7b58
        pop edi
        mov eax, 3
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4C
        ret 4
        public_62c7b58 : nop
        mov dword ptr ds : [esi+0xC], edi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4C
        ret 4
        public_62c7b67 : nop
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0x1584]
        push ecx
        lea ecx, ds:[eax+0x34]
        call public_62e8280
        test eax, eax
        lea edi, ds:[esi+0x2A0]
        je public_62c7b88
        add eax, 8
        jmp public_62c7b8a
        public_62c7b88 : nop
        xor eax, eax
        public_62c7b8a : nop
        cmp eax, dword ptr ds : [edi]
        je public_62c7b96
        push eax
        mov ecx, edi
        call public_6341610
        public_62c7b96 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62c7cdd
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62c7cdd
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_62c7bbe
        lea ecx, ds:[eax-8]
        jmp public_62c7bc0
        public_62c7bbe : nop
        xor ecx, ecx
        public_62c7bc0 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [edx+0x74]
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_62c7cdd
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62c7be1
        add eax, 0xFFFFFFF8
        jmp public_62c7be3
        public_62c7be1 : nop
        xor eax, eax
        public_62c7be3 : nop
        push eax
        call public_62e61a0
        fcomp dword ptr ds : [public_639a1d0]
        add esp, 4
        fnstsw ax
        test ah, 0x41
        jne public_62c7c68
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62c7c04
        lea ecx, ds:[eax-8]
        jmp public_62c7c06
        public_62c7c04 : nop
        xor ecx, ecx
        public_62c7c06 : nop
        mov edx, dword ptr ds : [esi+0x2BC]
        mov eax, dword ptr ds : [esi+0x14]
        push edx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx]
        push eax
        call public_62e53e0
        add esp, 0xC
        test al, al
        je public_62c7c68
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, edi
        jne public_62c7c68
        public_62c7c46 : nop
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        mov eax, 3
        jne public_62c7ced
        pop edi
        mov eax, 1
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4C
        ret 4
        public_62c7c68 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        push 0x10
        lea eax, ss:[esp+0x20]
        push eax
        call dword ptr ds : [edx+0x14C]
        mov ebx, eax
        xor ebp, ebp
        test ebx, ebx
        jle public_62c7cdd
        public_62c7c82 : nop
        mov edx, dword ptr ss : [esp+ebp*4+0x1C]
        test edx, edx
        je public_62c7cd8
        mov eax, dword ptr ds : [esi+0x2A0]
        test eax, eax
        je public_62c7c99
        lea ecx, ds:[eax-8]
        jmp public_62c7c9b
        public_62c7c99 : nop
        xor ecx, ecx
        public_62c7c9b : nop
        mov eax, dword ptr ds : [esi+0x2BC]
        push eax
        push edx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        push eax
        call public_62e53e0
        add esp, 0xC
        test al, al
        je public_62c7cd8
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        mov edi, dword ptr ss : [esp+ebp*4+0x1C]
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        je public_62c7c46
        public_62c7cd8 : nop
        inc ebp
        cmp ebp, ebx
        jl public_62c7c82
        public_62c7cdd : nop
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        mov eax, 3
        jne public_62c7ced
        mov eax, dword ptr ss : [esp+0x14]
        public_62c7ced : nop
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4C
        ret 4
        UNREACHABLE_TRAP(0x62c7ab0)
    }
}

#undef public_62c7af6
#undef public_62c7b1e
#undef public_62c7b2d
#undef public_62c7b58
#undef public_62c7b67
#undef public_62c7b88
#undef public_62c7b8a
#undef public_62c7b96
#undef public_62c7bbe
#undef public_62c7bc0
#undef public_62c7be1
#undef public_62c7be3
#undef public_62c7c04
#undef public_62c7c06
#undef public_62c7c46
#undef public_62c7c68
#undef public_62c7c82
#undef public_62c7c99
#undef public_62c7c9b
#undef public_62c7cd8
#undef public_62c7cdd
#undef public_62c7ced
