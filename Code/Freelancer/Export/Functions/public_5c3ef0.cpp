#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3ef9 _public_5c3ef9
#define public_5c3f01 _public_5c3f01
#define public_5c3f12 _public_5c3f12

PROC_DECLARE(0x5c3ef0, internal_5c3ef0, public_5c3ef0);
/* CHUNK of public_57d1f0 */
extern "C" NAKED register_t __cdecl internal_5c3ef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_5c62ac]
        public_5c3ef9 : nop
        lea ecx, ss:[ebp+0xC]
        jmp public_45eeb0
        public_5c3f01 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5c3f12 : nop
        mov eax, offset public_5fdba8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3ef0)
        ASM_EXPORT_ENTRY_FIRST(0x5c3ef9, public_5c3ef9)
        ASM_EXPORT_ENTRY(0x5c3f01, public_5c3f01)
        ASM_EXPORT_ENTRY_LAST(0x5c3f12, public_5c3f12)
    }
}

#undef public_5c3ef9
#undef public_5c3f01
#undef public_5c3f12

#pragma init_seg(compiler)
extern "C" void const* const public_5c3ef9 = __AsmFindLabelExport(&internal_5c3ef0, 0x5c3ef9);
extern "C" void const* const public_5c3f01 = __AsmFindLabelExport(&internal_5c3ef0, 0x5c3f01);
extern "C" void const* const public_5c3f12 = __AsmFindLabelExport(&internal_5c3ef0, 0x5c3f12);
