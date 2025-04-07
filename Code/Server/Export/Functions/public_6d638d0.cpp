#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfb030);
CLANG_FORWARD_PROC_SYMBOL(public_6d48c20);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d638db _public_6d638db
#define public_6d638e7 _public_6d638e7
#define public_6d638f2 _public_6d638f2
#define public_6d638fe _public_6d638fe
#define public_6d63909 _public_6d63909
#define public_6d63915 _public_6d63915

PROC_DECLARE(0x6d638d0, internal_6d638d0, public_6d638d0);
/* CHUNK of public_6d52fe0 */
extern "C" NAKED register_t __cdecl internal_6d638d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1D90]
        jmp public_6d48c20
        public_6d638db : nop
        lea ecx, ss:[ebp-0x1D74]
        jmp dword ptr ds : [public_6d644e0]
        public_6d638e7 : nop
        lea ecx, ss:[ebp-0x1D74]
        jmp public_6cfb030
        public_6d638f2 : nop
        lea ecx, ss:[ebp-0x1D74]
        jmp dword ptr ds : [public_6d64b94]
        public_6d638fe : nop
        lea ecx, ss:[ebp-0x1D74]
        jmp public_6cfb030
        public_6d63909 : nop
        lea ecx, ss:[ebp-0x1D74]
        jmp dword ptr ds : [public_6d64b94]
        public_6d63915 : nop
        mov eax, offset public_6d75b18
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d638d0)
        ASM_EXPORT_ENTRY_FIRST(0x6d638db, public_6d638db)
        ASM_EXPORT_ENTRY(0x6d638e7, public_6d638e7)
        ASM_EXPORT_ENTRY(0x6d638f2, public_6d638f2)
        ASM_EXPORT_ENTRY(0x6d638fe, public_6d638fe)
        ASM_EXPORT_ENTRY(0x6d63909, public_6d63909)
        ASM_EXPORT_ENTRY_LAST(0x6d63915, public_6d63915)
    }
}

#undef public_6d638db
#undef public_6d638e7
#undef public_6d638f2
#undef public_6d638fe
#undef public_6d63909
#undef public_6d63915

#pragma init_seg(compiler)
extern "C" void const* const public_6d638db = __AsmFindLabelExport(&internal_6d638d0, 0x6d638db);
extern "C" void const* const public_6d638e7 = __AsmFindLabelExport(&internal_6d638d0, 0x6d638e7);
extern "C" void const* const public_6d638f2 = __AsmFindLabelExport(&internal_6d638d0, 0x6d638f2);
extern "C" void const* const public_6d638fe = __AsmFindLabelExport(&internal_6d638d0, 0x6d638fe);
extern "C" void const* const public_6d63909 = __AsmFindLabelExport(&internal_6d638d0, 0x6d63909);
extern "C" void const* const public_6d63915 = __AsmFindLabelExport(&internal_6d638d0, 0x6d63915);
