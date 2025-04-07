#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629abd0);
CLANG_FORWARD_PROC_SYMBOL(public_62a9190);
CLANG_FORWARD_PROC_SYMBOL(public_62b8e30);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63947d8 _public_63947d8
#define public_63947e6 _public_63947e6
#define public_63947f4 _public_63947f4

PROC_DECLARE(0x63947d0, internal_63947d0, public_63947d0);
/* CHUNK of public_62b7320 */
extern "C" NAKED register_t __cdecl internal_63947d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62a9190
        public_63947d8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C0
        jmp public_629abd0
        public_63947e6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1CC
        jmp public_62b8e30
        public_63947f4 : nop
        mov eax, offset public_63adda0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63947d0)
        ASM_EXPORT_ENTRY_FIRST(0x63947d8, public_63947d8)
        ASM_EXPORT_ENTRY(0x63947e6, public_63947e6)
        ASM_EXPORT_ENTRY_LAST(0x63947f4, public_63947f4)
    }
}

#undef public_63947d8
#undef public_63947e6
#undef public_63947f4

#pragma init_seg(compiler)
extern "C" void const* const public_63947d8 = __AsmFindLabelExport(&internal_63947d0, 0x63947d8);
extern "C" void const* const public_63947e6 = __AsmFindLabelExport(&internal_63947d0, 0x63947e6);
extern "C" void const* const public_63947f4 = __AsmFindLabelExport(&internal_63947d0, 0x63947f4);
