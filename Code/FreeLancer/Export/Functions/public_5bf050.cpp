#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf058 _public_5bf058
#define public_5bf063 _public_5bf063

PROC_DECLARE(0x5bf050, internal_5bf050, public_5bf050);
/* CHUNK of public_4eee10 */
extern "C" NAKED register_t __cdecl internal_5bf050()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_444e20
        public_5bf058 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_445d70
        public_5bf063 : nop
        mov eax, offset public_5f8fbc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf050)
        ASM_EXPORT_ENTRY_FIRST(0x5bf058, public_5bf058)
        ASM_EXPORT_ENTRY_LAST(0x5bf063, public_5bf063)
    }
}

#undef public_5bf058
#undef public_5bf063

#pragma init_seg(compiler)
extern "C" void const* const public_5bf058 = __AsmFindLabelExport(&internal_5bf050, 0x5bf058);
extern "C" void const* const public_5bf063 = __AsmFindLabelExport(&internal_5bf050, 0x5bf063);
