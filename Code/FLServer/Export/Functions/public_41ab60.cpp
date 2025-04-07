#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414310);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41ab6c _public_41ab6c
#define public_41ab78 _public_41ab78
#define public_41ab83 _public_41ab83
#define public_41ab8f _public_41ab8f
#define public_41ab9a _public_41ab9a

PROC_DECLARE(0x41ab60, internal_41ab60, public_41ab60);
/* CHUNK of public_418110 */
extern "C" NAKED register_t __cdecl internal_41ab60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x844]
        jmp dword ptr ds : [public_41b09c]
        public_41ab6c : nop
        lea ecx, ss:[ebp-0x828]
        jmp dword ptr ds : [public_41b030]
        public_41ab78 : nop
        lea ecx, ss:[ebp-0x848]
        jmp public_414310
        public_41ab83 : nop
        lea ecx, ss:[ebp-0x820]
        jmp dword ptr ds : [public_41b038]
        public_41ab8f : nop
        lea ecx, ss:[ebp-0x848]
        jmp public_414310
        public_41ab9a : nop
        mov eax, offset public_41fcd0
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41ab60)
        ASM_EXPORT_ENTRY_FIRST(0x41ab6c, public_41ab6c)
        ASM_EXPORT_ENTRY(0x41ab78, public_41ab78)
        ASM_EXPORT_ENTRY(0x41ab83, public_41ab83)
        ASM_EXPORT_ENTRY(0x41ab8f, public_41ab8f)
        ASM_EXPORT_ENTRY_LAST(0x41ab9a, public_41ab9a)
    }
}

#undef public_41ab6c
#undef public_41ab78
#undef public_41ab83
#undef public_41ab8f
#undef public_41ab9a

#pragma init_seg(compiler)
extern "C" void const* const public_41ab6c = __AsmFindLabelExport(&internal_41ab60, 0x41ab6c);
extern "C" void const* const public_41ab78 = __AsmFindLabelExport(&internal_41ab60, 0x41ab78);
extern "C" void const* const public_41ab83 = __AsmFindLabelExport(&internal_41ab60, 0x41ab83);
extern "C" void const* const public_41ab8f = __AsmFindLabelExport(&internal_41ab60, 0x41ab8f);
extern "C" void const* const public_41ab9a = __AsmFindLabelExport(&internal_41ab60, 0x41ab9a);
