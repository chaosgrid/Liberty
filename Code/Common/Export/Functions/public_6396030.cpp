#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639603e _public_639603e
#define public_639604c _public_639604c

PROC_DECLARE(0x6396030, internal_6396030, public_6396030);
/* CHUNK of public_63063a0 */
extern "C" NAKED register_t __cdecl internal_6396030()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x514]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639603e : nop
        mov eax, dword ptr ss : [ebp-0x514]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639604c : nop
        mov eax, offset public_63afe1c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396030)
        ASM_EXPORT_ENTRY_FIRST(0x639603e, public_639603e)
        ASM_EXPORT_ENTRY_LAST(0x639604c, public_639604c)
    }
}

#undef public_639603e
#undef public_639604c

#pragma init_seg(compiler)
extern "C" void const* const public_639603e = __AsmFindLabelExport(&internal_6396030, 0x639603e);
extern "C" void const* const public_639604c = __AsmFindLabelExport(&internal_6396030, 0x639604c);
