#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627c670);
CLANG_FORWARD_PROC_SYMBOL(public_627c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_627c930);
CLANG_FORWARD_PROC_SYMBOL(public_627c990);
CLANG_FORWARD_PROC_SYMBOL(public_62fd560);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);
CLANG_FORWARD_PROC_SYMBOL(public_630e350);
CLANG_FORWARD_PROC_SYMBOL(public_6313330);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63964d7);

#define public_631338a _public_631338a
#define public_631338e _public_631338e
#define public_63133a4 _public_63133a4
#define public_63133ce _public_63133ce
#define public_63133d0 _public_63133d0
#define public_63133e9 _public_63133e9
#define public_6313404 _public_6313404
#define public_6313424 _public_6313424
#define public_6313448 _public_6313448
#define public_6313467 _public_6313467
#define public_6313471 _public_6313471
#define public_631348d _public_631348d
#define public_6313491 _public_6313491
#define public_63134a1 _public_63134a1
#define public_63134e3 _public_63134e3
#define public_631350e _public_631350e

PROC_DECLARE(0x6313330, internal_6313330, public_6313330);
extern "C" NAKED register_t __cdecl internal_6313330()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63964d7 @0x6313332*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63964d7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push esi
        push edi
        mov esi, ecx
        push 0
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x18], 0
        call public_627c670
        mov dword ptr ss : [esp+0x18], offset public_639b5ac
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 4
        mov dword ptr ss : [esp+0x34], 1
        jl public_631338a
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        add ecx, 4
        add eax, 0xFFFFFFFC
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], eax
        jmp public_631338e
        public_631338a : nop
        mov edx, dword ptr ss : [esp+0x3C]
        public_631338e : nop
        test edx, edx
        jle public_63134a1
        push ebx
        mov ebx, dword ptr ss : [esp+0x40]
        push ebp
        mov ebp, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x10], edx
        public_63133a4 : nop
        push 0x10
        call public_62fd560
        add esp, 4
        test eax, eax
        je public_63133ce
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov edi, eax
        jmp public_63133d0
        public_63133ce : nop
        xor edi, edi
        public_63133d0 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, 4
        jl public_63133e9
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [eax]
        add eax, 4
        add ecx, 0xFFFFFFFC
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ecx
        public_63133e9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 4
        jl public_6313404
        mov ecx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ds : [ecx]
        add ecx, 4
        add eax, 0xFFFFFFFC
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], eax
        public_6313404 : nop
        mov dword ptr ds : [edi+4], ebp
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 4
        jl public_6313424
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        add ecx, 4
        add eax, 0xFFFFFFFC
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], eax
        public_6313424 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 4
        jl public_6313448
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        add ecx, 4
        add eax, 0xFFFFFFFC
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], eax
        public_6313448 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+0xC], eax
        mov al, byte ptr ss : [esp+0x2C]
        test al, al
        je public_6313467
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        je public_6313467
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x30], ecx
        jmp public_6313471
        public_6313467 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_6313471 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], edi
        mov ecx, dword ptr ss : [esp+0x28]
        test ecx, ecx
        je public_631348d
        mov dword ptr ds : [ecx], eax
        jmp public_6313491
        public_631348d : nop
        mov dword ptr ss : [esp+0x24], eax
        public_6313491 : nop
        mov dword ptr ss : [esp+0x28], eax
        dec dword ptr ss : [esp+0x10]
        jne public_63133a4
        pop ebp
        pop ebx
        public_63134a1 : nop
        mov esi, dword ptr ss : [esp+0x3C]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_630e350
        mov dword ptr ss : [esp+0x14], 1
        mov dword ptr ss : [esp+0x18], offset public_639b5a4
        push 1
        lea ecx, ss:[esp+0xC]
        push ecx
        xor edi, edi
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x3C], 2
        mov dword ptr ss : [esp+0x10], edi
        call public_627c8d0
        test al, al
        je public_631350e
        public_63134e3 : nop
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [edx+8]
        push eax
        call public_62fd570
        mov eax, dword ptr ss : [esp+0xC]
        add esp, 4
        push 1
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ds : [eax+8], edi
        call public_627c8d0
        test al, al
        jne public_63134e3
        public_631350e : nop
        lea ecx, ss:[esp+0x18]
        call public_627c990
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x34], 0
        call public_627c930
        mov ecx, dword ptr ss : [esp+0x2C]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x6313330)
    }
}

#undef public_631338a
#undef public_631338e
#undef public_63133a4
#undef public_63133ce
#undef public_63133d0
#undef public_63133e9
#undef public_6313404
#undef public_6313424
#undef public_6313448
#undef public_6313467
#undef public_6313471
#undef public_631348d
#undef public_6313491
#undef public_63134a1
#undef public_63134e3
#undef public_631350e
