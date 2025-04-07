#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6aa28 _public_6b6aa28

PROC_DECLARE(0x6b6aa20, internal_6b6aa20, public_6b6aa20);
/* CHUNK of public_6b4ade0 */
extern "C" NAKED register_t __cdecl internal_6b6aa20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6b4e730
        public_6b6aa28 : nop
        mov eax, offset public_6b6f0b8
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6aa20)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6aa28, public_6b6aa28)
    }
}

#undef public_6b6aa28

#pragma init_seg(compiler)
extern "C" void const* const public_6b6aa28 = __AsmFindLabelExport(&internal_6b6aa20, 0x6b6aa28);
