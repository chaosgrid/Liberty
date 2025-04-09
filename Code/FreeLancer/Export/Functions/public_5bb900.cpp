#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45e3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb908 _public_5bb908
#define public_5bb916 _public_5bb916
#define public_5bb925 _public_5bb925
#define public_5bb934 _public_5bb934
#define public_5bb943 _public_5bb943
#define public_5bb952 _public_5bb952
#define public_5bb95e _public_5bb95e

PROC_DECLARE(0x5bb900, internal_5bb900, public_5bb900);
/* CHUNK of public_46c640 */
extern "C" NAKED register_t __cdecl internal_5bb900()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_57bbf0
        public_5bb908 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x53C
        jmp public_45e3e0
        public_5bb916 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x56C
        jmp dword ptr ds : [public_5c62c4]
        public_5bb925 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x578
        jmp dword ptr ds : [public_5c62c4]
        public_5bb934 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x584
        jmp dword ptr ds : [public_5c62c4]
        public_5bb943 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x590
        jmp dword ptr ds : [public_5c62c4]
        public_5bb952 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_5c7090]
        public_5bb95e : nop
        mov eax, offset public_5f5c2c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb900)
        ASM_EXPORT_ENTRY_FIRST(0x5bb908, public_5bb908)
        ASM_EXPORT_ENTRY(0x5bb916, public_5bb916)
        ASM_EXPORT_ENTRY(0x5bb925, public_5bb925)
        ASM_EXPORT_ENTRY(0x5bb934, public_5bb934)
        ASM_EXPORT_ENTRY(0x5bb943, public_5bb943)
        ASM_EXPORT_ENTRY(0x5bb952, public_5bb952)
        ASM_EXPORT_ENTRY_LAST(0x5bb95e, public_5bb95e)
    }
}

#undef public_5bb908
#undef public_5bb916
#undef public_5bb925
#undef public_5bb934
#undef public_5bb943
#undef public_5bb952
#undef public_5bb95e

#pragma init_seg(compiler)
extern "C" void const* const public_5bb908 = __AsmFindLabelExport(&internal_5bb900, 0x5bb908);
extern "C" void const* const public_5bb916 = __AsmFindLabelExport(&internal_5bb900, 0x5bb916);
extern "C" void const* const public_5bb925 = __AsmFindLabelExport(&internal_5bb900, 0x5bb925);
extern "C" void const* const public_5bb934 = __AsmFindLabelExport(&internal_5bb900, 0x5bb934);
extern "C" void const* const public_5bb943 = __AsmFindLabelExport(&internal_5bb900, 0x5bb943);
extern "C" void const* const public_5bb952 = __AsmFindLabelExport(&internal_5bb900, 0x5bb952);
extern "C" void const* const public_5bb95e = __AsmFindLabelExport(&internal_5bb900, 0x5bb95e);
