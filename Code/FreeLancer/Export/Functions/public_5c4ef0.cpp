#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4ef8 _public_5c4ef8
#define public_5c4f06 _public_5c4f06

PROC_DECLARE(0x5c4ef0, internal_5c4ef0, public_5c4ef0);
/* CHUNK of public_59fa50 */
extern "C" NAKED register_t __cdecl internal_5c4ef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4b4fd0
        public_5c4ef8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x80
        jmp public_59ef20
        public_5c4f06 : nop
        mov eax, offset public_5fecc8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4ef0)
        ASM_EXPORT_ENTRY_FIRST(0x5c4ef8, public_5c4ef8)
        ASM_EXPORT_ENTRY_LAST(0x5c4f06, public_5c4f06)
    }
}

#undef public_5c4ef8
#undef public_5c4f06

#pragma init_seg(compiler)
extern "C" void const* const public_5c4ef8 = __AsmFindLabelExport(&internal_5c4ef0, 0x5c4ef8);
extern "C" void const* const public_5c4f06 = __AsmFindLabelExport(&internal_5c4ef0, 0x5c4f06);
