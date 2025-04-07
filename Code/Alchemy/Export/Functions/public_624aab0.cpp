#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624aabb _public_624aabb

PROC_DECLARE(0x624aab0, internal_624aab0, public_624aab0);
/* CHUNK of public_62453c0 */
extern "C" NAKED register_t __cdecl internal_624aab0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_620b300
        public_624aabb : nop
        mov eax, offset public_6253b64
        jmp public_6246126
        UNREACHABLE_TRAP(0x624aab0)
        ASM_EXPORT_ENTRY_SINGLE(0x624aabb, public_624aabb)
    }
}

#undef public_624aabb

#pragma init_seg(compiler)
extern "C" void const* const public_624aabb = __AsmFindLabelExport(&internal_624aab0, 0x624aabb);
