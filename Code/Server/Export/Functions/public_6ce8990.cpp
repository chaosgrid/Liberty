#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce8990);
CLANG_FORWARD_PROC_SYMBOL(public_6ced2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d05d90);
CLANG_FORWARD_PROC_SYMBOL(public_6d06720);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d605c2);

#define public_6ce89c8 _public_6ce89c8
#define public_6ce89ca _public_6ce89ca
#define public_6ce8a43 _public_6ce8a43
#define public_6ce8a52 _public_6ce8a52
#define public_6ce8a82 _public_6ce8a82
#define public_6ce8a84 _public_6ce8a84
#define public_6ce8ac7 _public_6ce8ac7
#define public_6ce8af7 _public_6ce8af7
#define public_6ce8af9 _public_6ce8af9
#define public_6ce8b12 _public_6ce8b12
#define public_6ce8b4a _public_6ce8b4a
#define public_6ce8b59 _public_6ce8b59
#define public_6ce8bb0 _public_6ce8bb0
#define public_6ce8bbc _public_6ce8bbc
#define public_6ce8be5 _public_6ce8be5
#define public_6ce8be7 _public_6ce8be7
#define public_6ce8bef _public_6ce8bef
#define public_6ce8bfb _public_6ce8bfb
#define public_6ce8c09 _public_6ce8c09

PROC_DECLARE(0x6ce8990, internal_6ce8990, public_6ce8990);
extern "C" NAKED register_t __cdecl internal_6ce8990()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d605c2 @0x6ce8998*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d605c2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        xor ebp, ebp
        cmp eax, ebp
        push edi
        je public_6ce89c8
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce89ca
        public_6ce89c8 : nop
        xor eax, eax
        public_6ce89ca : nop
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d641c4]
        mov ebx, eax
        mov eax, dword ptr ds : [ebx+0x14]
        cmp eax, 0x400
        ja public_6ce8b59
        je public_6ce8b12
        sub eax, 0x20
        je public_6ce8ac7
        sub eax, 0x20
        je public_6ce8a52
        sub eax, 0x40
        jne public_6ce8c09
        push 0x18
        call public_6d60012
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebp
        mov dword ptr ss : [esp+0x34], 3
        je public_6ce8a43
        push esi
        push ebx
        mov ecx, edi
        call public_6ced2d0
        mov dword ptr ds : [edi+0xC], ebp
        mov dword ptr ds : [edi], offset public_6d655ac
        mov dword ptr ss : [esp+0x3C], edi
        lea edx, ss:[esp+0x3C]
        jmp public_6ce8bef
        public_6ce8a43 : nop
        xor edi, edi
        mov dword ptr ss : [esp+0x3C], edi
        lea edx, ss:[esp+0x3C]
        jmp public_6ce8bef
        public_6ce8a52 : nop
        push 0x18
        call public_6d60012
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebp
        mov dword ptr ss : [esp+0x34], 5
        je public_6ce8a82
        push esi
        push ebx
        mov ecx, edi
        call public_6ced2d0
        mov dword ptr ds : [edi+0xC], ebp
        mov dword ptr ds : [edi], offset public_6d65590
        jmp public_6ce8a84
        public_6ce8a82 : nop
        xor edi, edi
        public_6ce8a84 : nop
        mov dword ptr ss : [esp+0x10], edi
        mov edi, dword ptr ds : [esi+0x74]
        mov ecx, dword ptr ds : [edi+4]
        add esi, 0x70
        push ecx
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call public_6cfc340
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_6d06720
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+8], eax
        jmp public_6ce8c09
        public_6ce8ac7 : nop
        push 0x18
        call public_6d60012
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebp
        mov dword ptr ss : [esp+0x34], 4
        je public_6ce8af7
        push esi
        push ebx
        mov ecx, edi
        call public_6ced2d0
        mov dword ptr ds : [edi+0xC], ebp
        mov dword ptr ds : [edi], offset public_6d65574
        jmp public_6ce8af9
        public_6ce8af7 : nop
        xor edi, edi
        public_6ce8af9 : nop
        mov eax, dword ptr ds : [esi+0x74]
        lea ecx, ds:[esi+0x70]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        mov dword ptr ss : [esp+0x1C], edi
        lea eax, ss:[esp+0x30]
        jmp public_6ce8bfb
        public_6ce8b12 : nop
        push 0xC
        call public_6d60012
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x28], edi
        cmp edi, ebp
        mov dword ptr ss : [esp+0x34], 1
        je public_6ce8b4a
        push esi
        push ebx
        mov ecx, edi
        call public_6ced2d0
        mov dword ptr ds : [edi], offset public_6d65564
        mov dword ptr ss : [esp+0x18], edi
        lea edx, ss:[esp+0x18]
        jmp public_6ce8bef
        public_6ce8b4a : nop
        xor edi, edi
        mov dword ptr ss : [esp+0x18], edi
        lea edx, ss:[esp+0x18]
        jmp public_6ce8bef
        public_6ce8b59 : nop
        cmp eax, 0x100000
        je public_6ce8bbc
        cmp eax, 0x200000
        jne public_6ce8c09
        push 0x14
        call public_6d60012
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x28], edi
        cmp edi, ebp
        mov dword ptr ss : [esp+0x34], 2
        je public_6ce8bb0
        push esi
        push ebx
        mov ecx, edi
        call public_6ced2d0
        mov dword ptr ds : [edi+0xC], ebp
        mov ecx, dword ptr ds : [public_6d6402c]
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [edi+0x10], dx
        mov dword ptr ds : [edi], offset public_6d65554
        mov dword ptr ss : [esp+0x1C], edi
        lea edx, ss:[esp+0x1C]
        jmp public_6ce8bef
        public_6ce8bb0 : nop
        xor edi, edi
        mov dword ptr ss : [esp+0x1C], edi
        lea edx, ss:[esp+0x1C]
        jmp public_6ce8bef
        public_6ce8bbc : nop
        push 0xC
        call public_6d60012
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x28], edi
        cmp edi, ebp
        mov dword ptr ss : [esp+0x34], ebp
        je public_6ce8be5
        push esi
        push ebx
        mov ecx, edi
        call public_6ced2d0
        mov dword ptr ds : [edi], offset public_6d65544
        jmp public_6ce8be7
        public_6ce8be5 : nop
        xor edi, edi
        public_6ce8be7 : nop
        mov dword ptr ss : [esp+0x20], edi
        lea edx, ss:[esp+0x20]
        public_6ce8bef : nop
        mov eax, dword ptr ds : [esi+0x74]
        lea ecx, ds:[esi+0x70]
        push edx
        push eax
        lea eax, ss:[esp+0x2C]
        public_6ce8bfb : nop
        push eax
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        call public_6d05d90
        public_6ce8c09 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x6ce8990)
    }
}

#undef public_6ce89c8
#undef public_6ce89ca
#undef public_6ce8a43
#undef public_6ce8a52
#undef public_6ce8a82
#undef public_6ce8a84
#undef public_6ce8ac7
#undef public_6ce8af7
#undef public_6ce8af9
#undef public_6ce8b12
#undef public_6ce8b4a
#undef public_6ce8b59
#undef public_6ce8bb0
#undef public_6ce8bbc
#undef public_6ce8be5
#undef public_6ce8be7
#undef public_6ce8bef
#undef public_6ce8bfb
#undef public_6ce8c09
