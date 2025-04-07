#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63679 _public_6d63679
#define public_6d6368a _public_6d6368a

PROC_DECLARE(0x6d63670, internal_6d63670, public_6d63670);
/* CHUNK of public_6d505a0 */
extern "C" NAKED register_t __cdecl internal_6d63670()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6d64694]
        public_6d63679 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        push eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d6368a : nop
        mov eax, offset public_6d758e4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63670)
        ASM_EXPORT_ENTRY_FIRST(0x6d63679, public_6d63679)
        ASM_EXPORT_ENTRY_LAST(0x6d6368a, public_6d6368a)
    }
}

#undef public_6d63679
#undef public_6d6368a

#pragma init_seg(compiler)
extern "C" void const* const public_6d63679 = __AsmFindLabelExport(&internal_6d63670, 0x6d63679);
extern "C" void const* const public_6d6368a = __AsmFindLabelExport(&internal_6d63670, 0x6d6368a);
