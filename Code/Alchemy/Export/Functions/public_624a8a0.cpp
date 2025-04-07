#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207470);
CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_6209f60);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);
CLANG_FORWARD_PROC_SYMBOL(public_6246194);

#define public_624a8b6 _public_624a8b6
#define public_624a8c1 _public_624a8c1
#define public_624a8c9 _public_624a8c9
#define public_624a8d4 _public_624a8d4
#define public_624a8dc _public_624a8dc
#define public_624a8e7 _public_624a8e7

PROC_DECLARE(0x624a8a0, internal_624a8a0, public_624a8a0);
/* CHUNK of public_62434c0 */
extern "C" NAKED register_t __cdecl internal_624a8a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
/*FIXUP push offset _public_62084b0 @0x624a8a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62084b0
        push 9
        push 4
        mov eax, dword ptr ss : [ebp-0x1C]
        add eax, 0xC
        push eax
        call public_6246194
        ret 
        public_624a8b6 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a8c1 : nop
        lea ecx, ss:[ebp-0x14]
        jmp public_6207470
        public_624a8c9 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a8d4 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_6209f60
        public_624a8dc : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a8e7 : nop
        mov eax, offset public_6253974
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a8a0)
        ASM_EXPORT_ENTRY_FIRST(0x624a8b6, public_624a8b6)
        ASM_EXPORT_ENTRY(0x624a8c1, public_624a8c1)
        ASM_EXPORT_ENTRY(0x624a8c9, public_624a8c9)
        ASM_EXPORT_ENTRY(0x624a8d4, public_624a8d4)
        ASM_EXPORT_ENTRY(0x624a8dc, public_624a8dc)
        ASM_EXPORT_ENTRY_LAST(0x624a8e7, public_624a8e7)
    }
}

#undef public_624a8b6
#undef public_624a8c1
#undef public_624a8c9
#undef public_624a8d4
#undef public_624a8dc
#undef public_624a8e7

#pragma init_seg(compiler)
extern "C" void const* const public_624a8b6 = __AsmFindLabelExport(&internal_624a8a0, 0x624a8b6);
extern "C" void const* const public_624a8c1 = __AsmFindLabelExport(&internal_624a8a0, 0x624a8c1);
extern "C" void const* const public_624a8c9 = __AsmFindLabelExport(&internal_624a8a0, 0x624a8c9);
extern "C" void const* const public_624a8d4 = __AsmFindLabelExport(&internal_624a8a0, 0x624a8d4);
extern "C" void const* const public_624a8dc = __AsmFindLabelExport(&internal_624a8a0, 0x624a8dc);
extern "C" void const* const public_624a8e7 = __AsmFindLabelExport(&internal_624a8a0, 0x624a8e7);
