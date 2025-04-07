#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b40300);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6aac8 _public_6b6aac8
#define public_6b6aad3 _public_6b6aad3
#define public_6b6aade _public_6b6aade
#define public_6b6aaea _public_6b6aaea

PROC_DECLARE(0x6b6aac0, internal_6b6aac0, public_6b6aac0);
/* CHUNK of public_6b4c810 */
extern "C" NAKED register_t __cdecl internal_6b6aac0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6b4e730
        public_6b6aac8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_6b40300
        public_6b6aad3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp public_6b3a450
        public_6b6aade : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74
        jmp dword ptr ds : [public_6b6b008]
        public_6b6aaea : nop
        mov eax, offset public_6b6f180
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6aac0)
        ASM_EXPORT_ENTRY_FIRST(0x6b6aac8, public_6b6aac8)
        ASM_EXPORT_ENTRY(0x6b6aad3, public_6b6aad3)
        ASM_EXPORT_ENTRY(0x6b6aade, public_6b6aade)
        ASM_EXPORT_ENTRY_LAST(0x6b6aaea, public_6b6aaea)
    }
}

#undef public_6b6aac8
#undef public_6b6aad3
#undef public_6b6aade
#undef public_6b6aaea

#pragma init_seg(compiler)
extern "C" void const* const public_6b6aac8 = __AsmFindLabelExport(&internal_6b6aac0, 0x6b6aac8);
extern "C" void const* const public_6b6aad3 = __AsmFindLabelExport(&internal_6b6aac0, 0x6b6aad3);
extern "C" void const* const public_6b6aade = __AsmFindLabelExport(&internal_6b6aac0, 0x6b6aade);
extern "C" void const* const public_6b6aaea = __AsmFindLabelExport(&internal_6b6aac0, 0x6b6aaea);
