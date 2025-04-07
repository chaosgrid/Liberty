#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f235d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f235f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f23610);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58a8b _public_6f58a8b
#define public_6f58a96 _public_6f58a96
#define public_6f58aa1 _public_6f58aa1
#define public_6f58aac _public_6f58aac

PROC_DECLARE(0x6f58a80, internal_6f58a80, public_6f58a80);
/* CHUNK of public_6f350d0 */
extern "C" NAKED register_t __cdecl internal_6f58a80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_6f235d0
        public_6f58a8b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_6f235f0
        public_6f58a96 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34
        jmp public_6f23610
        public_6f58aa1 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6f57e26
        pop ecx
        ret 
        public_6f58aac : nop
        mov eax, offset public_6f5bc54
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58a80)
        ASM_EXPORT_ENTRY_FIRST(0x6f58a8b, public_6f58a8b)
        ASM_EXPORT_ENTRY(0x6f58a96, public_6f58a96)
        ASM_EXPORT_ENTRY(0x6f58aa1, public_6f58aa1)
        ASM_EXPORT_ENTRY_LAST(0x6f58aac, public_6f58aac)
    }
}

#undef public_6f58a8b
#undef public_6f58a96
#undef public_6f58aa1
#undef public_6f58aac

#pragma init_seg(compiler)
extern "C" void const* const public_6f58a8b = __AsmFindLabelExport(&internal_6f58a80, 0x6f58a8b);
extern "C" void const* const public_6f58a96 = __AsmFindLabelExport(&internal_6f58a80, 0x6f58a96);
extern "C" void const* const public_6f58aa1 = __AsmFindLabelExport(&internal_6f58a80, 0x6f58aa1);
extern "C" void const* const public_6f58aac = __AsmFindLabelExport(&internal_6f58a80, 0x6f58aac);
