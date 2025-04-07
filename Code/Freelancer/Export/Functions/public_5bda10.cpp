#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ca800);
CLANG_FORWARD_PROC_SYMBOL(public_4cab70);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bda18 _public_5bda18
#define public_5bda23 _public_5bda23
#define public_5bda2e _public_5bda2e
#define public_5bda36 _public_5bda36
#define public_5bda41 _public_5bda41

PROC_DECLARE(0x5bda10, internal_5bda10, public_5bda10);
/* CHUNK of public_4ca940 */
extern "C" NAKED register_t __cdecl internal_5bda10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4ca800
        public_5bda18 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x38
        jmp public_4cab70
        public_5bda23 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x50
        jmp public_59ef20
        public_5bda2e : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_5154f0
        public_5bda36 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x24
        jmp public_4de730
        public_5bda41 : nop
        mov eax, offset public_5f7eac
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bda10)
        ASM_EXPORT_ENTRY_FIRST(0x5bda18, public_5bda18)
        ASM_EXPORT_ENTRY(0x5bda23, public_5bda23)
        ASM_EXPORT_ENTRY(0x5bda2e, public_5bda2e)
        ASM_EXPORT_ENTRY(0x5bda36, public_5bda36)
        ASM_EXPORT_ENTRY_LAST(0x5bda41, public_5bda41)
    }
}

#undef public_5bda18
#undef public_5bda23
#undef public_5bda2e
#undef public_5bda36
#undef public_5bda41

#pragma init_seg(compiler)
extern "C" void const* const public_5bda18 = __AsmFindLabelExport(&internal_5bda10, 0x5bda18);
extern "C" void const* const public_5bda23 = __AsmFindLabelExport(&internal_5bda10, 0x5bda23);
extern "C" void const* const public_5bda2e = __AsmFindLabelExport(&internal_5bda10, 0x5bda2e);
extern "C" void const* const public_5bda36 = __AsmFindLabelExport(&internal_5bda10, 0x5bda36);
extern "C" void const* const public_5bda41 = __AsmFindLabelExport(&internal_5bda10, 0x5bda41);
