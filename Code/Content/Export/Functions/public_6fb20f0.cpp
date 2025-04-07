#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb2101 _public_6fb2101
#define public_6fb2112 _public_6fb2112
#define public_6fb211d _public_6fb211d
#define public_6fb2128 _public_6fb2128
#define public_6fb2133 _public_6fb2133
#define public_6fb213b _public_6fb213b

PROC_DECLARE(0x6fb20f0, internal_6fb20f0, public_6fb20f0);
/* CHUNK of public_6fa4c80 */
extern "C" NAKED register_t __cdecl internal_6fb20f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fb2101 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fb2112 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3C
        jmp public_6f15350
        public_6fb211d : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x58
        jmp public_6ecfa90
        public_6fb2128 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x68
        jmp public_6f28e10
        public_6fb2133 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ed2c20
        public_6fb213b : nop
        mov eax, offset public_6fc7704
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb20f0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb2101, public_6fb2101)
        ASM_EXPORT_ENTRY(0x6fb2112, public_6fb2112)
        ASM_EXPORT_ENTRY(0x6fb211d, public_6fb211d)
        ASM_EXPORT_ENTRY(0x6fb2128, public_6fb2128)
        ASM_EXPORT_ENTRY(0x6fb2133, public_6fb2133)
        ASM_EXPORT_ENTRY_LAST(0x6fb213b, public_6fb213b)
    }
}

#undef public_6fb2101
#undef public_6fb2112
#undef public_6fb211d
#undef public_6fb2128
#undef public_6fb2133
#undef public_6fb213b

#pragma init_seg(compiler)
extern "C" void const* const public_6fb2101 = __AsmFindLabelExport(&internal_6fb20f0, 0x6fb2101);
extern "C" void const* const public_6fb2112 = __AsmFindLabelExport(&internal_6fb20f0, 0x6fb2112);
extern "C" void const* const public_6fb211d = __AsmFindLabelExport(&internal_6fb20f0, 0x6fb211d);
extern "C" void const* const public_6fb2128 = __AsmFindLabelExport(&internal_6fb20f0, 0x6fb2128);
extern "C" void const* const public_6fb2133 = __AsmFindLabelExport(&internal_6fb20f0, 0x6fb2133);
extern "C" void const* const public_6fb213b = __AsmFindLabelExport(&internal_6fb20f0, 0x6fb213b);
