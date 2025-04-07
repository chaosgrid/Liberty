#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a820);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a870);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59008 _public_6f59008
#define public_6f59016 _public_6f59016
#define public_6f59024 _public_6f59024
#define public_6f59032 _public_6f59032

PROC_DECLARE(0x6f59000, internal_6f59000, public_6f59000);
/* CHUNK of public_6f41110 */
extern "C" NAKED register_t __cdecl internal_6f59000()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f405e0
        public_6f59008 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x84
        jmp public_6f4a820
        public_6f59016 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE4
        jmp public_6f4a870
        public_6f59024 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE8
        jmp public_6f4a7e0
        public_6f59032 : nop
        mov eax, offset public_6f5c1c4
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59000)
        ASM_EXPORT_ENTRY_FIRST(0x6f59008, public_6f59008)
        ASM_EXPORT_ENTRY(0x6f59016, public_6f59016)
        ASM_EXPORT_ENTRY(0x6f59024, public_6f59024)
        ASM_EXPORT_ENTRY_LAST(0x6f59032, public_6f59032)
    }
}

#undef public_6f59008
#undef public_6f59016
#undef public_6f59024
#undef public_6f59032

#pragma init_seg(compiler)
extern "C" void const* const public_6f59008 = __AsmFindLabelExport(&internal_6f59000, 0x6f59008);
extern "C" void const* const public_6f59016 = __AsmFindLabelExport(&internal_6f59000, 0x6f59016);
extern "C" void const* const public_6f59024 = __AsmFindLabelExport(&internal_6f59000, 0x6f59024);
extern "C" void const* const public_6f59032 = __AsmFindLabelExport(&internal_6f59000, 0x6f59032);
