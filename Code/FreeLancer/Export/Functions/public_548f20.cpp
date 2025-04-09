#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_51dfc0);
CLANG_FORWARD_PROC_SYMBOL(public_548f20);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1166);

#define public_548f30 _public_548f30
#define public_548f82 _public_548f82
#define public_548fb7 _public_548fb7
#define public_548ffc _public_548ffc
#define public_549029 _public_549029
#define public_54902b _public_54902b
#define public_549070 _public_549070
#define public_549072 _public_549072
#define public_549090 _public_549090
#define public_5490bd _public_5490bd
#define public_5490bf _public_5490bf
#define public_5490dd _public_5490dd
#define public_549117 _public_549117
#define public_549119 _public_549119
#define public_549137 _public_549137
#define public_54915a _public_54915a
#define public_54915c _public_54915c

PROC_DECLARE(0x548f20, internal_548f20, public_548f20);
extern "C" NAKED register_t __cdecl internal_548f20()
{
    __asm
    {
        mov ecx, offset public_678b98
        jmp public_548f30
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_548f30 : nop
        push 0xFFFFFFFF
/*FIXUP push public_5c1166 @0x548f32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1166
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x20], 0
        lea edi, ds:[esi+0xA9C]
        mov dword ptr ss : [esp+0x14], edi
        mov eax, dword ptr ds : [edi+0xC0]
        test eax, eax
        mov ebp, dword ptr ds : [public_5c62a8]
        lea ecx, ds:[edi+0xC0]
        mov byte ptr ss : [esp+0x20], 8
        je public_548f82
        push 0
        call ebp
        public_548f82 : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 7
        mov dword ptr ds : [edi], offset public_5c8944
        call public_401e90
        lea edi, ds:[esi+0x9A4]
        mov dword ptr ss : [esp+0x14], edi
        mov eax, dword ptr ds : [edi+0xC0]
        test eax, eax
        lea ecx, ds:[edi+0xC0]
        mov byte ptr ss : [esp+0x20], 9
        je public_548fb7
        push 0
        call ebp
        public_548fb7 : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 6
        mov dword ptr ds : [edi], offset public_5c8944
        call public_401e90
        lea ecx, ds:[esi+0x760]
        mov byte ptr ss : [esp+0x20], 5
        call public_51dfc0
        lea edi, ds:[esi+0x60C]
        mov dword ptr ss : [esp+0x14], edi
        mov eax, dword ptr ds : [edi+0xC0]
        test eax, eax
        lea ecx, ds:[edi+0xC0]
        mov byte ptr ss : [esp+0x20], 0xA
        je public_548ffc
        push 0
        call ebp
        public_548ffc : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 4
        mov dword ptr ds : [edi], offset public_5c8944
        call public_401e90
        lea edi, ds:[esi+0x500]
        mov dword ptr ss : [esp+0x14], edi
        test edi, edi
        mov byte ptr ss : [esp+0x20], 0xB
        je public_549029
        lea ecx, ds:[edi+0xF8]
        jmp public_54902b
        public_549029 : nop
        xor ecx, ecx
        public_54902b : nop
        call public_576010
        lea ecx, ds:[edi+0xC0]
        push 0
        mov byte ptr ss : [esp+0x24], 0xC
        call dword ptr ds : [public_5c645c]
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 3
        mov dword ptr ds : [edi], offset public_5c8944
        call public_401e90
        lea edi, ds:[esi+0x3C8]
        mov dword ptr ss : [esp+0x14], edi
        test edi, edi
        mov byte ptr ss : [esp+0x20], 0xD
        je public_549070
        lea ecx, ds:[edi+0xF8]
        jmp public_549072
        public_549070 : nop
        xor ecx, ecx
        public_549072 : nop
        call public_576010
        mov eax, dword ptr ds : [edi+0xC0]
        test eax, eax
        lea ecx, ds:[edi+0xC0]
        mov byte ptr ss : [esp+0x20], 0xE
        je public_549090
        push 0
        call ebp
        public_549090 : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 2
        mov dword ptr ds : [edi], offset public_5c8944
        call public_401e90
        lea edi, ds:[esi+0x1B0]
        mov dword ptr ss : [esp+0x14], edi
        test edi, edi
        mov byte ptr ss : [esp+0x20], 0xF
        je public_5490bd
        lea ecx, ds:[edi+0xF8]
        jmp public_5490bf
        public_5490bd : nop
        xor ecx, ecx
        public_5490bf : nop
        call public_576010
        mov eax, dword ptr ds : [edi+0xC0]
        test eax, eax
        lea ecx, ds:[edi+0xC0]
        mov byte ptr ss : [esp+0x20], 0x10
        je public_5490dd
        push 0
        call ebp
        public_5490dd : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 1
        mov dword ptr ds : [edi], offset public_5c8944
        call public_401e90
        lea edi, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x14], edi
        lea ecx, ds:[edi+0x190]
        mov byte ptr ss : [esp+0x20], 0x11
        call public_420d10
        test edi, edi
        mov byte ptr ss : [esp+0x20], 0x12
        je public_549117
        lea ecx, ds:[edi+0xF8]
        jmp public_549119
        public_549117 : nop
        xor ecx, ecx
        public_549119 : nop
        call public_576010
        mov eax, dword ptr ds : [edi+0xC0]
        test eax, eax
        lea ecx, ds:[edi+0xC0]
        mov byte ptr ss : [esp+0x20], 0x13
        je public_549137
        push 0
        call ebp
        public_549137 : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 0
        mov dword ptr ds : [edi], offset public_5c8944
        call public_401e90
        test esi, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_54915a
        lea ecx, ds:[esi+4]
        jmp public_54915c
        public_54915a : nop
        xor ecx, ecx
        public_54915c : nop
        call public_576010
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x548f20)
    }
}

#undef public_548f30
#undef public_548f82
#undef public_548fb7
#undef public_548ffc
#undef public_549029
#undef public_54902b
#undef public_549070
#undef public_549072
#undef public_549090
#undef public_5490bd
#undef public_5490bf
#undef public_5490dd
#undef public_549117
#undef public_549119
#undef public_549137
#undef public_54915a
#undef public_54915c
