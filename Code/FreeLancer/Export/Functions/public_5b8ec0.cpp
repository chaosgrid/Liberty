#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4308d0);
CLANG_FORWARD_PROC_SYMBOL(public_4319d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8ecb _public_5b8ecb
#define public_5b8ed6 _public_5b8ed6
#define public_5b8ee2 _public_5b8ee2

PROC_DECLARE(0x5b8ec0, internal_5b8ec0, public_5b8ec0);
/* CHUNK of public_430990 */
extern "C" NAKED register_t __cdecl internal_5b8ec0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xC
        jmp public_4308d0
        public_5b8ecb : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x20
        jmp public_4319d0
        public_5b8ed6 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x2C
        jmp dword ptr ds : [public_5c7090]
        public_5b8ee2 : nop
        mov eax, offset public_5f2dbc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8ec0)
        ASM_EXPORT_ENTRY_FIRST(0x5b8ecb, public_5b8ecb)
        ASM_EXPORT_ENTRY(0x5b8ed6, public_5b8ed6)
        ASM_EXPORT_ENTRY_LAST(0x5b8ee2, public_5b8ee2)
    }
}

#undef public_5b8ecb
#undef public_5b8ed6
#undef public_5b8ee2

#pragma init_seg(compiler)
extern "C" void const* const public_5b8ecb = __AsmFindLabelExport(&internal_5b8ec0, 0x5b8ecb);
extern "C" void const* const public_5b8ed6 = __AsmFindLabelExport(&internal_5b8ec0, 0x5b8ed6);
extern "C" void const* const public_5b8ee2 = __AsmFindLabelExport(&internal_5b8ec0, 0x5b8ee2);
