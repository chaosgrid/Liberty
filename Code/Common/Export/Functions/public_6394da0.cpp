#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394da8 _public_6394da8
#define public_6394db3 _public_6394db3
#define public_6394dc1 _public_6394dc1
#define public_6394dcf _public_6394dcf

PROC_DECLARE(0x6394da0, internal_6394da0, public_6394da0);
/* CHUNK of public_62ca4c0 */
extern "C" NAKED register_t __cdecl internal_6394da0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394da8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_62c3040
        public_6394db3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x88
        jmp public_62c3040
        public_6394dc1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x148
        jmp public_62c3040
        public_6394dcf : nop
        mov eax, offset public_63ae410
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394da0)
        ASM_EXPORT_ENTRY_FIRST(0x6394da8, public_6394da8)
        ASM_EXPORT_ENTRY(0x6394db3, public_6394db3)
        ASM_EXPORT_ENTRY(0x6394dc1, public_6394dc1)
        ASM_EXPORT_ENTRY_LAST(0x6394dcf, public_6394dcf)
    }
}

#undef public_6394da8
#undef public_6394db3
#undef public_6394dc1
#undef public_6394dcf

#pragma init_seg(compiler)
extern "C" void const* const public_6394da8 = __AsmFindLabelExport(&internal_6394da0, 0x6394da8);
extern "C" void const* const public_6394db3 = __AsmFindLabelExport(&internal_6394da0, 0x6394db3);
extern "C" void const* const public_6394dc1 = __AsmFindLabelExport(&internal_6394da0, 0x6394dc1);
extern "C" void const* const public_6394dcf = __AsmFindLabelExport(&internal_6394da0, 0x6394dcf);
