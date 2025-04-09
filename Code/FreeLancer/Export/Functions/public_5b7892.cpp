#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7700);
CLANG_FORWARD_PROC_SYMBOL(public_5b7762);
CLANG_FORWARD_PROC_SYMBOL(public_5b7793);
CLANG_FORWARD_PROC_SYMBOL(public_5b77f7);
CLANG_FORWARD_PROC_SYMBOL(public_5b7892);

#define public_5b78b4 _public_5b78b4
#define public_5b78ea _public_5b78ea
#define public_5b7902 _public_5b7902
#define public_5b791f _public_5b791f
#define public_5b793b _public_5b793b
#define public_5b7958 _public_5b7958
#define public_5b796c _public_5b796c
#define public_5b799b _public_5b799b
#define public_5b79ad _public_5b79ad
#define public_5b79ed _public_5b79ed
#define public_5b7a1b _public_5b7a1b
#define public_5b7a27 _public_5b7a27
#define public_5b7a30 _public_5b7a30
#define public_5b7a54 _public_5b7a54
#define public_5b7b2f _public_5b7b2f
#define public_5b7b35 _public_5b7b35
#define public_5b7b37 _public_5b7b37

PROC_DECLARE(0x5b7892, internal_5b7892, public_5b7892);
extern "C" NAKED register_t __cdecl internal_5b7892()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x530
        mov eax, dword ptr ds : [public_67ee0c]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        je public_5b78b4
        call eax
        cmp eax, ebx
        mov dword ptr ss : [ebp-8], eax
        jne public_5b7b37
        public_5b78b4 : nop
        push esi
        push edi
        push dword ptr ds : [public_616350]
        call dword ptr ds : [public_5c6f00]
        cmp eax, ebx
        mov dword ptr ss : [ebp-8], eax
        je public_5b7a30
        mov edi, 0x104
        push edi
        lea eax, ss:[ebp-0x530]
        push eax
        call dword ptr ds : [public_5c6f5c]
        test eax, eax
        jne public_5b78ea
        mov byte ptr ss : [ebp-0x530], bl
        public_5b78ea : nop
        push edi
        lea eax, ss:[ebp-0x428]
        push eax
        call dword ptr ds : [public_5c6f64]
        test eax, eax
        jne public_5b7902
        mov byte ptr ss : [ebp-0x428], bl
        public_5b7902 : nop
        mov esi, dword ptr ds : [public_5c6f28]
        push edi
        lea eax, ss:[ebp-0x220]
        push eax
        push dword ptr ss : [ebp-8]
        call esi
        test eax, eax
        jne public_5b791f
        mov byte ptr ss : [ebp-0x220], bl
        public_5b791f : nop
        push edi
        lea eax, ss:[ebp-0x118]
        push eax
        push ebx
        call dword ptr ds : [public_5c6f68]
        push eax
        call esi
        test eax, eax
        jne public_5b793b
        mov byte ptr ss : [ebp-0x118], bl
        public_5b793b : nop
        lea eax, ss:[ebp-0x320]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        lea eax, ss:[ebp-0x118]
        push eax
        call public_5b77f7
        lea eax, ss:[ebp-4]
        lea edx, ds:[eax+1]
        public_5b7958 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        cmp cl, bl
        jne public_5b7958
        sub eax, edx
        mov ecx, eax
        lea eax, ss:[ebp-0x320]
        lea esi, ds:[eax+1]
        public_5b796c : nop
        mov dl, byte ptr ds : [eax]
        inc eax
        cmp dl, bl
        jne public_5b796c
        sub eax, esi
        add eax, ecx
        mov byte ptr ss : [ebp+eax-0x117], bl
        lea eax, ss:[ebp-0x320]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        lea eax, ss:[ebp-0x220]
        push eax
        call public_5b77f7
        lea eax, ss:[ebp-4]
        lea ecx, ds:[eax+1]
        public_5b799b : nop
        mov dl, byte ptr ds : [eax]
        inc eax
        cmp dl, bl
        jne public_5b799b
        sub eax, ecx
        lea ecx, ss:[ebp-0x320]
        lea esi, ds:[ecx+1]
        public_5b79ad : nop
        mov dl, byte ptr ds : [ecx]
        inc ecx
        cmp dl, bl
        jne public_5b79ad
        sub ecx, esi
        add ecx, eax
        lea eax, ss:[ebp-0x220]
        push eax
        lea eax, ss:[ebp-0x428]
        push eax
        mov byte ptr ss : [ebp+ecx-0x21F], bl
        call public_5b7700
        test eax, eax
        jne public_5b79ed
        lea eax, ss:[ebp-0x118]
        push eax
        lea eax, ss:[ebp-0x428]
        push eax
        call public_5b7700
        test eax, eax
        jne public_5b7a1b
        public_5b79ed : nop
        lea eax, ss:[ebp-0x220]
        push eax
        lea eax, ss:[ebp-0x530]
        push eax
        call public_5b7700
        test eax, eax
        jne public_5b7a27
        lea eax, ss:[ebp-0x118]
        push eax
        lea eax, ss:[ebp-0x530]
        push eax
        call public_5b7700
        test eax, eax
        je public_5b7a27
        public_5b7a1b : nop
        push dword ptr ss : [ebp-8]
        call dword ptr ds : [public_5c6f08]
        mov dword ptr ss : [ebp-8], ebx
        public_5b7a27 : nop
        cmp dword ptr ss : [ebp-8], ebx
        jne public_5b7b35
/*FIXUP public_5b7a30 : nop
        push offset public_5e73d4 @0x5b7a30*/
  FIXUP public_5b7a30 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e73d4
        call dword ptr ds : [public_5c6f00]
        mov esi, eax
        push esi
/*FIXUP push offset public_616374 @0x5b7a3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_616374
        call dword ptr ds : [public_5c6f60]
        test eax, eax
        je public_5b7a54
        push esi
        call dword ptr ds : [public_5c6f08]
        public_5b7a54 : nop
        mov eax, dword ptr ds : [public_616374]
        cmp eax, ebx
        je public_5b7b35
/*FIXUP push offset public_5e7464 @0x5b7a61*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7464
        push eax
        call public_5b7793
/*FIXUP push offset public_5e7450 @0x5b7a6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7450
        push dword ptr ds : [public_616374]
        mov esi, eax
        call public_5b7793
/*FIXUP push offset public_5e7444 @0x5b7a7e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7444
        push dword ptr ds : [public_616374]
        mov edi, eax
        call public_5b7793
        cmp esi, ebx
        mov dword ptr ss : [ebp-0x10], eax
        mov dword ptr ss : [ebp-4], ebx
        je public_5b7b35
        cmp edi, ebx
        je public_5b7b35
        cmp eax, ebx
        je public_5b7b35
        lea eax, ss:[ebp-4]
        push eax
        push 1
        push ebx
/*FIXUP push offset public_5e7418 @0x5b7ab5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7418
        push 0x80000002
        call esi
        test eax, eax
        jne public_5b7b35
        lea eax, ss:[ebp-0xC]
        push eax
        lea eax, ss:[ebp-0x118]
        push eax
        push ebx
        push ebx
/*FIXUP push offset public_5e7408 @0x5b7ad2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7408
        push dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0xC], 0x104
        mov byte ptr ss : [ebp-0x118], bl
        call edi
        test eax, eax
        jne public_5b7b2f
/*FIXUP push offset public_5e73f0 @0x5b7aed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e73f0
        mov esi, 0x105
        push esi
        lea eax, ss:[ebp-0x118]
        push eax
        call public_5b7762
        cmp eax, ebx
        jl public_5b7b2f
        push dword ptr ds : [public_616350]
        lea eax, ss:[ebp-0x118]
        push esi
        push eax
        call public_5b7762
        cmp eax, ebx
        jl public_5b7b2f
        lea eax, ss:[ebp-0x118]
        push eax
        call dword ptr ds : [public_5c6f00]
        mov dword ptr ss : [ebp-8], eax
        public_5b7b2f : nop
        push dword ptr ss : [ebp-4]
        call dword ptr ss : [ebp-0x10]
        public_5b7b35 : nop
        pop edi
        pop esi
        public_5b7b37 : nop
        mov eax, dword ptr ss : [ebp-8]
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x5b7892)
    }
}

#undef public_5b78b4
#undef public_5b78ea
#undef public_5b7902
#undef public_5b791f
#undef public_5b793b
#undef public_5b7958
#undef public_5b796c
#undef public_5b799b
#undef public_5b79ad
#undef public_5b79ed
#undef public_5b7a1b
#undef public_5b7a27
#undef public_5b7a30
#undef public_5b7a54
#undef public_5b7b2f
#undef public_5b7b35
#undef public_5b7b37
