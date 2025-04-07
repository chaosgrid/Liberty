#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6377e60);
CLANG_FORWARD_PROC_SYMBOL(public_6378820);
CLANG_FORWARD_PROC_SYMBOL(public_637f470);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_63812e0);
CLANG_FORWARD_PROC_SYMBOL(public_6381870);
CLANG_FORWARD_PROC_SYMBOL(public_6381ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6383ee0);
CLANG_FORWARD_PROC_SYMBOL(public_63846a0);

#define public_6381345 _public_6381345
#define public_6381351 _public_6381351
#define public_63813b0 _public_63813b0
#define public_63813c9 _public_63813c9
#define public_6381405 _public_6381405
#define public_6381429 _public_6381429
#define public_6381448 _public_6381448
#define public_638145b _public_638145b
#define public_6381471 _public_6381471
#define public_6381489 _public_6381489
#define public_63814d1 _public_63814d1
#define public_63814f6 _public_63814f6
#define public_6381520 _public_6381520
#define public_6381533 _public_6381533
#define public_6381548 _public_6381548
#define public_6381578 _public_6381578
#define public_6381587 _public_6381587
#define public_6381597 _public_6381597
#define public_63815a1 _public_63815a1
#define public_6381608 _public_6381608
#define public_6381643 _public_6381643
#define public_6381659 _public_6381659
#define public_6381662 _public_6381662
#define public_6381694 _public_6381694
#define public_63816c6 _public_63816c6
#define public_638170d _public_638170d
#define public_6381786 _public_6381786
#define public_6381799 _public_6381799
#define public_63817e2 _public_63817e2
#define public_63817ef _public_63817ef
#define public_6381826 _public_6381826
#define public_6381849 _public_6381849
#define public_6381856 _public_6381856
#define public_6381868 _public_6381868

PROC_DECLARE(0x63812e0, internal_63812e0, public_63812e0);
extern "C" NAKED register_t __cdecl internal_63812e0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x24
        mov edx, dword ptr ds : [public_658b804]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edi+0x34]
        mov ecx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [public_658bf38]
        xor ebx, ebx
        inc ecx
        mov dword ptr ds : [public_658bf38], ecx
        cmp dword ptr ds : [edi+0x18], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], ebx
        jne public_6381351
        mov eax, dword ptr ds : [public_658b980]
        mov ecx, dword ptr ds : [eax+edx*4]
        mov eax, dword ptr ds : [public_658b978]
        lea ecx, ds:[eax+ecx*4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ebx
        mov dword ptr ds : [edi+0x18], eax
        je public_6381345
        inc dword ptr ds : [public_658b99c]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        jmp public_6381351
        public_6381345 : nop
        push edx
        call public_6377e60
        add esp, 4
        mov dword ptr ds : [edi+0x18], eax
        public_6381351 : nop
        cmp edi, dword ptr ds : [public_658b82c]
        jne public_63813c9
        mov ecx, dword ptr ds : [public_658b078]
        mov dword ptr ds : [public_658b078], 5
        mov edx, dword ptr ds : [edi+0x4C]
        push edx
/*FIXUP push offset public_63f68e8 @0x638136d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f68e8
        mov dword ptr ss : [esp+0x28], ecx
        call public_6356960
        mov eax, dword ptr ds : [public_658b870]
        add esp, 8
        push eax
/*FIXUP push offset public_63f64c0 @0x6381384*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f64c0
        call public_6356960
        mov eax, dword ptr ds : [public_658bf58]
        add esp, 8
        cmp eax, ebx
        je public_63813b0
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63f3398 @0x63813a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f3398
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
/*FIXUP public_63813b0 : nop
        push offset public_63f68d0 @0x63813b0*/
  FIXUP public_63813b0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f68d0
        call public_6356960
        mov edx, dword ptr ds : [public_658b7fc]
        push edx
        call public_637f470
        add esp, 8
        public_63813c9 : nop
        cmp dword ptr ds : [public_658b24c], 4
        jg public_63814d1
        cmp dword ptr ds : [public_658b1a8], ebx
        je public_638145b
        mov eax, dword ptr ds : [edi+0x34]
        test eax, eax
        mov ebx, dword ptr ds : [public_658b904]
        je public_6381489
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_6381489
        xor ecx, ecx
        public_6381405 : nop
        mov edx, dword ptr ds : [public_658b908]
        mov dword ptr ds : [ecx+edx], ebx
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_658b24c]
        add ecx, 4
        mov edx, eax
        dec eax
        test edx, edx
        mov dword ptr ss : [esp+0x24], ecx
        je public_6381448
        inc eax
        mov dword ptr ss : [esp+0x1C], eax
        public_6381429 : nop
        call public_63846a0
        fmul qword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x1C]
        add ebx, 8
        fstp qword ptr ds : [ebx-8]
        add esi, 8
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6381429
        mov ecx, dword ptr ss : [esp+0x24]
        public_6381448 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        add edx, 4
        test eax, eax
        mov dword ptr ss : [esp+0x10], edx
        jne public_6381405
        jmp public_6381489
        public_638145b : nop
        mov ecx, dword ptr ds : [edi+0x34]
        cmp ecx, ebx
        je public_6381489
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 4
        add ecx, 4
        cmp eax, ebx
        je public_6381489
        xor edx, edx
        public_6381471 : nop
        mov eax, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [public_658b908]
        mov dword ptr ds : [edx+esi], eax
        mov eax, dword ptr ds : [ecx]
        add edx, 4
        add ecx, 4
        cmp eax, ebx
        jne public_6381471
        public_6381489 : nop
        mov edx, dword ptr ds : [edi+0x18]
        mov esi, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [public_658b908]
        lea eax, ds:[edi+0x10]
        push eax
        mov eax, dword ptr ds : [edi+0x50]
        push edx
        mov edx, dword ptr ds : [public_658b24c]
        shr eax, 0xB
        and eax, 1
        push eax
        push esi
        push ecx
        push edx
        call public_6381870
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 0x1C
        cmp eax, 4
        jg public_63814d1
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_6381608
        public_63814d1 : nop
        mov eax, dword ptr ds : [edi+0x34]
        test eax, eax
        mov edx, dword ptr ds : [public_658b904]
        mov dword ptr ss : [esp+0x1C], 0
        je public_6381548
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_6381548
        public_63814f6 : nop
        cmp dword ptr ds : [eax+8], esi
        je public_6381533
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ds : [public_658b908]
        mov dword ptr ds : [ebx+ecx*4], edx
        inc ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov eax, esi
        mov esi, dword ptr ds : [public_658b24c]
        mov ebx, esi
        dec esi
        test ebx, ebx
        je public_6381533
        inc esi
        public_6381520 : nop
        fld qword ptr ds : [ecx]
        add edx, 8
        fsub qword ptr ds : [eax]
        add eax, 8
        add ecx, 8
        dec esi
        fstp qword ptr ds : [edx-8]
        jne public_6381520
        public_6381533 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        mov esi, dword ptr ss : [esp+0x14]
        add ecx, 4
        test eax, eax
        mov dword ptr ss : [esp+0x10], ecx
        jne public_63814f6
        public_6381548 : nop
        mov eax, dword ptr ds : [public_658b908]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+ecx*4], edx
        mov eax, dword ptr ds : [public_658b1a8]
        test eax, eax
        je public_63815a1
        mov edx, dword ptr ds : [public_658b24c]
        mov ebx, dword ptr ds : [public_658b904]
        lea eax, ds:[edx-1]
        mov ecx, eax
        dec eax
        test ecx, ecx
        je public_63815a1
        inc eax
        mov dword ptr ss : [esp+0x1C], eax
        public_6381578 : nop
        mov eax, dword ptr ds : [public_658b24c]
        mov edx, eax
        dec eax
        test edx, edx
        je public_6381597
        lea esi, ds:[eax+1]
        public_6381587 : nop
        call public_63846a0
        fmul qword ptr ds : [ebx]
        add ebx, 8
        dec esi
        fstp qword ptr ds : [ebx-8]
        jne public_6381587
        public_6381597 : nop
        dec dword ptr ss : [esp+0x1C]
        jne public_6381578
        mov esi, dword ptr ss : [esp+0x14]
        public_63815a1 : nop
        mov edx, dword ptr ds : [edi+0x18]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [public_658b908]
        lea eax, ds:[edi+0x10]
        push eax
        mov eax, dword ptr ds : [edi+0x50]
        push edx
        mov edx, dword ptr ds : [public_658b24c]
        shr eax, 0xB
        and eax, 1
        push eax
        push esi
        push ecx
        push edx
        call public_6381ce0
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 0x1C
        test eax, eax
        je public_6381608
        push edi
        call public_6383ee0
        add esp, 4
        test eax, eax
        je public_6381608
        mov eax, dword ptr ds : [public_658b078]
        test eax, eax
        je public_6381608
        mov eax, dword ptr ds : [public_658b870]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63f6880 @0x63815f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6880
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_6381608 : nop
        mov ecx, dword ptr ds : [edi+0x50]
        and ecx, 0xFFFEFFFF
        mov dword ptr ds : [edi+0x50], ecx
        mov eax, dword ptr ds : [public_658b050]
        test eax, eax
        je public_6381662
        mov eax, dword ptr ds : [public_658b21c]
        fld qword ptr ds : [public_658b688]
        test eax, eax
        mov edx, dword ptr ds : [edi+0x18]
        je public_6381643
        mov eax, dword ptr ds : [public_658b24c]
        fadd st(0), st
        fcomp qword ptr ds : [edx+eax*8-8]
        fnstsw ax
        test ah, 0x41
        je public_6381662
        jmp public_6381659
        public_6381643 : nop
        fmul qword ptr ds : [public_63a5928]
        mov eax, dword ptr ds : [public_658b24c]
        fcomp qword ptr ds : [edx+eax*8-8]
        fnstsw ax
        test ah, 1
        je public_6381662
        public_6381659 : nop
        or ecx, 0x10000
        mov dword ptr ds : [edi+0x50], ecx
        public_6381662 : nop
        mov eax, dword ptr ds : [public_658b190]
        test eax, eax
        jne public_6381694
        mov eax, dword ptr ds : [public_658b078]
        test eax, eax
        jne public_6381694
        mov eax, dword ptr ds : [public_658b200]
        test eax, eax
        jne public_6381694
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a59c0]
        fnstsw ax
        test ah, 1
        je public_6381856
        public_6381694 : nop
        mov ecx, dword ptr ds : [public_658b1a8]
        mov dword ptr ds : [public_658b948], ecx
        mov dword ptr ds : [public_658b1a8], 0
        mov ebx, dword ptr ds : [edi+0x34]
        test ebx, ebx
        je public_63817ef
        mov esi, dword ptr ds : [ebx+4]
        add ebx, 4
        add ebx, 4
        test esi, esi
        je public_63817ef
        public_63816c6 : nop
        mov edx, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [esi+8], edx
        je public_63817e2
        mov edx, dword ptr ds : [public_658bb80]
        lea eax, ss:[esp+0x28]
        inc edx
        push eax
        mov dword ptr ds : [public_658bb80], edx
        mov ecx, dword ptr ds : [esi+8]
        push edi
        push ecx
        call public_637fd60
        fld qword ptr ss : [esp+0x34]
        fcomp qword ptr ds : [public_63a58b0]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        je public_638170d
        fld qword ptr ss : [esp+0x28]
        fchs 
        fstp qword ptr ss : [esp+0x28]
        public_638170d : nop
        fld qword ptr ds : [public_658bdc8]
        mov eax, dword ptr ds : [public_658bdc0]
        fadd qword ptr ss : [esp+0x28]
        inc eax
        mov dword ptr ds : [public_658bdc0], eax
        fstp qword ptr ds : [public_658bdc8]
        fld qword ptr ss : [esp+0x28]
        fcomp qword ptr ds : [public_658bdd0]
        fnstsw ax
        test ah, 0x41
        jne public_6381786
        fld qword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        fcomp qword ptr ds : [public_658b888]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [public_658bdd4], eax
        mov dword ptr ds : [public_658bdd0], edx
        fnstsw ax
        test ah, 0x41
        jne public_63817e2
        fld qword ptr ss : [esp+0x28]
        mov ecx, edx
        fcomp qword ptr ds : [public_658b210]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [public_658b888], ecx
        mov dword ptr ds : [public_658b88c], edx
        fnstsw ax
        test ah, 0x41
        jne public_63817e2
        jmp public_6381799
        public_6381786 : nop
        fld qword ptr ss : [esp+0x28]
        fchs 
        fcomp qword ptr ds : [public_658b210]
        fnstsw ax
        test ah, 0x41
        jne public_63817e2
        public_6381799 : nop
        mov eax, dword ptr ds : [public_658b870]
        mov ecx, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x14]
        push edx
        mov edx, dword ptr ds : [esi+8]
        push eax
        and ecx, 0xFFFFFF
        push ecx
        push edx
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63f6818 @0x63817c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6818
        call public_6356960
        push 0
        push 0
        push 0
        push edi
/*FIXUP push offset public_63f5ac0 @0x63817d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5ac0
        call public_6378820
        add esp, 0x30
        public_63817e2 : nop
        mov esi, dword ptr ds : [ebx]
        add ebx, 4
        test esi, esi
        jne public_63816c6
        public_63817ef : nop
        mov eax, dword ptr ds : [public_658b948]
        mov dword ptr ds : [public_658b1a8], eax
        cmp dword ptr ds : [public_658b078], 3
        jl public_6381856
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+0x4C]
        push ecx
        push edx
        push eax
/*FIXUP push offset public_63f67ec @0x638180e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f67ec
        call public_6356960
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 0x10
        xor esi, esi
        test eax, eax
        jle public_6381849
        public_6381826 : nop
        mov ecx, dword ptr ds : [edi+0x18]
        mov edx, dword ptr ds : [ecx+esi*8+4]
        mov eax, dword ptr ds : [ecx+esi*8]
        push edx
        push eax
/*FIXUP push offset public_63f67e4 @0x6381832*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f67e4
        call public_6356960
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 0xC
        inc esi
        cmp esi, eax
        jl public_6381826
/*FIXUP public_6381849 : nop
        push offset public_63edccc @0x6381849*/
  FIXUP public_6381849 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        call public_6356960
        add esp, 4
        public_6381856 : nop
        cmp edi, dword ptr ds : [public_658b82c]
        jne public_6381868
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [public_658b078], ecx
        public_6381868 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63812e0)
    }
}

#undef public_6381345
#undef public_6381351
#undef public_63813b0
#undef public_63813c9
#undef public_6381405
#undef public_6381429
#undef public_6381448
#undef public_638145b
#undef public_6381471
#undef public_6381489
#undef public_63814d1
#undef public_63814f6
#undef public_6381520
#undef public_6381533
#undef public_6381548
#undef public_6381578
#undef public_6381587
#undef public_6381597
#undef public_63815a1
#undef public_6381608
#undef public_6381643
#undef public_6381659
#undef public_6381662
#undef public_6381694
#undef public_63816c6
#undef public_638170d
#undef public_6381786
#undef public_6381799
#undef public_63817e2
#undef public_63817ef
#undef public_6381826
#undef public_6381849
#undef public_6381856
#undef public_6381868
