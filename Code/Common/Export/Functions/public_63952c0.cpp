#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62e6470);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63952c8 _public_63952c8
#define public_63952d6 _public_63952d6
#define public_63952e1 _public_63952e1
#define public_63952ef _public_63952ef

PROC_DECLARE(0x63952c0, internal_63952c0, public_63952c0);
/* CHUNK of public_62db3b0 */
extern "C" NAKED register_t __cdecl internal_63952c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62881d0
        public_63952c8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C8
        jmp public_62881d0
        public_63952d6 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_62881d0
        public_63952e1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x214
        jmp public_62e6470
        public_63952ef : nop
        mov eax, offset public_63aed90
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63952c0)
        ASM_EXPORT_ENTRY_FIRST(0x63952c8, public_63952c8)
        ASM_EXPORT_ENTRY(0x63952d6, public_63952d6)
        ASM_EXPORT_ENTRY(0x63952e1, public_63952e1)
        ASM_EXPORT_ENTRY_LAST(0x63952ef, public_63952ef)
    }
}

#undef public_63952c8
#undef public_63952d6
#undef public_63952e1
#undef public_63952ef

#pragma init_seg(compiler)
extern "C" void const* const public_63952c8 = __AsmFindLabelExport(&internal_63952c0, 0x63952c8);
extern "C" void const* const public_63952d6 = __AsmFindLabelExport(&internal_63952c0, 0x63952d6);
extern "C" void const* const public_63952e1 = __AsmFindLabelExport(&internal_63952c0, 0x63952e1);
extern "C" void const* const public_63952ef = __AsmFindLabelExport(&internal_63952c0, 0x63952ef);
