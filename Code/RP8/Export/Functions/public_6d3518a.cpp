#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f87d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fc9d);
CLANG_FORWARD_PROC_SYMBOL(public_6d33cac);
CLANG_FORWARD_PROC_SYMBOL(public_6d33f42);
CLANG_FORWARD_PROC_SYMBOL(public_6d33f73);
CLANG_FORWARD_PROC_SYMBOL(public_6d340c3);
CLANG_FORWARD_PROC_SYMBOL(public_6d341e7);
CLANG_FORWARD_PROC_SYMBOL(public_6d34336);
CLANG_FORWARD_PROC_SYMBOL(public_6d34489);
CLANG_FORWARD_PROC_SYMBOL(public_6d345c8);
CLANG_FORWARD_PROC_SYMBOL(public_6d34663);
CLANG_FORWARD_PROC_SYMBOL(public_6d347af);
CLANG_FORWARD_PROC_SYMBOL(public_6d348d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d34a1c);
CLANG_FORWARD_PROC_SYMBOL(public_6d3518a);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5d04d);

#define public_6d351aa _public_6d351aa
#define public_6d351d6 _public_6d351d6
#define public_6d351fd _public_6d351fd
#define public_6d35237 _public_6d35237
#define public_6d3524a _public_6d3524a
#define public_6d35299 _public_6d35299
#define public_6d352a2 _public_6d352a2
#define public_6d352ab _public_6d352ab
#define public_6d352b4 _public_6d352b4
#define public_6d352bd _public_6d352bd
#define public_6d352c6 _public_6d352c6
#define public_6d352cf _public_6d352cf
#define public_6d352d8 _public_6d352d8
#define public_6d352fc _public_6d352fc
#define public_6d35305 _public_6d35305
#define public_6d3530e _public_6d3530e
#define public_6d35317 _public_6d35317
#define public_6d3531e _public_6d3531e
#define public_6d35329 _public_6d35329
#define public_6d35360 _public_6d35360
#define public_6d35364 _public_6d35364
#define public_6d35378 _public_6d35378
#define public_6d353b2 _public_6d353b2
#define public_6d353b4 _public_6d353b4
#define public_6d353c0 _public_6d353c0
#define public_6d353eb _public_6d353eb
#define public_6d353ed _public_6d353ed
#define public_6d35404 _public_6d35404
#define public_6d35418 _public_6d35418
#define public_6d3542e _public_6d3542e
#define public_6d3543a _public_6d3543a
#define public_6d3544f _public_6d3544f
#define public_6d35475 _public_6d35475
#define public_6d35492 _public_6d35492
#define public_6d3553c _public_6d3553c
#define public_6d35561 _public_6d35561
#define public_6d3556c _public_6d3556c
#define public_6d35579 _public_6d35579
#define public_6d3557e _public_6d3557e
#define public_6d35580 _public_6d35580

PROC_DECLARE(0x6d3518a, internal_6d3518a, public_6d3518a);
extern "C" NAKED register_t __cdecl internal_6d3518a()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, public_6d5d04d
        call public_6d5cd8c
        sub esp, 0x60
        push ebx
        mov ebx, ecx
        cmp byte ptr ds : [ebx+8], 5
        je public_6d351aa
        mov eax, 0x80004005
        jmp public_6d35580
        public_6d351aa : nop
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx+0x1058]
        mov edx, dword ptr ds : [ebx+4]
        push esi
        mov esi, dword ptr ds : [edx+0x1058]
        push edi
        mov edi, eax
        shr edi, 1
        cmp esi, edi
        je public_6d351d6
        cmp esi, 1
        jne public_6d35579
        cmp eax, esi
        jne public_6d35579
        public_6d351d6 : nop
        mov edi, dword ptr ds : [ecx+0x105C]
        mov esi, dword ptr ds : [edx+0x105C]
        shr edi, 1
        cmp esi, edi
        je public_6d351fd
        cmp esi, 1
        jne public_6d35579
        cmp dword ptr ds : [ecx+0x105C], esi
        jne public_6d35579
        public_6d351fd : nop
        xor esi, esi
        inc esi
        cmp dword ptr ds : [edx+0x1060], esi
        jne public_6d35579
        cmp dword ptr ds : [ecx+0x1060], esi
        jne public_6d35579
        cmp eax, esi
        jbe public_6d35237
        test al, 1
        je public_6d35237
        and eax, 0xFFFFFFFE
        mov dword ptr ds : [ecx+0x1058], eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax+0x1068]
        sub dword ptr ds : [eax+0x1064], ecx
        public_6d35237 : nop
        mov eax, dword ptr ds : [ebx]
        lea ecx, ds:[eax+0x105C]
        mov eax, dword ptr ds : [ecx]
        cmp eax, esi
        jbe public_6d3524a
        and eax, 0xFFFFFFFE
        mov dword ptr ds : [ecx], eax
        public_6d3524a : nop
        test byte ptr ds : [ebx+0xA], 8
        jne public_6d35329
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [edx+4]
        jne public_6d35329
        cmp dword ptr ds : [eax+0x1058], 2
        jb public_6d35329
        cmp dword ptr ds : [eax+0x105C], 2
        jb public_6d35329
        cmp ecx, 0x1C
        jg public_6d352d8
        je public_6d35305
        sub ecx, 0x14
        cmp ecx, 7
        ja public_6d35329
/*FIXUP jmp dword ptr ds : [ecx*4+public_6d3558d] @0x6d35292*/
  JMPTB cmp ecx, 0
  JMPTB je public_6d35329
  JMPTB cmp ecx, 1
  JMPTB je public_6d35299
  JMPTB cmp ecx, 2
  JMPTB je public_6d352a2
  JMPTB cmp ecx, 3
  JMPTB je public_6d352ab
  JMPTB cmp ecx, 4
  JMPTB je public_6d352b4
  JMPTB cmp ecx, 5
  JMPTB je public_6d352bd
  JMPTB cmp ecx, 6
  JMPTB je public_6d352c6
  JMPTB cmp ecx, 7
  JMPTB je public_6d352cf
  JMPTB int 3
        public_6d35299 : nop
        mov ecx, ebx
        call public_6d33cac
        jmp public_6d3531e
        public_6d352a2 : nop
        mov ecx, ebx
        call public_6d33f42
        jmp public_6d3531e
        public_6d352ab : nop
        mov ecx, ebx
        call public_6d33f73
        jmp public_6d3531e
        public_6d352b4 : nop
        mov ecx, ebx
        call public_6d340c3
        jmp public_6d3531e
        public_6d352bd : nop
        mov ecx, ebx
        call public_6d341e7
        jmp public_6d3531e
        public_6d352c6 : nop
        mov ecx, ebx
        call public_6d34336
        jmp public_6d3531e
        public_6d352cf : nop
        mov ecx, ebx
        call public_6d34489
        jmp public_6d3531e
        public_6d352d8 : nop
        sub ecx, 0x1D
        je public_6d35317
        dec ecx
        je public_6d3530e
        sub ecx, 0xA
        je public_6d35329
        dec ecx
        je public_6d35329
        sub ecx, 9
        je public_6d35305
        dec ecx
        je public_6d352fc
        dec ecx
        jne public_6d35329
        mov ecx, ebx
        call public_6d34a1c
        jmp public_6d3531e
        public_6d352fc : nop
        mov ecx, ebx
        call public_6d348d0
        jmp public_6d3531e
        public_6d35305 : nop
        mov ecx, ebx
        call public_6d345c8
        jmp public_6d3531e
        public_6d3530e : nop
        mov ecx, ebx
        call public_6d347af
        jmp public_6d3531e
        public_6d35317 : nop
        mov ecx, ebx
        call public_6d34663
        public_6d3531e : nop
        test eax, eax
        jl public_6d35329
        xor eax, eax
        jmp public_6d3557e
        public_6d35329 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax+0x1058]
        mov eax, esi
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x2C], eax
        and dword ptr ss : [ebp-4], 0
        test eax, eax
        mov edi, offset _public_6d2f87d
        je public_6d35360
        push edi
        push esi
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0x1C], eax
        jmp public_6d35364
        public_6d35360 : nop
        and dword ptr ss : [ebp-0x1C], 0
        public_6d35364 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        cmp dword ptr ss : [ebp-0x1C], 0
        jne public_6d35378
        mov eax, 0x8007000E
        jmp public_6d3557e
        public_6d35378 : nop
        mov eax, dword ptr ds : [ebx]
        cmp dword ptr ds : [eax+0x105C], 1
        mov esi, dword ptr ds : [eax+0x1058]
        jne public_6d353c0
        mov eax, esi
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x2C], eax
        test eax, eax
        mov dword ptr ss : [ebp-4], 1
        je public_6d353b2
        push edi
        push esi
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x2C]
        jmp public_6d353b4
        public_6d353b2 : nop
        xor eax, eax
        public_6d353b4 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x24], eax
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_6d35404
        public_6d353c0 : nop
        shl esi, 1
        mov eax, esi
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x2C], eax
        test eax, eax
        mov dword ptr ss : [ebp-4], 2
        je public_6d353eb
        push edi
        push esi
        push 0x10
        push eax
        call public_6d2fc9d
        mov ecx, dword ptr ss : [ebp-0x2C]
        jmp public_6d353ed
        public_6d353eb : nop
        xor ecx, ecx
        public_6d353ed : nop
        mov eax, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [eax+0x1058]
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        shl eax, 4
        mov dword ptr ss : [ebp-0x24], ecx
        mov dword ptr ss : [ebp-0x14], ecx
        add eax, ecx
        public_6d35404 : nop
        mov dword ptr ss : [ebp-0x10], eax
        xor eax, eax
        cmp dword ptr ss : [ebp-0x24], eax
        jne public_6d35418
        mov esi, 0x8007000E
        jmp public_6d3556c
        public_6d35418 : nop
        mov ecx, dword ptr ds : [ebx]
        cmp dword ptr ds : [ecx+0x1058], 1
        mov ecx, dword ptr ss : [ebp-0x14]
        jne public_6d3542e
        mov dword ptr ss : [ebp-0x28], ecx
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6d3543a
        public_6d3542e : nop
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x28], ecx
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        public_6d3543a : nop
        mov dword ptr ss : [ebp-0x2C], ecx
        mov ecx, dword ptr ds : [ebx+4]
        cmp dword ptr ds : [ecx+0x105C], eax
        mov dword ptr ss : [ebp-0x18], eax
        jbe public_6d35561
        public_6d3544f : nop
        mov edi, dword ptr ss : [ebp-0x14]
        mov esi, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx]
        push edi
        push 0
        add esi, esi
        push esi
        call dword ptr ds : [eax+4]
        cmp dword ptr ss : [ebp-0x10], edi
        je public_6d35475
        push dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx]
        push 0
        inc esi
        push esi
        call dword ptr ds : [eax+4]
        public_6d35475 : nop
        mov eax, dword ptr ds : [ebx+4]
        xor edx, edx
        cmp dword ptr ds : [eax+0x1058], edx
        jbe public_6d3553c
        mov eax, dword ptr ss : [ebp-0x1C]
        fld dword ptr ds : [public_6d5f5b4]
        mov dword ptr ss : [ebp-0x20], eax
        public_6d35492 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ss : [ebp-0x14]
        lea esi, ds:[edx+edx]
        shl esi, 4
        add eax, esi
        fld dword ptr ds : [eax]
        add ecx, esi
        fadd dword ptr ds : [ecx]
        mov edi, dword ptr ss : [ebp-0x20]
        fld dword ptr ds : [eax+4]
        add dword ptr ss : [ebp-0x20], 0x10
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [ecx+8]
        fstp dword ptr ss : [ebp-0x44]
        fld dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [ebp-0x10]
        fadd dword ptr ds : [ecx+0xC]
        add eax, esi
        fstp dword ptr ss : [ebp-0x40]
        fld st(1)
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [ebp-0x5C]
        fadd dword ptr ds : [eax+4]
        fstp st(1)
        fld dword ptr ss : [ebp-0x44]
        fadd dword ptr ds : [eax+8]
        fld dword ptr ss : [ebp-0x40]
        fadd dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [ebp-0x2C]
        add eax, esi
        lea esi, ss:[ebp-0x3C]
        fstp dword ptr ss : [ebp-0x50]
        fld dword ptr ss : [ebp-0x5C]
        inc edx
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [ebp-0x6C]
        fld st(1)
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [ebp-0x68]
        fadd dword ptr ds : [eax+8]
        fstp st(1)
        fld dword ptr ss : [ebp-0x50]
        fadd dword ptr ds : [eax+0xC]
        fld dword ptr ss : [ebp-0x6C]
        fmul st, st(3)
        fstp dword ptr ss : [ebp-0x3C]
        fld dword ptr ss : [ebp-0x68]
        fmul st, st(3)
        fstp dword ptr ss : [ebp-0x38]
        fld st(1)
        fmul st, st(3)
        fstp dword ptr ss : [ebp-0x34]
        fmul st, st(2)
        fstp dword ptr ss : [ebp-0x30]
        movsd 
        fstp st(0)
        movsd 
        movsd 
        movsd 
        mov eax, dword ptr ds : [ebx+4]
        cmp edx, dword ptr ds : [eax+0x1058]
        jb public_6d35492
        fstp st(0)
        public_6d3553c : nop
        push dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push dword ptr ss : [ebp-0x18]
        call dword ptr ds : [eax+8]
        inc dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [ebp-0x18]
        cmp ecx, dword ptr ds : [eax+0x105C]
        jb public_6d3544f
        public_6d35561 : nop
        push dword ptr ss : [ebp-0x24]
        call public_6d2f249
        pop ecx
        xor esi, esi
        public_6d3556c : nop
        push dword ptr ss : [ebp-0x1C]
        call public_6d2f249
        pop ecx
        mov eax, esi
        jmp public_6d3557e
        public_6d35579 : nop
        mov eax, 0x80004005
        public_6d3557e : nop
        pop edi
        pop esi
        public_6d35580 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        pop ebx
        mov dword ptr fs : [0], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d3518a)
        ASM_EXPORT_ENTRY_FIRST(0x6d35299, public_6d35299)
        ASM_EXPORT_ENTRY(0x6d352a2, public_6d352a2)
        ASM_EXPORT_ENTRY(0x6d352ab, public_6d352ab)
        ASM_EXPORT_ENTRY(0x6d352b4, public_6d352b4)
        ASM_EXPORT_ENTRY(0x6d352bd, public_6d352bd)
        ASM_EXPORT_ENTRY(0x6d352c6, public_6d352c6)
        ASM_EXPORT_ENTRY(0x6d352cf, public_6d352cf)
        ASM_EXPORT_ENTRY_LAST(0x6d35329, public_6d35329)
    }
}

#undef public_6d351aa
#undef public_6d351d6
#undef public_6d351fd
#undef public_6d35237
#undef public_6d3524a
#undef public_6d35299
#undef public_6d352a2
#undef public_6d352ab
#undef public_6d352b4
#undef public_6d352bd
#undef public_6d352c6
#undef public_6d352cf
#undef public_6d352d8
#undef public_6d352fc
#undef public_6d35305
#undef public_6d3530e
#undef public_6d35317
#undef public_6d3531e
#undef public_6d35329
#undef public_6d35360
#undef public_6d35364
#undef public_6d35378
#undef public_6d353b2
#undef public_6d353b4
#undef public_6d353c0
#undef public_6d353eb
#undef public_6d353ed
#undef public_6d35404
#undef public_6d35418
#undef public_6d3542e
#undef public_6d3543a
#undef public_6d3544f
#undef public_6d35475
#undef public_6d35492
#undef public_6d3553c
#undef public_6d35561
#undef public_6d3556c
#undef public_6d35579
#undef public_6d3557e
#undef public_6d35580

#pragma init_seg(compiler)
extern "C" void const* const public_6d35299 = __AsmFindLabelExport(&internal_6d3518a, 0x6d35299);
extern "C" void const* const public_6d352a2 = __AsmFindLabelExport(&internal_6d3518a, 0x6d352a2);
extern "C" void const* const public_6d352ab = __AsmFindLabelExport(&internal_6d3518a, 0x6d352ab);
extern "C" void const* const public_6d352b4 = __AsmFindLabelExport(&internal_6d3518a, 0x6d352b4);
extern "C" void const* const public_6d352bd = __AsmFindLabelExport(&internal_6d3518a, 0x6d352bd);
extern "C" void const* const public_6d352c6 = __AsmFindLabelExport(&internal_6d3518a, 0x6d352c6);
extern "C" void const* const public_6d352cf = __AsmFindLabelExport(&internal_6d3518a, 0x6d352cf);
extern "C" void const* const public_6d35329 = __AsmFindLabelExport(&internal_6d3518a, 0x6d35329);
