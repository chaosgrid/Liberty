#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7230);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab218 _public_6fab218
#define public_6fab223 _public_6fab223
#define public_6fab22b _public_6fab22b

PROC_DECLARE(0x6fab210, internal_6fab210, public_6fab210);
/* CHUNK of public_6ed5720 */
extern "C" NAKED register_t __cdecl internal_6fab210()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6eb7230
        public_6fab218 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fab223 : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_6ea8cc0
        public_6fab22b : nop
        mov eax, offset public_6fbf748
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab210)
        ASM_EXPORT_ENTRY_FIRST(0x6fab218, public_6fab218)
        ASM_EXPORT_ENTRY(0x6fab223, public_6fab223)
        ASM_EXPORT_ENTRY_LAST(0x6fab22b, public_6fab22b)
    }
}

#undef public_6fab218
#undef public_6fab223
#undef public_6fab22b

#pragma init_seg(compiler)
extern "C" void const* const public_6fab218 = __AsmFindLabelExport(&internal_6fab210, 0x6fab218);
extern "C" void const* const public_6fab223 = __AsmFindLabelExport(&internal_6fab210, 0x6fab223);
extern "C" void const* const public_6fab22b = __AsmFindLabelExport(&internal_6fab210, 0x6fab22b);
