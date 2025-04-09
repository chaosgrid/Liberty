#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9649 _public_5b9649
#define public_5b9652 _public_5b9652
#define public_5b965a _public_5b965a
#define public_5b9663 _public_5b9663

PROC_DECLARE(0x5b9640, internal_5b9640, public_5b9640);
/* CHUNK of public_43f060 */
extern "C" NAKED register_t __cdecl internal_5b9640()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c7090]
        public_5b9649 : nop
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c7090]
        public_5b9652 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_4dd9a0
        public_5b965a : nop
        lea ecx, ss:[ebp-0x40]
        jmp dword ptr ds : [public_5c7090]
        public_5b9663 : nop
        mov eax, offset public_5f3610
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9640)
        ASM_EXPORT_ENTRY_FIRST(0x5b9649, public_5b9649)
        ASM_EXPORT_ENTRY(0x5b9652, public_5b9652)
        ASM_EXPORT_ENTRY(0x5b965a, public_5b965a)
        ASM_EXPORT_ENTRY_LAST(0x5b9663, public_5b9663)
    }
}

#undef public_5b9649
#undef public_5b9652
#undef public_5b965a
#undef public_5b9663

#pragma init_seg(compiler)
extern "C" void const* const public_5b9649 = __AsmFindLabelExport(&internal_5b9640, 0x5b9649);
extern "C" void const* const public_5b9652 = __AsmFindLabelExport(&internal_5b9640, 0x5b9652);
extern "C" void const* const public_5b965a = __AsmFindLabelExport(&internal_5b9640, 0x5b965a);
extern "C" void const* const public_5b9663 = __AsmFindLabelExport(&internal_5b9640, 0x5b9663);
