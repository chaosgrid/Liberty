#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c6200);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bbdd8 _public_5bbdd8
#define public_5bbde6 _public_5bbde6
#define public_5bbdf5 _public_5bbdf5

PROC_DECLARE(0x5bbdd0, internal_5bbdd0, public_5bbdd0);
/* CHUNK of public_477cf0 */
extern "C" NAKED register_t __cdecl internal_5bbdd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bbdd8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x330
        jmp public_4c6200
        public_5bbde6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3A8
        jmp dword ptr ds : [public_5c60fc]
        public_5bbdf5 : nop
        mov eax, offset public_5f61b0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bbdd0)
        ASM_EXPORT_ENTRY_FIRST(0x5bbdd8, public_5bbdd8)
        ASM_EXPORT_ENTRY(0x5bbde6, public_5bbde6)
        ASM_EXPORT_ENTRY_LAST(0x5bbdf5, public_5bbdf5)
    }
}

#undef public_5bbdd8
#undef public_5bbde6
#undef public_5bbdf5

#pragma init_seg(compiler)
extern "C" void const* const public_5bbdd8 = __AsmFindLabelExport(&internal_5bbdd0, 0x5bbdd8);
extern "C" void const* const public_5bbde6 = __AsmFindLabelExport(&internal_5bbdd0, 0x5bbde6);
extern "C" void const* const public_5bbdf5 = __AsmFindLabelExport(&internal_5bbdd0, 0x5bbdf5);
