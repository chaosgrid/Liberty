#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6bdd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6f6be8b _public_6f6be8b
#define public_6f6bec4 _public_6f6bec4
#define public_6f6bed9 _public_6f6bed9
#define public_6f6bee4 _public_6f6bee4
#define public_6f6bf37 _public_6f6bf37
#define public_6f6bf8d _public_6f6bf8d
#define public_6f6bfc6 _public_6f6bfc6
#define public_6f6c02c _public_6f6c02c
#define public_6f6c189 _public_6f6c189
#define public_6f6c21c _public_6f6c21c

PROC_DECLARE(0x6f6bdd0, internal_6f6bdd0, public_6f6bdd0);
extern "C" NAKED register_t __cdecl internal_6f6bdd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        sub esp, 0x114
        push ebx
        mov ebx, dword ptr ss : [esp+0x124]
        push esi
        lea eax, ss:[esp+0xB0]
        push eax
        push edx
        push ebx
        call dword ptr ds : [public_6fb3564]
        add esp, 0xC
        test eax, eax
        jne public_6f6c21c
        lea eax, ss:[esp+0xD4]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0xB8]
        push edx
        push ebx
        call dword ptr ds : [public_6fb3578]
        add esp, 0x10
        test eax, eax
        jne public_6f6c21c
        lea eax, ss:[esp+0x120]
        push eax
        call public_6f75f30
        mov esi, dword ptr ss : [esp+0x128]
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        push ecx
        mov ecx, eax
        call public_6f73930
        test eax, eax
        je public_6f6c21c
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0xF8]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        test eax, eax
        jne public_6f6c21c
        mov edx, dword ptr ss : [esp+0xD0]
        lea eax, ds:[edx-1]
        cmp eax, 7
        ja public_6f6c21c
/*FIXUP jmp dword ptr ds : [eax*4+public_6f6c228] @0x6f6be84*/
  JMPTB cmp eax, 0
  JMPTB je public_6f6be8b
  JMPTB cmp eax, 1
  JMPTB je public_6f6c21c
  JMPTB cmp eax, 2
  JMPTB je public_6f6be8b
  JMPTB cmp eax, 3
  JMPTB je public_6f6be8b
  JMPTB cmp eax, 4
  JMPTB je public_6f6be8b
  JMPTB cmp eax, 5
  JMPTB je public_6f6bf8d
  JMPTB cmp eax, 6
  JMPTB je public_6f6bee4
  JMPTB cmp eax, 7
  JMPTB je public_6f6bf37
  JMPTB int 3
        public_6f6be8b : nop
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
        call public_6eeaee0
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ss : [esp+0x70]
        add esp, 0xC
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x60]
        faddp 
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x5C]
        faddp 
        fcomp dword ptr ds : [public_6fbbcfc]
        public_6f6bec4 : nop
        fnstsw ax
        test ah, 5
        jp public_6f6bed9
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x114
        ret 
        public_6f6bed9 : nop
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x114
        ret 
        public_6f6bee4 : nop
        fld dword ptr ss : [esp+0x18]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x50]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fcomp dword ptr ds : [public_6fbbd00]
        jmp public_6f6bec4
        public_6f6bf37 : nop
        fld dword ptr ss : [esp+0x18]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fcomp dword ptr ds : [public_6fbbd04]
        jmp public_6f6bec4
        public_6f6bf8d : nop
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x10]
        fabs 
        fcomp qword ptr ds : [public_6fbbd18]
        fnstsw ax
        test ah, 5
        jp public_6f6bfc6
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x18]
        fabs 
        fcomp qword ptr ds : [public_6fbbd18]
        fnstsw ax
        test ah, 5
        jp public_6f6bfc6
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x114
        ret 
        public_6f6bfc6 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x24]
        push edi
        mov ecx, 9
        lea esi, ss:[esp+0xD8]
        lea edi, ss:[esp+0x84]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0xA8], eax
        mov eax, dword ptr ds : [public_6fd1d0c]
        test eax, eax
        mov dword ptr ss : [esp+0xAC], ecx
        mov dword ptr ss : [esp+0xB0], edx
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x80], 0xC59C4000
        pop edi
        jne public_6f6c02c
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd1d0c], eax
        public_6f6c02c : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x74]
        push edx
        lea edx, ss:[esp+0x84]
        push edx
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x34]
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xB4], ecx
        fld dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x5C]
        fsub dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0xB0], eax
        mov dword ptr ss : [esp+0xB8], edx
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x58]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x64]
        mov ecx, 0x5F3759DF
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x60]
        faddp 
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x5C]
        faddp 
        fst dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x30]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x74]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x70]
        mov eax, 0x5F3759DF
        fmul dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [esp+0x6C]
        faddp 
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x68]
        faddp 
        fst dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0xC], eax
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fmul dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fmul dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fsubr dword ptr ds : [public_6fbbd10]
        fabs 
        fcomp qword ptr ds : [public_6fbbd08]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_6f6c189
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x114
        ret 
        public_6f6c189 : nop
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        push ebx
        call dword ptr ds : [public_6fb3630]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x28]
        mov ecx, 0x5F3759DF
        fld dword ptr ss : [esp+0x20]
        add esp, 0xC
        fsub dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x24]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x28]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+8], ecx
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fmul st, st(1)
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fmul dword ptr ss : [esp+8]
        fmul st, st(1)
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_6fbbcf8]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_6f6c21c
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x114
        ret 
        public_6f6c21c : nop
        pop esi
        xor al, al
        pop ebx
        add esp, 0x114
        ret 
        UNREACHABLE_TRAP(0x6f6bdd0)
        ASM_EXPORT_ENTRY_FIRST(0x6f6be8b, public_6f6be8b)
        ASM_EXPORT_ENTRY(0x6f6bee4, public_6f6bee4)
        ASM_EXPORT_ENTRY(0x6f6bf37, public_6f6bf37)
        ASM_EXPORT_ENTRY(0x6f6bf8d, public_6f6bf8d)
        ASM_EXPORT_ENTRY_LAST(0x6f6c21c, public_6f6c21c)
    }
}

#undef public_6f6be8b
#undef public_6f6bec4
#undef public_6f6bed9
#undef public_6f6bee4
#undef public_6f6bf37
#undef public_6f6bf8d
#undef public_6f6bfc6
#undef public_6f6c02c
#undef public_6f6c189
#undef public_6f6c21c

#pragma init_seg(compiler)
extern "C" void const* const public_6f6be8b = __AsmFindLabelExport(&internal_6f6bdd0, 0x6f6be8b);
extern "C" void const* const public_6f6bee4 = __AsmFindLabelExport(&internal_6f6bdd0, 0x6f6bee4);
extern "C" void const* const public_6f6bf37 = __AsmFindLabelExport(&internal_6f6bdd0, 0x6f6bf37);
extern "C" void const* const public_6f6bf8d = __AsmFindLabelExport(&internal_6f6bdd0, 0x6f6bf8d);
extern "C" void const* const public_6f6c21c = __AsmFindLabelExport(&internal_6f6bdd0, 0x6f6c21c);
