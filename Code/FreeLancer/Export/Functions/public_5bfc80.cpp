#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfc8c _public_5bfc8c
#define public_5bfc97 _public_5bfc97
#define public_5bfca3 _public_5bfca3
#define public_5bfcaf _public_5bfcaf

PROC_DECLARE(0x5bfc80, internal_5bfc80, public_5bfc80);
/* CHUNK of public_50d420 */
extern "C" NAKED register_t __cdecl internal_5bfc80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5bfc8c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5bfc97 : nop
        mov ecx, dword ptr ss : [ebp-0x15A0]
        jmp dword ptr ds : [public_5c7090]
        public_5bfca3 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5bfcaf : nop
        mov eax, offset public_5f9bc8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfc80)
        ASM_EXPORT_ENTRY_FIRST(0x5bfc8c, public_5bfc8c)
        ASM_EXPORT_ENTRY(0x5bfc97, public_5bfc97)
        ASM_EXPORT_ENTRY(0x5bfca3, public_5bfca3)
        ASM_EXPORT_ENTRY_LAST(0x5bfcaf, public_5bfcaf)
    }
}

#undef public_5bfc8c
#undef public_5bfc97
#undef public_5bfca3
#undef public_5bfcaf

#pragma init_seg(compiler)
extern "C" void const* const public_5bfc8c = __AsmFindLabelExport(&internal_5bfc80, 0x5bfc8c);
extern "C" void const* const public_5bfc97 = __AsmFindLabelExport(&internal_5bfc80, 0x5bfc97);
extern "C" void const* const public_5bfca3 = __AsmFindLabelExport(&internal_5bfc80, 0x5bfca3);
extern "C" void const* const public_5bfcaf = __AsmFindLabelExport(&internal_5bfc80, 0x5bfcaf);
