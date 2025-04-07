#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faa198 _public_6faa198
#define public_6faa1a4 _public_6faa1a4
#define public_6faa1b0 _public_6faa1b0
#define public_6faa1bc _public_6faa1bc

PROC_DECLARE(0x6faa190, internal_6faa190, public_6faa190);
/* CHUNK of public_6eb4680 */
extern "C" NAKED register_t __cdecl internal_6faa190()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6eec8d0
        public_6faa198 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp dword ptr ds : [public_6fb3034]
        public_6faa1a4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp dword ptr ds : [public_6fb3034]
        public_6faa1b0 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3C
        jmp dword ptr ds : [public_6fb3034]
        public_6faa1bc : nop
        mov eax, offset public_6fbe56c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faa190)
        ASM_EXPORT_ENTRY_FIRST(0x6faa198, public_6faa198)
        ASM_EXPORT_ENTRY(0x6faa1a4, public_6faa1a4)
        ASM_EXPORT_ENTRY(0x6faa1b0, public_6faa1b0)
        ASM_EXPORT_ENTRY_LAST(0x6faa1bc, public_6faa1bc)
    }
}

#undef public_6faa198
#undef public_6faa1a4
#undef public_6faa1b0
#undef public_6faa1bc

#pragma init_seg(compiler)
extern "C" void const* const public_6faa198 = __AsmFindLabelExport(&internal_6faa190, 0x6faa198);
extern "C" void const* const public_6faa1a4 = __AsmFindLabelExport(&internal_6faa190, 0x6faa1a4);
extern "C" void const* const public_6faa1b0 = __AsmFindLabelExport(&internal_6faa190, 0x6faa1b0);
extern "C" void const* const public_6faa1bc = __AsmFindLabelExport(&internal_6faa190, 0x6faa1bc);
