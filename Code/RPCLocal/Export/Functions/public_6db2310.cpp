#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85230);
CLANG_FORWARD_PROC_SYMBOL(public_6d852e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d85340);
CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db2318 _public_6db2318
#define public_6db2320 _public_6db2320
#define public_6db232b _public_6db232b
#define public_6db233a _public_6db233a
#define public_6db2349 _public_6db2349
#define public_6db2358 _public_6db2358
#define public_6db2367 _public_6db2367
#define public_6db2376 _public_6db2376
#define public_6db2385 _public_6db2385
#define public_6db2393 _public_6db2393
#define public_6db23a2 _public_6db23a2
#define public_6db23aa _public_6db23aa

PROC_DECLARE(0x6db2310, internal_6db2310, public_6db2310);
/* CHUNK of public_6d84490 */
extern "C" NAKED register_t __cdecl internal_6db2310()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x44]
        jmp public_6d85340
        public_6db2318 : nop
        lea ecx, ss:[ebp-0x50]
        jmp public_6d85230
        public_6db2320 : nop
        mov eax, dword ptr ss : [ebp-0x60]
        push eax
        call public_6db1dc2
        pop ecx
        ret 
        public_6db232b : nop
        mov ecx, dword ptr ss : [ebp-0x60]
        add ecx, 0x204
        jmp dword ptr ds : [public_6db3198]
        public_6db233a : nop
        mov ecx, dword ptr ss : [ebp-0x60]
        add ecx, 0x214
        jmp dword ptr ds : [public_6db3198]
        public_6db2349 : nop
        mov ecx, dword ptr ss : [ebp-0x60]
        add ecx, 0x248
        jmp dword ptr ds : [public_6db30a4]
        public_6db2358 : nop
        mov ecx, dword ptr ss : [ebp-0x60]
        add ecx, 0x254
        jmp dword ptr ds : [public_6db3018]
        public_6db2367 : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        add ecx, 0x204
        jmp dword ptr ds : [public_6db3198]
        public_6db2376 : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        add ecx, 0x214
        jmp dword ptr ds : [public_6db3198]
        public_6db2385 : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        add ecx, 0x264
        jmp public_6d91340
        public_6db2393 : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        add ecx, 0x268
        jmp dword ptr ds : [public_6db3018]
        public_6db23a2 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_6d852e0
        public_6db23aa : nop
        mov eax, offset public_6db6a84
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db2310)
        ASM_EXPORT_ENTRY_FIRST(0x6db2318, public_6db2318)
        ASM_EXPORT_ENTRY(0x6db2320, public_6db2320)
        ASM_EXPORT_ENTRY(0x6db232b, public_6db232b)
        ASM_EXPORT_ENTRY(0x6db233a, public_6db233a)
        ASM_EXPORT_ENTRY(0x6db2349, public_6db2349)
        ASM_EXPORT_ENTRY(0x6db2358, public_6db2358)
        ASM_EXPORT_ENTRY(0x6db2367, public_6db2367)
        ASM_EXPORT_ENTRY(0x6db2376, public_6db2376)
        ASM_EXPORT_ENTRY(0x6db2385, public_6db2385)
        ASM_EXPORT_ENTRY(0x6db2393, public_6db2393)
        ASM_EXPORT_ENTRY(0x6db23a2, public_6db23a2)
        ASM_EXPORT_ENTRY_LAST(0x6db23aa, public_6db23aa)
    }
}

#undef public_6db2318
#undef public_6db2320
#undef public_6db232b
#undef public_6db233a
#undef public_6db2349
#undef public_6db2358
#undef public_6db2367
#undef public_6db2376
#undef public_6db2385
#undef public_6db2393
#undef public_6db23a2
#undef public_6db23aa

#pragma init_seg(compiler)
extern "C" void const* const public_6db2318 = __AsmFindLabelExport(&internal_6db2310, 0x6db2318);
extern "C" void const* const public_6db2320 = __AsmFindLabelExport(&internal_6db2310, 0x6db2320);
extern "C" void const* const public_6db232b = __AsmFindLabelExport(&internal_6db2310, 0x6db232b);
extern "C" void const* const public_6db233a = __AsmFindLabelExport(&internal_6db2310, 0x6db233a);
extern "C" void const* const public_6db2349 = __AsmFindLabelExport(&internal_6db2310, 0x6db2349);
extern "C" void const* const public_6db2358 = __AsmFindLabelExport(&internal_6db2310, 0x6db2358);
extern "C" void const* const public_6db2367 = __AsmFindLabelExport(&internal_6db2310, 0x6db2367);
extern "C" void const* const public_6db2376 = __AsmFindLabelExport(&internal_6db2310, 0x6db2376);
extern "C" void const* const public_6db2385 = __AsmFindLabelExport(&internal_6db2310, 0x6db2385);
extern "C" void const* const public_6db2393 = __AsmFindLabelExport(&internal_6db2310, 0x6db2393);
extern "C" void const* const public_6db23a2 = __AsmFindLabelExport(&internal_6db2310, 0x6db23a2);
extern "C" void const* const public_6db23aa = __AsmFindLabelExport(&internal_6db2310, 0x6db23aa);
