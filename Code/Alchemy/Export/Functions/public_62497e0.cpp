#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_620c070);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62497eb _public_62497eb
#define public_62497f3 _public_62497f3
#define public_62497fe _public_62497fe
#define public_6249809 _public_6249809

PROC_DECLARE(0x62497e0, internal_62497e0, public_62497e0);
/* CHUNK of public_622f550 */
extern "C" NAKED register_t __cdecl internal_62497e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_62497eb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620c070
        public_62497f3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x5C
        jmp public_620b300
        public_62497fe : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x7C
        jmp public_620b300
        public_6249809 : nop
        mov eax, offset public_62527a0
        jmp public_6246126
        UNREACHABLE_TRAP(0x62497e0)
        ASM_EXPORT_ENTRY_FIRST(0x62497eb, public_62497eb)
        ASM_EXPORT_ENTRY(0x62497f3, public_62497f3)
        ASM_EXPORT_ENTRY(0x62497fe, public_62497fe)
        ASM_EXPORT_ENTRY_LAST(0x6249809, public_6249809)
    }
}

#undef public_62497eb
#undef public_62497f3
#undef public_62497fe
#undef public_6249809

#pragma init_seg(compiler)
extern "C" void const* const public_62497eb = __AsmFindLabelExport(&internal_62497e0, 0x62497eb);
extern "C" void const* const public_62497f3 = __AsmFindLabelExport(&internal_62497e0, 0x62497f3);
extern "C" void const* const public_62497fe = __AsmFindLabelExport(&internal_62497e0, 0x62497fe);
extern "C" void const* const public_6249809 = __AsmFindLabelExport(&internal_62497e0, 0x6249809);
