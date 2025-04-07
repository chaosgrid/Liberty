#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084d0);
CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_620c070);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248d88 _public_6248d88
#define public_6248d93 _public_6248d93
#define public_6248da1 _public_6248da1
#define public_6248dac _public_6248dac

PROC_DECLARE(0x6248d80, internal_6248d80, public_6248d80);
/* CHUNK of public_6224710 */
extern "C" NAKED register_t __cdecl internal_6248d80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620c070
        public_6248d88 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x60
        jmp public_620b300
        public_6248d93 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x84
        jmp public_62084d0
        public_6248da1 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6248dac : nop
        mov eax, offset public_6251cbc
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248d80)
        ASM_EXPORT_ENTRY_FIRST(0x6248d88, public_6248d88)
        ASM_EXPORT_ENTRY(0x6248d93, public_6248d93)
        ASM_EXPORT_ENTRY(0x6248da1, public_6248da1)
        ASM_EXPORT_ENTRY_LAST(0x6248dac, public_6248dac)
    }
}

#undef public_6248d88
#undef public_6248d93
#undef public_6248da1
#undef public_6248dac

#pragma init_seg(compiler)
extern "C" void const* const public_6248d88 = __AsmFindLabelExport(&internal_6248d80, 0x6248d88);
extern "C" void const* const public_6248d93 = __AsmFindLabelExport(&internal_6248d80, 0x6248d93);
extern "C" void const* const public_6248da1 = __AsmFindLabelExport(&internal_6248d80, 0x6248da1);
extern "C" void const* const public_6248dac = __AsmFindLabelExport(&internal_6248d80, 0x6248dac);
