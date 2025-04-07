#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebabb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1260);
CLANG_FORWARD_PROC_SYMBOL(public_6f1c3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f487c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a810);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a830);
CLANG_FORWARD_PROC_SYMBOL(public_6f5cf50);

#define public_6ebabf1 _public_6ebabf1
#define public_6ebabf6 _public_6ebabf6
#define public_6ebac0c _public_6ebac0c
#define public_6ebac11 _public_6ebac11
#define public_6ebac27 _public_6ebac27
#define public_6ebac2c _public_6ebac2c
#define public_6ebac42 _public_6ebac42
#define public_6ebac47 _public_6ebac47
#define public_6ebac5d _public_6ebac5d
#define public_6ebac62 _public_6ebac62
#define public_6ebac78 _public_6ebac78
#define public_6ebac7d _public_6ebac7d
#define public_6ebacb4 _public_6ebacb4
#define public_6ebacd0 _public_6ebacd0
#define public_6ebacee _public_6ebacee
#define public_6ebad19 _public_6ebad19
#define public_6ebad23 _public_6ebad23
#define public_6ebad30 _public_6ebad30
#define public_6ebad59 _public_6ebad59
#define public_6ebad65 _public_6ebad65
#define public_6ebad80 _public_6ebad80
#define public_6ebada0 _public_6ebada0
#define public_6ebaddf _public_6ebaddf
#define public_6ebadf9 _public_6ebadf9

PROC_DECLARE(0x6ebabb0, internal_6ebabb0, public_6ebabb0);
extern "C" NAKED register_t __cdecl internal_6ebabb0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        push edi
        call public_6f487c0
        mov edx, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ds : [public_6fb3380]
        sub eax, edx
        neg eax
        sbb eax, eax
        inc eax
        push eax
/*FIXUP push offset public_6fb49b4 @0x6ebabd6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb49b4
        push esi
        call ebp
        mov al, byte ptr ds : [public_6fd1c78]
        add esp, 0xC
        cmp al, 1
        jne public_6ebabf1
/*FIXUP push offset public_6fb49a0 @0x6ebabea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb49a0
        jmp public_6ebabf6
/*FIXUP public_6ebabf1 : nop
        push offset public_6fb498c @0x6ebabf1*/
  FIXUP public_6ebabf1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb498c
        public_6ebabf6 : nop
        push esi
        call ebp
        add esp, 8
        call public_6f5a830
        cmp al, 1
        jne public_6ebac0c
/*FIXUP push offset public_6fb4970 @0x6ebac05*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4970
        jmp public_6ebac11
/*FIXUP public_6ebac0c : nop
        push offset public_6fb4954 @0x6ebac0c*/
  FIXUP public_6ebac0c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4954
        public_6ebac11 : nop
        push esi
        call ebp
        mov al, byte ptr ds : [public_6fd1c79]
        add esp, 8
        cmp al, 1
        jne public_6ebac27
/*FIXUP push offset public_6fb4940 @0x6ebac20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4940
        jmp public_6ebac2c
/*FIXUP public_6ebac27 : nop
        push offset public_6fb492c @0x6ebac27*/
  FIXUP public_6ebac27 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb492c
        public_6ebac2c : nop
        push esi
        call ebp
        add esp, 8
        call public_6f5cf50
        cmp al, 1
        jne public_6ebac42
/*FIXUP push offset public_6fb4918 @0x6ebac3b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4918
        jmp public_6ebac47
/*FIXUP public_6ebac42 : nop
        push offset public_6fb4904 @0x6ebac42*/
  FIXUP public_6ebac42 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4904
        public_6ebac47 : nop
        push esi
        call ebp
        add esp, 8
        call public_6f5a7a0
        cmp al, 1
        jne public_6ebac5d
/*FIXUP push offset public_6fb48ec @0x6ebac56*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb48ec
        jmp public_6ebac62
/*FIXUP public_6ebac5d : nop
        push offset public_6fb48d4 @0x6ebac5d*/
  FIXUP public_6ebac5d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb48d4
        public_6ebac62 : nop
        push esi
        call ebp
        add esp, 8
        call public_6f5a810
        test al, al
        je public_6ebac78
/*FIXUP push offset public_6fb48c0 @0x6ebac71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb48c0
        jmp public_6ebac7d
/*FIXUP public_6ebac78 : nop
        push offset public_6fb48ac @0x6ebac78*/
  FIXUP public_6ebac78 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb48ac
        public_6ebac7d : nop
        push esi
        call ebp
        mov eax, dword ptr ds : [ebx+0x6C]
        add esp, 8
        push eax
/*FIXUP push offset public_6fb489c @0x6ebac87*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb489c
        push esi
        call ebp
        mov ecx, dword ptr ds : [ebx+0x54]
        push ecx
/*FIXUP push offset public_6fb488c @0x6ebac93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb488c
        push esi
        call ebp
        mov al, byte ptr ds : [ebx+0x290]
        add esp, 0x18
        test al, al
        je public_6ebacb4
        push esi
        lea ecx, ds:[ebx+0x21C]
        call public_6f1c3f0
        public_6ebacb4 : nop
        mov al, byte ptr ds : [ebx+0x18]
        test al, al
        jne public_6ebaddf
        mov eax, dword ptr ds : [ebx+0x2F4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6ebad23
        nop 
        lea esp, ss:[esp]
        public_6ebacd0 : nop
        mov al, byte ptr ds : [edi+0x94]
        test al, al
        jne public_6ebad19
        mov al, byte ptr ds : [edi+0x95]
        test al, al
        mov eax, offset public_6fb4368
        jne public_6ebacee
        mov eax, offset public_6fb4360
        public_6ebacee : nop
        push eax
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], 0
        mov byte ptr ss : [esp+0x18], 0
        call public_6ed1260
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ds:[edi+0xC]
        push eax
/*FIXUP push offset public_6fb487c @0x6ebad0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb487c
        push esi
        call ebp
        add esp, 0x10
        public_6ebad19 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+0x2F4]
        jne public_6ebacd0
        public_6ebad23 : nop
        mov eax, dword ptr ds : [ebx+0x314]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6ebad59
        nop 
        public_6ebad30 : nop
        mov ecx, dword ptr ds : [edi+0x94]
        mov edx, dword ptr ds : [edi+0x90]
        push ecx
        push edx
        lea eax, ds:[edi+0xC]
        push eax
/*FIXUP push offset public_6fb4860 @0x6ebad42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4860
        push esi
        call ebp
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ebx+0x314]
        add esp, 0x14
        cmp edi, eax
        jne public_6ebad30
        public_6ebad59 : nop
        mov eax, dword ptr ds : [ebx+0x300]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6ebad80
        public_6ebad65 : nop
        lea ecx, ds:[edi+0xC]
        push ecx
/*FIXUP push offset public_6fb4844 @0x6ebad69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4844
        push esi
        call ebp
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ebx+0x300]
        add esp, 0xC
        cmp edi, eax
        jne public_6ebad65
        public_6ebad80 : nop
        mov edx, dword ptr ds : [ebx+0x2BC]
        push edx
/*FIXUP push offset public_6fb4834 @0x6ebad87*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4834
        push esi
        call ebp
        mov eax, dword ptr ds : [ebx+0x1C8]
        mov edi, dword ptr ds : [eax]
        add esp, 0xC
        cmp edi, eax
        je public_6ebadf9
        mov edi, edi
/*FIXUP public_6ebada0 : nop
        push offset public_6fb4824 @0x6ebada0*/
  FIXUP public_6ebada0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4824
        push esi
        call ebp
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+0xC]
        push ecx
/*FIXUP push offset public_6fb4814 @0x6ebadaf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4814
        push esi
        call ebp
        mov eax, dword ptr ds : [edi+8]
        add eax, 0x10
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        add esp, 0x14
        push esi
        mov ecx, eax
        call dword ptr ds : [edx+0x14]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+0x1C8]
        jne public_6ebada0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
/*FIXUP public_6ebaddf : nop
        push offset public_6fb4824 @0x6ebaddf*/
  FIXUP public_6ebaddf : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4824
        push esi
        call ebp
        mov eax, dword ptr ds : [ebx+0x2E4]
        push eax
/*FIXUP push offset public_6fb4814 @0x6ebadee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4814
        push esi
        call ebp
        add esp, 0x14
        public_6ebadf9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6ebabb0)
    }
}

#undef public_6ebabf1
#undef public_6ebabf6
#undef public_6ebac0c
#undef public_6ebac11
#undef public_6ebac27
#undef public_6ebac2c
#undef public_6ebac42
#undef public_6ebac47
#undef public_6ebac5d
#undef public_6ebac62
#undef public_6ebac78
#undef public_6ebac7d
#undef public_6ebacb4
#undef public_6ebacd0
#undef public_6ebacee
#undef public_6ebad19
#undef public_6ebad23
#undef public_6ebad30
#undef public_6ebad59
#undef public_6ebad65
#undef public_6ebad80
#undef public_6ebada0
#undef public_6ebaddf
#undef public_6ebadf9
