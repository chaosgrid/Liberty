#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394f08 _public_6394f08
#define public_6394f13 _public_6394f13
#define public_6394f21 _public_6394f21
#define public_6394f29 _public_6394f29
#define public_6394f37 _public_6394f37

PROC_DECLARE(0x6394f00, internal_6394f00, public_6394f00);
/* CHUNK of public_62ce400 */
extern "C" NAKED register_t __cdecl internal_6394f00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394f08 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_62c3040
        public_6394f13 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA4
        jmp public_62c3040
        public_6394f21 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        jmp public_62881d0
        public_6394f29 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x174
        jmp public_62881d0
        public_6394f37 : nop
        mov eax, offset public_63ae608
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394f00)
        ASM_EXPORT_ENTRY_FIRST(0x6394f08, public_6394f08)
        ASM_EXPORT_ENTRY(0x6394f13, public_6394f13)
        ASM_EXPORT_ENTRY(0x6394f21, public_6394f21)
        ASM_EXPORT_ENTRY(0x6394f29, public_6394f29)
        ASM_EXPORT_ENTRY_LAST(0x6394f37, public_6394f37)
    }
}

#undef public_6394f08
#undef public_6394f13
#undef public_6394f21
#undef public_6394f29
#undef public_6394f37

#pragma init_seg(compiler)
extern "C" void const* const public_6394f08 = __AsmFindLabelExport(&internal_6394f00, 0x6394f08);
extern "C" void const* const public_6394f13 = __AsmFindLabelExport(&internal_6394f00, 0x6394f13);
extern "C" void const* const public_6394f21 = __AsmFindLabelExport(&internal_6394f00, 0x6394f21);
extern "C" void const* const public_6394f29 = __AsmFindLabelExport(&internal_6394f00, 0x6394f29);
extern "C" void const* const public_6394f37 = __AsmFindLabelExport(&internal_6394f00, 0x6394f37);
