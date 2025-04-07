#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58f98 _public_6f58f98
#define public_6f58fa6 _public_6f58fa6
#define public_6f58fb4 _public_6f58fb4
#define public_6f58fc2 _public_6f58fc2

PROC_DECLARE(0x6f58f90, internal_6f58f90, public_6f58f90);
/* CHUNK of public_6f40c80 */
extern "C" NAKED register_t __cdecl internal_6f58f90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f405e0
        public_6f58f98 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xCC
        jmp public_6f4a7a0
        public_6f58fa6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xD0
        jmp public_6f4a7c0
        public_6f58fb4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xD4
        jmp public_6f4a7e0
        public_6f58fc2 : nop
        mov eax, offset public_6f5c154
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58f90)
        ASM_EXPORT_ENTRY_FIRST(0x6f58f98, public_6f58f98)
        ASM_EXPORT_ENTRY(0x6f58fa6, public_6f58fa6)
        ASM_EXPORT_ENTRY(0x6f58fb4, public_6f58fb4)
        ASM_EXPORT_ENTRY_LAST(0x6f58fc2, public_6f58fc2)
    }
}

#undef public_6f58f98
#undef public_6f58fa6
#undef public_6f58fb4
#undef public_6f58fc2

#pragma init_seg(compiler)
extern "C" void const* const public_6f58f98 = __AsmFindLabelExport(&internal_6f58f90, 0x6f58f98);
extern "C" void const* const public_6f58fa6 = __AsmFindLabelExport(&internal_6f58f90, 0x6f58fa6);
extern "C" void const* const public_6f58fb4 = __AsmFindLabelExport(&internal_6f58f90, 0x6f58fb4);
extern "C" void const* const public_6f58fc2 = __AsmFindLabelExport(&internal_6f58f90, 0x6f58fc2);
