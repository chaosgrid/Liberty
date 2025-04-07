#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627be50);
CLANG_FORWARD_PROC_SYMBOL(public_627c930);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392c3b _public_6392c3b
#define public_6392c46 _public_6392c46
#define public_6392c4e _public_6392c4e
#define public_6392c56 _public_6392c56

PROC_DECLARE(0x6392c30, internal_6392c30, public_6392c30);
/* CHUNK of public_627c010 */
extern "C" NAKED register_t __cdecl internal_6392c30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        jmp public_627be50
        public_6392c3b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x20
        jmp public_627be50
        public_6392c46 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_627c930
        public_6392c4e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_627c930
        public_6392c56 : nop
        mov eax, offset public_63aba58
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392c30)
        ASM_EXPORT_ENTRY_FIRST(0x6392c3b, public_6392c3b)
        ASM_EXPORT_ENTRY(0x6392c46, public_6392c46)
        ASM_EXPORT_ENTRY(0x6392c4e, public_6392c4e)
        ASM_EXPORT_ENTRY_LAST(0x6392c56, public_6392c56)
    }
}

#undef public_6392c3b
#undef public_6392c46
#undef public_6392c4e
#undef public_6392c56

#pragma init_seg(compiler)
extern "C" void const* const public_6392c3b = __AsmFindLabelExport(&internal_6392c30, 0x6392c3b);
extern "C" void const* const public_6392c46 = __AsmFindLabelExport(&internal_6392c30, 0x6392c46);
extern "C" void const* const public_6392c4e = __AsmFindLabelExport(&internal_6392c30, 0x6392c4e);
extern "C" void const* const public_6392c56 = __AsmFindLabelExport(&internal_6392c30, 0x6392c56);
