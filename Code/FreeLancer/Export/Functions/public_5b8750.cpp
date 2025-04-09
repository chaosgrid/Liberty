#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8761 _public_5b8761
#define public_5b876c _public_5b876c

PROC_DECLARE(0x5b8750, internal_5b8750, public_5b8750);
/* CHUNK of public_40dfa0 */
extern "C" NAKED register_t __cdecl internal_5b8750()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5b8761 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_4de730
        public_5b876c : nop
        mov eax, offset public_5f2570
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8750)
        ASM_EXPORT_ENTRY_FIRST(0x5b8761, public_5b8761)
        ASM_EXPORT_ENTRY_LAST(0x5b876c, public_5b876c)
    }
}

#undef public_5b8761
#undef public_5b876c

#pragma init_seg(compiler)
extern "C" void const* const public_5b8761 = __AsmFindLabelExport(&internal_5b8750, 0x5b8761);
extern "C" void const* const public_5b876c = __AsmFindLabelExport(&internal_5b8750, 0x5b876c);
