#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6286c80);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394158 _public_6394158

PROC_DECLARE(0x6394150, internal_6394150, public_6394150);
/* CHUNK of public_62acc40 */
extern "C" NAKED register_t __cdecl internal_6394150()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6286c80
        public_6394158 : nop
        mov eax, offset public_63ad660
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394150)
        ASM_EXPORT_ENTRY_SINGLE(0x6394158, public_6394158)
    }
}

#undef public_6394158

#pragma init_seg(compiler)
extern "C" void const* const public_6394158 = __AsmFindLabelExport(&internal_6394150, 0x6394158);
