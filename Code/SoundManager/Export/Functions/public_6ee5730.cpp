#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1000);
CLANG_FORWARD_PROC_SYMBOL(public_6ee5730);
CLANG_FORWARD_PROC_SYMBOL(public_6ee5b20);
CLANG_FORWARD_PROC_SYMBOL(public_6ee71c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7600);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8da0);

#define public_6ee5786 _public_6ee5786
#define public_6ee5812 _public_6ee5812
#define public_6ee586b _public_6ee586b
#define public_6ee587a _public_6ee587a
#define public_6ee595a _public_6ee595a
#define public_6ee5963 _public_6ee5963
#define public_6ee59d8 _public_6ee59d8
#define public_6ee59e3 _public_6ee59e3
#define public_6ee5a1c _public_6ee5a1c
#define public_6ee5a50 _public_6ee5a50
#define public_6ee5ace _public_6ee5ace
#define public_6ee5af3 _public_6ee5af3
#define public_6ee5afa _public_6ee5afa
#define public_6ee5b07 _public_6ee5b07

PROC_DECLARE(0x6ee5730, internal_6ee5730, public_6ee5730);
extern "C" NAKED register_t __cdecl internal_6ee5730()
{
    __asm
    {
        mov eax, 0x20D4
        call public_6ee8da0
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x12C]
        test eax, eax
        lea ebp, ds:[esi+0x12C]
        push edi
        jne public_6ee5b07
        push 0
        call dword ptr ds : [public_6ee90d0]
        test eax, eax
        jl public_6ee5b07
        cmp dword ptr ss : [ebp], 0
        mov byte ptr ds : [esi+0x138], 1
        jne public_6ee5786
        push ebp
/*FIXUP push offset public_6ee91bc @0x6ee5772*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ee91bc
        push 1
        push 0
/*FIXUP push offset public_6ee91cc @0x6ee577b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ee91cc
        call dword ptr ds : [public_6ee90cc]
        public_6ee5786 : nop
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_6ee5af3
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x38]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        jge public_6ee5812
        lea eax, ds:[esi+0xD]
        push eax
        lea ecx, ss:[esp+0xE8]
/*FIXUP push offset public_6eea778 @0x6ee57aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea778
        push ecx
        call public_6ee71c0
        mov edx, dword ptr ds : [public_6ee9008]
        push eax
        push 0xB31
/*FIXUP push offset public_6eea070 @0x6ee57c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee57cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push ecx
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x20
        push 0
        push eax
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        jge public_6ee5812
        mov edx, dword ptr ds : [public_6ee9008]
/*FIXUP push offset public_6eea73c @0x6ee57eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea73c
        push 0xB34
/*FIXUP push offset public_6eea070 @0x6ee57f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee57ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [ebp]
        add esp, 0x14
        jmp public_6ee5afa
        public_6ee5812 : nop
        mov ecx, dword ptr ds : [esi+0xF4]
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [eax]
        push 2
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x84]
        push ecx
        mov dword ptr ss : [esp+0x88], 0x60
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0xBC]
        mov ecx, dword ptr ss : [esp+0xA4]
        lea edx, ds:[ecx+eax]
        test edx, edx
        mov dword ptr ds : [esi+0x94], eax
        mov dword ptr ds : [esi+0x50], ecx
        je public_6ee587a
        mov edx, dword ptr ds : [esi+0x54]
        test edx, edx
        jne public_6ee587a
        cmp ecx, eax
        jbe public_6ee586b
        mov eax, ecx
        public_6ee586b : nop
        cmp eax, 8
        mov dword ptr ds : [esi+0x54], eax
        jae public_6ee587a
        mov dword ptr ds : [esi+0x54], 8
        public_6ee587a : nop
        push 0
        xor eax, eax
        lea ebx, ds:[esi+0x130]
        push ebx
        mov ecx, 9
        lea edi, ss:[esp+0x68]
        rep stosd
        mov eax, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x68]
        push edx
        mov dword ptr ss : [esp+0x6C], 0x24
        mov dword ptr ss : [esp+0x70], 0x11
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        cmp dword ptr ds : [ebx], 0
        je public_6ee5ace
        mov edx, dword ptr ds : [esi+0x90]
        mov cl, byte ptr ss : [esp+0x88]
        mov eax, 0xFFFFFFFC
        and edx, eax
        test cl, 0x20
        mov dword ptr ds : [esi+0x90], edx
        jne public_6ee59e3
        mov ecx, dword ptr ss : [esp+0xD4]
        test ecx, ecx
        jne public_6ee59e3
        test byte ptr ds : [esi+0x8C], 1
        mov edi, 4
        je public_6ee5963
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x3C]
        mov word ptr ss : [esp+0x14], 1
        mov word ptr ss : [esp+0x16], 2
        mov dword ptr ss : [esp+0x18], 0x5622
        mov dword ptr ss : [esp+0x1C], 0x15888
        mov word ptr ss : [esp+0x20], di
        mov word ptr ss : [esp+0x22], 0x10
        mov word ptr ss : [esp+0x24], 0
        call public_6ee1000
        mov eax, dword ptr ss : [ebp]
        push 0
        lea edx, ss:[esp+0x3C]
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        mov dword ptr ss : [esp+0x4C], edi
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jl public_6ee595a
        or dword ptr ds : [esi+0x90], 1
        public_6ee595a : nop
        lea ecx, ss:[esp+0x38]
        call public_6ee7600
        public_6ee5963 : nop
        test byte ptr ds : [esi+0x8C], 2
        je public_6ee5a1c
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x3C]
        mov word ptr ss : [esp+0x14], 1
        mov word ptr ss : [esp+0x16], 2
        mov dword ptr ss : [esp+0x18], 0x5622
        mov dword ptr ss : [esp+0x1C], 0x15888
        mov word ptr ss : [esp+0x20], di
        mov word ptr ss : [esp+0x22], 0x10
        mov word ptr ss : [esp+0x24], 0
        call public_6ee1000
        mov ebp, dword ptr ss : [ebp]
        push 0
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        mov dword ptr ss : [esp+0x4C], 0x14
        mov ecx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jl public_6ee59d8
        or dword ptr ds : [esi+0x90], 2
        public_6ee59d8 : nop
        lea ecx, ss:[esp+0x38]
        call public_6ee7600
        jmp public_6ee5a1c
        public_6ee59e3 : nop
        and dword ptr ds : [esi+0x8C], eax
        lea ecx, ss:[esp+0xE4]
/*FIXUP push offset public_6eea704 @0x6ee59f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea704
        push ecx
        call public_6ee71c0
        mov edx, dword ptr ds : [public_6ee9008]
        push eax
        push 0xB5D
/*FIXUP push offset public_6eea070 @0x6ee5a07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5a11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x1C
        public_6ee5a1c : nop
        mov edi, dword ptr ds : [esi+0x9C]
        imul edi, dword ptr ds : [esi+0xA0]
        mov ebp, dword ptr ds : [esi+0x98]
        mov al, byte ptr ss : [esp+0x64]
        shr edi, 3
        imul ebp, edi
        test al, 0x10
        je public_6ee5a50
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x128]
        push edx
/*FIXUP push offset public_6ee91ac @0x6ee5a48*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ee91ac
        push eax
        call dword ptr ds : [ecx]
        public_6ee5a50 : nop
        mov dx, word ptr ds : [esi+0xA0]
        mov ax, word ptr ds : [esi+0x9C]
        mov ecx, dword ptr ds : [esi+0x98]
        mov word ptr ss : [esp+0x32], dx
        mov word ptr ss : [esp+0x26], ax
        mov eax, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x24]
        push edx
        mov word ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], ebp
        mov word ptr ss : [esp+0x34], di
        mov word ptr ss : [esp+0x38], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x38]
        mov ecx, dword ptr ds : [esi+0x64]
        mov edx, dword ptr ds : [esi+0x60]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, dword ptr ds : [esi+0x5C]
        push edx
        mov edx, dword ptr ds : [esi+0x58]
        push ecx
        push edx
        push esi
        call dword ptr ds : [eax+0x2C]
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0
        push 0
        push eax
        call dword ptr ds : [ecx+0x30]
        mov ecx, esi
        call public_6ee5b20
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x20D4
        ret 
        public_6ee5ace : nop
        mov edx, dword ptr ds : [public_6ee9008]
/*FIXUP push offset public_6eea6cc @0x6ee5ad4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea6cc
        push 0xB8E
/*FIXUP push offset public_6eea070 @0x6ee5ade*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee5ae8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6ee5af3 : nop
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_6ee5b07
        public_6ee5afa : nop
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp], 0
        public_6ee5b07 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x20D4
        ret 
        UNREACHABLE_TRAP(0x6ee5730)
    }
}

#undef public_6ee5786
#undef public_6ee5812
#undef public_6ee586b
#undef public_6ee587a
#undef public_6ee595a
#undef public_6ee5963
#undef public_6ee59d8
#undef public_6ee59e3
#undef public_6ee5a1c
#undef public_6ee5a50
#undef public_6ee5ace
#undef public_6ee5af3
#undef public_6ee5afa
#undef public_6ee5b07
