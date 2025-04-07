#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfb030);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62d4c _public_6d62d4c
#define public_6d62d57 _public_6d62d57
#define public_6d62d63 _public_6d62d63
#define public_6d62d6f _public_6d62d6f

PROC_DECLARE(0x6d62d40, internal_6d62d40, public_6d62d40);
/* CHUNK of public_6d43840 */
extern "C" NAKED register_t __cdecl internal_6d62d40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6d644e0]
        public_6d62d4c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6cfb030
        public_6d62d57 : nop
        mov ecx, dword ptr ss : [ebp-0x17AC]
        jmp dword ptr ds : [public_6d64b94]
        public_6d62d63 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6d64b94]
        public_6d62d6f : nop
        mov eax, offset public_6d75170
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62d40)
        ASM_EXPORT_ENTRY_FIRST(0x6d62d4c, public_6d62d4c)
        ASM_EXPORT_ENTRY(0x6d62d57, public_6d62d57)
        ASM_EXPORT_ENTRY(0x6d62d63, public_6d62d63)
        ASM_EXPORT_ENTRY_LAST(0x6d62d6f, public_6d62d6f)
    }
}

#undef public_6d62d4c
#undef public_6d62d57
#undef public_6d62d63
#undef public_6d62d6f

#pragma init_seg(compiler)
extern "C" void const* const public_6d62d4c = __AsmFindLabelExport(&internal_6d62d40, 0x6d62d4c);
extern "C" void const* const public_6d62d57 = __AsmFindLabelExport(&internal_6d62d40, 0x6d62d57);
extern "C" void const* const public_6d62d63 = __AsmFindLabelExport(&internal_6d62d40, 0x6d62d63);
extern "C" void const* const public_6d62d6f = __AsmFindLabelExport(&internal_6d62d40, 0x6d62d6f);
