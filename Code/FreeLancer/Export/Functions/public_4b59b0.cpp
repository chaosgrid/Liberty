#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c010);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_4b59b0);
CLANG_FORWARD_PROC_SYMBOL(public_4b68b0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd14f);

#define public_4b5a31 _public_4b5a31
#define public_4b5a60 _public_4b5a60
#define public_4b5ad0 _public_4b5ad0
#define public_4b5ae0 _public_4b5ae0
#define public_4b5ae3 _public_4b5ae3
#define public_4b5ae7 _public_4b5ae7
#define public_4b5b11 _public_4b5b11
#define public_4b5b4d _public_4b5b4d
#define public_4b5b56 _public_4b5b56
#define public_4b5b85 _public_4b5b85
#define public_4b5b8f _public_4b5b8f
#define public_4b5b98 _public_4b5b98
#define public_4b5bad _public_4b5bad
#define public_4b5bc7 _public_4b5bc7
#define public_4b5c10 _public_4b5c10
#define public_4b5c19 _public_4b5c19
#define public_4b5c78 _public_4b5c78
#define public_4b5c81 _public_4b5c81

PROC_DECLARE(0x4b59b0, internal_4b59b0, public_4b59b0);
extern "C" NAKED register_t __cdecl internal_4b59b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bd14f @0x4b59b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd14f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1698
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push esi
        xor esi, esi
        push esi
        lea eax, ss:[esp+0x34]
/*FIXUP push offset public_5d55c8 @0x4b59d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d55c8
        push eax
        mov dword ptr ss : [esp+0x28], ecx
        call dword ptr ds : [public_5c6068]
        add esp, 0xC
        lea ecx, ss:[esp+0x134]
        call dword ptr ds : [public_5c605c]
        push esi
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ss:[esp+0x13C]
        mov dword ptr ss : [esp+0x16AC], esi
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_4b5bc7
        lea ecx, ss:[esp+0x134]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_4b5bc7
        push ebx
        push ebp
        push edi
/*FIXUP public_4b5a31 : nop
        push offset public_5d55b8 @0x4b5a31*/
  FIXUP public_4b5a31 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d55b8
        lea ecx, ss:[esp+0x144]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_4b5bad
        lea ecx, ss:[esp+0x140]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_4b5bad
/*FIXUP public_4b5a60 : nop
        push offset public_5ce780 @0x4b5a60*/
  FIXUP public_4b5a60 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce780
        lea ecx, ss:[esp+0x144]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_4b5b98
        push 0
        lea ecx, ss:[esp+0x144]
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push 1
        lea ecx, ss:[esp+0x144]
        mov ebx, eax
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [edx+0x158]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [edx+0x154]
        lea edi, ds:[edx+0x150]
        mov dword ptr ss : [esp+0x18], ebx
        mov esi, dword ptr ds : [eax+4]
        cmp esi, ecx
        mov ebp, eax
        mov al, 1
        je public_4b5ae7
        lea ecx, ds:[ecx]
        public_4b5ad0 : nop
        cmp ebx, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov ebp, esi
        je public_4b5ae0
        mov esi, dword ptr ds : [esi]
        jmp public_4b5ae3
        public_4b5ae0 : nop
        mov esi, dword ptr ds : [esi+8]
        public_4b5ae3 : nop
        cmp esi, ecx
        jne public_4b5ad0
        public_4b5ae7 : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_4b5b11
        lea eax, ss:[esp+0x18]
        push eax
        push ebp
        push esi
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, edi
        call public_4b68b0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], edx
        mov byte ptr ss : [esp+0x24], 1
        jmp public_4b5b98
        public_4b5b11 : nop
        test al, al
        mov dword ptr ss : [esp+0x14], ebp
        je public_4b5b56
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, edi
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax]
        jne public_4b5b4d
        lea edx, ss:[esp+0x13]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        push ebp
        push esi
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x27], 1
        call public_4b68b0
        push eax
        jmp public_4b5b8f
        public_4b5b4d : nop
        lea ecx, ss:[esp+0x14]
        call public_43c010
        public_4b5b56 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+0x18]
        cmp ecx, edx
        lea ecx, ss:[esp+0x13]
        push ecx
        jae public_4b5b85
        lea edx, ss:[esp+0x1C]
        push edx
        push ebp
        push esi
        lea eax, ss:[esp+0x3C]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x27], 1
        call public_4b68b0
        push eax
        jmp public_4b5b8f
        public_4b5b85 : nop
        lea edx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x17], 0
        push edx
        public_4b5b8f : nop
        lea ecx, ss:[esp+0x28]
        call public_46d660
        public_4b5b98 : nop
        lea ecx, ss:[esp+0x140]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_4b5a60
        public_4b5bad : nop
        lea ecx, ss:[esp+0x140]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_4b5a31
        pop edi
        pop ebp
        xor esi, esi
        pop ebx
        public_4b5bc7 : nop
        lea eax, ss:[esp+0x155C]
        mov dword ptr ss : [esp+0x16A4], 1
        mov dword ptr ss : [esp+0x20], eax
        lea ecx, ss:[esp+0x155C]
        mov byte ptr ss : [esp+0x16A4], 2
        call dword ptr ds : [public_5c604c]
        mov eax, dword ptr ss : [esp+0x1560]
        cmp eax, esi
        je public_4b5c19
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4b5c10
        cmp cl, 0xFF
        je public_4b5c10
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4b5c19
        public_4b5c10 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4b5c19 : nop
        mov dword ptr ss : [esp+0x1560], esi
        mov dword ptr ss : [esp+0x1564], esi
        mov dword ptr ss : [esp+0x1568], esi
        lea ecx, ss:[esp+0x134]
        mov dword ptr ss : [esp+0x16A4], 3
        call dword ptr ds : [public_5c604c]
        mov eax, dword ptr ss : [esp+0x138]
        cmp eax, esi
        pop esi
        je public_4b5c81
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4b5c78
        cmp cl, 0xFF
        je public_4b5c78
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x1698]
        mov dword ptr fs : [0], ecx
        add esp, 0x16A4
        ret 
        public_4b5c78 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4b5c81 : nop
        mov ecx, dword ptr ss : [esp+0x1698]
        mov dword ptr fs : [0], ecx
        add esp, 0x16A4
        ret 
        UNREACHABLE_TRAP(0x4b59b0)
    }
}

#undef public_4b5a31
#undef public_4b5a60
#undef public_4b5ad0
#undef public_4b5ae0
#undef public_4b5ae3
#undef public_4b5ae7
#undef public_4b5b11
#undef public_4b5b4d
#undef public_4b5b56
#undef public_4b5b85
#undef public_4b5b8f
#undef public_4b5b98
#undef public_4b5bad
#undef public_4b5bc7
#undef public_4b5c10
#undef public_4b5c19
#undef public_4b5c78
#undef public_4b5c81
