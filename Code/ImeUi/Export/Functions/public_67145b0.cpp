#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6714550);
CLANG_FORWARD_PROC_SYMBOL(public_67145b0);
CLANG_FORWARD_PROC_SYMBOL(public_6714810);
CLANG_FORWARD_PROC_SYMBOL(public_67148b0);
CLANG_FORWARD_PROC_SYMBOL(public_67149e0);
CLANG_FORWARD_PROC_SYMBOL(public_6714b10);
CLANG_FORWARD_PROC_SYMBOL(public_6714b80);
CLANG_FORWARD_PROC_SYMBOL(public_6715440);
CLANG_FORWARD_PROC_SYMBOL(public_67154c0);
CLANG_FORWARD_PROC_SYMBOL(public_6715d30);
CLANG_FORWARD_PROC_SYMBOL(public_6715da0);
CLANG_FORWARD_PROC_SYMBOL(public_6715f60);
CLANG_FORWARD_PROC_SYMBOL(public_6716982);
CLANG_FORWARD_PROC_SYMBOL(public_6716988);
CLANG_FORWARD_PROC_SYMBOL(public_671699a);
CLANG_FORWARD_PROC_SYMBOL(public_67169a0);
CLANG_FORWARD_PROC_SYMBOL(public_67169a6);

#define public_67145f8 _public_67145f8
#define public_67145fe _public_67145fe
#define public_6714600 _public_6714600
#define public_6714661 _public_6714661
#define public_6714685 _public_6714685
#define public_67146a3 _public_67146a3
#define public_67146c5 _public_67146c5
#define public_67146cf _public_67146cf
#define public_6714712 _public_6714712
#define public_671471c _public_671471c
#define public_671473b _public_671473b
#define public_67147ee _public_67147ee
#define public_67147f4 _public_67147f4

PROC_DECLARE(0x67145b0, internal_67145b0, public_67145b0);
extern "C" NAKED register_t __cdecl internal_67145b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
/*FIXUP push offset public_671cef8 @0x67145b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671cef8
        mov dword ptr ds : [public_671b54c], eax
        mov dword ptr ds : [public_671cef8], 0x94
        call dword ptr ds : [public_67170ac]
        mov eax, dword ptr ds : [public_671cf08]
        xor bl, bl
        cmp eax, 2
        je public_67145f8
        mov eax, dword ptr ds : [public_671cefc]
        cmp eax, 4
        ja public_67145f8
        jne public_67145fe
        mov eax, dword ptr ds : [public_671cf00]
        xor ebp, ebp
        cmp eax, ebp
        jbe public_6714600
        mov bl, 1
        jmp public_6714600
        public_67145f8 : nop
        xor ebp, ebp
        mov bl, 1
        jmp public_6714600
        public_67145fe : nop
        xor ebp, ebp
/*FIXUP public_6714600 : nop
        push offset public_67191dc @0x6714600*/
  FIXUP public_6714600 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_67191dc
        call dword ptr ds : [public_67170a8]
        mov esi, eax
        cmp esi, ebp
        je public_67147f4
        push edi
        mov edi, dword ptr ds : [public_6719358]
/*FIXUP push offset public_67191d0 @0x671461c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67191d0
        push esi
        call edi
/*FIXUP push offset public_67191c0 @0x6714624*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67191c0
        push esi
        mov dword ptr ds : [public_671b5a0], eax
        call edi
/*FIXUP push offset public_67191b4 @0x6714631*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67191b4
        push esi
        mov dword ptr ds : [public_671b558], eax
        call edi
/*FIXUP push offset public_67191a4 @0x671463e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67191a4
        push esi
        mov dword ptr ds : [public_671ced4], eax
        call edi
/*FIXUP push offset public_6719188 @0x671464b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719188
        push esi
        mov dword ptr ds : [public_671b550], eax
        call edi
        cmp eax, ebp
        pop edi
        je public_6714661
        push 0xFFFFFFFF
        call eax
        public_6714661 : nop
        test bl, bl
        je public_6714685
        mov dword ptr ds : [public_671cf94], offset _public_67169a6
        mov dword ptr ds : [public_671b9c0], offset _public_67169a0
        mov dword ptr ds : [public_671ced0], offset _public_6714b80
        jmp public_67146a3
        public_6714685 : nop
        mov dword ptr ds : [public_671b9c0], offset _public_671699a
        mov dword ptr ds : [public_671cf94], offset _public_67149e0
        mov dword ptr ds : [public_671ced0], offset _public_67148b0
        public_67146a3 : nop
        cmp dword ptr ds : [public_671cf08], 2
        je public_67146c5
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call dword ptr ds : [public_6719380]
        test eax, eax
        mov dword ptr ds : [public_671b3fc], offset _public_6714810
        je public_67146cf
        public_67146c5 : nop
        mov dword ptr ds : [public_671b3fc], offset _public_6714b10
        public_67146cf : nop
        mov al, byte ptr ds : [public_671cfcc]
        mov byte ptr ds : [public_671cfba], 1
        test al, al
        jne public_6714712
        mov edx, dword ptr ds : [public_671b54c]
        mov byte ptr ds : [public_671cfcc], 1
        push edx
        call public_6715f60
        mov eax, dword ptr ds : [public_671b54c]
        add esp, 4
        push eax
        call public_6716988
        mov ecx, dword ptr ds : [public_671b54c]
        push eax
        push ecx
        mov dword ptr ds : [public_671b3f8], eax
        call public_6716982
        public_6714712 : nop
        cmp dword ptr ds : [public_671b3f8], ebp
        jne public_671473b
        mov bl, 1
        public_671471c : nop
        push ebp
        mov dword ptr ds : [public_671cfa8], 1
        call public_6714550
        add esp, 4
        mov byte ptr ds : [public_671cfba], bl
        xor al, al
        pop esi
        pop ebp
        pop ebx
        ret 
        public_671473b : nop
        mov bl, byte ptr ss : [esp+0x14]
        test bl, bl
        jne public_671471c
        cmp dword ptr ds : [public_671b7ac], ebp
        je public_671471c
        cmp dword ptr ds : [public_671b408], ebp
        je public_671471c
        cmp dword ptr ds : [public_671b404], ebp
        je public_671471c
        cmp dword ptr ds : [public_671bacc], ebp
        je public_671471c
        call dword ptr ds : [public_6717100]
        mov dword ptr ds : [public_671cfb0], eax
        mov dword ptr ds : [public_671b510], ebp
        mov dword ptr ds : [public_671b514], ebp
        mov dword ptr ds : [public_671b518], ebp
        mov dword ptr ds : [public_671b51c], ebp
        mov dword ptr ds : [public_671b520], ebp
        mov dword ptr ds : [public_671b524], ebp
        mov dword ptr ds : [public_671b52c], 0x280
        mov dword ptr ds : [public_671b528], ebp
        mov dword ptr ds : [public_671b530], 0x1E0
        call public_6715da0
        push 3
        call public_6715440
        call public_67154c0
        push ebp
        call public_6714550
        add esp, 8
        call public_6715d30
        mov al, byte ptr ds : [public_671cfcc]
        test al, al
        je public_67147ee
        mov al, byte ptr ds : [public_671cfba]
        test al, al
        je public_67147ee
        cmp dword ptr ds : [public_671cfa8], ebp
        jne public_67147ee
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 
        public_67147ee : nop
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_67147f4 : nop
        pop esi
        pop ebp
        mov dword ptr ds : [public_671cfa8], 1
        xor al, al
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x67145b0)
    }
}

#undef public_67145f8
#undef public_67145fe
#undef public_6714600
#undef public_6714661
#undef public_6714685
#undef public_67146a3
#undef public_67146c5
#undef public_67146cf
#undef public_6714712
#undef public_671471c
#undef public_671473b
#undef public_67147ee
#undef public_67147f4
