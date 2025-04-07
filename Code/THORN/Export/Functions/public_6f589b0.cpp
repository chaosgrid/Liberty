#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f235d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f235f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f23610);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f589bb _public_6f589bb
#define public_6f589c6 _public_6f589c6
#define public_6f589d1 _public_6f589d1
#define public_6f589dc _public_6f589dc

PROC_DECLARE(0x6f589b0, internal_6f589b0, public_6f589b0);
/* CHUNK of public_6f346a0 */
extern "C" NAKED register_t __cdecl internal_6f589b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_6f235d0
        public_6f589bb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_6f235f0
        public_6f589c6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34
        jmp public_6f23610
        public_6f589d1 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6f57e26
        pop ecx
        ret 
        public_6f589dc : nop
        mov eax, offset public_6f5bb84
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f589b0)
        ASM_EXPORT_ENTRY_FIRST(0x6f589bb, public_6f589bb)
        ASM_EXPORT_ENTRY(0x6f589c6, public_6f589c6)
        ASM_EXPORT_ENTRY(0x6f589d1, public_6f589d1)
        ASM_EXPORT_ENTRY_LAST(0x6f589dc, public_6f589dc)
    }
}

#undef public_6f589bb
#undef public_6f589c6
#undef public_6f589d1
#undef public_6f589dc

#pragma init_seg(compiler)
extern "C" void const* const public_6f589bb = __AsmFindLabelExport(&internal_6f589b0, 0x6f589bb);
extern "C" void const* const public_6f589c6 = __AsmFindLabelExport(&internal_6f589b0, 0x6f589c6);
extern "C" void const* const public_6f589d1 = __AsmFindLabelExport(&internal_6f589b0, 0x6f589d1);
extern "C" void const* const public_6f589dc = __AsmFindLabelExport(&internal_6f589b0, 0x6f589dc);
