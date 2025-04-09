#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cc50);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc358 _public_5bc358
#define public_5bc366 _public_5bc366
#define public_5bc375 _public_5bc375
#define public_5bc383 _public_5bc383
#define public_5bc392 _public_5bc392

PROC_DECLARE(0x5bc350, internal_5bc350, public_5bc350);
/* CHUNK of public_48b2e0 */
extern "C" NAKED register_t __cdecl internal_5bc350()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bc358 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x32C
        jmp public_576010
        public_5bc366 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34C
        jmp dword ptr ds : [public_5c7090]
        public_5bc375 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x35C
        jmp public_42cc50
        public_5bc383 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x37C
        jmp dword ptr ds : [public_5c6098]
        public_5bc392 : nop
        mov eax, offset public_5f679c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc350)
        ASM_EXPORT_ENTRY_FIRST(0x5bc358, public_5bc358)
        ASM_EXPORT_ENTRY(0x5bc366, public_5bc366)
        ASM_EXPORT_ENTRY(0x5bc375, public_5bc375)
        ASM_EXPORT_ENTRY(0x5bc383, public_5bc383)
        ASM_EXPORT_ENTRY_LAST(0x5bc392, public_5bc392)
    }
}

#undef public_5bc358
#undef public_5bc366
#undef public_5bc375
#undef public_5bc383
#undef public_5bc392

#pragma init_seg(compiler)
extern "C" void const* const public_5bc358 = __AsmFindLabelExport(&internal_5bc350, 0x5bc358);
extern "C" void const* const public_5bc366 = __AsmFindLabelExport(&internal_5bc350, 0x5bc366);
extern "C" void const* const public_5bc375 = __AsmFindLabelExport(&internal_5bc350, 0x5bc375);
extern "C" void const* const public_5bc383 = __AsmFindLabelExport(&internal_5bc350, 0x5bc383);
extern "C" void const* const public_5bc392 = __AsmFindLabelExport(&internal_5bc350, 0x5bc392);
