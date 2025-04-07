#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395448 _public_6395448
#define public_6395453 _public_6395453
#define public_639545b _public_639545b
#define public_6395466 _public_6395466

PROC_DECLARE(0x6395440, internal_6395440, public_6395440);
/* CHUNK of public_62ebbc0 */
extern "C" NAKED register_t __cdecl internal_6395440()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-8]
        jmp public_62881d0
        public_6395448 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_62881d0
        public_6395453 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62881d0
        public_639545b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_62881d0
        public_6395466 : nop
        mov eax, offset public_63aef14
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395440)
        ASM_EXPORT_ENTRY_FIRST(0x6395448, public_6395448)
        ASM_EXPORT_ENTRY(0x6395453, public_6395453)
        ASM_EXPORT_ENTRY(0x639545b, public_639545b)
        ASM_EXPORT_ENTRY_LAST(0x6395466, public_6395466)
    }
}

#undef public_6395448
#undef public_6395453
#undef public_639545b
#undef public_6395466

#pragma init_seg(compiler)
extern "C" void const* const public_6395448 = __AsmFindLabelExport(&internal_6395440, 0x6395448);
extern "C" void const* const public_6395453 = __AsmFindLabelExport(&internal_6395440, 0x6395453);
extern "C" void const* const public_639545b = __AsmFindLabelExport(&internal_6395440, 0x639545b);
extern "C" void const* const public_6395466 = __AsmFindLabelExport(&internal_6395440, 0x6395466);
