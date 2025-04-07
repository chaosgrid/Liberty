#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6374c40);
CLANG_FORWARD_PROC_SYMBOL(public_6374d50);
CLANG_FORWARD_PROC_SYMBOL(public_6377690);
CLANG_FORWARD_PROC_SYMBOL(public_6378110);
CLANG_FORWARD_PROC_SYMBOL(public_63784b0);
CLANG_FORWARD_PROC_SYMBOL(public_637d510);
CLANG_FORWARD_PROC_SYMBOL(public_6385000);
CLANG_FORWARD_PROC_SYMBOL(public_638c5b0);
CLANG_FORWARD_PROC_SYMBOL(public_639211c);

#define public_63784d6 _public_63784d6
#define public_6378503 _public_6378503
#define public_637853d _public_637853d
#define public_6378577 _public_6378577
#define public_63785c6 _public_63785c6
#define public_63785cf _public_63785cf
#define public_63785eb _public_63785eb

PROC_DECLARE(0x63784b0, internal_63784b0, public_63784b0);
extern "C" NAKED register_t __cdecl internal_63784b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ds : [public_63f3270]
        test eax, eax
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0x20]
        push edi
        je public_63784d6
        push esi
        call public_6378110
        add esp, 4
        mov dword ptr ds : [public_63f3270], 0
        public_63784d6 : nop
        mov edi, dword ptr ss : [ebp+0x18]
        push 6
/*FIXUP push offset public_63f32e8 @0x63784db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f32e8
        push edi
        call dword ptr ds : [public_639925c]
        add esp, 0xC
        test eax, eax
        je public_6378503
/*FIXUP push offset public_63f32b0 @0x63784ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f32b0
        call public_6356960
        add esp, 4
        push 1
        call dword ptr ds : [public_6399294]
        public_6378503 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        push esi
        push eax
        push 0
        call public_6377690
        mov eax, dword ptr ds : [public_658b078]
        mov ebx, 1
        add esp, 0xC
        cmp eax, ebx
        jl public_637853d
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [public_658b7fc]
        push edi
        push ecx
        push edx
/*FIXUP push offset public_63f3274 @0x637852e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3274
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        public_637853d : nop
        push 0
/*FIXUP push offset public_658b724 @0x637853f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b724
        call public_639211c
        add esp, 8
        test eax, eax
        mov dword ptr ss : [ebp-4], eax
        jne public_63785eb
        mov ecx, dword ptr ss : [ebp+0x18]
        push ecx
        mov dword ptr ds : [public_658b8ac], eax
        call public_6374d50
        mov eax, dword ptr ds : [public_658b050]
        add esp, 4
        test eax, eax
        je public_6378577
        mov dword ptr ds : [public_658b19c], ebx
        public_6378577 : nop
        mov eax, dword ptr ds : [public_658b074]
        test eax, eax
        je public_63785c6
        mov edi, dword ptr ss : [ebp+8]
        lea esi, ds:[edi-1]
        push esi
        call public_638c5b0
        mov edx, dword ptr ds : [public_658b240]
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0xC]
        push edx
        push eax
        push ecx
        push edi
        call public_6385000
        mov edi, eax
        mov eax, dword ptr ss : [ebp+0x14]
        add esp, 0x14
        test eax, eax
        je public_63785cf
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_63785cf
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ss : [ebp+0x10], 0
        jmp public_63785cf
        public_63785c6 : nop
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+0x14]
        public_63785cf : nop
        mov edx, dword ptr ss : [ebp+0xC]
        push ebx
        push esi
        push edx
        push edi
        call public_6374c40
        add esp, 0x10
        call public_637d510
        mov eax, dword ptr ss : [ebp-4]
        mov ebx, 1
        public_63785eb : nop
        pop edi
        pop esi
        mov dword ptr ds : [public_658b8ac], ebx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63784b0)
    }
}

#undef public_63784d6
#undef public_6378503
#undef public_637853d
#undef public_6378577
#undef public_63785c6
#undef public_63785cf
#undef public_63785eb
