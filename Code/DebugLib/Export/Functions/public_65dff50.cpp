#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d24d0);
CLANG_FORWARD_PROC_SYMBOL(public_65d3700);
CLANG_FORWARD_PROC_SYMBOL(public_65d38f0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d7009);

#define public_65dff5b _public_65dff5b
#define public_65dff66 _public_65dff66
#define public_65dff71 _public_65dff71
#define public_65dff7c _public_65dff7c
#define public_65dff87 _public_65dff87

PROC_DECLARE(0x65dff50, internal_65dff50, public_65dff50);
/* CHUNK of public_65d2f10 */
extern "C" NAKED register_t __cdecl internal_65dff50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_65d6cb8
        pop ecx
        ret 
        public_65dff5b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_65d3700
        public_65dff66 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp public_65d24d0
        public_65dff71 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_65d38f0
        public_65dff7c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34
        jmp public_65d38f0
        public_65dff87 : nop
        mov eax, offset public_65e1fb8
        jmp public_65d7009
        UNREACHABLE_TRAP(0x65dff50)
        ASM_EXPORT_ENTRY_FIRST(0x65dff5b, public_65dff5b)
        ASM_EXPORT_ENTRY(0x65dff66, public_65dff66)
        ASM_EXPORT_ENTRY(0x65dff71, public_65dff71)
        ASM_EXPORT_ENTRY(0x65dff7c, public_65dff7c)
        ASM_EXPORT_ENTRY_LAST(0x65dff87, public_65dff87)
    }
}

#undef public_65dff5b
#undef public_65dff66
#undef public_65dff71
#undef public_65dff7c
#undef public_65dff87

#pragma init_seg(compiler)
extern "C" void const* const public_65dff5b = __AsmFindLabelExport(&internal_65dff50, 0x65dff5b);
extern "C" void const* const public_65dff66 = __AsmFindLabelExport(&internal_65dff50, 0x65dff66);
extern "C" void const* const public_65dff71 = __AsmFindLabelExport(&internal_65dff50, 0x65dff71);
extern "C" void const* const public_65dff7c = __AsmFindLabelExport(&internal_65dff50, 0x65dff7c);
extern "C" void const* const public_65dff87 = __AsmFindLabelExport(&internal_65dff50, 0x65dff87);
