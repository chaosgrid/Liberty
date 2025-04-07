#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea6fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabf38 _public_6fabf38
#define public_6fabf50 _public_6fabf50
#define public_6fabf57 _public_6fabf57
#define public_6fabf5f _public_6fabf5f

PROC_DECLARE(0x6fabf30, internal_6fabf30, public_6fabf30);
/* CHUNK of public_6ef0570 */
extern "C" NAKED register_t __cdecl internal_6fabf30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ea6fe0
        public_6fabf38 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_6fabf50
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 4
        mov dword ptr ss : [ebp-4], eax
        jmp public_6fabf57
        public_6fabf50 : nop
        mov dword ptr ss : [ebp-4], 0
        public_6fabf57 : nop
        mov ecx, dword ptr ss : [ebp-4]
        jmp public_6ea8cc0
        public_6fabf5f : nop
        mov eax, offset public_6fc0b5c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabf30)
        ASM_EXPORT_ENTRY_FIRST(0x6fabf38, public_6fabf38)
        ASM_EXPORT_ENTRY(0x6fabf50, public_6fabf50)
        ASM_EXPORT_ENTRY(0x6fabf57, public_6fabf57)
        ASM_EXPORT_ENTRY_LAST(0x6fabf5f, public_6fabf5f)
    }
}

#undef public_6fabf38
#undef public_6fabf50
#undef public_6fabf57
#undef public_6fabf5f

#pragma init_seg(compiler)
extern "C" void const* const public_6fabf38 = __AsmFindLabelExport(&internal_6fabf30, 0x6fabf38);
extern "C" void const* const public_6fabf50 = __AsmFindLabelExport(&internal_6fabf30, 0x6fabf50);
extern "C" void const* const public_6fabf57 = __AsmFindLabelExport(&internal_6fabf30, 0x6fabf57);
extern "C" void const* const public_6fabf5f = __AsmFindLabelExport(&internal_6fabf30, 0x6fabf5f);
