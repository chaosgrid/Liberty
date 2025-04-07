#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9d9f _public_6fa9d9f
#define public_6fa9dae _public_6fa9dae

PROC_DECLARE(0x6fa9d90, internal_6fa9d90, public_6fa9d90);
/* CHUNK of public_6eacae0 */
extern "C" NAKED register_t __cdecl internal_6fa9d90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x228
        jmp dword ptr ds : [public_6fb3034]
        public_6fa9d9f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x240
        jmp dword ptr ds : [public_6fb3034]
        public_6fa9dae : nop
        mov eax, offset public_6fbe0f8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9d90)
        ASM_EXPORT_ENTRY_FIRST(0x6fa9d9f, public_6fa9d9f)
        ASM_EXPORT_ENTRY_LAST(0x6fa9dae, public_6fa9dae)
    }
}

#undef public_6fa9d9f
#undef public_6fa9dae

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9d9f = __AsmFindLabelExport(&internal_6fa9d90, 0x6fa9d9f);
extern "C" void const* const public_6fa9dae = __AsmFindLabelExport(&internal_6fa9d90, 0x6fa9dae);
