#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62748a0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62dba00);
CLANG_FORWARD_PROC_SYMBOL(public_62dbb90);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_63396d1 _public_63396d1
#define public_633970b _public_633970b
#define public_6339772 _public_6339772
#define public_6339882 _public_6339882
#define public_633989f _public_633989f
#define public_63398b3 _public_63398b3
#define public_63398ee _public_63398ee
#define public_633997f _public_633997f
#define public_63399af _public_63399af
#define public_6339a87 _public_6339a87
#define public_6339a8e _public_6339a8e
#define public_6339aa2 _public_6339aa2
#define public_6339ad6 _public_6339ad6
#define public_6339ad8 _public_6339ad8

PROC_DECLARE(0x6339670, internal_6339670, public_6339670);
extern "C" NAKED register_t __cdecl internal_6339670()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xB0
        push ebx
        mov ebx, dword ptr ss : [esp+0xB8]
        fld dword ptr ds : [ebx]
        push ebp
        mov ebp, ecx
        fsub dword ptr ss : [ebp+0x30]
        mov byte ptr ss : [esp+0xB], 0
        mov dword ptr ss : [esp+0x20], 0
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ebx+8]
        fsub dword ptr ss : [ebp+0x38]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fst dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_63a4ab4]
        fnstsw ax
        test ah, 5
        jp public_63396d1
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xB0
        ret 8
        public_63396d1 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x30]
        fadd dword ptr ss : [esp+0xC0]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0xC]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_6339ad8
        mov eax, dword ptr ss : [ebp+0x3C]
        dec eax
        cmp eax, 5
        ja public_6339aa2
/*FIXUP jmp dword ptr ds : [eax*4+public_6339ae8] @0x6339704*/
  JMPTB cmp eax, 0
  JMPTB je public_633989f
  JMPTB cmp eax, 1
  JMPTB je public_633970b
  JMPTB cmp eax, 2
  JMPTB je public_6339772
  JMPTB cmp eax, 3
  JMPTB je public_63398b3
  JMPTB cmp eax, 4
  JMPTB je public_633997f
  JMPTB cmp eax, 5
  JMPTB je public_6339a87
  JMPTB int 3
        public_633970b : nop
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [ebp]
        fsqrt 
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [public_639a1d0]
        fdiv dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x28]
        call dword ptr ds : [edx+0x40]
        fadd dword ptr ss : [esp+0xC0]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 1
        jne public_6339a8e
        mov byte ptr ss : [esp+0xB], 1
        mov al, byte ptr ss : [esp+0xB]
        pop ebp
        pop ebx
        add esp, 0xB0
        ret 8
        public_6339772 : nop
        push esi
        push edi
        lea ecx, ss:[esp+0x54]
        call public_62748a0
        fld dword ptr ss : [ebp+0x44]
        fmul dword ptr ds : [public_639c13c]
        lea esi, ss:[ebp+0xC]
        mov ecx, 0xC
        lea edi, ss:[esp+0x90]
        rep movsd
        mov ecx, 0xC
        fstp dword ptr ss : [esp+0x30]
        lea esi, ss:[esp+0x90]
        fld dword ptr ss : [ebp+0x48]
        lea edi, ss:[esp+0x54]
        fmul dword ptr ds : [public_639c13c]
        mov dword ptr ss : [esp+0xB8], 0
        rep movsd
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x84], ecx
        fstp dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x34]
        fld dword ptr ss : [ebp+0x4C]
        lea ecx, ss:[esp+0x78]
        fmul dword ptr ds : [public_639c13c]
        push ecx
        mov dword ptr ss : [esp+0x8C], edx
        lea edx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x3C]
        push ebx
        push edx
        mov dword ptr ss : [esp+0x98], eax
        call public_6288800
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        call public_62dbb90
        add esp, 0x18
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x5C]
        call public_62dba00
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x44]
        sub esp, 0xC
        lea ecx, ss:[esp+0x3C]
        mov bl, al
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp]
        call public_628b030
        test bl, bl
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        pop edi
        fld dword ptr ss : [esp+0x34]
        pop esi
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        jne public_6339882
        fchs 
        public_6339882 : nop
        fld dword ptr ss : [esp+0xC0]
        fmul dword ptr ss : [esp+0xC0]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_6339a8e
        public_633989f : nop
        mov byte ptr ss : [esp+0xB], 1
        mov al, byte ptr ss : [esp+0xB]
        pop ebp
        pop ebx
        add esp, 0xB0
        ret 8
        public_63398b3 : nop
        fld dword ptr ds : [ebx+8]
        sub esp, 0xC
        fsub dword ptr ss : [ebp+0x38]
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ss : [ebp+0x34]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx]
        fsub dword ptr ss : [ebp+0x30]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_63398ee
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_63398ee : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[ebp+0xC]
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        fld qword ptr ds : [public_639c430]
        fabs 
        fsub dword ptr ss : [esp+0xC0]
        fld dword ptr ss : [ebp+0x48]
        fmul qword ptr ds : [public_639df88]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6339ad8
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0xC0]
        fadd st(0), st
        fadd dword ptr ss : [ebp+0x44]
        fmul dword ptr ss : [ebp+0x44]
        fld dword ptr ss : [esp+0xC0]
        fmul dword ptr ss : [esp+0xC0]
        faddp 
        fsubp 
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_6339ad8
        mov byte ptr ss : [esp+0xB], 1
        mov al, byte ptr ss : [esp+0xB]
        pop ebp
        pop ebx
        add esp, 0xB0
        ret 8
        public_633997f : nop
        fld dword ptr ds : [ebx]
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        fsub dword ptr ss : [ebp+0x30]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ss : [ebp+0x34]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [ebx+8]
        fsub dword ptr ss : [ebp+0x38]
        fstp dword ptr ss : [esp+0x3C]
        jne public_63399af
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_63399af : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ss:[ebp+0xC]
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        fld dword ptr ss : [ebp+0x4C]
        fld dword ptr ss : [ebp+0x48]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        fmul qword ptr ds : [public_63a0618]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        fstp st(0)
        fld qword ptr ds : [public_639c430]
        fabs 
        fsub dword ptr ss : [esp+0xC0]
        fld dword ptr ss : [ebp+0x4C]
        fmul qword ptr ds : [public_639df88]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6339ad8
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0xC0]
        fadd st(0), st
        fadd dword ptr ss : [ebp+0x44]
        fmul dword ptr ss : [ebp+0x44]
        fld dword ptr ss : [esp+0xC0]
        fmul dword ptr ss : [esp+0xC0]
        faddp 
        fsubr st, st(1)
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_6339ad6
        fld dword ptr ss : [esp+0xC]
        fadd st(0), st
        fadd dword ptr ss : [ebp+0x48]
        fmul dword ptr ss : [ebp+0x48]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsubr st, st(1)
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        fstp st(0)
        test ah, 1
        jne public_6339ad8
        mov byte ptr ss : [esp+0xB], 1
        mov al, byte ptr ss : [esp+0xB]
        pop ebp
        pop ebx
        add esp, 0xB0
        ret 8
        public_6339a87 : nop
        mov eax, dword ptr ss : [ebp+0x50]
        test eax, eax
        je public_6339ad8
        public_6339a8e : nop
        mov byte ptr ss : [esp+0xB], 0
        mov al, byte ptr ss : [esp+0xB]
        pop ebp
        pop ebx
        add esp, 0xB0
        ret 8
        public_6339aa2 : nop
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a51bc @0x6339aa8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a51bc
        push 0x421
/*FIXUP push offset public_63a4b20 @0x6339ab2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x6339abc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [edx]
        mov al, byte ptr ss : [esp+0x1F]
        add esp, 0x14
        pop ebp
        pop ebx
        add esp, 0xB0
        ret 8
        public_6339ad6 : nop
        fstp st(0)
        public_6339ad8 : nop
        mov al, byte ptr ss : [esp+0xB]
        pop ebp
        pop ebx
        add esp, 0xB0
        ret 8
        UNREACHABLE_TRAP(0x6339670)
        ASM_EXPORT_ENTRY_FIRST(0x633970b, public_633970b)
        ASM_EXPORT_ENTRY(0x6339772, public_6339772)
        ASM_EXPORT_ENTRY(0x633989f, public_633989f)
        ASM_EXPORT_ENTRY(0x63398b3, public_63398b3)
        ASM_EXPORT_ENTRY(0x633997f, public_633997f)
        ASM_EXPORT_ENTRY_LAST(0x6339a87, public_6339a87)
    }
}

#undef public_63396d1
#undef public_633970b
#undef public_6339772
#undef public_6339882
#undef public_633989f
#undef public_63398b3
#undef public_63398ee
#undef public_633997f
#undef public_63399af
#undef public_6339a87
#undef public_6339a8e
#undef public_6339aa2
#undef public_6339ad6
#undef public_6339ad8

#pragma init_seg(compiler)
extern "C" void const* const public_633970b = __AsmFindLabelExport(&internal_6339670, 0x633970b);
extern "C" void const* const public_6339772 = __AsmFindLabelExport(&internal_6339670, 0x6339772);
extern "C" void const* const public_633989f = __AsmFindLabelExport(&internal_6339670, 0x633989f);
extern "C" void const* const public_63398b3 = __AsmFindLabelExport(&internal_6339670, 0x63398b3);
extern "C" void const* const public_633997f = __AsmFindLabelExport(&internal_6339670, 0x633997f);
extern "C" void const* const public_6339a87 = __AsmFindLabelExport(&internal_6339670, 0x6339a87);
