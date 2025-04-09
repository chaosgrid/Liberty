#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3b4c _public_5c3b4c
#define public_5c3b57 _public_5c3b57
#define public_5c3b63 _public_5c3b63
#define public_5c3b6e _public_5c3b6e
#define public_5c3b7a _public_5c3b7a
#define public_5c3b86 _public_5c3b86

PROC_DECLARE(0x5c3b40, internal_5c3b40, public_5c3b40);
/* CHUNK of public_576f40 */
extern "C" NAKED register_t __cdecl internal_5c3b40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5c3b4c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5c3b57 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5c3b63 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5c3b6e : nop
        mov ecx, dword ptr ss : [ebp-0x1684]
        jmp dword ptr ds : [public_5c7090]
        public_5c3b7a : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5c3b86 : nop
        mov eax, offset public_5fd848
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3b40)
        ASM_EXPORT_ENTRY_FIRST(0x5c3b4c, public_5c3b4c)
        ASM_EXPORT_ENTRY(0x5c3b57, public_5c3b57)
        ASM_EXPORT_ENTRY(0x5c3b63, public_5c3b63)
        ASM_EXPORT_ENTRY(0x5c3b6e, public_5c3b6e)
        ASM_EXPORT_ENTRY(0x5c3b7a, public_5c3b7a)
        ASM_EXPORT_ENTRY_LAST(0x5c3b86, public_5c3b86)
    }
}

#undef public_5c3b4c
#undef public_5c3b57
#undef public_5c3b63
#undef public_5c3b6e
#undef public_5c3b7a
#undef public_5c3b86

#pragma init_seg(compiler)
extern "C" void const* const public_5c3b4c = __AsmFindLabelExport(&internal_5c3b40, 0x5c3b4c);
extern "C" void const* const public_5c3b57 = __AsmFindLabelExport(&internal_5c3b40, 0x5c3b57);
extern "C" void const* const public_5c3b63 = __AsmFindLabelExport(&internal_5c3b40, 0x5c3b63);
extern "C" void const* const public_5c3b6e = __AsmFindLabelExport(&internal_5c3b40, 0x5c3b6e);
extern "C" void const* const public_5c3b7a = __AsmFindLabelExport(&internal_5c3b40, 0x5c3b7a);
extern "C" void const* const public_5c3b86 = __AsmFindLabelExport(&internal_5c3b40, 0x5c3b86);
