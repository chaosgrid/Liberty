#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd73c _public_5bd73c

PROC_DECLARE(0x5bd730, internal_5bd730, public_5bd730);
/* CHUNK of public_4c6140 */
extern "C" NAKED register_t __cdecl internal_5bd730()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C
        jmp dword ptr ds : [public_5c60fc]
        public_5bd73c : nop
        mov eax, offset public_5f7b58
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd730)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd73c, public_5bd73c)
    }
}

#undef public_5bd73c

#pragma init_seg(compiler)
extern "C" void const* const public_5bd73c = __AsmFindLabelExport(&internal_5bd730, 0x5bd73c);
