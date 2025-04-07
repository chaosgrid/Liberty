#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62c5c20);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394c48 _public_6394c48
#define public_6394c53 _public_6394c53
#define public_6394c61 _public_6394c61
#define public_6394c6f _public_6394c6f
#define public_6394c7d _public_6394c7d

PROC_DECLARE(0x6394c40, internal_6394c40, public_6394c40);
/* CHUNK of public_62c7900 */
extern "C" NAKED register_t __cdecl internal_6394c40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394c48 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_62c5c20
        public_6394c53 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x110
        jmp public_62c5c20
        public_6394c61 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1AC
        jmp public_62c3040
        public_6394c6f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1CC
        jmp public_62c3040
        public_6394c7d : nop
        mov eax, offset public_63ae2b0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394c40)
        ASM_EXPORT_ENTRY_FIRST(0x6394c48, public_6394c48)
        ASM_EXPORT_ENTRY(0x6394c53, public_6394c53)
        ASM_EXPORT_ENTRY(0x6394c61, public_6394c61)
        ASM_EXPORT_ENTRY(0x6394c6f, public_6394c6f)
        ASM_EXPORT_ENTRY_LAST(0x6394c7d, public_6394c7d)
    }
}

#undef public_6394c48
#undef public_6394c53
#undef public_6394c61
#undef public_6394c6f
#undef public_6394c7d

#pragma init_seg(compiler)
extern "C" void const* const public_6394c48 = __AsmFindLabelExport(&internal_6394c40, 0x6394c48);
extern "C" void const* const public_6394c53 = __AsmFindLabelExport(&internal_6394c40, 0x6394c53);
extern "C" void const* const public_6394c61 = __AsmFindLabelExport(&internal_6394c40, 0x6394c61);
extern "C" void const* const public_6394c6f = __AsmFindLabelExport(&internal_6394c40, 0x6394c6f);
extern "C" void const* const public_6394c7d = __AsmFindLabelExport(&internal_6394c40, 0x6394c7d);
