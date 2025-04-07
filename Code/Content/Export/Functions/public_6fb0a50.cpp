#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0a5b _public_6fb0a5b
#define public_6fb0a67 _public_6fb0a67

PROC_DECLARE(0x6fb0a50, internal_6fb0a50, public_6fb0a50);
/* CHUNK of public_6f85440 */
extern "C" NAKED register_t __cdecl internal_6fb0a50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb0a5b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_6fb3034]
        public_6fb0a67 : nop
        mov eax, offset public_6fc5d7c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0a50)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0a5b, public_6fb0a5b)
        ASM_EXPORT_ENTRY_LAST(0x6fb0a67, public_6fb0a67)
    }
}

#undef public_6fb0a5b
#undef public_6fb0a67

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0a5b = __AsmFindLabelExport(&internal_6fb0a50, 0x6fb0a5b);
extern "C" void const* const public_6fb0a67 = __AsmFindLabelExport(&internal_6fb0a50, 0x6fb0a67);
