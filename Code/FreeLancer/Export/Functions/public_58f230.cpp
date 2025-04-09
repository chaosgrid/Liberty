#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d8d0);
CLANG_FORWARD_PROC_SYMBOL(public_59d960);
CLANG_FORWARD_PROC_SYMBOL(public_59d9b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0650);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);

#define public_58f29a _public_58f29a
#define public_58f29c _public_58f29c
#define public_58f2c0 _public_58f2c0
#define public_58f2d3 _public_58f2d3
#define public_58f2da _public_58f2da
#define public_58f330 _public_58f330
#define public_58f332 _public_58f332
#define public_58f356 _public_58f356
#define public_58f35d _public_58f35d
#define public_58f37e _public_58f37e
#define public_58f3a5 _public_58f3a5
#define public_58f3cf _public_58f3cf

PROC_DECLARE(0x58f230, internal_58f230, public_58f230);
extern "C" NAKED register_t __cdecl internal_58f230()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [edi], 0xFFFFFFFF
        mov esi, ecx
        jne public_58f3cf
        mov eax, dword ptr ds : [edi+4]
        cmp eax, 3
        jne public_58f2da
        mov al, byte ptr ds : [esi+0x4E8]
        test al, al
        je public_58f2d3
        mov edi, dword ptr ds : [esi+0x4EC]
        lea ecx, ds:[esi+0x4A0]
        call public_5ad970
        cmp edi, eax
        jae public_58f2d3
        mov ecx, dword ptr ds : [esi+0x4C4]
        lea eax, ds:[edi+edi*2]
        lea eax, ds:[ecx+eax*4]
        mov cl, byte ptr ds : [eax+1]
        test cl, cl
        je public_58f2d3
        cmp byte ptr ds : [eax], 0
        je public_58f2d3
        mov al, byte ptr ds : [esi+0x4D8]
        test al, al
        je public_58f29a
        cmp dword ptr ds : [esi+0x4DC], edi
        jne public_58f29a
        xor al, al
        jmp public_58f29c
        public_58f29a : nop
        mov al, 1
        public_58f29c : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ds : [esi+0x4DC], edi
        mov byte ptr ds : [esi+0x4D8], 1
        je public_58f2c0
        test al, al
        je public_58f2c0
        mov edx, dword ptr ds : [ecx]
        push edi
        push esi
        push 0x300D
        call dword ptr ds : [edx+0x5C]
        public_58f2c0 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_58f2d3
        mov eax, dword ptr ds : [ecx]
        push edi
        push esi
        push 0xF002
        call dword ptr ds : [eax+0x5C]
        public_58f2d3 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_58f2da : nop
        cmp eax, 2
        jne public_58f3a5
        mov al, byte ptr ds : [esi+0x4E8]
        test al, al
        je public_58f35d
        mov edi, dword ptr ds : [esi+0x4EC]
        lea ecx, ds:[esi+0x4A0]
        call public_5ad970
        cmp edi, eax
        jae public_58f37e
        mov edx, dword ptr ds : [esi+0x4C4]
        lea ecx, ds:[edi+edi*2]
        lea eax, ds:[edx+ecx*4]
        mov cl, byte ptr ds : [eax+1]
        test cl, cl
        je public_58f37e
        cmp byte ptr ds : [eax], 0
        je public_58f37e
        mov al, byte ptr ds : [esi+0x4D8]
        test al, al
        je public_58f330
        cmp dword ptr ds : [esi+0x4DC], edi
        jne public_58f330
        xor al, al
        jmp public_58f332
        public_58f330 : nop
        mov al, 1
        public_58f332 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ds : [esi+0x4DC], edi
        mov byte ptr ds : [esi+0x4D8], 1
        je public_58f356
        test al, al
        je public_58f356
        mov eax, dword ptr ds : [ecx]
        push edi
        push esi
        push 0x300D
        call dword ptr ds : [eax+0x5C]
        public_58f356 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_58f35d : nop
        mov al, byte ptr ds : [esi+0x540]
        test al, al
        je public_58f37e
        push esi
        call public_59d8d0
        add esp, 4
        pop edi
        mov byte ptr ds : [esi+0x541], 1
        mov al, 1
        pop esi
        ret 4
        public_58f37e : nop
        mov eax, dword ptr ds : [esi+0x4E4]
        mov edi, dword ptr ds : [esi+0x4E0]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        shl eax, 0x10
        or eax, edi
        push eax
        push esi
        push 0xF001
        call dword ptr ds : [edx+0x5C]
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_58f3a5 : nop
        call public_59d9b0
        cmp eax, esi
        jne public_58f3cf
        mov al, byte ptr ds : [esi+0x541]
        test al, al
        je public_58f3cf
        push esi
        mov byte ptr ds : [esi+0x541], 0
        call public_59d960
        add esp, 4
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_58f3cf : nop
        push edi
        mov ecx, esi
        call public_5a0650
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x58f230)
    }
}

#undef public_58f29a
#undef public_58f29c
#undef public_58f2c0
#undef public_58f2d3
#undef public_58f2da
#undef public_58f330
#undef public_58f332
#undef public_58f356
#undef public_58f35d
#undef public_58f37e
#undef public_58f3a5
#undef public_58f3cf
