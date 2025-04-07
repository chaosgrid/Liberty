#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad038 _public_6fad038
#define public_6fad046 _public_6fad046
#define public_6fad054 _public_6fad054
#define public_6fad062 _public_6fad062

PROC_DECLARE(0x6fad030, internal_6fad030, public_6fad030);
/* CHUNK of public_6f08390 */
extern "C" NAKED register_t __cdecl internal_6fad030()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6ea8cc0
        public_6fad038 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x170
        jmp public_6f28e10
        public_6fad046 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x180
        jmp public_6f15350
        public_6fad054 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x1A0
        jmp public_6f15350
        public_6fad062 : nop
        mov eax, offset public_6fc1e58
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad030)
        ASM_EXPORT_ENTRY_FIRST(0x6fad038, public_6fad038)
        ASM_EXPORT_ENTRY(0x6fad046, public_6fad046)
        ASM_EXPORT_ENTRY(0x6fad054, public_6fad054)
        ASM_EXPORT_ENTRY_LAST(0x6fad062, public_6fad062)
    }
}

#undef public_6fad038
#undef public_6fad046
#undef public_6fad054
#undef public_6fad062

#pragma init_seg(compiler)
extern "C" void const* const public_6fad038 = __AsmFindLabelExport(&internal_6fad030, 0x6fad038);
extern "C" void const* const public_6fad046 = __AsmFindLabelExport(&internal_6fad030, 0x6fad046);
extern "C" void const* const public_6fad054 = __AsmFindLabelExport(&internal_6fad030, 0x6fad054);
extern "C" void const* const public_6fad062 = __AsmFindLabelExport(&internal_6fad030, 0x6fad062);
