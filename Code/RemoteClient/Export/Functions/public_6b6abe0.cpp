#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6abe9 _public_6b6abe9

PROC_DECLARE(0x6b6abe0, internal_6b6abe0, public_6b6abe0);
/* CHUNK of public_6b50040 */
extern "C" NAKED register_t __cdecl internal_6b6abe0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_6b6b18c]
        public_6b6abe9 : nop
        mov eax, offset public_6b6f2a4
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6abe0)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6abe9, public_6b6abe9)
    }
}

#undef public_6b6abe9

#pragma init_seg(compiler)
extern "C" void const* const public_6b6abe9 = __AsmFindLabelExport(&internal_6b6abe0, 0x6b6abe9);
