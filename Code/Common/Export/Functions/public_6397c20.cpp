#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397c2b _public_6397c2b
#define public_6397c36 _public_6397c36
#define public_6397c41 _public_6397c41

PROC_DECLARE(0x6397c20, internal_6397c20, public_6397c20);
/* CHUNK of public_634ad70 */
extern "C" NAKED register_t __cdecl internal_6397c20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397c2b : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397c36 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397c41 : nop
        mov eax, offset public_63b1f38
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397c20)
        ASM_EXPORT_ENTRY_FIRST(0x6397c2b, public_6397c2b)
        ASM_EXPORT_ENTRY(0x6397c36, public_6397c36)
        ASM_EXPORT_ENTRY_LAST(0x6397c41, public_6397c41)
    }
}

#undef public_6397c2b
#undef public_6397c36
#undef public_6397c41

#pragma init_seg(compiler)
extern "C" void const* const public_6397c2b = __AsmFindLabelExport(&internal_6397c20, 0x6397c2b);
extern "C" void const* const public_6397c36 = __AsmFindLabelExport(&internal_6397c20, 0x6397c36);
extern "C" void const* const public_6397c41 = __AsmFindLabelExport(&internal_6397c20, 0x6397c41);
