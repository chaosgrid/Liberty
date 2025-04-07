#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63926bb _public_63926bb

PROC_DECLARE(0x63926b0, internal_63926b0, public_63926b0);
/* CHUNK of public_626c290 */
extern "C" NAKED register_t __cdecl internal_63926b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_6269110
        public_63926bb : nop
        mov eax, offset public_63ab450
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63926b0)
        ASM_EXPORT_ENTRY_SINGLE(0x63926bb, public_63926bb)
    }
}

#undef public_63926bb

#pragma init_seg(compiler)
extern "C" void const* const public_63926bb = __AsmFindLabelExport(&internal_63926b0, 0x63926bb);
