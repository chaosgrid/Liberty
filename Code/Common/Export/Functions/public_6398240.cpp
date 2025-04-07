#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635c310);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639824e _public_639824e
#define public_6398259 _public_6398259

PROC_DECLARE(0x6398240, internal_6398240, public_6398240);
/* CHUNK of public_635c410 */
extern "C" NAKED register_t __cdecl internal_6398240()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x144
        jmp public_635c310
        public_639824e : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6398259 : nop
        mov eax, offset public_63b26d0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398240)
        ASM_EXPORT_ENTRY_FIRST(0x639824e, public_639824e)
        ASM_EXPORT_ENTRY_LAST(0x6398259, public_6398259)
    }
}

#undef public_639824e
#undef public_6398259

#pragma init_seg(compiler)
extern "C" void const* const public_639824e = __AsmFindLabelExport(&internal_6398240, 0x639824e);
extern "C" void const* const public_6398259 = __AsmFindLabelExport(&internal_6398240, 0x6398259);
