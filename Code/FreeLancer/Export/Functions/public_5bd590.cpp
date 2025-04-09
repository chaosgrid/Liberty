#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd59b _public_5bd59b
#define public_5bd5a7 _public_5bd5a7

PROC_DECLARE(0x5bd590, internal_5bd590, public_5bd590);
/* CHUNK of public_4bf540 */
extern "C" NAKED register_t __cdecl internal_5bd590()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x10
        jmp public_4de730
        public_5bd59b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x20
        jmp dword ptr ds : [public_5c60fc]
        public_5bd5a7 : nop
        mov eax, offset public_5f7948
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd590)
        ASM_EXPORT_ENTRY_FIRST(0x5bd59b, public_5bd59b)
        ASM_EXPORT_ENTRY_LAST(0x5bd5a7, public_5bd5a7)
    }
}

#undef public_5bd59b
#undef public_5bd5a7

#pragma init_seg(compiler)
extern "C" void const* const public_5bd59b = __AsmFindLabelExport(&internal_5bd590, 0x5bd59b);
extern "C" void const* const public_5bd5a7 = __AsmFindLabelExport(&internal_5bd590, 0x5bd5a7);
