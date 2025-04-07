#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403bd0);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a908 _public_41a908
#define public_41a913 _public_41a913
#define public_41a91e _public_41a91e
#define public_41a92c _public_41a92c
#define public_41a93a _public_41a93a

PROC_DECLARE(0x41a900, internal_41a900, public_41a900);
/* CHUNK of public_413ec0 */
extern "C" NAKED register_t __cdecl internal_41a900()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_418a98
        public_41a908 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x60
        jmp public_403bd0
        public_41a913 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x70
        jmp public_418c24
        public_41a91e : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xB0
        jmp public_418c24
        public_41a92c : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0xF0
        jmp public_418c24
        public_41a93a : nop
        mov eax, offset public_41fa5c
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a900)
        ASM_EXPORT_ENTRY_FIRST(0x41a908, public_41a908)
        ASM_EXPORT_ENTRY(0x41a913, public_41a913)
        ASM_EXPORT_ENTRY(0x41a91e, public_41a91e)
        ASM_EXPORT_ENTRY(0x41a92c, public_41a92c)
        ASM_EXPORT_ENTRY_LAST(0x41a93a, public_41a93a)
    }
}

#undef public_41a908
#undef public_41a913
#undef public_41a91e
#undef public_41a92c
#undef public_41a93a

#pragma init_seg(compiler)
extern "C" void const* const public_41a908 = __AsmFindLabelExport(&internal_41a900, 0x41a908);
extern "C" void const* const public_41a913 = __AsmFindLabelExport(&internal_41a900, 0x41a913);
extern "C" void const* const public_41a91e = __AsmFindLabelExport(&internal_41a900, 0x41a91e);
extern "C" void const* const public_41a92c = __AsmFindLabelExport(&internal_41a900, 0x41a92c);
extern "C" void const* const public_41a93a = __AsmFindLabelExport(&internal_41a900, 0x41a93a);
