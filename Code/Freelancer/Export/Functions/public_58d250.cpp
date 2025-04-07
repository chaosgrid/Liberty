#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d740);
CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5595c0);
CLANG_FORWARD_PROC_SYMBOL(public_57a620);
CLANG_FORWARD_PROC_SYMBOL(public_58d250);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_58d26d _public_58d26d
#define public_58d275 _public_58d275
#define public_58d289 _public_58d289
#define public_58d291 _public_58d291
#define public_58d2a4 _public_58d2a4
#define public_58d2ac _public_58d2ac
#define public_58d2c0 _public_58d2c0
#define public_58d2c8 _public_58d2c8
#define public_58d30e _public_58d30e
#define public_58d316 _public_58d316
#define public_58d321 _public_58d321
#define public_58d329 _public_58d329
#define public_58d359 _public_58d359
#define public_58d3aa _public_58d3aa
#define public_58d3d2 _public_58d3d2
#define public_58d3f8 _public_58d3f8
#define public_58d3ff _public_58d3ff
#define public_58d446 _public_58d446
#define public_58d473 _public_58d473
#define public_58d497 _public_58d497

PROC_DECLARE(0x58d250, internal_58d250, public_58d250);
extern "C" NAKED register_t __cdecl internal_58d250()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx+0x14]
        test eax, eax
        push ebp
        push esi
        push edi
        lea edi, ds:[ebx+0x10]
        mov ebp, ecx
        mov dword ptr ss : [esp+0x10], ebp
        jne public_58d26d
        xor ecx, ecx
        jmp public_58d275
        public_58d26d : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        sar ecx, 2
        public_58d275 : nop
        mov edx, dword ptr ss : [ebp+0x4B4]
        test edx, edx
        lea esi, ss:[ebp+0x4B0]
        jne public_58d289
        xor eax, eax
        jmp public_58d291
        public_58d289 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        public_58d291 : nop
        cmp ecx, eax
        jne public_58d473
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_58d2a4
        xor ecx, ecx
        jmp public_58d2ac
        public_58d2a4 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        sar ecx, 2
        public_58d2ac : nop
        mov edx, dword ptr ss : [ebp+0x4A4]
        add ebp, 0x4A0
        test edx, edx
        jne public_58d2c0
        xor eax, eax
        jmp public_58d2c8
        public_58d2c0 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, edx
        sar eax, 2
        public_58d2c8 : nop
        cmp ecx, eax
        jne public_58d473
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ds : [eax+0x4B4]
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 0x44
        jp public_58d446
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 0x44
        jp public_58d446
        cmp esi, edi
        je public_58d3ff
        mov ebx, dword ptr ds : [edi+4]
        test ebx, ebx
        jne public_58d30e
        xor edx, edx
        jmp public_58d316
        public_58d30e : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, ebx
        sar edx, 2
        public_58d316 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_58d321
        xor eax, eax
        jmp public_58d329
        public_58d321 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_58d329 : nop
        cmp edx, eax
        ja public_58d359
        mov eax, dword ptr ds : [edi+8]
        push ecx
        push eax
        push ebx
        call public_527820
        mov ecx, dword ptr ds : [esi+8]
        add esp, 0xC
        push ecx
        push eax
        mov ecx, esi
        call public_53aaa0
        mov ecx, edi
        call public_5ad970
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        jmp public_58d3f8
        public_58d359 : nop
        mov ecx, edi
        call public_5ad970
        mov ecx, esi
        mov ebx, eax
        call public_40d740
        cmp ebx, eax
        ja public_58d3aa
        mov ebx, dword ptr ds : [edi+4]
        mov ecx, esi
        call public_5ad970
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi+4]
        push ecx
        lea ebx, ds:[ebx+eax*4]
        push ebx
        push edx
        call public_527820
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edi+8]
        add esp, 0xC
        push eax
        push ecx
        push ebx
        mov ecx, esi
        call public_597c70
        mov ecx, edi
        call public_5ad970
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        jmp public_58d3f8
        public_58d3aa : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_53aaa0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, edi
        call public_5ad970
        test eax, eax
        jge public_58d3d2
        xor eax, eax
        public_58d3d2 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_597c70
        mov dword ptr ds : [esi+0xC], eax
        public_58d3f8 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+8], eax
        public_58d3ff : nop
        push ebx
        mov ecx, ebp
        call public_5595c0
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_58d497
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jbe public_58d497
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_58d497
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        sar esi, 2
        test esi, esi
        jbe public_58d497
        mov ecx, dword ptr ss : [esp+0x10]
        push 1
        push 1
        call public_57a620
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_58d446 : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5e5210 @0x58d44c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5210
        push 0x1D0
/*FIXUP push offset public_5e51d8 @0x58d456*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e51d8
        mov eax, 0x100003
/*FIXUP push offset public_5cf094 @0x58d460*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf094
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_58d473 : nop
        push offset public_5e5210 @0x58d473*/
  FIXUP public_58d473 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5210
        push 0x1C9
/*FIXUP push offset public_5e51d8 @0x58d47d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e51d8
        mov eax, 0x100003
/*FIXUP push offset public_5cf094 @0x58d487*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf094
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_58d497 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x58d250)
    }
}

#undef public_58d26d
#undef public_58d275
#undef public_58d289
#undef public_58d291
#undef public_58d2a4
#undef public_58d2ac
#undef public_58d2c0
#undef public_58d2c8
#undef public_58d30e
#undef public_58d316
#undef public_58d321
#undef public_58d329
#undef public_58d359
#undef public_58d3aa
#undef public_58d3d2
#undef public_58d3f8
#undef public_58d3ff
#undef public_58d446
#undef public_58d473
#undef public_58d497
