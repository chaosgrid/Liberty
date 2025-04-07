#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e100);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636ebb0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636efc0);
CLANG_FORWARD_PROC_SYMBOL(public_6370660);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_638e540);
CLANG_FORWARD_PROC_SYMBOL(public_63902d0);
CLANG_FORWARD_PROC_SYMBOL(public_63906f0);
CLANG_FORWARD_PROC_SYMBOL(public_6390b10);

#define public_6390305 _public_6390305
#define public_639032e _public_639032e
#define public_639033b _public_639033b
#define public_6390364 _public_6390364
#define public_6390370 _public_6390370
#define public_6390387 _public_6390387
#define public_6390391 _public_6390391
#define public_63903a0 _public_63903a0
#define public_63903b7 _public_63903b7
#define public_63903c3 _public_63903c3
#define public_63903de _public_63903de
#define public_63903ec _public_63903ec
#define public_639041f _public_639041f
#define public_6390451 _public_6390451
#define public_6390482 _public_6390482
#define public_639048a _public_639048a
#define public_639049d _public_639049d
#define public_63904b2 _public_63904b2
#define public_63904c4 _public_63904c4
#define public_63904e2 _public_63904e2
#define public_6390504 _public_6390504
#define public_6390518 _public_6390518
#define public_6390533 _public_6390533
#define public_6390552 _public_6390552
#define public_6390555 _public_6390555
#define public_639055e _public_639055e
#define public_6390584 _public_6390584
#define public_639059d _public_639059d
#define public_63905af _public_63905af
#define public_63905cf _public_63905cf
#define public_63905d9 _public_63905d9
#define public_6390607 _public_6390607
#define public_6390643 _public_6390643
#define public_6390654 _public_6390654
#define public_6390668 _public_6390668
#define public_639067d _public_639067d
#define public_6390687 _public_6390687
#define public_639068a _public_639068a
#define public_639069f _public_639069f
#define public_63906c4 _public_63906c4
#define public_63906c7 _public_63906c7
#define public_63906e5 _public_63906e5

PROC_DECLARE(0x63902d0, internal_63902d0, public_63902d0);
extern "C" NAKED register_t __cdecl internal_63902d0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        xor esi, esi
        cmp eax, esi
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        je public_639033b
        mov ebp, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [ebp+0x50]
        test ah, 2
        jne public_6390305
        mov eax, dword ptr ss : [ebp+0x34]
        push eax
        call public_6390b10
        add esp, 4
        public_6390305 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ebx+0x34]
        mov edx, dword ptr ss : [ebp+0x34]
        mov ecx, dword ptr ds : [ecx+4]
        cmp dword ptr ds : [edx+4], ecx
        lea eax, ss:[ebp+0x34]
        mov dword ptr ss : [esp+0x24], ecx
        je public_639032e
        push ecx
        push esi
        push eax
        call public_636e100
        add esp, 0xC
        jmp public_63904e2
        public_639032e : nop
        mov dword ptr ss : [esp+0x14], 1
        jmp public_63904e2
        public_639033b : nop
        mov edx, dword ptr ds : [public_658bd60]
        mov ebx, dword ptr ss : [esp+0x1C]
        inc edx
        mov dword ptr ds : [public_658bd60], edx
        mov eax, dword ptr ds : [ebx+0x34]
        cmp eax, esi
        je public_6390370
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, esi
        je public_6390370
        mov edx, 0xFEFFFFFF
        public_6390364 : nop
        and dword ptr ds : [eax+0x14], edx
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, esi
        jne public_6390364
        public_6390370 : nop
        mov eax, dword ptr ds : [ebx+0x38]
        cmp eax, esi
        mov ebp, dword ptr ss : [esp+0x20]
        je public_63903c3
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, esi
        je public_63903c3
        public_6390387 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp edx, ebx
        jne public_6390391
        mov edx, dword ptr ds : [eax+8]
        public_6390391 : nop
        cmp edx, ebp
        je public_63903a0
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, esi
        jne public_6390387
        jmp public_63903c3
        public_63903a0 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        je public_63903c3
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, esi
        je public_63903c3
        mov edx, 0x5000000
        public_63903b7 : nop
        or dword ptr ds : [eax+0x14], edx
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, esi
        jne public_63903b7
        public_63903c3 : nop
        mov ecx, dword ptr ds : [ebx+0x34]
        xor eax, eax
        cmp ecx, esi
        je public_63903ec
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 4
        add ecx, 4
        cmp eax, esi
        je public_63903ec
        mov edx, 0x1000000
        public_63903de : nop
        test dword ptr ds : [eax+0x14], edx
        je public_63903ec
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        cmp eax, esi
        jne public_63903de
        public_63903ec : nop
        cmp dword ptr ds : [public_658b078], 4
        mov dword ptr ss : [esp+0x24], eax
        jl public_639041f
        mov ecx, dword ptr ss : [ebp+0x4C]
        mov edx, dword ptr ds : [ebx+0x4C]
        mov eax, dword ptr ds : [eax+0x14]
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63fb3ac @0x6390410*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb3ac
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        public_639041f : nop
        mov eax, dword ptr ss : [ebp+0x34]
        cmp eax, esi
        lea edi, ss:[ebp+0x34]
        je public_639048a
        mov dword ptr ss : [esp+0x10], esi
        mov esi, dword ptr ds : [eax+4]
        push eax
        call public_636ec10
        add esp, 4
        test eax, eax
        jle public_639048a
        mov edx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [edx+0x14]
        mov edx, ebx
        and edx, 0xFFFFFF
        mov ecx, 4
        public_6390451 : nop
        mov esi, dword ptr ds : [esi+0x14]
        mov ebp, esi
        and ebp, 0xFFFFFF
        cmp ebp, edx
        jb public_6390482
        mov ebp, ebx
        xor ebp, esi
        test ebp, 0xFFFFFF
        je public_63904b2
        mov ebp, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edi]
        mov esi, dword ptr ds : [ecx+esi+4]
        inc ebp
        add ecx, 4
        cmp ebp, eax
        mov dword ptr ss : [esp+0x10], ebp
        jl public_6390451
        public_6390482 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x20]
        public_639048a : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        push edi
        call public_636e100
        add esp, 0xC
        public_639049d : nop
        mov eax, dword ptr ss : [ebp+0x50]
        test ah, 2
        jne public_63904c4
        mov edx, dword ptr ds : [edi]
        push edx
        call public_6390b10
        add esp, 4
        jmp public_63904e2
        public_63904b2 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x14], 1
        jmp public_639049d
        public_63904c4 : nop
        mov eax, dword ptr ss : [esp+0x24]
        test dword ptr ds : [eax+0x14], 0x10000000
        jne public_63904e2
        mov esi, eax
        push esi
        call public_6370660
        push esi
        call public_636efc0
        add esp, 8
        public_63904e2 : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_6390504
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov edx, dword ptr ds : [public_658b7fc]
        push ecx
/*FIXUP push offset public_63fb378 @0x63904f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb378
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_6390504 : nop
        mov eax, dword ptr ds : [ebx+0x34]
        test eax, eax
        je public_639055e
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_639055e
        public_6390518 : nop
        cmp esi, dword ptr ss : [esp+0x24]
        jne public_6390533
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jne public_6390533
        mov eax, dword ptr ds : [esi+0xC]
        push ebp
        push ebx
        push eax
        call public_636ebb0
        jmp public_6390552
        public_6390533 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        push ebx
        push ecx
        call public_636e400
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [edx+8]
        add esp, 8
        test eax, eax
        jne public_6390555
        push ebp
        push ebx
        push esi
        call public_63906f0
        public_6390552 : nop
        add esp, 0xC
        public_6390555 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_6390518
        public_639055e : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_6390584
        mov eax, dword ptr ss : [ebp+0x4C]
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
/*FIXUP push offset public_63fb338 @0x6390575*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb338
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_6390584 : nop
        inc dword ptr ds : [public_658b8e0]
        mov eax, dword ptr ss : [ebp+0x3C]
        test eax, eax
        je public_63905af
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_63905af
        public_639059d : nop
        mov edx, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [eax+0x48], edx
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_639059d
        public_63905af : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_639069f
        mov esi, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test esi, esi
        mov dword ptr ss : [esp+0x1C], eax
        je public_639069f
        public_63905cf : nop
        mov edi, dword ptr ds : [esi+4]
        cmp edi, ebx
        jne public_63905d9
        mov edi, dword ptr ds : [esi+8]
        public_63905d9 : nop
        cmp edi, ebp
        push esi
        jne public_6390607
        mov eax, dword ptr ss : [ebp+0x38]
        push eax
        call public_636e400
        push esi
        call public_636e740
        push 0x10
        push esi
        call public_6377fe0
        mov ecx, dword ptr ss : [ebp+0x3C]
        push ebx
        push ecx
        call public_636e400
        add esp, 0x1C
        jmp public_639068a
        public_6390607 : nop
        lea edx, ss:[ebp+0x38]
        push edx
        call public_636e1b0
        mov eax, dword ptr ds : [edi+0x48]
        mov ecx, dword ptr ds : [public_658b8e0]
        add esp, 8
        cmp eax, ecx
        je public_6390643
        lea eax, ss:[ebp+0x3C]
        push edi
        push eax
        call public_636e1b0
        mov ecx, dword ptr ds : [edi+0x3C]
        push ebp
        push ebx
        push ecx
        call public_636ebb0
        mov edx, dword ptr ds : [public_658b8e0]
        add esp, 0x14
        mov dword ptr ds : [edi+0x48], edx
        jmp public_639067d
        public_6390643 : nop
        mov eax, dword ptr ds : [edi+0x50]
        test ah, 0x10
        je public_6390654
        push edi
        call public_638e540
        add esp, 4
        public_6390654 : nop
        mov eax, dword ptr ds : [edi+0x3C]
        cmp dword ptr ds : [eax+4], ebx
        je public_6390668
        push ebx
        push eax
        call public_636e400
        add esp, 8
        jmp public_639067d
        public_6390668 : nop
        push ebp
        push eax
        call public_636e400
        mov eax, dword ptr ds : [edi+0x3C]
        push ebp
        push ebx
        push eax
        call public_636ebb0
        add esp, 0x14
        public_639067d : nop
        cmp dword ptr ds : [esi+4], ebx
        jne public_6390687
        mov dword ptr ds : [esi+4], ebp
        jmp public_639068a
        public_6390687 : nop
        mov dword ptr ds : [esi+8], ebp
        public_639068a : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax]
        add eax, 4
        test esi, esi
        mov dword ptr ss : [esp+0x1C], eax
        jne public_63905cf
        public_639069f : nop
        mov ecx, dword ptr ds : [ebx+0x38]
        mov dword ptr ds : [ecx+4], 0
        cmp dword ptr ds : [public_658b078], 3
        jl public_63906e5
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_63906c4
        mov eax, dword ptr ds : [eax+0x14]
        and eax, 0xFFFFFF
        jmp public_63906c7
        public_63906c4 : nop
        or eax, 0xFFFFFFFF
        public_63906c7 : nop
        mov edx, dword ptr ss : [ebp+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push eax
        mov eax, dword ptr ds : [ebx+0x4C]
        push eax
/*FIXUP push offset public_63fb2f8 @0x63906d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb2f8
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        public_63906e5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x63902d0)
    }
}

#undef public_6390305
#undef public_639032e
#undef public_639033b
#undef public_6390364
#undef public_6390370
#undef public_6390387
#undef public_6390391
#undef public_63903a0
#undef public_63903b7
#undef public_63903c3
#undef public_63903de
#undef public_63903ec
#undef public_639041f
#undef public_6390451
#undef public_6390482
#undef public_639048a
#undef public_639049d
#undef public_63904b2
#undef public_63904c4
#undef public_63904e2
#undef public_6390504
#undef public_6390518
#undef public_6390533
#undef public_6390552
#undef public_6390555
#undef public_639055e
#undef public_6390584
#undef public_639059d
#undef public_63905af
#undef public_63905cf
#undef public_63905d9
#undef public_6390607
#undef public_6390643
#undef public_6390654
#undef public_6390668
#undef public_639067d
#undef public_6390687
#undef public_639068a
#undef public_639069f
#undef public_63906c4
#undef public_63906c7
#undef public_63906e5
