#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf119 _public_6faf119
#define public_6faf122 _public_6faf122

PROC_DECLARE(0x6faf110, internal_6faf110, public_6faf110);
/* CHUNK of public_6f4caa0 */
extern "C" NAKED register_t __cdecl internal_6faf110()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x34]
        jmp dword ptr ds : [public_6fb32d8]
        public_6faf119 : nop
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6fb3034]
        public_6faf122 : nop
        mov eax, offset public_6fc40e0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf110)
        ASM_EXPORT_ENTRY_FIRST(0x6faf119, public_6faf119)
        ASM_EXPORT_ENTRY_LAST(0x6faf122, public_6faf122)
    }
}

#undef public_6faf119
#undef public_6faf122

#pragma init_seg(compiler)
extern "C" void const* const public_6faf119 = __AsmFindLabelExport(&internal_6faf110, 0x6faf119);
extern "C" void const* const public_6faf122 = __AsmFindLabelExport(&internal_6faf110, 0x6faf122);
