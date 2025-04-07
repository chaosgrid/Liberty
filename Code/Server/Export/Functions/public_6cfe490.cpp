#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6870);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60e19);

#define public_6cfe530 _public_6cfe530
#define public_6cfe54a _public_6cfe54a
#define public_6cfe559 _public_6cfe559
#define public_6cfe568 _public_6cfe568
#define public_6cfe570 _public_6cfe570
#define public_6cfe5e9 _public_6cfe5e9
#define public_6cfe5eb _public_6cfe5eb
#define public_6cfe5f1 _public_6cfe5f1
#define public_6cfe631 _public_6cfe631
#define public_6cfe64d _public_6cfe64d
#define public_6cfe656 _public_6cfe656
#define public_6cfe670 _public_6cfe670
#define public_6cfe67c _public_6cfe67c
#define public_6cfe67e _public_6cfe67e
#define public_6cfe6a0 _public_6cfe6a0
#define public_6cfe6ac _public_6cfe6ac

PROC_DECLARE(0x6cfe490, internal_6cfe490, public_6cfe490);
extern "C" NAKED register_t __cdecl internal_6cfe490()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60e19 @0x6cfe498*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60e19
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x18]
        test al, al
        jne public_6cfe656
        mov ecx, dword ptr ds : [public_6d8d8ac]
        mov eax, dword ptr ds : [edi+0x28]
        push ebx
        lea ebx, ds:[edi+0x28]
        push ecx
        push eax
        call dword ptr ds : [public_6d64a48]
        add esp, 8
        test eax, eax
        jne public_6cfe570
        mov ecx, dword ptr ds : [edi+0x24]
        call public_6ce6870
        lea ebp, ds:[eax+0x144]
        mov ecx, ebp
        call dword ptr ds : [public_6d64574]
        mov esi, eax
        test esi, esi
        jle public_6cfe568
        call dword ptr ds : [public_6d64c7c]
        imul eax, esi
        mov ebx, dword ptr ds : [public_6d64218]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        lea edx, ss:[esp+0x14]
        mov esi, eax
        push edx
        mov ecx, ebp
        sar esi, 0xF
        mov dword ptr ss : [esp+0x14], 0
        mov byte ptr ss : [esp+0x18], 1
        call ebx
        test eax, eax
        je public_6cfe570
        lea ecx, ds:[ecx]
        public_6cfe530 : nop
        mov ecx, dword ptr ds : [eax+0x14]
        cmp ecx, 2
        je public_6cfe54a
        cmp ecx, 3
        je public_6cfe54a
        mov ecx, dword ptr ss : [esp+0x10]
        inc ecx
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6cfe559
        public_6cfe54a : nop
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        call ebx
        test eax, eax
        jne public_6cfe530
        jmp public_6cfe570
        public_6cfe559 : nop
        mov ecx, eax
        call dword ptr ds : [public_6d64570]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x28], ecx
        jmp public_6cfe570
        public_6cfe568 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6d6453c]
        public_6cfe570 : nop
        mov edx, dword ptr ds : [edi+0x28]
        cmp byte ptr ds : [edx], 0
        pop ebx
        je public_6cfe656
        mov al, byte ptr ss : [esp+0x44]
        xor esi, esi
        push esi
        push esi
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x20], al
        call dword ptr ds : [public_6d641fc]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], esi
        mov byte ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x30], esi
        mov eax, dword ptr ds : [edi+0x24]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x28], 0x15
        mov dword ptr ss : [esp+0x2C], ecx
        je public_6cfe5f1
        mov eax, dword ptr ds : [eax+0x28]
        cmp eax, esi
        je public_6cfe5f1
        push 0x7F0000
        push ecx
        mov ecx, eax
        call public_6d0c8d0
        cmp eax, esi
        je public_6cfe5f1
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, esi
        je public_6cfe5e9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6cfe5eb
        public_6cfe5e9 : nop
        xor eax, eax
        public_6cfe5eb : nop
        mov esi, dword ptr ds : [eax+0xB4]
        public_6cfe5f1 : nop
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [edi+0x24]
        mov dword ptr ss : [esp+0x30], esi
        mov edx, dword ptr ds : [ecx]
        lea esi, ss:[esp+0x18]
        push esi
        mov esi, dword ptr ds : [edi+0x2C]
        push esi
        push eax
        call dword ptr ds : [edx+0x1C8]
        mov ecx, dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [eax+0x188]
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        mov ebp, eax
        je public_6cfe64d
        public_6cfe631 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6d641e8]
        cmp esi, ebp
        jne public_6cfe631
        mov eax, dword ptr ss : [esp+0x1C]
        public_6cfe64d : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6cfe656 : nop
        mov edx, dword ptr ss : [esp+0x48]
        lea esi, ds:[edi+0x14]
        mov byte ptr ds : [edi+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x44], edx
        je public_6cfe67c
        nop 
        public_6cfe670 : nop
        cmp word ptr ds : [eax], dx
        je public_6cfe67e
        add eax, 2
        cmp eax, ecx
        jne public_6cfe670
        public_6cfe67c : nop
        mov eax, ecx
        public_6cfe67e : nop
        cmp eax, ecx
        jne public_6cfe6ac
        lea edx, ss:[esp+0x44]
        push edx
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6d6456c]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6cfe6ac
        mov ecx, dword ptr ss : [esp+0x44]
        mov edi, edi
        public_6cfe6a0 : nop
        cmp word ptr ds : [eax], cx
        je public_6cfe6ac
        add eax, 2
        cmp eax, esi
        jne public_6cfe6a0
        public_6cfe6ac : nop
        mov ecx, dword ptr ss : [esp+0x34]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x6cfe490)
    }
}

#undef public_6cfe530
#undef public_6cfe54a
#undef public_6cfe559
#undef public_6cfe568
#undef public_6cfe570
#undef public_6cfe5e9
#undef public_6cfe5eb
#undef public_6cfe5f1
#undef public_6cfe631
#undef public_6cfe64d
#undef public_6cfe656
#undef public_6cfe670
#undef public_6cfe67c
#undef public_6cfe67e
#undef public_6cfe6a0
#undef public_6cfe6ac
