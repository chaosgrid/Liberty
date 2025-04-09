#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421290);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_4216e0 _public_4216e0
#define public_42175a _public_42175a
#define public_421784 _public_421784
#define public_4217c1 _public_4217c1
#define public_4217e0 _public_4217e0
#define public_421809 _public_421809
#define public_42186b _public_42186b
#define public_4218a8 _public_4218a8
#define public_4218c7 _public_4218c7
#define public_4218f0 _public_4218f0
#define public_421904 _public_421904
#define public_421915 _public_421915
#define public_42194f _public_42194f
#define public_42197c _public_42197c
#define public_4219a3 _public_4219a3
#define public_4219c4 _public_4219c4
#define public_4219d5 _public_4219d5
#define public_421a09 _public_421a09

PROC_DECLARE(0x421690, internal_421690, public_421690);
extern "C" NAKED register_t __cdecl internal_421690()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, 0x2004
        call public_5b7e90
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push 1
        push 0x88
        push eax
        call dword ptr ds : [ecx+0xF0]
        call public_421290
        mov eax, dword ptr ds : [public_6168a8]
        xor ebx, ebx
        cmp eax, ebx
        jbe public_421a09
        mov edx, dword ptr ds : [public_5c6de0]
        push esi
        push edi
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5c9698
        mov eax, 0x8D
        lea ebx, ds:[ebx]
        public_4216e0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_4216e0
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF4]
        movzx edx, byte ptr ds : [public_6648d8]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6648dc @0x421738*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6648dc
        push eax
        call dword ptr ds : [ecx+0x7C]
        mov ecx, dword ptr ds : [public_616888]
        lea eax, ds:[ecx-1]
        cmp eax, 8
        ja public_4219a3
/*FIXUP jmp dword ptr ds : [eax*4+public_421a4c] @0x421753*/
  JMPTB cmp eax, 0
  JMPTB je public_42175a
  JMPTB cmp eax, 1
  JMPTB je public_421784
  JMPTB cmp eax, 2
  JMPTB je public_4217e0
  JMPTB cmp eax, 3
  JMPTB je public_42186b
  JMPTB cmp eax, 4
  JMPTB je public_4218c7
  JMPTB cmp eax, 5
  JMPTB je public_42197c
  JMPTB cmp eax, 6
  JMPTB je public_421809
  JMPTB cmp eax, 7
  JMPTB je public_4218f0
  JMPTB cmp eax, 8
  JMPTB je public_42197c
  JMPTB int 3
        public_42175a : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [public_6168a8]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
/*FIXUP push offset public_6168b8 @0x42176c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6168b8
        push 0x142
        push 1
        push eax
        call dword ptr ds : [ecx+0x114]
        jmp public_4219c4
        public_421784 : nop
        cmp byte ptr ds : [public_6168ac], bl
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        je public_4217c1
        mov edx, dword ptr ds : [public_6168b4]
        push edx
        mov edx, dword ptr ds : [public_6168a8]
/*FIXUP push offset public_65e8b8 @0x4217a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e8b8
        push edx
/*FIXUP push offset public_6168b8 @0x4217a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6168b8
        push 0x142
        push 2
        push eax
        call dword ptr ds : [ecx+0x118]
        jmp public_4219c4
        public_4217c1 : nop
        mov edx, dword ptr ds : [public_6168a8]
        push edx
/*FIXUP push offset public_6168b8 @0x4217c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6168b8
        push 0x142
        push 2
        push eax
        call dword ptr ds : [ecx+0x114]
        jmp public_4219c4
        public_4217e0 : nop
        mov edx, dword ptr ds : [public_6168a8]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
/*FIXUP push offset public_6168b8 @0x4217f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6168b8
        push 0x142
        push 3
        push eax
        call dword ptr ds : [ecx+0x114]
        jmp public_4219c4
        public_421809 : nop
        mov edx, dword ptr ds : [public_6168a8]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
/*FIXUP push offset public_6168b8 @0x42181a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6168b8
        push 0x142
        push 3
        push eax
        call dword ptr ds : [ecx+0x114]
        mov ecx, dword ptr ds : [public_6168a8]
        mov edx, dword ptr ds : [public_5c6de0]
        push ebx
        push 2
        lea esi, ss:[esp+0x18]
        push esi
        push ecx
/*FIXUP push offset public_6168b8 @0x421842*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6168b8
        lea eax, ds:[ecx-1]
        push 0x142
        mov word ptr ss : [esp+0x28], ax
        mov word ptr ss : [esp+0x2A], bx
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push 2
        push eax
        call dword ptr ds : [edx+0x118]
        jmp public_4219c4
        public_42186b : nop
        cmp byte ptr ds : [public_6168ac], bl
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        je public_4218a8
        mov edx, dword ptr ds : [public_6168b4]
        push edx
        mov edx, dword ptr ds : [public_6168a8]
/*FIXUP push offset public_65e8b8 @0x42188a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e8b8
        push edx
/*FIXUP push offset public_6168b8 @0x421890*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6168b8
        push 0x142
        push 4
        push eax
        call dword ptr ds : [ecx+0x118]
        jmp public_4219c4
        public_4218a8 : nop
        mov edx, dword ptr ds : [public_6168a8]
        push edx
/*FIXUP push offset public_6168b8 @0x4218af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6168b8
        push 0x142
        push 4
        push eax
        call dword ptr ds : [ecx+0x114]
        jmp public_4219c4
        public_4218c7 : nop
        mov edx, dword ptr ds : [public_6168a8]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
/*FIXUP push offset public_6168b8 @0x4218d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6168b8
        push 0x142
        push 5
        push eax
        call dword ptr ds : [ecx+0x114]
        jmp public_4219c4
        public_4218f0 : nop
        push ebp
        mov ebp, dword ptr ds : [public_6168b4]
        cmp ebp, 0xAAA
        jb public_421904
        mov ebp, 0xAAA
        public_421904 : nop
        xor eax, eax
        cmp ebp, 3
        jle public_42194f
        mov edi, 3
        mov ecx, offset public_65e8b8
        public_421915 : nop
        mov dx, word ptr ds : [ecx]
        mov si, word ptr ds : [ecx+2]
        mov word ptr ss : [esp+eax*2+0x14], dx
        mov word ptr ss : [esp+eax*2+0x16], si
        mov si, word ptr ds : [ecx+4]
        mov word ptr ss : [esp+eax*2+0x1A], dx
        mov dx, word ptr ds : [ecx+6]
        mov word ptr ss : [esp+eax*2+0x18], si
        mov word ptr ss : [esp+eax*2+0x1C], si
        mov word ptr ss : [esp+eax*2+0x1E], dx
        add edi, 4
        add ecx, 8
        add eax, 6
        cmp edi, ebp
        jl public_421915
        public_42194f : nop
        mov ecx, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov eax, dword ptr ds : [public_6168a8]
        push eax
/*FIXUP push offset public_6168b8 @0x421966*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6168b8
        push 0x142
        push 4
        push ecx
        call dword ptr ds : [edx+0x118]
        pop ebp
        jmp public_4219c4
        public_42197c : nop
        mov ecx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [public_6168a8]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ecx
/*FIXUP push offset public_6168b8 @0x42198e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6168b8
        push 0x142
        push 6
        push eax
        call dword ptr ds : [edx+0x114]
        jmp public_4219c4
        public_4219a3 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x1D2
/*FIXUP push offset public_5c9768 @0x4219af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9768
        mov eax, 0x100002
/*FIXUP push offset public_5c9730 @0x4219b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9730
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_4219c4 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5c96b0
        mov eax, 0x8D
        public_4219d5 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, ebx
        jne public_4219d5
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        pop edi
        pop esi
        public_421a09 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        push ebx
        mov dword ptr ds : [public_616888], 0xFFFFFFFF
        mov dword ptr ds : [public_6168a8], ebx
        mov dword ptr ds : [public_6168b4], ebx
        mov byte ptr ds : [public_6168ac], bl
        mov byte ptr ds : [public_6648d0], bl
        mov dword ptr ds : [public_6648d4], ebx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x108]
        pop ebx
        add esp, 0x2004
        ret 
        UNREACHABLE_TRAP(0x421690)
        ASM_EXPORT_ENTRY_SINGLE(0x42197c, public_42197c)
    }
}

#undef public_4216e0
#undef public_42175a
#undef public_421784
#undef public_4217c1
#undef public_4217e0
#undef public_421809
#undef public_42186b
#undef public_4218a8
#undef public_4218c7
#undef public_4218f0
#undef public_421904
#undef public_421915
#undef public_42194f
#undef public_42197c
#undef public_4219a3
#undef public_4219c4
#undef public_4219d5
#undef public_421a09

#pragma init_seg(compiler)
extern "C" void const* const public_42197c = __AsmFindLabelExport(&internal_421690, 0x42197c);
