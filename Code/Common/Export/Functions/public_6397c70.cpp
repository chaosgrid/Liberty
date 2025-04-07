#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_634b6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397c78 _public_6397c78
#define public_6397c83 _public_6397c83
#define public_6397c8e _public_6397c8e
#define public_6397c99 _public_6397c99
#define public_6397ca4 _public_6397ca4

PROC_DECLARE(0x6397c70, internal_6397c70, public_6397c70);
/* CHUNK of public_634b600 */
extern "C" NAKED register_t __cdecl internal_6397c70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x3C]
        jmp public_634b6a0
        public_6397c78 : nop
        mov ecx, dword ptr ss : [ebp-0x3C]
        add ecx, 8
        jmp public_634b6a0
        public_6397c83 : nop
        mov ecx, dword ptr ss : [ebp-0x3C]
        add ecx, 0x10
        jmp public_634b6a0
        public_6397c8e : nop
        mov ecx, dword ptr ss : [ebp-0x3C]
        add ecx, 0x24
        jmp public_63449d0
        public_6397c99 : nop
        mov ecx, dword ptr ss : [ebp-0x3C]
        add ecx, 0x2C
        jmp public_63449d0
        public_6397ca4 : nop
        mov eax, offset public_63b2010
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397c70)
        ASM_EXPORT_ENTRY_FIRST(0x6397c78, public_6397c78)
        ASM_EXPORT_ENTRY(0x6397c83, public_6397c83)
        ASM_EXPORT_ENTRY(0x6397c8e, public_6397c8e)
        ASM_EXPORT_ENTRY(0x6397c99, public_6397c99)
        ASM_EXPORT_ENTRY_LAST(0x6397ca4, public_6397ca4)
    }
}

#undef public_6397c78
#undef public_6397c83
#undef public_6397c8e
#undef public_6397c99
#undef public_6397ca4

#pragma init_seg(compiler)
extern "C" void const* const public_6397c78 = __AsmFindLabelExport(&internal_6397c70, 0x6397c78);
extern "C" void const* const public_6397c83 = __AsmFindLabelExport(&internal_6397c70, 0x6397c83);
extern "C" void const* const public_6397c8e = __AsmFindLabelExport(&internal_6397c70, 0x6397c8e);
extern "C" void const* const public_6397c99 = __AsmFindLabelExport(&internal_6397c70, 0x6397c99);
extern "C" void const* const public_6397ca4 = __AsmFindLabelExport(&internal_6397c70, 0x6397ca4);
