#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61721 _public_6d61721
#define public_6d6172c _public_6d6172c

PROC_DECLARE(0x6d61710, internal_6d61710, public_6d61710);
/* CHUNK of public_6d0f6d0 */
extern "C" NAKED register_t __cdecl internal_6d61710()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d61721 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6cecb50
        public_6d6172c : nop
        mov eax, offset public_6d72384
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61710)
        ASM_EXPORT_ENTRY_FIRST(0x6d61721, public_6d61721)
        ASM_EXPORT_ENTRY_LAST(0x6d6172c, public_6d6172c)
    }
}

#undef public_6d61721
#undef public_6d6172c

#pragma init_seg(compiler)
extern "C" void const* const public_6d61721 = __AsmFindLabelExport(&internal_6d61710, 0x6d61721);
extern "C" void const* const public_6d6172c = __AsmFindLabelExport(&internal_6d61710, 0x6d6172c);
