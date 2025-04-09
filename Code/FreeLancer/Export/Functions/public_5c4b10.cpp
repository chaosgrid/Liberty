#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4b18 _public_5c4b18
#define public_5c4b26 _public_5c4b26
#define public_5c4b34 _public_5c4b34
#define public_5c4b42 _public_5c4b42

PROC_DECLARE(0x5c4b10, internal_5c4b10, public_5c4b10);
/* CHUNK of public_597ed0 */
extern "C" NAKED register_t __cdecl internal_5c4b10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4b4fd0
        public_5c4b18 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x84
        jmp public_4de730
        public_5c4b26 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x94
        jmp public_4de730
        public_5c4b34 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA4
        jmp public_4de730
        public_5c4b42 : nop
        mov eax, offset public_5fe844
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4b10)
        ASM_EXPORT_ENTRY_FIRST(0x5c4b18, public_5c4b18)
        ASM_EXPORT_ENTRY(0x5c4b26, public_5c4b26)
        ASM_EXPORT_ENTRY(0x5c4b34, public_5c4b34)
        ASM_EXPORT_ENTRY_LAST(0x5c4b42, public_5c4b42)
    }
}

#undef public_5c4b18
#undef public_5c4b26
#undef public_5c4b34
#undef public_5c4b42

#pragma init_seg(compiler)
extern "C" void const* const public_5c4b18 = __AsmFindLabelExport(&internal_5c4b10, 0x5c4b18);
extern "C" void const* const public_5c4b26 = __AsmFindLabelExport(&internal_5c4b10, 0x5c4b26);
extern "C" void const* const public_5c4b34 = __AsmFindLabelExport(&internal_5c4b10, 0x5c4b34);
extern "C" void const* const public_5c4b42 = __AsmFindLabelExport(&internal_5c4b10, 0x5c4b42);
