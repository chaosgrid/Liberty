#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfc4c _public_5bfc4c
#define public_5bfc57 _public_5bfc57
#define public_5bfc63 _public_5bfc63
#define public_5bfc6f _public_5bfc6f

PROC_DECLARE(0x5bfc40, internal_5bfc40, public_5bfc40);
/* CHUNK of public_50c950 */
extern "C" NAKED register_t __cdecl internal_5bfc40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5bfc4c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5bfc57 : nop
        mov ecx, dword ptr ss : [ebp-0x159C]
        jmp dword ptr ds : [public_5c7090]
        public_5bfc63 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5bfc6f : nop
        mov eax, offset public_5f9b8c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfc40)
        ASM_EXPORT_ENTRY_FIRST(0x5bfc4c, public_5bfc4c)
        ASM_EXPORT_ENTRY(0x5bfc57, public_5bfc57)
        ASM_EXPORT_ENTRY(0x5bfc63, public_5bfc63)
        ASM_EXPORT_ENTRY_LAST(0x5bfc6f, public_5bfc6f)
    }
}

#undef public_5bfc4c
#undef public_5bfc57
#undef public_5bfc63
#undef public_5bfc6f

#pragma init_seg(compiler)
extern "C" void const* const public_5bfc4c = __AsmFindLabelExport(&internal_5bfc40, 0x5bfc4c);
extern "C" void const* const public_5bfc57 = __AsmFindLabelExport(&internal_5bfc40, 0x5bfc57);
extern "C" void const* const public_5bfc63 = __AsmFindLabelExport(&internal_5bfc40, 0x5bfc63);
extern "C" void const* const public_5bfc6f = __AsmFindLabelExport(&internal_5bfc40, 0x5bfc6f);
