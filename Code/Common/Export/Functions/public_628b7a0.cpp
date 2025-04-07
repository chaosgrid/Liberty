#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b7a0);
CLANG_FORWARD_PROC_SYMBOL(public_628bdf0);
CLANG_FORWARD_PROC_SYMBOL(public_628be10);
CLANG_FORWARD_PROC_SYMBOL(public_628be40);
CLANG_FORWARD_PROC_SYMBOL(public_628be60);
CLANG_FORWARD_PROC_SYMBOL(public_628bea0);
CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_628bf10);
CLANG_FORWARD_PROC_SYMBOL(public_628bf60);
CLANG_FORWARD_PROC_SYMBOL(public_628bf80);
CLANG_FORWARD_PROC_SYMBOL(public_62c4780);
CLANG_FORWARD_PROC_SYMBOL(public_62ee230);
CLANG_FORWARD_PROC_SYMBOL(public_6345ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_634d530);
CLANG_FORWARD_PROC_SYMBOL(public_634d640);
CLANG_FORWARD_PROC_SYMBOL(public_634d8d0);
CLANG_FORWARD_PROC_SYMBOL(public_634ded0);

#define public_628b7cd _public_628b7cd
#define public_628b7ee _public_628b7ee
#define public_628b805 _public_628b805
#define public_628b842 _public_628b842
#define public_628b92d _public_628b92d
#define public_628b94e _public_628b94e
#define public_628b97b _public_628b97b
#define public_628ba90 _public_628ba90
#define public_628bba4 _public_628bba4
#define public_628bc93 _public_628bc93
#define public_628bccf _public_628bccf
#define public_628bcf8 _public_628bcf8
#define public_628bd14 _public_628bd14
#define public_628bd80 _public_628bd80
#define public_628bdbf _public_628bdbf
#define public_628bdc1 _public_628bdc1

PROC_DECLARE(0x628b7a0, internal_628b7a0, public_628b7a0);
extern "C" NAKED register_t __cdecl internal_628b7a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xC8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xE0]
        mov esi, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        jne public_628b7cd
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+0x94]
        push esi
        call public_634d530
        mov dword ptr ds : [esi+0x40], eax
        public_628b7cd : nop
        mov eax, dword ptr ds : [esi+0x40]
        inc dword ptr ds : [eax+4]
        cmp byte ptr ds : [esi+0x78], 8
        jge public_628b7ee
        mov edx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [edx+0x110]
        cmp eax, dword ptr ds : [ecx]
        jle public_628b7ee
        call public_634d640
        public_628b7ee : nop
        movsx eax, word ptr ds : [edi+0x1A]
        cmp eax, 3
        mov ebx, dword ptr ds : [esi+0x40]
        ja public_628bd80
/*FIXUP jmp dword ptr ds : [eax*4+public_628bdd4] @0x628b7fe*/
  JMPTB cmp eax, 0
  JMPTB je public_628b805
  JMPTB cmp eax, 1
  JMPTB je public_628b842
  JMPTB cmp eax, 2
  JMPTB je public_628b97b
  JMPTB cmp eax, 3
  JMPTB je public_628bd14
  JMPTB int 3
        public_628b805 : nop
        mov esi, dword ptr ds : [edi+0x14]
        mov ecx, edi
        call public_634ded0
        mov edx, dword ptr ds : [esi]
        mov esi, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0xE4]
        and edx, 0xFFFF
        shl edx, 4
        add edx, esi
        push ecx
        add edx, eax
        push edx
        mov ecx, ebx
        call public_634d8d0
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        dec eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        add esp, 0xC8
        ret 
        public_628b842 : nop
        mov esi, dword ptr ds : [edi+0x14]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], esi
        call public_634ded0
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        mov esi, ecx
        and esi, 0xFFFF
        shl esi, 4
        lea ebp, ds:[ecx+ecx]
        add esi, edx
        mov ecx, edi
        add esi, eax
        sar ebp, 0x11
        call public_634ded0
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [ecx+ebp*4]
        mov edx, dword ptr ds : [eax]
        and edi, 0xFFFF
        shl edi, 4
        add edi, edx
        lea edx, ss:[esp+0x28]
        push edx
        push esi
        mov ecx, ebx
        add edi, eax
        call public_634d8d0
        lea eax, ss:[esp+0x58]
        push eax
        push edi
        mov ecx, ebx
        call public_634d8d0
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_628bdf0
        lea edx, ss:[esp+0x38]
        push edx
        lea ecx, ss:[esp+0x4C]
        call public_628bf60
        mov eax, dword ptr ss : [esp+0xDC]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea ecx, ss:[esp+0x50]
        call public_628bea0
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_628bea0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x4C]
        call public_628be40
        fstp dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_628be40
        fdivr dword ptr ss : [esp+0x14]
        fchs 
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jnp public_628b92d
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_628b94e
        public_628b92d : nop
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], 0
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jnp public_628b94e
        mov dword ptr ss : [esp+0x10], 0x3F800000
        public_628b94e : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0xEC]
        lea edx, ss:[esp+0x30]
        push edx
        call public_628be60
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        dec eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        add esp, 0xC8
        ret 
        public_628b97b : nop
        mov ecx, edi
        call public_634ded0
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [eax]
        and ecx, 0xFFFFFFF0
        mov esi, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        and ecx, 0xFFFF
        shl ecx, 4
        and esi, 0xFFFF
        and edi, 0xFFFF
        add ecx, edx
        lea ebp, ss:[esp+0x28]
        add ecx, eax
        shl esi, 4
        shl edi, 4
        push ebp
        add esi, edx
        add edi, edx
        push ecx
        mov ecx, ebx
        add esi, eax
        add edi, eax
        call public_634d8d0
        lea edx, ss:[esp+0x18]
        push edx
        push esi
        mov ecx, ebx
        call public_634d8d0
        lea eax, ss:[esp+0x48]
        push eax
        push edi
        mov ecx, ebx
        call public_634d8d0
        push 0xBF800000
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x94]
        call public_628be60
        push 0xBF800000
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        lea ecx, ss:[esp+0xA4]
        call public_628be60
        push 0xBF800000
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0xD4]
        call public_628be60
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ss:[esp+0x9C]
        push edx
        lea ecx, ss:[esp+0x40]
        call public_628bf10
        lea eax, ss:[esp+0x98]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x70]
        call public_628bed0
        lea edx, ss:[esp+0x68]
        push edx
        lea ecx, ss:[esp+0x8C]
        call public_628be40
        fcom dword ptr ds : [public_639c398]
        fnstsw ax
        test ah, 0x41
        jne public_628ba90
        fcom dword ptr ds : [public_639b984]
        fnstsw ax
        test ah, 5
        jnp public_628bdbf
        public_628ba90 : nop
        fld dword ptr ds : [public_639a1d0]
        mov ecx, dword ptr ss : [esp+0xDC]
        fdiv st, st(1)
        push 0xBF800000
        lea eax, ss:[esp+0x2C]
        push eax
        push ecx
        lea ecx, ss:[esp+0x64]
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        call public_628be60
        lea edx, ss:[esp+0x68]
        push edx
        lea ecx, ss:[esp+0x5C]
        call public_628be40
        fmul dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x88]
        push eax
        lea ecx, ss:[esp+0x5C]
        fstp dword ptr ss : [esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x80]
        call public_628bed0
        lea edx, ss:[esp+0x78]
        push edx
        lea ecx, ss:[esp+0x3C]
        call public_628be40
        fmul dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0xE4]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x2C]
        fld dword ptr ds : [public_639a1d0]
        mov ecx, esi
        fsub dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        push eax
        call public_628be10
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        push esi
        mov ecx, esi
        call public_628be60
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        push esi
        mov ecx, esi
        call public_628be60
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jnp public_628bba4
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        je public_628bba4
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jnp public_628bba4
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        je public_628bba4
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_628bdc1
        public_628bba4 : nop
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        push esi
        call public_628bf80
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        push esi
        call public_628bf80
        lea edx, ss:[esp+0x88]
        push edx
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        push esi
        call public_628bf80
        add esp, 0x30
        push 0xBF800000
        lea edx, ss:[esp+0x3C]
        push edx
        push esi
        lea ecx, ss:[esp+0x84]
        call public_628be60
        push 0xBF800000
        lea eax, ss:[esp+0x5C]
        push eax
        push esi
        lea ecx, ss:[esp+0xC4]
        call public_628be60
        push 0xBF800000
        lea ecx, ss:[esp+0x6C]
        push ecx
        push esi
        lea ecx, ss:[esp+0xB4]
        call public_628be60
        lea ecx, ss:[esp+0x78]
        call public_62c4780
        fstp dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0xB8]
        call public_62c4780
        fstp dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0xA8]
        call public_62c4780
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jp public_628bc93
        fld dword ptr ss : [esp+0x14]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_628bc93
        lea edx, ss:[esp+0x38]
        fstp st(0)
        push edx
        mov ecx, esi
        call public_628bdf0
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        dec eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        add esp, 0xC8
        ret 
        public_628bc93 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jp public_628bccf
        fld dword ptr ss : [esp+0x10]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_628bccf
        lea eax, ss:[esp+0x58]
        fstp st(0)
        push eax
        mov ecx, esi
        call public_628bdf0
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        dec eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        add esp, 0xC8
        ret 
        public_628bccf : nop
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jp public_628bcf8
        lea ecx, ss:[esp+0x68]
        push ecx
        mov ecx, esi
        call public_628bdf0
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        dec eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        add esp, 0xC8
        ret 
        public_628bcf8 : nop
        pop edi
        mov dword ptr ds : [0], 0
        mov eax, dword ptr ds : [ebx+4]
        pop esi
        dec eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        add esp, 0xC8
        ret 
        public_628bd14 : nop
        mov edi, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [edi+0x98]
        mov esi, dword ptr ss : [esp+0xE4]
        add edx, 0x124
        push edx
        mov ecx, esi
        call public_628bdf0
        mov eax, dword ptr ss : [esp+0xDC]
        push eax
        push esi
        lea ecx, ss:[esp+0x40]
        call public_628bea0
        lea ecx, ss:[esp+0x38]
        call public_6347ef0
        mov ecx, edi
        call public_6345ea0
        fchs 
        push ecx
        fstp dword ptr ss : [esp]
        lea ecx, ss:[esp+0x3C]
        push ecx
        push esi
        mov ecx, esi
        call public_628be60
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        dec eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        add esp, 0xC8
        ret 
        lea esp, ss:[esp]
        public_628bd80 : nop
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x6D6
/*FIXUP push offset public_639c19c @0x628bd8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c19c
        mov ecx, 0x100001
/*FIXUP push offset public_639c340 @0x628bd96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c340
        push ecx
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0xF8]
        add esp, 0x14
        call public_62ee230
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        dec eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        add esp, 0xC8
        ret 
        public_628bdbf : nop
        fstp st(0)
        public_628bdc1 : nop
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        dec eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        add esp, 0xC8
        ret 
        UNREACHABLE_TRAP(0x628b7a0)
        ASM_EXPORT_ENTRY_FIRST(0x628b805, public_628b805)
        ASM_EXPORT_ENTRY(0x628b842, public_628b842)
        ASM_EXPORT_ENTRY(0x628b97b, public_628b97b)
        ASM_EXPORT_ENTRY_LAST(0x628bd14, public_628bd14)
    }
}

#undef public_628b7cd
#undef public_628b7ee
#undef public_628b805
#undef public_628b842
#undef public_628b92d
#undef public_628b94e
#undef public_628b97b
#undef public_628ba90
#undef public_628bba4
#undef public_628bc93
#undef public_628bccf
#undef public_628bcf8
#undef public_628bd14
#undef public_628bd80
#undef public_628bdbf
#undef public_628bdc1

#pragma init_seg(compiler)
extern "C" void const* const public_628b805 = __AsmFindLabelExport(&internal_628b7a0, 0x628b805);
extern "C" void const* const public_628b842 = __AsmFindLabelExport(&internal_628b7a0, 0x628b842);
extern "C" void const* const public_628b97b = __AsmFindLabelExport(&internal_628b7a0, 0x628b97b);
extern "C" void const* const public_628bd14 = __AsmFindLabelExport(&internal_628b7a0, 0x628bd14);
