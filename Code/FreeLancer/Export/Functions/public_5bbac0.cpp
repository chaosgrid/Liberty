#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bbac9 _public_5bbac9
#define public_5bbad1 _public_5bbad1
#define public_5bbada _public_5bbada
#define public_5bbae2 _public_5bbae2
#define public_5bbaeb _public_5bbaeb
#define public_5bbaf3 _public_5bbaf3

PROC_DECLARE(0x5bbac0, internal_5bbac0, public_5bbac0);
/* CHUNK of public_472ab0 */
extern "C" NAKED register_t __cdecl internal_5bbac0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp dword ptr ds : [public_5c62b4]
        public_5bbac9 : nop
        lea ecx, ss:[ebp+4]
        jmp public_45eeb0
        public_5bbad1 : nop
        lea ecx, ss:[ebp-0x48]
        jmp dword ptr ds : [public_5c62bc]
        public_5bbada : nop
        lea ecx, ss:[ebp+4]
        jmp public_45eeb0
        public_5bbae2 : nop
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c62f4]
        public_5bbaeb : nop
        lea ecx, ss:[ebp+4]
        jmp public_45eeb0
        public_5bbaf3 : nop
        mov eax, offset public_5f5e18
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bbac0)
        ASM_EXPORT_ENTRY_FIRST(0x5bbac9, public_5bbac9)
        ASM_EXPORT_ENTRY(0x5bbad1, public_5bbad1)
        ASM_EXPORT_ENTRY(0x5bbada, public_5bbada)
        ASM_EXPORT_ENTRY(0x5bbae2, public_5bbae2)
        ASM_EXPORT_ENTRY(0x5bbaeb, public_5bbaeb)
        ASM_EXPORT_ENTRY_LAST(0x5bbaf3, public_5bbaf3)
    }
}

#undef public_5bbac9
#undef public_5bbad1
#undef public_5bbada
#undef public_5bbae2
#undef public_5bbaeb
#undef public_5bbaf3

#pragma init_seg(compiler)
extern "C" void const* const public_5bbac9 = __AsmFindLabelExport(&internal_5bbac0, 0x5bbac9);
extern "C" void const* const public_5bbad1 = __AsmFindLabelExport(&internal_5bbac0, 0x5bbad1);
extern "C" void const* const public_5bbada = __AsmFindLabelExport(&internal_5bbac0, 0x5bbada);
extern "C" void const* const public_5bbae2 = __AsmFindLabelExport(&internal_5bbac0, 0x5bbae2);
extern "C" void const* const public_5bbaeb = __AsmFindLabelExport(&internal_5bbac0, 0x5bbaeb);
extern "C" void const* const public_5bbaf3 = __AsmFindLabelExport(&internal_5bbac0, 0x5bbaf3);
