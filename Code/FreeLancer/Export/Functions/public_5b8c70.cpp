#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_42b830);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8c7c _public_5b8c7c
#define public_5b8c87 _public_5b8c87
#define public_5b8c92 _public_5b8c92
#define public_5b8c9e _public_5b8c9e
#define public_5b8caa _public_5b8caa

PROC_DECLARE(0x5b8c70, internal_5b8c70, public_5b8c70);
/* CHUNK of public_42b030 */
extern "C" NAKED register_t __cdecl internal_5b8c70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5b8c7c : nop
        lea ecx, ss:[ebp-0x15A0]
        jmp public_42b830
        public_5b8c87 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5b8c92 : nop
        mov ecx, dword ptr ss : [ebp-0x15A8]
        jmp dword ptr ds : [public_5c7090]
        public_5b8c9e : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5b8caa : nop
        mov eax, offset public_5f2b50
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8c70)
        ASM_EXPORT_ENTRY_FIRST(0x5b8c7c, public_5b8c7c)
        ASM_EXPORT_ENTRY(0x5b8c87, public_5b8c87)
        ASM_EXPORT_ENTRY(0x5b8c92, public_5b8c92)
        ASM_EXPORT_ENTRY(0x5b8c9e, public_5b8c9e)
        ASM_EXPORT_ENTRY_LAST(0x5b8caa, public_5b8caa)
    }
}

#undef public_5b8c7c
#undef public_5b8c87
#undef public_5b8c92
#undef public_5b8c9e
#undef public_5b8caa

#pragma init_seg(compiler)
extern "C" void const* const public_5b8c7c = __AsmFindLabelExport(&internal_5b8c70, 0x5b8c7c);
extern "C" void const* const public_5b8c87 = __AsmFindLabelExport(&internal_5b8c70, 0x5b8c87);
extern "C" void const* const public_5b8c92 = __AsmFindLabelExport(&internal_5b8c70, 0x5b8c92);
extern "C" void const* const public_5b8c9e = __AsmFindLabelExport(&internal_5b8c70, 0x5b8c9e);
extern "C" void const* const public_5b8caa = __AsmFindLabelExport(&internal_5b8c70, 0x5b8caa);
