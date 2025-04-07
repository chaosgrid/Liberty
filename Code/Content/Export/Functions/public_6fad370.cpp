#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad37b _public_6fad37b
#define public_6fad386 _public_6fad386
#define public_6fad391 _public_6fad391
#define public_6fad399 _public_6fad399

PROC_DECLARE(0x6fad370, internal_6fad370, public_6fad370);
/* CHUNK of public_6f0c560 */
extern "C" NAKED register_t __cdecl internal_6fad370()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 8
        jmp public_6ecfa90
        public_6fad37b : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x30
        jmp public_6eec8d0
        public_6fad386 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x40
        jmp public_6eec8d0
        public_6fad391 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6f15350
        public_6fad399 : nop
        mov eax, offset public_6fc2238
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad370)
        ASM_EXPORT_ENTRY_FIRST(0x6fad37b, public_6fad37b)
        ASM_EXPORT_ENTRY(0x6fad386, public_6fad386)
        ASM_EXPORT_ENTRY(0x6fad391, public_6fad391)
        ASM_EXPORT_ENTRY_LAST(0x6fad399, public_6fad399)
    }
}

#undef public_6fad37b
#undef public_6fad386
#undef public_6fad391
#undef public_6fad399

#pragma init_seg(compiler)
extern "C" void const* const public_6fad37b = __AsmFindLabelExport(&internal_6fad370, 0x6fad37b);
extern "C" void const* const public_6fad386 = __AsmFindLabelExport(&internal_6fad370, 0x6fad386);
extern "C" void const* const public_6fad391 = __AsmFindLabelExport(&internal_6fad370, 0x6fad391);
extern "C" void const* const public_6fad399 = __AsmFindLabelExport(&internal_6fad370, 0x6fad399);
