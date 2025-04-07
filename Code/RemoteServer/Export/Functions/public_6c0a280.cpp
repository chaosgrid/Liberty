#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a289 _public_6c0a289

PROC_DECLARE(0x6c0a280, internal_6c0a280, public_6c0a280);
/* CHUNK of public_6bd5030 */
extern "C" NAKED register_t __cdecl internal_6c0a280()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6c0b040]
        public_6c0a289 : nop
        mov eax, offset public_6c0e958
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a280)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a289, public_6c0a289)
    }
}

#undef public_6c0a289

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a289 = __AsmFindLabelExport(&internal_6c0a280, 0x6c0a289);
