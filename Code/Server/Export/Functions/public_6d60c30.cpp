#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60c39 _public_6d60c39

PROC_DECLARE(0x6d60c30, internal_6d60c30, public_6d60c30);
/* CHUNK of public_6cfad60 */
extern "C" NAKED register_t __cdecl internal_6d60c30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_6d64b94]
        public_6d60c39 : nop
        mov eax, offset public_6d715a4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60c30)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60c39, public_6d60c39)
    }
}

#undef public_6d60c39

#pragma init_seg(compiler)
extern "C" void const* const public_6d60c39 = __AsmFindLabelExport(&internal_6d60c30, 0x6d60c39);
