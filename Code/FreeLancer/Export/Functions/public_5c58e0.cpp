#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5af900);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c58ec _public_5c58ec
#define public_5c58f7 _public_5c58f7
#define public_5c5902 _public_5c5902

PROC_DECLARE(0x5c58e0, internal_5c58e0, public_5c58e0);
/* CHUNK of public_5af7f0 */
extern "C" NAKED register_t __cdecl internal_5c58e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp dword ptr ds : [public_5c7090]
        public_5c58ec : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp public_5af900
        public_5c58f7 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_5af900
        public_5c5902 : nop
        mov eax, offset public_5ff6c0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c58e0)
        ASM_EXPORT_ENTRY_FIRST(0x5c58ec, public_5c58ec)
        ASM_EXPORT_ENTRY(0x5c58f7, public_5c58f7)
        ASM_EXPORT_ENTRY_LAST(0x5c5902, public_5c5902)
    }
}

#undef public_5c58ec
#undef public_5c58f7
#undef public_5c5902

#pragma init_seg(compiler)
extern "C" void const* const public_5c58ec = __AsmFindLabelExport(&internal_5c58e0, 0x5c58ec);
extern "C" void const* const public_5c58f7 = __AsmFindLabelExport(&internal_5c58e0, 0x5c58f7);
extern "C" void const* const public_5c5902 = __AsmFindLabelExport(&internal_5c58e0, 0x5c5902);
