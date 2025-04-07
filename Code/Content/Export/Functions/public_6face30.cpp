#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6face3b _public_6face3b
#define public_6face43 _public_6face43
#define public_6face4b _public_6face4b
#define public_6face56 _public_6face56
#define public_6face5e _public_6face5e

PROC_DECLARE(0x6face30, internal_6face30, public_6face30);
/* CHUNK of public_6f065e0 */
extern "C" NAKED register_t __cdecl internal_6face30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6face3b : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_6ea8cc0
        public_6face43 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_6f28e10
        public_6face4b : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6face56 : nop
        lea ecx, ss:[ebp+4]
        jmp public_6f28e10
        public_6face5e : nop
        mov eax, offset public_6fc1b18
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6face30)
        ASM_EXPORT_ENTRY_FIRST(0x6face3b, public_6face3b)
        ASM_EXPORT_ENTRY(0x6face43, public_6face43)
        ASM_EXPORT_ENTRY(0x6face4b, public_6face4b)
        ASM_EXPORT_ENTRY(0x6face56, public_6face56)
        ASM_EXPORT_ENTRY_LAST(0x6face5e, public_6face5e)
    }
}

#undef public_6face3b
#undef public_6face43
#undef public_6face4b
#undef public_6face56
#undef public_6face5e

#pragma init_seg(compiler)
extern "C" void const* const public_6face3b = __AsmFindLabelExport(&internal_6face30, 0x6face3b);
extern "C" void const* const public_6face43 = __AsmFindLabelExport(&internal_6face30, 0x6face43);
extern "C" void const* const public_6face4b = __AsmFindLabelExport(&internal_6face30, 0x6face4b);
extern "C" void const* const public_6face56 = __AsmFindLabelExport(&internal_6face30, 0x6face56);
extern "C" void const* const public_6face5e = __AsmFindLabelExport(&internal_6face30, 0x6face5e);
