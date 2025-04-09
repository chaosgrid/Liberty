#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcf4c _public_5bcf4c
#define public_5bcf57 _public_5bcf57
#define public_5bcf63 _public_5bcf63
#define public_5bcf6f _public_5bcf6f

PROC_DECLARE(0x5bcf40, internal_5bcf40, public_5bcf40);
/* CHUNK of public_4afe30 */
extern "C" NAKED register_t __cdecl internal_5bcf40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5bcf4c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5bcf57 : nop
        mov ecx, dword ptr ss : [ebp-0x160C]
        jmp dword ptr ds : [public_5c7090]
        public_5bcf63 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5bcf6f : nop
        mov eax, offset public_5f71f4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcf40)
        ASM_EXPORT_ENTRY_FIRST(0x5bcf4c, public_5bcf4c)
        ASM_EXPORT_ENTRY(0x5bcf57, public_5bcf57)
        ASM_EXPORT_ENTRY(0x5bcf63, public_5bcf63)
        ASM_EXPORT_ENTRY_LAST(0x5bcf6f, public_5bcf6f)
    }
}

#undef public_5bcf4c
#undef public_5bcf57
#undef public_5bcf63
#undef public_5bcf6f

#pragma init_seg(compiler)
extern "C" void const* const public_5bcf4c = __AsmFindLabelExport(&internal_5bcf40, 0x5bcf4c);
extern "C" void const* const public_5bcf57 = __AsmFindLabelExport(&internal_5bcf40, 0x5bcf57);
extern "C" void const* const public_5bcf63 = __AsmFindLabelExport(&internal_5bcf40, 0x5bcf63);
extern "C" void const* const public_5bcf6f = __AsmFindLabelExport(&internal_5bcf40, 0x5bcf6f);
