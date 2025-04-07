#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_620b390);
CLANG_FORWARD_PROC_SYMBOL(public_620b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_620b3f0);
CLANG_FORWARD_PROC_SYMBOL(public_622b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_62495f9);

#define public_622d527 _public_622d527
#define public_622d547 _public_622d547
#define public_622d54b _public_622d54b
#define public_622d550 _public_622d550
#define public_622d5a1 _public_622d5a1
#define public_622d5a3 _public_622d5a3
#define public_622d5b4 _public_622d5b4
#define public_622d5ba _public_622d5ba
#define public_622d5cf _public_622d5cf
#define public_622d603 _public_622d603
#define public_622d61e _public_622d61e
#define public_622d639 _public_622d639
#define public_622d64e _public_622d64e
#define public_622d663 _public_622d663
#define public_622d678 _public_622d678
#define public_622d68d _public_622d68d
#define public_622d6a2 _public_622d6a2
#define public_622d6ba _public_622d6ba
#define public_622d72a _public_622d72a

PROC_DECLARE(0x622d4f0, internal_622d4f0, public_622d4f0);
extern "C" NAKED register_t __cdecl internal_622d4f0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_62495f9 @0x622d4f8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62495f9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        xor ebx, ebx
        xor ebp, ebp
        cmp dword ptr ds : [edi], 8
        jne public_622d72a
        mov eax, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        public_622d527 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_622d54b
        cmp cl, bl
        je public_622d547
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_622d54b
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_622d527
        public_622d547 : nop
        xor eax, eax
        jmp public_622d550
        public_622d54b : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_622d550 : nop
        cmp eax, ebx
        jne public_622d72a
        push 0x94
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x2C], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], ebx
        je public_622d5a1
        lea edi, ds:[esi+4]
        mov dword ptr ds : [esi], offset public_624ba48
        mov ecx, edi
        call public_622b3e0
        mov dword ptr ds : [edi], offset public_624e418
        mov edi, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi], offset public_624e3b8
        mov dword ptr ds : [esi+0x90], 1
        mov ebp, esi
        jmp public_622d5a3
        public_622d5a1 : nop
        xor ebp, ebp
        public_622d5a3 : nop
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        jne public_622d5cf
        mov eax, 0xFFFFFFFC
        public_622d5b4 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx], ebp
        public_622d5ba : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0xC
        public_622d5cf : nop
        mov edx, dword ptr ss : [ebp+4]
        lea esi, ss:[ebp+4]
        push edi
        push esi
        call dword ptr ds : [edx]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], eax
        je public_622d5b4
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ds : [esi+0x88]
        mov dword ptr ss : [esp+0x24], 8
        cmp eax, ebx
        je public_622d603
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x88], ebx
        public_622d603 : nop
        mov eax, dword ptr ds : [esi+0x84]
        mov byte ptr ss : [esp+0x24], 7
        cmp eax, ebx
        je public_622d61e
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x84], ebx
        public_622d61e : nop
        mov eax, dword ptr ds : [esi+0x80]
        mov byte ptr ss : [esp+0x24], 6
        cmp eax, ebx
        je public_622d639
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x80], ebx
        public_622d639 : nop
        mov eax, dword ptr ds : [esi+0x7C]
        mov byte ptr ss : [esp+0x24], 5
        cmp eax, ebx
        je public_622d64e
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_622d64e : nop
        mov eax, dword ptr ds : [esi+0x78]
        mov byte ptr ss : [esp+0x24], 4
        cmp eax, ebx
        je public_622d663
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x78], ebx
        public_622d663 : nop
        mov eax, dword ptr ds : [esi+0x74]
        mov byte ptr ss : [esp+0x24], 3
        cmp eax, ebx
        je public_622d678
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x74], ebx
        public_622d678 : nop
        mov eax, dword ptr ds : [esi+0x70]
        mov byte ptr ss : [esp+0x24], 2
        cmp eax, ebx
        je public_622d68d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], ebx
        public_622d68d : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov byte ptr ss : [esp+0x24], 1
        cmp eax, ebx
        je public_622d6a2
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x6C], ebx
        public_622d6a2 : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x24], 0xA
        cmp eax, ebx
        je public_622d6ba
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x58], ebx
        public_622d6ba : nop
        mov eax, dword ptr ds : [esi+0x50]
        lea edi, ds:[esi+0x4C]
        push eax
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x28], 9
        call public_620b3f0
        lea edx, ss:[esp+0x14]
        mov ecx, edi
        push edx
        call public_620b390
        mov edx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x18]
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        push edx
        push eax
        mov ecx, edi
        call public_620b3a0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_62460e0
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_620b260
        push ebp
        call public_62460e0
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x2C]
        jmp public_622d5ba
        public_622d72a : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ebp
        jmp public_622d5ba
        UNREACHABLE_TRAP(0x622d4f0)
    }
}

#undef public_622d527
#undef public_622d547
#undef public_622d54b
#undef public_622d550
#undef public_622d5a1
#undef public_622d5a3
#undef public_622d5b4
#undef public_622d5ba
#undef public_622d5cf
#undef public_622d603
#undef public_622d61e
#undef public_622d639
#undef public_622d64e
#undef public_622d663
#undef public_622d678
#undef public_622d68d
#undef public_622d6a2
#undef public_622d6ba
#undef public_622d72a
