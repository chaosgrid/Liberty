#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bbd7c _public_5bbd7c
#define public_5bbd87 _public_5bbd87
#define public_5bbd93 _public_5bbd93
#define public_5bbd9f _public_5bbd9f

PROC_DECLARE(0x5bbd70, internal_5bbd70, public_5bbd70);
/* CHUNK of public_476c40 */
extern "C" NAKED register_t __cdecl internal_5bbd70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1678]
        jmp dword ptr ds : [public_5c6048]
        public_5bbd7c : nop
        lea ecx, ss:[ebp-0x1678]
        jmp public_40edf0
        public_5bbd87 : nop
        mov ecx, dword ptr ss : [ebp-0x16AC]
        jmp dword ptr ds : [public_5c7090]
        public_5bbd93 : nop
        lea ecx, ss:[ebp-0x1678]
        jmp dword ptr ds : [public_5c7090]
        public_5bbd9f : nop
        mov eax, offset public_5f6134
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bbd70)
        ASM_EXPORT_ENTRY_FIRST(0x5bbd7c, public_5bbd7c)
        ASM_EXPORT_ENTRY(0x5bbd87, public_5bbd87)
        ASM_EXPORT_ENTRY(0x5bbd93, public_5bbd93)
        ASM_EXPORT_ENTRY_LAST(0x5bbd9f, public_5bbd9f)
    }
}

#undef public_5bbd7c
#undef public_5bbd87
#undef public_5bbd93
#undef public_5bbd9f

#pragma init_seg(compiler)
extern "C" void const* const public_5bbd7c = __AsmFindLabelExport(&internal_5bbd70, 0x5bbd7c);
extern "C" void const* const public_5bbd87 = __AsmFindLabelExport(&internal_5bbd70, 0x5bbd87);
extern "C" void const* const public_5bbd93 = __AsmFindLabelExport(&internal_5bbd70, 0x5bbd93);
extern "C" void const* const public_5bbd9f = __AsmFindLabelExport(&internal_5bbd70, 0x5bbd9f);
