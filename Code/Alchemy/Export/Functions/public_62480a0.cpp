#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207470);
CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_6212ec0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62480ab _public_62480ab
#define public_62480b3 _public_62480b3
#define public_62480be _public_62480be
#define public_62480c9 _public_62480c9
#define public_62480d4 _public_62480d4
#define public_62480dc _public_62480dc

PROC_DECLARE(0x62480a0, internal_62480a0, public_62480a0);
/* CHUNK of public_6214010 */
extern "C" NAKED register_t __cdecl internal_62480a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_62480ab : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6212ec0
        public_62480b3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_62084b0
        public_62480be : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x50
        jmp public_62084b0
        public_62480c9 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_62480d4 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6207470
        public_62480dc : nop
        mov eax, offset public_6250f50
        jmp public_6246126
        UNREACHABLE_TRAP(0x62480a0)
        ASM_EXPORT_ENTRY_FIRST(0x62480ab, public_62480ab)
        ASM_EXPORT_ENTRY(0x62480b3, public_62480b3)
        ASM_EXPORT_ENTRY(0x62480be, public_62480be)
        ASM_EXPORT_ENTRY(0x62480c9, public_62480c9)
        ASM_EXPORT_ENTRY(0x62480d4, public_62480d4)
        ASM_EXPORT_ENTRY_LAST(0x62480dc, public_62480dc)
    }
}

#undef public_62480ab
#undef public_62480b3
#undef public_62480be
#undef public_62480c9
#undef public_62480d4
#undef public_62480dc

#pragma init_seg(compiler)
extern "C" void const* const public_62480ab = __AsmFindLabelExport(&internal_62480a0, 0x62480ab);
extern "C" void const* const public_62480b3 = __AsmFindLabelExport(&internal_62480a0, 0x62480b3);
extern "C" void const* const public_62480be = __AsmFindLabelExport(&internal_62480a0, 0x62480be);
extern "C" void const* const public_62480c9 = __AsmFindLabelExport(&internal_62480a0, 0x62480c9);
extern "C" void const* const public_62480d4 = __AsmFindLabelExport(&internal_62480a0, 0x62480d4);
extern "C" void const* const public_62480dc = __AsmFindLabelExport(&internal_62480a0, 0x62480dc);
