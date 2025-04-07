#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d03ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60feb _public_6d60feb
#define public_6d60ff6 _public_6d60ff6

PROC_DECLARE(0x6d60fe0, internal_6d60fe0, public_6d60fe0);
/* CHUNK of public_6d03740 */
extern "C" NAKED register_t __cdecl internal_6d60fe0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 4
        jmp public_6cecb50
        public_6d60feb : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 4
        jmp public_6d03ef0
        public_6d60ff6 : nop
        mov eax, offset public_6d71b58
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60fe0)
        ASM_EXPORT_ENTRY_FIRST(0x6d60feb, public_6d60feb)
        ASM_EXPORT_ENTRY_LAST(0x6d60ff6, public_6d60ff6)
    }
}

#undef public_6d60feb
#undef public_6d60ff6

#pragma init_seg(compiler)
extern "C" void const* const public_6d60feb = __AsmFindLabelExport(&internal_6d60fe0, 0x6d60feb);
extern "C" void const* const public_6d60ff6 = __AsmFindLabelExport(&internal_6d60fe0, 0x6d60ff6);
