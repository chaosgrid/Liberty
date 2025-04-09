#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_552b20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c133b _public_5c133b
#define public_5c1346 _public_5c1346
#define public_5c1351 _public_5c1351

PROC_DECLARE(0x5c1330, internal_5c1330, public_5c1330);
/* CHUNK of public_54db50 */
extern "C" NAKED register_t __cdecl internal_5c1330()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x6C
        jmp public_552b20
        public_5c133b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74
        jmp public_552b20
        public_5c1346 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x7C
        jmp public_552b20
        public_5c1351 : nop
        mov eax, offset public_5fb688
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1330)
        ASM_EXPORT_ENTRY_FIRST(0x5c133b, public_5c133b)
        ASM_EXPORT_ENTRY(0x5c1346, public_5c1346)
        ASM_EXPORT_ENTRY_LAST(0x5c1351, public_5c1351)
    }
}

#undef public_5c133b
#undef public_5c1346
#undef public_5c1351

#pragma init_seg(compiler)
extern "C" void const* const public_5c133b = __AsmFindLabelExport(&internal_5c1330, 0x5c133b);
extern "C" void const* const public_5c1346 = __AsmFindLabelExport(&internal_5c1330, 0x5c1346);
extern "C" void const* const public_5c1351 = __AsmFindLabelExport(&internal_5c1330, 0x5c1351);
