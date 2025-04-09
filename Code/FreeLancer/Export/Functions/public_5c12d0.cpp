#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53b870);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c12de _public_5c12de
#define public_5c12e7 _public_5c12e7
#define public_5c12f2 _public_5c12f2
#define public_5c12fb _public_5c12fb
#define public_5c1304 _public_5c1304

PROC_DECLARE(0x5c12d0, internal_5c12d0, public_5c12d0);
/* CHUNK of public_54b520 */
extern "C" NAKED register_t __cdecl internal_5c12d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x124]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c12de : nop
        lea ecx, ss:[ebp-0x78]
        jmp dword ptr ds : [public_5c658c]
        public_5c12e7 : nop
        lea ecx, ss:[ebp-0x114]
        jmp public_53b870
        public_5c12f2 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c658c]
        public_5c12fb : nop
        lea ecx, ss:[ebp-0x78]
        jmp dword ptr ds : [public_5c658c]
        public_5c1304 : nop
        mov eax, offset public_5fb630
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c12d0)
        ASM_EXPORT_ENTRY_FIRST(0x5c12de, public_5c12de)
        ASM_EXPORT_ENTRY(0x5c12e7, public_5c12e7)
        ASM_EXPORT_ENTRY(0x5c12f2, public_5c12f2)
        ASM_EXPORT_ENTRY(0x5c12fb, public_5c12fb)
        ASM_EXPORT_ENTRY_LAST(0x5c1304, public_5c1304)
    }
}

#undef public_5c12de
#undef public_5c12e7
#undef public_5c12f2
#undef public_5c12fb
#undef public_5c1304

#pragma init_seg(compiler)
extern "C" void const* const public_5c12de = __AsmFindLabelExport(&internal_5c12d0, 0x5c12de);
extern "C" void const* const public_5c12e7 = __AsmFindLabelExport(&internal_5c12d0, 0x5c12e7);
extern "C" void const* const public_5c12f2 = __AsmFindLabelExport(&internal_5c12d0, 0x5c12f2);
extern "C" void const* const public_5c12fb = __AsmFindLabelExport(&internal_5c12d0, 0x5c12fb);
extern "C" void const* const public_5c1304 = __AsmFindLabelExport(&internal_5c12d0, 0x5c1304);
