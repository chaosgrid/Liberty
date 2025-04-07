#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_6287870);
CLANG_FORWARD_PROC_SYMBOL(public_6293160);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393968 _public_6393968
#define public_6393980 _public_6393980
#define public_6393987 _public_6393987
#define public_639398f _public_639398f
#define public_6393997 _public_6393997

PROC_DECLARE(0x6393960, internal_6393960, public_6393960);
/* CHUNK of public_629d1b0 */
extern "C" NAKED register_t __cdecl internal_6393960()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6293160
        public_6393968 : nop
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6393980
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0x4C
        mov dword ptr ss : [ebp-0x10], eax
        jmp public_6393987
        public_6393980 : nop
        mov dword ptr ss : [ebp-0x10], 0
        public_6393987 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6287870
        public_639398f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6285b90
        public_6393997 : nop
        mov eax, offset public_63acc80
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393960)
        ASM_EXPORT_ENTRY_FIRST(0x6393968, public_6393968)
        ASM_EXPORT_ENTRY(0x6393980, public_6393980)
        ASM_EXPORT_ENTRY(0x6393987, public_6393987)
        ASM_EXPORT_ENTRY(0x639398f, public_639398f)
        ASM_EXPORT_ENTRY_LAST(0x6393997, public_6393997)
    }
}

#undef public_6393968
#undef public_6393980
#undef public_6393987
#undef public_639398f
#undef public_6393997

#pragma init_seg(compiler)
extern "C" void const* const public_6393968 = __AsmFindLabelExport(&internal_6393960, 0x6393968);
extern "C" void const* const public_6393980 = __AsmFindLabelExport(&internal_6393960, 0x6393980);
extern "C" void const* const public_6393987 = __AsmFindLabelExport(&internal_6393960, 0x6393987);
extern "C" void const* const public_639398f = __AsmFindLabelExport(&internal_6393960, 0x639398f);
extern "C" void const* const public_6393997 = __AsmFindLabelExport(&internal_6393960, 0x6393997);
