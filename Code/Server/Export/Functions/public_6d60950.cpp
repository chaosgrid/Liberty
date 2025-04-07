#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d09ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60958 _public_6d60958
#define public_6d60974 _public_6d60974
#define public_6d6097b _public_6d6097b
#define public_6d60984 _public_6d60984

PROC_DECLARE(0x6d60950, internal_6d60950, public_6d60950);
/* CHUNK of public_6cf3440 */
extern "C" NAKED register_t __cdecl internal_6d60950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6d09ba0
        public_6d60958 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        sub eax, 0xC
        test eax, eax
        je public_6d60974
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x54
        mov dword ptr ss : [ebp-0x14], ecx
        jmp public_6d6097b
        public_6d60974 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_6d6097b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp dword ptr ds : [public_6d6443c]
        public_6d60984 : nop
        mov eax, offset public_6d712c4
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60950)
        ASM_EXPORT_ENTRY_FIRST(0x6d60958, public_6d60958)
        ASM_EXPORT_ENTRY(0x6d60974, public_6d60974)
        ASM_EXPORT_ENTRY(0x6d6097b, public_6d6097b)
        ASM_EXPORT_ENTRY_LAST(0x6d60984, public_6d60984)
    }
}

#undef public_6d60958
#undef public_6d60974
#undef public_6d6097b
#undef public_6d60984

#pragma init_seg(compiler)
extern "C" void const* const public_6d60958 = __AsmFindLabelExport(&internal_6d60950, 0x6d60958);
extern "C" void const* const public_6d60974 = __AsmFindLabelExport(&internal_6d60950, 0x6d60974);
extern "C" void const* const public_6d6097b = __AsmFindLabelExport(&internal_6d60950, 0x6d6097b);
extern "C" void const* const public_6d60984 = __AsmFindLabelExport(&internal_6d60950, 0x6d60984);
