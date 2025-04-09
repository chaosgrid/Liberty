#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417780);
CLANG_FORWARD_PROC_SYMBOL(public_4177b0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4997d0);
CLANG_FORWARD_PROC_SYMBOL(public_4999d0);
CLANG_FORWARD_PROC_SYMBOL(public_499c20);
CLANG_FORWARD_PROC_SYMBOL(public_4a3bf0);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_499a5c _public_499a5c
#define public_499a6a _public_499a6a
#define public_499a7f _public_499a7f
#define public_499a84 _public_499a84
#define public_499a8f _public_499a8f
#define public_499ab8 _public_499ab8
#define public_499ad3 _public_499ad3
#define public_499aef _public_499aef
#define public_499b02 _public_499b02
#define public_499b10 _public_499b10
#define public_499b24 _public_499b24
#define public_499b30 _public_499b30
#define public_499b5e _public_499b5e
#define public_499b69 _public_499b69
#define public_499b80 _public_499b80
#define public_499bb5 _public_499bb5
#define public_499bc0 _public_499bc0
#define public_499bd1 _public_499bd1
#define public_499c06 _public_499c06
#define public_499c11 _public_499c11

PROC_DECLARE(0x4999d0, internal_4999d0, public_4999d0);
extern "C" NAKED register_t __cdecl internal_4999d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6720a0]
        sub esp, 8
        cmp eax, 4
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        je public_499c11
        cmp eax, 6
        je public_499c11
        cmp eax, 7
        je public_499c11
        mov ecx, dword ptr ds : [esi+0x86C]
        mov eax, dword ptr ds : [esi+0x870]
        lea edi, ds:[esi+0x868]
        push ecx
        push eax
        push eax
        call public_4a3bf0
        mov ebx, eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push eax
        push ebx
        mov ecx, edi
        call public_53aaa0
        push 0xB50
        mov dword ptr ds : [edi+8], ebx
        call public_421ed0
        push 0xB71
        call public_421ed0
        mov eax, dword ptr ds : [public_610850]
        add esp, 8
        cmp eax, 0x640
        jl public_499a5c
/*FIXUP push offset public_5d3ec4 @0x499a4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3ec4
        call public_4177b0
        mov ebx, eax
        mov dword ptr ss : [esp+0x14], ebx
        jmp public_499a8f
        public_499a5c : nop
        cmp eax, 0x400
        jne public_499a6a
/*FIXUP push offset public_5d3eb8 @0x499a63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3eb8
        jmp public_499a84
        public_499a6a : nop
        cmp eax, 0x500
        je public_499a7f
        cmp eax, 0x480
        je public_499a7f
/*FIXUP push offset public_5d3eac @0x499a78*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3eac
        jmp public_499a84
/*FIXUP public_499a7f : nop
        push offset public_5d3ea0 @0x499a7f*/
  FIXUP public_499a7f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3ea0
        public_499a84 : nop
        call public_4177b0
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        public_499a8f : nop
        mov al, byte ptr ds : [esi+0x478]
        mov ecx, dword ptr ds : [public_679bb0]
        add esp, 4
        test al, al
        mov dword ptr ss : [esp+0x14], ecx
        je public_499ad3
        mov eax, dword ptr ds : [esi+0x4A4]
        test eax, eax
        je public_499ab8
        cmp dword ptr ds : [esi+0x7D0], eax
        jne public_499ad3
        public_499ab8 : nop
        fld dword ptr ds : [esi+0x47C]
        fsubr qword ptr ds : [public_5c89b8]
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        mov byte ptr ss : [esp+0x17], al
        public_499ad3 : nop
        lea edx, ss:[esp+0x14]
        push edx
        call public_417780
        mov eax, dword ptr ds : [esi+0x7D0]
        add esp, 4
        cmp eax, 1
        je public_499aef
        test eax, eax
        jne public_499b02
        public_499aef : nop
        mov al, byte ptr ds : [esi+0x478]
        test al, al
        je public_499b24
        cmp dword ptr ds : [esi+0x4A4], 2
        jne public_499b24
        public_499b02 : nop
        mov ecx, dword ptr ds : [esi+0x400]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_499b24
        mov edi, edi
        public_499b10 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+0x81], 0
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x400]
        jne public_499b10
        public_499b24 : nop
        mov eax, dword ptr ds : [esi+0x400]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_499b69
        public_499b30 : nop
        mov edi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edi+0x4C]
        test eax, eax
        je public_499b5e
        mov al, byte ptr ds : [edi+0x48]
        test al, al
        je public_499b5e
        cmp dword ptr ds : [edi], 0
        jne public_499b5e
        test byte ptr ds : [edi+4], 2
        je public_499b5e
        push edi
        push ebx
        mov ecx, esi
        call public_4997d0
        push edi
        push ebx
        mov ecx, esi
        call public_499c20
        public_499b5e : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [esi+0x400]
        jne public_499b30
        public_499b69 : nop
        mov eax, dword ptr ds : [esi+0x400]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_499bc0
        mov ebx, 0xC40
        lea ebx, ds:[ebx]
        public_499b80 : nop
        mov edi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edi+0x4C]
        test eax, eax
        je public_499bb5
        mov al, byte ptr ds : [edi+0x48]
        test al, al
        je public_499bb5
        cmp dword ptr ds : [edi], 0
        jne public_499bb5
        test dword ptr ds : [edi+4], ebx
        je public_499bb5
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        push edx
        mov ecx, esi
        call public_4997d0
        mov eax, dword ptr ss : [esp+0x10]
        push edi
        push eax
        mov ecx, esi
        call public_499c20
        public_499bb5 : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [esi+0x400]
        jne public_499b80
        public_499bc0 : nop
        mov eax, dword ptr ds : [esi+0x400]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_499c11
        mov ebx, 0x200101
        public_499bd1 : nop
        mov edi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edi+0x4C]
        test eax, eax
        je public_499c06
        mov al, byte ptr ds : [edi+0x48]
        test al, al
        je public_499c06
        cmp dword ptr ds : [edi], 0
        jne public_499c06
        test dword ptr ds : [edi+4], ebx
        je public_499c06
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        push ecx
        mov ecx, esi
        call public_4997d0
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        push edx
        mov ecx, esi
        call public_499c20
        public_499c06 : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [esi+0x400]
        jne public_499bd1
        public_499c11 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4999d0)
    }
}

#undef public_499a5c
#undef public_499a6a
#undef public_499a7f
#undef public_499a84
#undef public_499a8f
#undef public_499ab8
#undef public_499ad3
#undef public_499aef
#undef public_499b02
#undef public_499b10
#undef public_499b24
#undef public_499b30
#undef public_499b5e
#undef public_499b69
#undef public_499b80
#undef public_499bb5
#undef public_499bc0
#undef public_499bd1
#undef public_499c06
#undef public_499c11
