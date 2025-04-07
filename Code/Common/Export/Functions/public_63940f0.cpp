#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_627cae0);
CLANG_FORWARD_PROC_SYMBOL(public_6280b30);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62af440);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63940f8 _public_63940f8
#define public_6394103 _public_6394103
#define public_639410e _public_639410e
#define public_6394116 _public_6394116
#define public_6394124 _public_6394124

PROC_DECLARE(0x63940f0, internal_63940f0, public_63940f0);
/* CHUNK of public_62ac790 */
extern "C" NAKED register_t __cdecl internal_63940f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_627cae0
        public_63940f8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp public_6269110
        public_6394103 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x78
        jmp public_62a68e0
        public_639410e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62af440
        public_6394116 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x9C
        jmp public_6280b30
        public_6394124 : nop
        mov eax, offset public_63ad610
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63940f0)
        ASM_EXPORT_ENTRY_FIRST(0x63940f8, public_63940f8)
        ASM_EXPORT_ENTRY(0x6394103, public_6394103)
        ASM_EXPORT_ENTRY(0x639410e, public_639410e)
        ASM_EXPORT_ENTRY(0x6394116, public_6394116)
        ASM_EXPORT_ENTRY_LAST(0x6394124, public_6394124)
    }
}

#undef public_63940f8
#undef public_6394103
#undef public_639410e
#undef public_6394116
#undef public_6394124

#pragma init_seg(compiler)
extern "C" void const* const public_63940f8 = __AsmFindLabelExport(&internal_63940f0, 0x63940f8);
extern "C" void const* const public_6394103 = __AsmFindLabelExport(&internal_63940f0, 0x6394103);
extern "C" void const* const public_639410e = __AsmFindLabelExport(&internal_63940f0, 0x639410e);
extern "C" void const* const public_6394116 = __AsmFindLabelExport(&internal_63940f0, 0x6394116);
extern "C" void const* const public_6394124 = __AsmFindLabelExport(&internal_63940f0, 0x6394124);
