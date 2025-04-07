#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09900);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a3bb _public_6c0a3bb
#define public_6c0a3c6 _public_6c0a3c6

PROC_DECLARE(0x6c0a3b0, internal_6c0a3b0, public_6c0a3b0);
/* CHUNK of public_6bd9490 */
extern "C" NAKED register_t __cdecl internal_6c0a3b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_6c09900
        public_6c0a3bb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3C
        jmp public_6c09900
        public_6c0a3c6 : nop
        mov eax, offset public_6c0ea88
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a3b0)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a3bb, public_6c0a3bb)
        ASM_EXPORT_ENTRY_LAST(0x6c0a3c6, public_6c0a3c6)
    }
}

#undef public_6c0a3bb
#undef public_6c0a3c6

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a3bb = __AsmFindLabelExport(&internal_6c0a3b0, 0x6c0a3bb);
extern "C" void const* const public_6c0a3c6 = __AsmFindLabelExport(&internal_6c0a3b0, 0x6c0a3c6);
