#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62748a0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62dba00);
CLANG_FORWARD_PROC_SYMBOL(public_62dbb90);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6339283 _public_6339283
#define public_63392bc _public_63392bc
#define public_633931f _public_633931f
#define public_633940d _public_633940d
#define public_633942a _public_633942a
#define public_6339437 _public_6339437
#define public_6339473 _public_6339473
#define public_63394fb _public_63394fb
#define public_633952c _public_633952c
#define public_63395f7 _public_63395f7
#define public_63395fe _public_63395fe
#define public_6339610 _public_6339610
#define public_6339640 _public_6339640
#define public_6339642 _public_6339642

PROC_DECLARE(0x6339220, internal_6339220, public_6339220);
extern "C" NAKED register_t __cdecl internal_6339220()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x7C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x88]
        fld dword ptr ss : [ebp]
        push esi
        mov esi, ecx
        fsub dword ptr ds : [esi+0x30]
        xor bl, bl
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [ebp+4]
        fsub dword ptr ds : [esi+0x34]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ds : [esi+0x38]
        fst dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fst dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_63a4ab4]
        fnstsw ax
        test ah, 5
        jp public_6339283
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x7C
        ret 8
        public_6339283 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        fadd dword ptr ss : [esp+0x90]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0xC]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_6339642
        mov eax, dword ptr ds : [esi+0x3C]
        dec eax
        cmp eax, 5
        ja public_6339610
/*FIXUP jmp dword ptr ds : [eax*4+public_6339650] @0x63392b5*/
  JMPTB cmp eax, 0
  JMPTB je public_633942a
  JMPTB cmp eax, 1
  JMPTB je public_63392bc
  JMPTB cmp eax, 2
  JMPTB je public_633931f
  JMPTB cmp eax, 3
  JMPTB je public_6339437
  JMPTB cmp eax, 4
  JMPTB je public_63394fb
  JMPTB cmp eax, 5
  JMPTB je public_63395f7
  JMPTB int 3
        public_63392bc : nop
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        fsqrt 
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [public_639a1d0]
        fdiv dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        call dword ptr ds : [edx+0x40]
        fadd dword ptr ss : [esp+0x90]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 1
        jne public_63395fe
        pop esi
        mov bl, 1
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x7C
        ret 8
        public_633931f : nop
        push edi
        lea ecx, ss:[esp+0x50]
        call public_62748a0
        fld dword ptr ds : [esi+0x44]
        fmul dword ptr ds : [public_639c13c]
        add esi, 0xC
        mov ecx, 0xC
        lea edi, ss:[esp+0x50]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0x3C]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0x40]
        mov edx, dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_639c13c]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x80], ecx
        lea ecx, ss:[esp+0x74]
        push ecx
        mov dword ptr ss : [esp+0x88], edx
        lea edx, ss:[esp+0x48]
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        push ebp
        push edx
        mov dword ptr ss : [esp+0x94], eax
        call public_6288800
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        call public_62dbb90
        add esp, 0x18
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x58]
        call public_62dba00
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x40]
        sub esp, 0xC
        lea ecx, ss:[esp+0x2C]
        mov bl, al
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        fsub dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_628b030
        test bl, bl
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        pop edi
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        jne public_633940d
        fchs 
        public_633940d : nop
        fld dword ptr ss : [esp+0x90]
        fmul dword ptr ss : [esp+0x90]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_63395fe
        public_633942a : nop
        pop esi
        mov bl, 1
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x7C
        ret 8
        public_6339437 : nop
        fld dword ptr ss : [ebp+8]
        sub esp, 0xC
        fsub dword ptr ds : [esi+0x38]
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+4]
        fsub dword ptr ds : [esi+0x34]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp]
        fsub dword ptr ds : [esi+0x30]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_6339473
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_6339473 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ds:[esi+0xC]
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        fld dword ptr ss : [esp+0x20]
        fabs 
        fsub dword ptr ss : [esp+0x90]
        fld dword ptr ds : [esi+0x48]
        fmul qword ptr ds : [public_639df88]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6339642
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x90]
        fadd st(0), st
        fadd dword ptr ds : [esi+0x44]
        fmul dword ptr ds : [esi+0x44]
        fld dword ptr ss : [esp+0x90]
        fmul dword ptr ss : [esp+0x90]
        faddp 
        fsubp 
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_6339642
        pop esi
        mov bl, 1
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x7C
        ret 8
        public_63394fb : nop
        fld dword ptr ss : [ebp]
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        fsub dword ptr ds : [esi+0x30]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [ebp+4]
        fsub dword ptr ds : [esi+0x34]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ds : [esi+0x38]
        fstp dword ptr ss : [esp+0x3C]
        jne public_633952c
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_633952c : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ds:[esi+0xC]
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        fld dword ptr ds : [esi+0x4C]
        fld dword ptr ds : [esi+0x48]
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
        fld dword ptr ss : [esp+0x20]
        fabs 
        fsub dword ptr ss : [esp+0x90]
        fld dword ptr ds : [esi+0x4C]
        fmul qword ptr ds : [public_639df88]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6339642
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x90]
        fadd st(0), st
        fadd dword ptr ds : [esi+0x44]
        fmul dword ptr ds : [esi+0x44]
        fld dword ptr ss : [esp+0x90]
        fmul dword ptr ss : [esp+0x90]
        faddp 
        fsubr st, st(1)
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_6339640
        fld dword ptr ss : [esp+0xC]
        fadd st(0), st
        fadd dword ptr ds : [esi+0x48]
        fmul dword ptr ds : [esi+0x48]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsubr st, st(1)
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        fstp st(0)
        test ah, 1
        jne public_6339642
        pop esi
        mov bl, 1
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x7C
        ret 8
        public_63395f7 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        je public_6339642
        public_63395fe : nop
        pop esi
        xor bl, bl
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x7C
        ret 8
        nop 
        lea esp, ss:[esp]
        public_6339610 : nop
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a51bc @0x6339616*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a51bc
        push 0x3BC
/*FIXUP push offset public_63a4b20 @0x6339620*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x633962a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x7C
        ret 8
        public_6339640 : nop
        fstp st(0)
        public_6339642 : nop
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x7C
        ret 8
        UNREACHABLE_TRAP(0x6339220)
        ASM_EXPORT_ENTRY_FIRST(0x63392bc, public_63392bc)
        ASM_EXPORT_ENTRY(0x633931f, public_633931f)
        ASM_EXPORT_ENTRY(0x633942a, public_633942a)
        ASM_EXPORT_ENTRY(0x6339437, public_6339437)
        ASM_EXPORT_ENTRY(0x63394fb, public_63394fb)
        ASM_EXPORT_ENTRY_LAST(0x63395f7, public_63395f7)
    }
}

#undef public_6339283
#undef public_63392bc
#undef public_633931f
#undef public_633940d
#undef public_633942a
#undef public_6339437
#undef public_6339473
#undef public_63394fb
#undef public_633952c
#undef public_63395f7
#undef public_63395fe
#undef public_6339610
#undef public_6339640
#undef public_6339642

#pragma init_seg(compiler)
extern "C" void const* const public_63392bc = __AsmFindLabelExport(&internal_6339220, 0x63392bc);
extern "C" void const* const public_633931f = __AsmFindLabelExport(&internal_6339220, 0x633931f);
extern "C" void const* const public_633942a = __AsmFindLabelExport(&internal_6339220, 0x633942a);
extern "C" void const* const public_6339437 = __AsmFindLabelExport(&internal_6339220, 0x6339437);
extern "C" void const* const public_63394fb = __AsmFindLabelExport(&internal_6339220, 0x63394fb);
extern "C" void const* const public_63395f7 = __AsmFindLabelExport(&internal_6339220, 0x63395f7);
