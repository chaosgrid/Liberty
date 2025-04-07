#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62c3060);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395be8 _public_6395be8
#define public_6395bf3 _public_6395bf3
#define public_6395c01 _public_6395c01
#define public_6395c0f _public_6395c0f
#define public_6395c1d _public_6395c1d
#define public_6395c28 _public_6395c28

PROC_DECLARE(0x6395be0, internal_6395be0, public_6395be0);
/* CHUNK of public_62fd7a0 */
extern "C" NAKED register_t __cdecl internal_6395be0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_62d2080
        public_6395be8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x2C
        jmp public_62c3040
        public_6395bf3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xA4
        jmp public_62c3040
        public_6395c01 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x164
        jmp public_62c3060
        public_6395c0f : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x310
        jmp public_62881d0
        public_6395c1d : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_62c3040
        public_6395c28 : nop
        mov eax, offset public_63afa0c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395be0)
        ASM_EXPORT_ENTRY_FIRST(0x6395be8, public_6395be8)
        ASM_EXPORT_ENTRY(0x6395bf3, public_6395bf3)
        ASM_EXPORT_ENTRY(0x6395c01, public_6395c01)
        ASM_EXPORT_ENTRY(0x6395c0f, public_6395c0f)
        ASM_EXPORT_ENTRY(0x6395c1d, public_6395c1d)
        ASM_EXPORT_ENTRY_LAST(0x6395c28, public_6395c28)
    }
}

#undef public_6395be8
#undef public_6395bf3
#undef public_6395c01
#undef public_6395c0f
#undef public_6395c1d
#undef public_6395c28

#pragma init_seg(compiler)
extern "C" void const* const public_6395be8 = __AsmFindLabelExport(&internal_6395be0, 0x6395be8);
extern "C" void const* const public_6395bf3 = __AsmFindLabelExport(&internal_6395be0, 0x6395bf3);
extern "C" void const* const public_6395c01 = __AsmFindLabelExport(&internal_6395be0, 0x6395c01);
extern "C" void const* const public_6395c0f = __AsmFindLabelExport(&internal_6395be0, 0x6395c0f);
extern "C" void const* const public_6395c1d = __AsmFindLabelExport(&internal_6395be0, 0x6395c1d);
extern "C" void const* const public_6395c28 = __AsmFindLabelExport(&internal_6395be0, 0x6395c28);
