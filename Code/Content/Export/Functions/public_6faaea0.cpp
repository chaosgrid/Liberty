#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecabb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faaea8 _public_6faaea8

PROC_DECLARE(0x6faaea0, internal_6faaea0, public_6faaea0);
/* CHUNK of public_6ec4750 */
extern "C" NAKED register_t __cdecl internal_6faaea0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ecabb0
        public_6faaea8 : nop
        mov eax, offset public_6fbf064
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faaea0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faaea8, public_6faaea8)
    }
}

#undef public_6faaea8

#pragma init_seg(compiler)
extern "C" void const* const public_6faaea8 = __AsmFindLabelExport(&internal_6faaea0, 0x6faaea8);
