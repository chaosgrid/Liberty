#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d55b70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63a28 _public_6d63a28
#define public_6d63a33 _public_6d63a33
#define public_6d63a3c _public_6d63a3c

PROC_DECLARE(0x6d63a20, internal_6d63a20, public_6d63a20);
/* CHUNK of public_6d55960 */
extern "C" NAKED register_t __cdecl internal_6d63a20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x4C]
        jmp public_6d55b70
        public_6d63a28 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d63a33 : nop
        lea ecx, ss:[ebp-0x40]
        jmp dword ptr ds : [public_6d64694]
        public_6d63a3c : nop
        mov eax, offset public_6d75c54
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63a20)
        ASM_EXPORT_ENTRY_FIRST(0x6d63a28, public_6d63a28)
        ASM_EXPORT_ENTRY(0x6d63a33, public_6d63a33)
        ASM_EXPORT_ENTRY_LAST(0x6d63a3c, public_6d63a3c)
    }
}

#undef public_6d63a28
#undef public_6d63a33
#undef public_6d63a3c

#pragma init_seg(compiler)
extern "C" void const* const public_6d63a28 = __AsmFindLabelExport(&internal_6d63a20, 0x6d63a28);
extern "C" void const* const public_6d63a33 = __AsmFindLabelExport(&internal_6d63a20, 0x6d63a33);
extern "C" void const* const public_6d63a3c = __AsmFindLabelExport(&internal_6d63a20, 0x6d63a3c);
