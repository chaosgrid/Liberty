#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d46f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395148 _public_6395148
#define public_6395150 _public_6395150
#define public_6395158 _public_6395158
#define public_6395160 _public_6395160
#define public_6395168 _public_6395168
#define public_6395170 _public_6395170

PROC_DECLARE(0x6395140, internal_6395140, public_6395140);
/* CHUNK of public_62d4520 */
extern "C" NAKED register_t __cdecl internal_6395140()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x6C]
        jmp public_62881d0
        public_6395148 : nop
        lea ecx, ss:[ebp-0x64]
        jmp public_62881d0
        public_6395150 : nop
        mov ecx, dword ptr ss : [ebp-0x6C]
        jmp public_62881d0
        public_6395158 : nop
        lea ecx, ss:[ebp-0x5C]
        jmp public_62881d0
        public_6395160 : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_62d46f0
        public_6395168 : nop
        lea ecx, ss:[ebp-0x64]
        jmp public_62881d0
        public_6395170 : nop
        mov eax, offset public_63aeb8c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395140)
        ASM_EXPORT_ENTRY_FIRST(0x6395148, public_6395148)
        ASM_EXPORT_ENTRY(0x6395150, public_6395150)
        ASM_EXPORT_ENTRY(0x6395158, public_6395158)
        ASM_EXPORT_ENTRY(0x6395160, public_6395160)
        ASM_EXPORT_ENTRY(0x6395168, public_6395168)
        ASM_EXPORT_ENTRY_LAST(0x6395170, public_6395170)
    }
}

#undef public_6395148
#undef public_6395150
#undef public_6395158
#undef public_6395160
#undef public_6395168
#undef public_6395170

#pragma init_seg(compiler)
extern "C" void const* const public_6395148 = __AsmFindLabelExport(&internal_6395140, 0x6395148);
extern "C" void const* const public_6395150 = __AsmFindLabelExport(&internal_6395140, 0x6395150);
extern "C" void const* const public_6395158 = __AsmFindLabelExport(&internal_6395140, 0x6395158);
extern "C" void const* const public_6395160 = __AsmFindLabelExport(&internal_6395140, 0x6395160);
extern "C" void const* const public_6395168 = __AsmFindLabelExport(&internal_6395140, 0x6395168);
extern "C" void const* const public_6395170 = __AsmFindLabelExport(&internal_6395140, 0x6395170);
