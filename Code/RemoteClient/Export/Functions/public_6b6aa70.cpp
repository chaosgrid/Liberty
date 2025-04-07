#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6aa78 _public_6b6aa78

PROC_DECLARE(0x6b6aa70, internal_6b6aa70, public_6b6aa70);
/* CHUNK of public_6b4b220 */
extern "C" NAKED register_t __cdecl internal_6b6aa70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6b4e730
        public_6b6aa78 : nop
        mov eax, offset public_6b6f110
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6aa70)
        ASM_EXPORT_ENTRY_SINGLE(0x6b6aa78, public_6b6aa78)
    }
}

#undef public_6b6aa78

#pragma init_seg(compiler)
extern "C" void const* const public_6b6aa78 = __AsmFindLabelExport(&internal_6b6aa70, 0x6b6aa78);
