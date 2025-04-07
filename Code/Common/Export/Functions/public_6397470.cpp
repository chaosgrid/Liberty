#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639747e _public_639747e
#define public_639748c _public_639748c

PROC_DECLARE(0x6397470, internal_6397470, public_6397470);
/* CHUNK of public_632dcb0 */
extern "C" NAKED register_t __cdecl internal_6397470()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x22C
        jmp public_630e210
        public_639747e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x244
        jmp public_630e210
        public_639748c : nop
        mov eax, offset public_63b15fc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397470)
        ASM_EXPORT_ENTRY_FIRST(0x639747e, public_639747e)
        ASM_EXPORT_ENTRY_LAST(0x639748c, public_639748c)
    }
}

#undef public_639747e
#undef public_639748c

#pragma init_seg(compiler)
extern "C" void const* const public_639747e = __AsmFindLabelExport(&internal_6397470, 0x639747e);
extern "C" void const* const public_639748c = __AsmFindLabelExport(&internal_6397470, 0x639748c);
