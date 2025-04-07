#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6f95e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f98df0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0410);
CLANG_FORWARD_PROC_SYMBOL(public_6fa2db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa30e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1890);

#define public_6f9990c _public_6f9990c
#define public_6f99989 _public_6f99989
#define public_6f999a6 _public_6f999a6
#define public_6f999c4 _public_6f999c4
#define public_6f999e2 _public_6f999e2
#define public_6f99a04 _public_6f99a04
#define public_6f99a56 _public_6f99a56
#define public_6f99a66 _public_6f99a66
#define public_6f99a80 _public_6f99a80
#define public_6f99aba _public_6f99aba
#define public_6f99b0a _public_6f99b0a
#define public_6f99b1a _public_6f99b1a
#define public_6f99b30 _public_6f99b30
#define public_6f99b6a _public_6f99b6a
#define public_6f99bf9 _public_6f99bf9
#define public_6f99c23 _public_6f99c23
#define public_6f99c4c _public_6f99c4c
#define public_6f99c6f _public_6f99c6f
#define public_6f99c90 _public_6f99c90
#define public_6f99c96 _public_6f99c96
#define public_6f99caa _public_6f99caa
#define public_6f99caf _public_6f99caf

PROC_DECLARE(0x6f998c0, internal_6f998c0, public_6f998c0);
extern "C" NAKED register_t __cdecl internal_6f998c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1890 @0x6f998c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1890
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        push ebx
        mov ebx, dword ptr ds : [public_6fb3014]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x68]
        push edi
        mov edi, ecx
/*FIXUP push offset public_6fb44f4 @0x6f998e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44f4
        mov ecx, esi
        mov byte ptr ss : [esp+0x17], 1
        call ebx
        test al, al
        mov ecx, esi
        je public_6f9990c
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [edi+4]
        jmp public_6f99caf
/*FIXUP public_6f9990c : nop
        push offset public_6fbcf14 @0x6f9990c*/
  FIXUP public_6f9990c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcf14
        call ebx
        test al, al
        je public_6f99989
        mov al, byte ptr ss : [esp+0x6C]
        xor ebx, ebx
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x28], al
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x20], offset public_6fbcf08
        mov eax, dword ptr ds : [edi+0x10]
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ds:[edi+8]
        push 1
        push eax
        mov dword ptr ss : [esp+0x70], ebx
        call public_6fa2db0
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x6C], 0xFFFFFFFF
        call public_6fa0410
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        call public_6fa8fe0
        mov edi, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi-0x18]
        add esp, 4
        lea ecx, ds:[edi-0x18]
        push esi
        call dword ptr ds : [eax]
        jmp public_6f99caf
/*FIXUP public_6f99989 : nop
        push offset public_6fbcef8 @0x6f99989*/
  FIXUP public_6f99989 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcef8
        mov ecx, esi
        call ebx
        test al, al
        je public_6f999a6
        mov edx, dword ptr ds : [edi+0x18]
        lea ecx, ds:[edi+0x18]
        push 0
        push esi
        call dword ptr ds : [edx]
        jmp public_6f99caf
/*FIXUP public_6f999a6 : nop
        push offset public_6fbcee8 @0x6f999a6*/
  FIXUP public_6f999a6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcee8
        mov ecx, esi
        call ebx
        test al, al
        je public_6f999c4
        mov eax, dword ptr ds : [edi+0x30]
        lea ecx, ds:[edi+0x30]
        push 0
        push esi
        call dword ptr ds : [eax+4]
        jmp public_6f99caf
/*FIXUP public_6f999c4 : nop
        push offset public_6fbcedc @0x6f999c4*/
  FIXUP public_6f999c4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcedc
        mov ecx, esi
        call ebx
        test al, al
        je public_6f999e2
        mov edx, dword ptr ds : [edi+0x60]
        lea ecx, ds:[edi+0x60]
        push 0
        push esi
        call dword ptr ds : [edx+4]
        jmp public_6f99caf
/*FIXUP public_6f999e2 : nop
        push offset public_6fbb430 @0x6f999e2*/
  FIXUP public_6f999e2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb430
        mov ecx, esi
        call ebx
        test al, al
        je public_6f99a04
        mov eax, dword ptr ds : [edi+0x90]
        lea ecx, ds:[edi+0x90]
        push esi
        call dword ptr ds : [eax+0xC]
        jmp public_6f99caf
/*FIXUP public_6f99a04 : nop
        push offset public_6fbb468 @0x6f99a04*/
  FIXUP public_6f99a04 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb468
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_6f99aba
/*FIXUP push offset public_6fb5ca0 @0x6f99a17*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5ca0
        xor ebx, ebx
        add edi, 0x9C
        push ebx
        mov dword ptr ss : [esp+0x1C], edi
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f99a66
        mov esi, dword ptr ds : [public_6fd3d8c]
        cmp byte ptr ds : [esi+4], bl
        jne public_6f99a56
        push esi
        call dword ptr ds : [public_6fb34a0]
        add esp, 4
        mov byte ptr ds : [esi+4], 1
        public_6f99a56 : nop
        add esi, 8
        push esi
        mov ecx, edi
        call public_6eb6560
        jmp public_6f99caf
        public_6f99a66 : nop
        push ebx
        mov ebx, dword ptr ds : [public_6fb306c]
        mov ecx, esi
        xor edi, edi
        call ebx
        test al, al
        jne public_6f99caf
        nop 
        lea esp, ss:[esp]
        public_6f99a80 : nop
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        lea ecx, ss:[esp+0x70]
        push ecx
        call dword ptr ds : [public_6fb361c]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        lea edx, ss:[esp+0x6C]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6f95e00
        inc edi
        push edi
        mov ecx, esi
        call ebx
        test al, al
        je public_6f99a80
        jmp public_6f99caf
/*FIXUP public_6f99aba : nop
        push offset public_6fbcecc @0x6f99aba*/
  FIXUP public_6f99aba : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcecc
        call ebx
        test al, al
        mov ecx, esi
        je public_6f99b6a
/*FIXUP push offset public_6fb5ca0 @0x6f99acb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5ca0
        xor ebx, ebx
        add edi, 0xAC
        push ebx
        mov dword ptr ss : [esp+0x1C], edi
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f99b1a
        mov esi, dword ptr ds : [public_6fd3d8c]
        cmp byte ptr ds : [esi+4], bl
        jne public_6f99b0a
        push esi
        call dword ptr ds : [public_6fb34a0]
        add esp, 4
        mov byte ptr ds : [esi+4], 1
        public_6f99b0a : nop
        add esi, 8
        push esi
        mov ecx, edi
        call public_6eb6560
        jmp public_6f99caf
        public_6f99b1a : nop
        push ebx
        mov ebx, dword ptr ds : [public_6fb306c]
        mov ecx, esi
        xor edi, edi
        call ebx
        test al, al
        jne public_6f99caf
        nop 
        public_6f99b30 : nop
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        lea ecx, ss:[esp+0x70]
        push ecx
        call dword ptr ds : [public_6fb361c]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        lea edx, ss:[esp+0x6C]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6f95e00
        inc edi
        push edi
        mov ecx, esi
        call ebx
        test al, al
        je public_6f99b30
        jmp public_6f99caf
/*FIXUP public_6f99b6a : nop
        push offset public_6fbcebc @0x6f99b6a*/
  FIXUP public_6f99b6a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcebc
        call ebx
        test al, al
        je public_6f99bf9
        mov cl, byte ptr ss : [esp+0x6C]
        xor ebx, ebx
        mov edx, 1
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], edx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov byte ptr ss : [esp+0x4C], cl
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov eax, dword ptr ds : [edi+0xC4]
        lea ebp, ss:[esp+0x38]
        push ebp
        lea ecx, ds:[edi+0xBC]
        push edx
        push eax
        mov dword ptr ss : [esp+0x70], edx
        call public_6fa30e0
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        mov dword ptr ss : [esp+0x68], 0xFFFFFFFF
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+0xC4]
        add esp, 4
        push esi
        sub ecx, 0x24
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        call public_6f98df0
        jmp public_6f99caf
/*FIXUP public_6f99bf9 : nop
        push offset public_6fbcea4 @0x6f99bf9*/
  FIXUP public_6f99bf9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcea4
        mov ecx, esi
        call ebx
        test al, al
        je public_6f99caa
        xor ebx, ebx
        push ebx
        mov ecx, esi
        mov dword ptr ds : [edi+0xCC], ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6f99caf
        public_6f99c23 : nop
        mov ebp, dword ptr ds : [public_6fb3294]
/*FIXUP push offset public_6fbce9c @0x6f99c29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbce9c
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f99c4c
        mov eax, dword ptr ds : [edi+0xCC]
        or eax, 1
        jmp public_6f99c90
/*FIXUP public_6f99c4c : nop
        push offset public_6fbce94 @0x6f99c4c*/
  FIXUP public_6f99c4c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbce94
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f99c6f
        mov eax, dword ptr ds : [edi+0xCC]
        or eax, 2
        jmp public_6f99c90
/*FIXUP public_6f99c6f : nop
        push offset public_6fbce88 @0x6f99c6f*/
  FIXUP public_6f99c6f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbce88
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f99c96
        mov eax, dword ptr ds : [edi+0xCC]
        or eax, 4
        public_6f99c90 : nop
        mov dword ptr ds : [edi+0xCC], eax
        public_6f99c96 : nop
        inc ebx
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6f99c23
        jmp public_6f99caf
        public_6f99caa : nop
        mov byte ptr ss : [esp+0x13], 0
        public_6f99caf : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 4
        UNREACHABLE_TRAP(0x6f998c0)
    }
}

#undef public_6f9990c
#undef public_6f99989
#undef public_6f999a6
#undef public_6f999c4
#undef public_6f999e2
#undef public_6f99a04
#undef public_6f99a56
#undef public_6f99a66
#undef public_6f99a80
#undef public_6f99aba
#undef public_6f99b0a
#undef public_6f99b1a
#undef public_6f99b30
#undef public_6f99b6a
#undef public_6f99bf9
#undef public_6f99c23
#undef public_6f99c4c
#undef public_6f99c6f
#undef public_6f99c90
#undef public_6f99c96
#undef public_6f99caa
#undef public_6f99caf
