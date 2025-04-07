#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394c98 _public_6394c98
#define public_6394ca0 _public_6394ca0
#define public_6394cab _public_6394cab
#define public_6394cb6 _public_6394cb6
#define public_6394cc4 _public_6394cc4

PROC_DECLARE(0x6394c90, internal_6394c90, public_6394c90);
/* CHUNK of public_62c88e0 */
extern "C" NAKED register_t __cdecl internal_6394c90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394c98 : nop
        mov ecx, dword ptr ss : [ebp-8]
        jmp public_62881d0
        public_6394ca0 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_62881d0
        public_6394cab : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x68
        jmp public_62c3040
        public_6394cb6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE0
        jmp public_62c3040
        public_6394cc4 : nop
        mov eax, offset public_63ae2f4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394c90)
        ASM_EXPORT_ENTRY_FIRST(0x6394c98, public_6394c98)
        ASM_EXPORT_ENTRY(0x6394ca0, public_6394ca0)
        ASM_EXPORT_ENTRY(0x6394cab, public_6394cab)
        ASM_EXPORT_ENTRY(0x6394cb6, public_6394cb6)
        ASM_EXPORT_ENTRY_LAST(0x6394cc4, public_6394cc4)
    }
}

#undef public_6394c98
#undef public_6394ca0
#undef public_6394cab
#undef public_6394cb6
#undef public_6394cc4

#pragma init_seg(compiler)
extern "C" void const* const public_6394c98 = __AsmFindLabelExport(&internal_6394c90, 0x6394c98);
extern "C" void const* const public_6394ca0 = __AsmFindLabelExport(&internal_6394c90, 0x6394ca0);
extern "C" void const* const public_6394cab = __AsmFindLabelExport(&internal_6394c90, 0x6394cab);
extern "C" void const* const public_6394cb6 = __AsmFindLabelExport(&internal_6394c90, 0x6394cb6);
extern "C" void const* const public_6394cc4 = __AsmFindLabelExport(&internal_6394c90, 0x6394cc4);
