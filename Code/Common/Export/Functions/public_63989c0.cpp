#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63989cb _public_63989cb
#define public_63989d6 _public_63989d6
#define public_63989e1 _public_63989e1

PROC_DECLARE(0x63989c0, internal_63989c0, public_63989c0);
/* CHUNK of public_637a330 */
extern "C" NAKED register_t __cdecl internal_63989c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63989cb : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63989d6 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63989e1 : nop
        mov eax, offset public_63b3038
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63989c0)
        ASM_EXPORT_ENTRY_FIRST(0x63989cb, public_63989cb)
        ASM_EXPORT_ENTRY(0x63989d6, public_63989d6)
        ASM_EXPORT_ENTRY_LAST(0x63989e1, public_63989e1)
    }
}

#undef public_63989cb
#undef public_63989d6
#undef public_63989e1

#pragma init_seg(compiler)
extern "C" void const* const public_63989cb = __AsmFindLabelExport(&internal_63989c0, 0x63989cb);
extern "C" void const* const public_63989d6 = __AsmFindLabelExport(&internal_63989c0, 0x63989d6);
extern "C" void const* const public_63989e1 = __AsmFindLabelExport(&internal_63989c0, 0x63989e1);
