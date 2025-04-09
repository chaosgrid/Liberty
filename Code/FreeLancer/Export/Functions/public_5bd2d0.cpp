#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd2d9 _public_5bd2d9
#define public_5bd2e2 _public_5bd2e2
#define public_5bd2ea _public_5bd2ea
#define public_5bd2f3 _public_5bd2f3
#define public_5bd2fc _public_5bd2fc
#define public_5bd304 _public_5bd304
#define public_5bd30d _public_5bd30d
#define public_5bd316 _public_5bd316
#define public_5bd31e _public_5bd31e
#define public_5bd32f _public_5bd32f

PROC_DECLARE(0x5bd2d0, internal_5bd2d0, public_5bd2d0);
/* CHUNK of public_4b8a00 */
extern "C" NAKED register_t __cdecl internal_5bd2d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_5c62c4]
        public_5bd2d9 : nop
        lea ecx, ss:[ebp-0x44]
        jmp dword ptr ds : [public_5c62b4]
        public_5bd2e2 : nop
        lea ecx, ss:[ebp+4]
        jmp public_45eeb0
        public_5bd2ea : nop
        lea ecx, ss:[ebp-0x30]
        jmp dword ptr ds : [public_5c62c4]
        public_5bd2f3 : nop
        lea ecx, ss:[ebp-0x44]
        jmp dword ptr ds : [public_5c62b4]
        public_5bd2fc : nop
        lea ecx, ss:[ebp+4]
        jmp public_45eeb0
        public_5bd304 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp dword ptr ds : [public_5c62c4]
        public_5bd30d : nop
        lea ecx, ss:[ebp-0x44]
        jmp dword ptr ds : [public_5c62b4]
        public_5bd316 : nop
        lea ecx, ss:[ebp+4]
        jmp public_45eeb0
        public_5bd31e : nop
        mov eax, dword ptr ss : [ebp-0x48]
        push eax
        mov ecx, dword ptr ss : [ebp-0x50]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5bd32f : nop
        mov eax, offset public_5f75f8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd2d0)
        ASM_EXPORT_ENTRY_FIRST(0x5bd2d9, public_5bd2d9)
        ASM_EXPORT_ENTRY(0x5bd2e2, public_5bd2e2)
        ASM_EXPORT_ENTRY(0x5bd2ea, public_5bd2ea)
        ASM_EXPORT_ENTRY(0x5bd2f3, public_5bd2f3)
        ASM_EXPORT_ENTRY(0x5bd2fc, public_5bd2fc)
        ASM_EXPORT_ENTRY(0x5bd304, public_5bd304)
        ASM_EXPORT_ENTRY(0x5bd30d, public_5bd30d)
        ASM_EXPORT_ENTRY(0x5bd316, public_5bd316)
        ASM_EXPORT_ENTRY(0x5bd31e, public_5bd31e)
        ASM_EXPORT_ENTRY_LAST(0x5bd32f, public_5bd32f)
    }
}

#undef public_5bd2d9
#undef public_5bd2e2
#undef public_5bd2ea
#undef public_5bd2f3
#undef public_5bd2fc
#undef public_5bd304
#undef public_5bd30d
#undef public_5bd316
#undef public_5bd31e
#undef public_5bd32f

#pragma init_seg(compiler)
extern "C" void const* const public_5bd2d9 = __AsmFindLabelExport(&internal_5bd2d0, 0x5bd2d9);
extern "C" void const* const public_5bd2e2 = __AsmFindLabelExport(&internal_5bd2d0, 0x5bd2e2);
extern "C" void const* const public_5bd2ea = __AsmFindLabelExport(&internal_5bd2d0, 0x5bd2ea);
extern "C" void const* const public_5bd2f3 = __AsmFindLabelExport(&internal_5bd2d0, 0x5bd2f3);
extern "C" void const* const public_5bd2fc = __AsmFindLabelExport(&internal_5bd2d0, 0x5bd2fc);
extern "C" void const* const public_5bd304 = __AsmFindLabelExport(&internal_5bd2d0, 0x5bd304);
extern "C" void const* const public_5bd30d = __AsmFindLabelExport(&internal_5bd2d0, 0x5bd30d);
extern "C" void const* const public_5bd316 = __AsmFindLabelExport(&internal_5bd2d0, 0x5bd316);
extern "C" void const* const public_5bd31e = __AsmFindLabelExport(&internal_5bd2d0, 0x5bd31e);
extern "C" void const* const public_5bd32f = __AsmFindLabelExport(&internal_5bd2d0, 0x5bd32f);
