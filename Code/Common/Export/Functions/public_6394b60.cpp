#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62c3060);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394b68 _public_6394b68
#define public_6394b73 _public_6394b73
#define public_6394b81 _public_6394b81
#define public_6394b8f _public_6394b8f
#define public_6394b9d _public_6394b9d
#define public_6394ba8 _public_6394ba8

PROC_DECLARE(0x6394b60, internal_6394b60, public_6394b60);
/* CHUNK of public_62c6df0 */
extern "C" NAKED register_t __cdecl internal_6394b60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62d2080
        public_6394b68 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x2C
        jmp public_62c3040
        public_6394b73 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xA4
        jmp public_62c3040
        public_6394b81 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x164
        jmp public_62c3060
        public_6394b8f : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x310
        jmp public_62881d0
        public_6394b9d : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_62c3040
        public_6394ba8 : nop
        mov eax, offset public_63ae1f4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394b60)
        ASM_EXPORT_ENTRY_FIRST(0x6394b68, public_6394b68)
        ASM_EXPORT_ENTRY(0x6394b73, public_6394b73)
        ASM_EXPORT_ENTRY(0x6394b81, public_6394b81)
        ASM_EXPORT_ENTRY(0x6394b8f, public_6394b8f)
        ASM_EXPORT_ENTRY(0x6394b9d, public_6394b9d)
        ASM_EXPORT_ENTRY_LAST(0x6394ba8, public_6394ba8)
    }
}

#undef public_6394b68
#undef public_6394b73
#undef public_6394b81
#undef public_6394b8f
#undef public_6394b9d
#undef public_6394ba8

#pragma init_seg(compiler)
extern "C" void const* const public_6394b68 = __AsmFindLabelExport(&internal_6394b60, 0x6394b68);
extern "C" void const* const public_6394b73 = __AsmFindLabelExport(&internal_6394b60, 0x6394b73);
extern "C" void const* const public_6394b81 = __AsmFindLabelExport(&internal_6394b60, 0x6394b81);
extern "C" void const* const public_6394b8f = __AsmFindLabelExport(&internal_6394b60, 0x6394b8f);
extern "C" void const* const public_6394b9d = __AsmFindLabelExport(&internal_6394b60, 0x6394b9d);
extern "C" void const* const public_6394ba8 = __AsmFindLabelExport(&internal_6394b60, 0x6394ba8);
