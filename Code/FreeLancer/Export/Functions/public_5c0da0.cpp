#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0dac _public_5c0dac
#define public_5c0dbb _public_5c0dbb

PROC_DECLARE(0x5c0da0, internal_5c0da0, public_5c0da0);
/* CHUNK of public_542f10 */
extern "C" NAKED register_t __cdecl internal_5c0da0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x8C]
        jmp dword ptr ds : [public_5c69ac]
        public_5c0dac : nop
        mov ecx, dword ptr ss : [ebp-0x8C]
        add ecx, 8
        jmp dword ptr ds : [public_5c6aa8]
        public_5c0dbb : nop
        mov eax, offset public_5fb024
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0da0)
        ASM_EXPORT_ENTRY_FIRST(0x5c0dac, public_5c0dac)
        ASM_EXPORT_ENTRY_LAST(0x5c0dbb, public_5c0dbb)
    }
}

#undef public_5c0dac
#undef public_5c0dbb

#pragma init_seg(compiler)
extern "C" void const* const public_5c0dac = __AsmFindLabelExport(&internal_5c0da0, 0x5c0dac);
extern "C" void const* const public_5c0dbb = __AsmFindLabelExport(&internal_5c0da0, 0x5c0dbb);
