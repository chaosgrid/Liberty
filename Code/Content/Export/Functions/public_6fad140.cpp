#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f08390);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad14b _public_6fad14b
#define public_6fad153 _public_6fad153
#define public_6fad161 _public_6fad161
#define public_6fad16f _public_6fad16f
#define public_6fad177 _public_6fad177

PROC_DECLARE(0x6fad140, internal_6fad140, public_6fad140);
/* CHUNK of public_6f0a3b0 */
extern "C" NAKED register_t __cdecl internal_6fad140()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x34]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fad14b : nop
        mov ecx, dword ptr ss : [ebp-0x34]
        jmp public_6ea8cc0
        public_6fad153 : nop
        mov ecx, dword ptr ss : [ebp-0x34]
        add ecx, 0x170
        jmp public_6f28e10
        public_6fad161 : nop
        mov ecx, dword ptr ss : [ebp-0x34]
        add ecx, 0x180
        jmp public_6f15350
        public_6fad16f : nop
        mov ecx, dword ptr ss : [ebp-0x34]
        jmp public_6f08390
        public_6fad177 : nop
        mov eax, offset public_6fc1fa0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad140)
        ASM_EXPORT_ENTRY_FIRST(0x6fad14b, public_6fad14b)
        ASM_EXPORT_ENTRY(0x6fad153, public_6fad153)
        ASM_EXPORT_ENTRY(0x6fad161, public_6fad161)
        ASM_EXPORT_ENTRY(0x6fad16f, public_6fad16f)
        ASM_EXPORT_ENTRY_LAST(0x6fad177, public_6fad177)
    }
}

#undef public_6fad14b
#undef public_6fad153
#undef public_6fad161
#undef public_6fad16f
#undef public_6fad177

#pragma init_seg(compiler)
extern "C" void const* const public_6fad14b = __AsmFindLabelExport(&internal_6fad140, 0x6fad14b);
extern "C" void const* const public_6fad153 = __AsmFindLabelExport(&internal_6fad140, 0x6fad153);
extern "C" void const* const public_6fad161 = __AsmFindLabelExport(&internal_6fad140, 0x6fad161);
extern "C" void const* const public_6fad16f = __AsmFindLabelExport(&internal_6fad140, 0x6fad16f);
extern "C" void const* const public_6fad177 = __AsmFindLabelExport(&internal_6fad140, 0x6fad177);
