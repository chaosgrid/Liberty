#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403700);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419b7c _public_419b7c
#define public_419b88 _public_419b88
#define public_419b93 _public_419b93

PROC_DECLARE(0x419b70, internal_419b70, public_419b70);
/* CHUNK of public_403370 */
extern "C" NAKED register_t __cdecl internal_419b70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp dword ptr ds : [public_41b048]
        public_419b7c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp dword ptr ds : [public_41b87c]
        public_419b88 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_403700
        public_419b93 : nop
        mov eax, offset public_41ebec
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419b70)
        ASM_EXPORT_ENTRY_FIRST(0x419b7c, public_419b7c)
        ASM_EXPORT_ENTRY(0x419b88, public_419b88)
        ASM_EXPORT_ENTRY_LAST(0x419b93, public_419b93)
    }
}

#undef public_419b7c
#undef public_419b88
#undef public_419b93

#pragma init_seg(compiler)
extern "C" void const* const public_419b7c = __AsmFindLabelExport(&internal_419b70, 0x419b7c);
extern "C" void const* const public_419b88 = __AsmFindLabelExport(&internal_419b70, 0x419b88);
extern "C" void const* const public_419b93 = __AsmFindLabelExport(&internal_419b70, 0x419b93);
