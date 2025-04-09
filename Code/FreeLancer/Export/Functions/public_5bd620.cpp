#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd62e _public_5bd62e
#define public_5bd63c _public_5bd63c
#define public_5bd64a _public_5bd64a
#define public_5bd658 _public_5bd658

PROC_DECLARE(0x5bd620, internal_5bd620, public_5bd620);
/* CHUNK of public_4c04f0 */
extern "C" NAKED register_t __cdecl internal_5bd620()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x88]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd62e : nop
        mov eax, dword ptr ss : [ebp-0x88]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd63c : nop
        mov eax, dword ptr ss : [ebp-0x88]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd64a : nop
        mov eax, dword ptr ss : [ebp-0x88]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd658 : nop
        mov eax, offset public_5f79d4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd620)
        ASM_EXPORT_ENTRY_FIRST(0x5bd62e, public_5bd62e)
        ASM_EXPORT_ENTRY(0x5bd63c, public_5bd63c)
        ASM_EXPORT_ENTRY(0x5bd64a, public_5bd64a)
        ASM_EXPORT_ENTRY_LAST(0x5bd658, public_5bd658)
    }
}

#undef public_5bd62e
#undef public_5bd63c
#undef public_5bd64a
#undef public_5bd658

#pragma init_seg(compiler)
extern "C" void const* const public_5bd62e = __AsmFindLabelExport(&internal_5bd620, 0x5bd62e);
extern "C" void const* const public_5bd63c = __AsmFindLabelExport(&internal_5bd620, 0x5bd63c);
extern "C" void const* const public_5bd64a = __AsmFindLabelExport(&internal_5bd620, 0x5bd64a);
extern "C" void const* const public_5bd658 = __AsmFindLabelExport(&internal_5bd620, 0x5bd658);
