#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0e2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d604c9);

#define public_6ce6930 _public_6ce6930
#define public_6ce6953 _public_6ce6953
#define public_6ce6955 _public_6ce6955
#define public_6ce6971 _public_6ce6971
#define public_6ce6995 _public_6ce6995
#define public_6ce699d _public_6ce699d
#define public_6ce6a1f _public_6ce6a1f
#define public_6ce6a4f _public_6ce6a4f
#define public_6ce6a82 _public_6ce6a82
#define public_6ce6a96 _public_6ce6a96
#define public_6ce6ad3 _public_6ce6ad3
#define public_6ce6b44 _public_6ce6b44
#define public_6ce6b6e _public_6ce6b6e
#define public_6ce6b82 _public_6ce6b82
#define public_6ce6b87 _public_6ce6b87

PROC_DECLARE(0x6ce68a0, internal_6ce68a0, public_6ce68a0);
extern "C" NAKED register_t __cdecl internal_6ce68a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d604c9 @0x6ce68a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d604c9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x7C
        mov eax, dword ptr ds : [ecx+0x24]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push ebp
        mov dword ptr ss : [esp+0x24], ecx
        je public_6ce6b82
        mov eax, dword ptr ds : [ecx-4]
        lea ebp, ds:[ecx-4]
        mov ecx, ebp
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6ce6b82
        mov cl, byte ptr ss : [esp+0xB]
        mov byte ptr ss : [esp+0x44], cl
        push esi
        xor ecx, ecx
        push edi
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x50], ecx
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov edx, dword ptr ds : [public_6d6402c]
        xor eax, eax
        mov dword ptr ss : [esp+0x14], ebx
        mov ax, word ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0xA0]
        mov dword ptr ss : [esp+0x94], ebx
        mov dword ptr ss : [esp+0x28], eax
        xor eax, eax
        cmp edx, ebx
        mov dword ptr ss : [esp+0x1C], eax
        jbe public_6ce6a82
        lea esp, ss:[esp]
        public_6ce6930 : nop
        mov ecx, dword ptr ss : [esp+0x9C]
        mov cx, word ptr ds : [ecx+eax*2]
        mov eax, dword ptr ss : [ebp+0x10]
        cmp eax, ebx
        je public_6ce6953
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_6ce6955
        public_6ce6953 : nop
        xor eax, eax
        public_6ce6955 : nop
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d641c4]
        mov ecx, dword ptr ss : [ebp+0x74]
        mov esi, eax
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_6ce6995
        public_6ce6971 : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx+4], esi
        je public_6ce6a96
        push ebx
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6d1b490
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ss : [ebp+0x74]
        jne public_6ce6971
        public_6ce6995 : nop
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFE
        public_6ce699d : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0xA0]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jb public_6ce6930
        mov ecx, dword ptr ss : [esp+0x50]
        cmp ecx, ebx
        je public_6ce6a82
        mov eax, dword ptr ss : [esp+0x54]
        sub eax, ecx
        sar eax, 1
        cmp eax, ebx
        je public_6ce6a82
        mov eax, dword ptr ss : [esp+0xA4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x3C], eax
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6ce6a4f
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_6ce6a4f
        lea esi, ds:[eax+8]
        mov eax, dword ptr ds : [public_6d8d6d4]
        cmp eax, ebx
        mov ecx, 0xC
        lea edi, ss:[esp+0x5C]
        rep movsd
        jne public_6ce6a1f
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d6d4], eax
        public_6ce6a1f : nop
        mov edx, dword ptr ss : [esp+0xA4]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x60]
        push edx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], edx
        public_6ce6a4f : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ss : [esp+0xA8]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, dword ptr ds : [edx+0x24]
        call public_6d0e2e0
        mov ecx, dword ptr ss : [esp+0x50]
        public_6ce6a82 : nop
        push ecx
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        pop edi
        pop esi
        jmp public_6ce6b87
        public_6ce6a96 : nop
        mov esi, dword ptr ds : [eax+8]
        cmp esi, ebx
        je public_6ce6995
        mov edi, dword ptr ds : [esi+4]
        cmp edi, ebx
        je public_6ce699d
        mov eax, dword ptr ss : [esp+0xA8]
        cmp eax, 0xFFFFFFFF
        je public_6ce6b44
        cmp eax, ebx
        je public_6ce6b44
        mov ecx, dword ptr ss : [esp+0xA4]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        public_6ce6ad3 : nop
        cmp al, bl
        je public_6ce699d
        push edi
        call dword ptr ds : [public_6d641bc]
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_6ce699d
        mov ecx, esi
        call dword ptr ds : [public_6d641b8]
        cmp dword ptr ds : [eax+0x90], ebx
        jne public_6ce699d
        mov eax, dword ptr ss : [esp+0x54]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+8]
        lea edx, ss:[esp+0x24]
        push edx
        push 1
        push eax
        mov dword ptr ss : [esp+0x30], ecx
        lea ecx, ss:[esp+0x58]
        call dword ptr ds : [public_6d641b4]
        cmp dword ptr ss : [esp+0x14], ebx
        jne public_6ce699d
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d641b0]
        jmp public_6ce699d
        public_6ce6b44 : nop
        push edi
        call dword ptr ds : [public_6d641ac]
        mov ecx, dword ptr ss : [esp+0xA8]
        add esp, 4
        cmp ecx, ebx
        je public_6ce6b6e
        mov edx, dword ptr ds : [eax+0x4C]
        cmp byte ptr ds : [edx+0x79], bl
        jne public_6ce6b6e
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        jmp public_6ce6ad3
        public_6ce6b6e : nop
        mov eax, dword ptr ss : [esp+0xA8]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        jmp public_6ce699d
        public_6ce6b82 : nop
        mov eax, 0xFFFFFFFB
        public_6ce6b87 : nop
        mov ecx, dword ptr ss : [esp+0x84]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x88
        ret 0x10
        UNREACHABLE_TRAP(0x6ce68a0)
    }
}

#undef public_6ce6930
#undef public_6ce6953
#undef public_6ce6955
#undef public_6ce6971
#undef public_6ce6995
#undef public_6ce699d
#undef public_6ce6a1f
#undef public_6ce6a4f
#undef public_6ce6a82
#undef public_6ce6a96
#undef public_6ce6ad3
#undef public_6ce6b44
#undef public_6ce6b6e
#undef public_6ce6b82
#undef public_6ce6b87
