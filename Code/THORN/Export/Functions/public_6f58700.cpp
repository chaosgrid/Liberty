#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2f090);
CLANG_FORWARD_PROC_SYMBOL(public_6f33100);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58708 _public_6f58708
#define public_6f58713 _public_6f58713

PROC_DECLARE(0x6f58700, internal_6f58700, public_6f58700);
/* CHUNK of public_6f2fa40 */
extern "C" NAKED register_t __cdecl internal_6f58700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f2f090
        public_6f58708 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_6f33100
        public_6f58713 : nop
        mov eax, offset public_6f5b870
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58700)
        ASM_EXPORT_ENTRY_FIRST(0x6f58708, public_6f58708)
        ASM_EXPORT_ENTRY_LAST(0x6f58713, public_6f58713)
    }
}

#undef public_6f58708
#undef public_6f58713

#pragma init_seg(compiler)
extern "C" void const* const public_6f58708 = __AsmFindLabelExport(&internal_6f58700, 0x6f58708);
extern "C" void const* const public_6f58713 = __AsmFindLabelExport(&internal_6f58700, 0x6f58713);
