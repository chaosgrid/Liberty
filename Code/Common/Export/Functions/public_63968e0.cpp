#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6315920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63968ec _public_63968ec
#define public_63968f7 _public_63968f7
#define public_6396902 _public_6396902

PROC_DECLARE(0x63968e0, internal_63968e0, public_63968e0);
/* CHUNK of public_6318130 */
extern "C" NAKED register_t __cdecl internal_63968e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_63968ec : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_6315920
        public_63968f7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_6315920
        public_6396902 : nop
        mov eax, offset public_63b07e0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63968e0)
        ASM_EXPORT_ENTRY_FIRST(0x63968ec, public_63968ec)
        ASM_EXPORT_ENTRY(0x63968f7, public_63968f7)
        ASM_EXPORT_ENTRY_LAST(0x6396902, public_6396902)
    }
}

#undef public_63968ec
#undef public_63968f7
#undef public_6396902

#pragma init_seg(compiler)
extern "C" void const* const public_63968ec = __AsmFindLabelExport(&internal_63968e0, 0x63968ec);
extern "C" void const* const public_63968f7 = __AsmFindLabelExport(&internal_63968e0, 0x63968f7);
extern "C" void const* const public_6396902 = __AsmFindLabelExport(&internal_63968e0, 0x6396902);
