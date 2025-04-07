#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f592b8 _public_6f592b8
#define public_6f592c7 _public_6f592c7
#define public_6f592d6 _public_6f592d6

PROC_DECLARE(0x6f592b0, internal_6f592b0, public_6f592b0);
/* CHUNK of public_6f43df0 */
extern "C" NAKED register_t __cdecl internal_6f592b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f592b8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xAC
        jmp dword ptr ds : [public_6f5a014]
        public_6f592c7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xBC
        jmp dword ptr ds : [public_6f5a014]
        public_6f592d6 : nop
        mov eax, offset public_6f5c48c
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f592b0)
        ASM_EXPORT_ENTRY_FIRST(0x6f592b8, public_6f592b8)
        ASM_EXPORT_ENTRY(0x6f592c7, public_6f592c7)
        ASM_EXPORT_ENTRY_LAST(0x6f592d6, public_6f592d6)
    }
}

#undef public_6f592b8
#undef public_6f592c7
#undef public_6f592d6

#pragma init_seg(compiler)
extern "C" void const* const public_6f592b8 = __AsmFindLabelExport(&internal_6f592b0, 0x6f592b8);
extern "C" void const* const public_6f592c7 = __AsmFindLabelExport(&internal_6f592b0, 0x6f592c7);
extern "C" void const* const public_6f592d6 = __AsmFindLabelExport(&internal_6f592b0, 0x6f592d6);
