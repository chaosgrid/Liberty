#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207470);
CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);
CLANG_FORWARD_PROC_SYMBOL(public_6246194);

#define public_624a96b _public_624a96b
#define public_624a981 _public_624a981
#define public_624a98c _public_624a98c
#define public_624a994 _public_624a994

PROC_DECLARE(0x624a960, internal_624a960, public_624a960);
/* CHUNK of public_6243dd0 */
extern "C" NAKED register_t __cdecl internal_624a960()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
/*FIXUP public_624a96b : nop
        push offset _public_62084b0 @0x624a96b*/
  FIXUP public_624a96b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62084b0
        push 9
        push 4
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0xC
        push eax
        call public_6246194
        ret 
        public_624a981 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a98c : nop
        lea ecx, ss:[ebp+4]
        jmp public_6207470
        public_624a994 : nop
        mov eax, offset public_6253a1c
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a960)
        ASM_EXPORT_ENTRY_FIRST(0x624a96b, public_624a96b)
        ASM_EXPORT_ENTRY(0x624a981, public_624a981)
        ASM_EXPORT_ENTRY(0x624a98c, public_624a98c)
        ASM_EXPORT_ENTRY_LAST(0x624a994, public_624a994)
    }
}

#undef public_624a96b
#undef public_624a981
#undef public_624a98c
#undef public_624a994

#pragma init_seg(compiler)
extern "C" void const* const public_624a96b = __AsmFindLabelExport(&internal_624a960, 0x624a96b);
extern "C" void const* const public_624a981 = __AsmFindLabelExport(&internal_624a960, 0x624a981);
extern "C" void const* const public_624a98c = __AsmFindLabelExport(&internal_624a960, 0x624a98c);
extern "C" void const* const public_624a994 = __AsmFindLabelExport(&internal_624a960, 0x624a994);
