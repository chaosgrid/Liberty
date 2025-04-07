#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639606b _public_639606b
#define public_6396076 _public_6396076

PROC_DECLARE(0x6396060, internal_6396060, public_6396060);
/* CHUNK of public_63062c0 */
extern "C" NAKED register_t __cdecl internal_6396060()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639606b : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6396076 : nop
        mov eax, offset public_63afe48
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396060)
        ASM_EXPORT_ENTRY_FIRST(0x639606b, public_639606b)
        ASM_EXPORT_ENTRY_LAST(0x6396076, public_6396076)
    }
}

#undef public_639606b
#undef public_6396076

#pragma init_seg(compiler)
extern "C" void const* const public_639606b = __AsmFindLabelExport(&internal_6396060, 0x639606b);
extern "C" void const* const public_6396076 = __AsmFindLabelExport(&internal_6396060, 0x6396076);
