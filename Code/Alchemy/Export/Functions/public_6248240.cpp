#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248248 _public_6248248

PROC_DECLARE(0x6248240, internal_6248240, public_6248240);
/* CHUNK of public_6215cd0 */
extern "C" NAKED register_t __cdecl internal_6248240()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620ce80
        public_6248248 : nop
        mov eax, offset public_62510ac
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248240)
        ASM_EXPORT_ENTRY_SINGLE(0x6248248, public_6248248)
    }
}

#undef public_6248248

#pragma init_seg(compiler)
extern "C" void const* const public_6248248 = __AsmFindLabelExport(&internal_6248240, 0x6248248);
