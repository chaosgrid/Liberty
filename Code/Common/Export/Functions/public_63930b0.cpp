#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63930bb _public_63930bb

PROC_DECLARE(0x63930b0, internal_63930b0, public_63930b0);
/* CHUNK of public_6286fb0 */
extern "C" NAKED register_t __cdecl internal_63930b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_62a68e0
        public_63930bb : nop
        mov eax, offset public_63ac144
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63930b0)
        ASM_EXPORT_ENTRY_SINGLE(0x63930bb, public_63930bb)
    }
}

#undef public_63930bb

#pragma init_seg(compiler)
extern "C" void const* const public_63930bb = __AsmFindLabelExport(&internal_63930b0, 0x63930bb);
