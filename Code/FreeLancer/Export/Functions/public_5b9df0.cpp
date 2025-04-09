#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fd80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9df8 _public_5b9df8
#define public_5b9e07 _public_5b9e07

PROC_DECLARE(0x5b9df0, internal_5b9df0, public_5b9df0);
/* CHUNK of public_4510f0 */
extern "C" NAKED register_t __cdecl internal_5b9df0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_44fd80
        public_5b9df8 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x170
        jmp dword ptr ds : [public_5c61b4]
        public_5b9e07 : nop
        mov eax, offset public_5f40fc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9df0)
        ASM_EXPORT_ENTRY_FIRST(0x5b9df8, public_5b9df8)
        ASM_EXPORT_ENTRY_LAST(0x5b9e07, public_5b9e07)
    }
}

#undef public_5b9df8
#undef public_5b9e07

#pragma init_seg(compiler)
extern "C" void const* const public_5b9df8 = __AsmFindLabelExport(&internal_5b9df0, 0x5b9df8);
extern "C" void const* const public_5b9e07 = __AsmFindLabelExport(&internal_5b9df0, 0x5b9e07);
