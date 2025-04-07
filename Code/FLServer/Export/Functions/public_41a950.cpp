#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414310);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a95c _public_41a95c
#define public_41a968 _public_41a968
#define public_41a973 _public_41a973
#define public_41a97f _public_41a97f
#define public_41a98a _public_41a98a

PROC_DECLARE(0x41a950, internal_41a950, public_41a950);
/* CHUNK of public_414080 */
extern "C" NAKED register_t __cdecl internal_41a950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x844]
        jmp dword ptr ds : [public_41b09c]
        public_41a95c : nop
        lea ecx, ss:[ebp-0x828]
        jmp dword ptr ds : [public_41b030]
        public_41a968 : nop
        lea ecx, ss:[ebp-0x848]
        jmp public_414310
        public_41a973 : nop
        lea ecx, ss:[ebp-0x820]
        jmp dword ptr ds : [public_41b038]
        public_41a97f : nop
        lea ecx, ss:[ebp-0x848]
        jmp public_414310
        public_41a98a : nop
        mov eax, offset public_41faa0
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a950)
        ASM_EXPORT_ENTRY_FIRST(0x41a95c, public_41a95c)
        ASM_EXPORT_ENTRY(0x41a968, public_41a968)
        ASM_EXPORT_ENTRY(0x41a973, public_41a973)
        ASM_EXPORT_ENTRY(0x41a97f, public_41a97f)
        ASM_EXPORT_ENTRY_LAST(0x41a98a, public_41a98a)
    }
}

#undef public_41a95c
#undef public_41a968
#undef public_41a973
#undef public_41a97f
#undef public_41a98a

#pragma init_seg(compiler)
extern "C" void const* const public_41a95c = __AsmFindLabelExport(&internal_41a950, 0x41a95c);
extern "C" void const* const public_41a968 = __AsmFindLabelExport(&internal_41a950, 0x41a968);
extern "C" void const* const public_41a973 = __AsmFindLabelExport(&internal_41a950, 0x41a973);
extern "C" void const* const public_41a97f = __AsmFindLabelExport(&internal_41a950, 0x41a97f);
extern "C" void const* const public_41a98a = __AsmFindLabelExport(&internal_41a950, 0x41a98a);
