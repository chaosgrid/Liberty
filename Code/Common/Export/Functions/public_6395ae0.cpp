#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_626fe00);
CLANG_FORWARD_PROC_SYMBOL(public_62f0120);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395aeb _public_6395aeb
#define public_6395af9 _public_6395af9
#define public_6395b07 _public_6395b07
#define public_6395b12 _public_6395b12
#define public_6395b1d _public_6395b1d
#define public_6395b28 _public_6395b28
#define public_6395b33 _public_6395b33
#define public_6395b3f _public_6395b3f
#define public_6395b4b _public_6395b4b

PROC_DECLARE(0x6395ae0, internal_6395ae0, public_6395ae0);
/* CHUNK of public_62fa0d0 */
extern "C" NAKED register_t __cdecl internal_6395ae0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263860
        public_6395aeb : nop
        mov eax, dword ptr ss : [ebp-0x15F8]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6395af9 : nop
        mov eax, dword ptr ss : [ebp-0x15F8]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6395b07 : nop
        lea ecx, ss:[ebp-0x1594]
        jmp public_62f0120
        public_6395b12 : nop
        lea ecx, ss:[ebp-0x15DC]
        jmp public_626fe00
        public_6395b1d : nop
        lea ecx, ss:[ebp-0x1594]
        jmp public_62f0120
        public_6395b28 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263310
        public_6395b33 : nop
        mov ecx, dword ptr ss : [ebp-0x15E8]
        jmp dword ptr ds : [public_63991ac]
        public_6395b3f : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_63991ac]
        public_6395b4b : nop
        mov eax, offset public_63af948
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395ae0)
        ASM_EXPORT_ENTRY_FIRST(0x6395aeb, public_6395aeb)
        ASM_EXPORT_ENTRY(0x6395af9, public_6395af9)
        ASM_EXPORT_ENTRY(0x6395b07, public_6395b07)
        ASM_EXPORT_ENTRY(0x6395b12, public_6395b12)
        ASM_EXPORT_ENTRY(0x6395b1d, public_6395b1d)
        ASM_EXPORT_ENTRY(0x6395b28, public_6395b28)
        ASM_EXPORT_ENTRY(0x6395b33, public_6395b33)
        ASM_EXPORT_ENTRY(0x6395b3f, public_6395b3f)
        ASM_EXPORT_ENTRY_LAST(0x6395b4b, public_6395b4b)
    }
}

#undef public_6395aeb
#undef public_6395af9
#undef public_6395b07
#undef public_6395b12
#undef public_6395b1d
#undef public_6395b28
#undef public_6395b33
#undef public_6395b3f
#undef public_6395b4b

#pragma init_seg(compiler)
extern "C" void const* const public_6395aeb = __AsmFindLabelExport(&internal_6395ae0, 0x6395aeb);
extern "C" void const* const public_6395af9 = __AsmFindLabelExport(&internal_6395ae0, 0x6395af9);
extern "C" void const* const public_6395b07 = __AsmFindLabelExport(&internal_6395ae0, 0x6395b07);
extern "C" void const* const public_6395b12 = __AsmFindLabelExport(&internal_6395ae0, 0x6395b12);
extern "C" void const* const public_6395b1d = __AsmFindLabelExport(&internal_6395ae0, 0x6395b1d);
extern "C" void const* const public_6395b28 = __AsmFindLabelExport(&internal_6395ae0, 0x6395b28);
extern "C" void const* const public_6395b33 = __AsmFindLabelExport(&internal_6395ae0, 0x6395b33);
extern "C" void const* const public_6395b3f = __AsmFindLabelExport(&internal_6395ae0, 0x6395b3f);
extern "C" void const* const public_6395b4b = __AsmFindLabelExport(&internal_6395ae0, 0x6395b4b);
