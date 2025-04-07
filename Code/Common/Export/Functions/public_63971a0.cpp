#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329710);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63971ab _public_63971ab
#define public_63971b3 _public_63971b3
#define public_63971bf _public_63971bf
#define public_63971ca _public_63971ca
#define public_63971d2 _public_63971d2
#define public_63971de _public_63971de

PROC_DECLARE(0x63971a0, internal_63971a0, public_63971a0);
/* CHUNK of public_6328f20 */
extern "C" NAKED register_t __cdecl internal_63971a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63971ab : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        jmp public_6329710
        public_63971b3 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        add ecx, 4
        jmp dword ptr ds : [public_6399178]
        public_63971bf : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63971ca : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_6329710
        public_63971d2 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 4
        jmp dword ptr ds : [public_6399178]
        public_63971de : nop
        mov eax, offset public_63b12e0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63971a0)
        ASM_EXPORT_ENTRY_FIRST(0x63971ab, public_63971ab)
        ASM_EXPORT_ENTRY(0x63971b3, public_63971b3)
        ASM_EXPORT_ENTRY(0x63971bf, public_63971bf)
        ASM_EXPORT_ENTRY(0x63971ca, public_63971ca)
        ASM_EXPORT_ENTRY(0x63971d2, public_63971d2)
        ASM_EXPORT_ENTRY_LAST(0x63971de, public_63971de)
    }
}

#undef public_63971ab
#undef public_63971b3
#undef public_63971bf
#undef public_63971ca
#undef public_63971d2
#undef public_63971de

#pragma init_seg(compiler)
extern "C" void const* const public_63971ab = __AsmFindLabelExport(&internal_63971a0, 0x63971ab);
extern "C" void const* const public_63971b3 = __AsmFindLabelExport(&internal_63971a0, 0x63971b3);
extern "C" void const* const public_63971bf = __AsmFindLabelExport(&internal_63971a0, 0x63971bf);
extern "C" void const* const public_63971ca = __AsmFindLabelExport(&internal_63971a0, 0x63971ca);
extern "C" void const* const public_63971d2 = __AsmFindLabelExport(&internal_63971a0, 0x63971d2);
extern "C" void const* const public_63971de = __AsmFindLabelExport(&internal_63971a0, 0x63971de);
