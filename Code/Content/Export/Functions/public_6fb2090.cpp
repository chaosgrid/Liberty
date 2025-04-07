#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb20a1 _public_6fb20a1
#define public_6fb20ac _public_6fb20ac
#define public_6fb20b4 _public_6fb20b4
#define public_6fb20bf _public_6fb20bf
#define public_6fb20ca _public_6fb20ca
#define public_6fb20d2 _public_6fb20d2
#define public_6fb20e3 _public_6fb20e3

PROC_DECLARE(0x6fb2090, internal_6fb2090, public_6fb2090);
/* CHUNK of public_6fa4a60 */
extern "C" NAKED register_t __cdecl internal_6fb2090()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fb20a1 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x3C
        jmp public_6f15350
        public_6fb20ac : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6f15350
        public_6fb20b4 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x58
        jmp public_6ecfa90
        public_6fb20bf : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x68
        jmp public_6f28e10
        public_6fb20ca : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6ed2c20
        public_6fb20d2 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fb20e3 : nop
        mov eax, offset public_6fc76b8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb2090)
        ASM_EXPORT_ENTRY_FIRST(0x6fb20a1, public_6fb20a1)
        ASM_EXPORT_ENTRY(0x6fb20ac, public_6fb20ac)
        ASM_EXPORT_ENTRY(0x6fb20b4, public_6fb20b4)
        ASM_EXPORT_ENTRY(0x6fb20bf, public_6fb20bf)
        ASM_EXPORT_ENTRY(0x6fb20ca, public_6fb20ca)
        ASM_EXPORT_ENTRY(0x6fb20d2, public_6fb20d2)
        ASM_EXPORT_ENTRY_LAST(0x6fb20e3, public_6fb20e3)
    }
}

#undef public_6fb20a1
#undef public_6fb20ac
#undef public_6fb20b4
#undef public_6fb20bf
#undef public_6fb20ca
#undef public_6fb20d2
#undef public_6fb20e3

#pragma init_seg(compiler)
extern "C" void const* const public_6fb20a1 = __AsmFindLabelExport(&internal_6fb2090, 0x6fb20a1);
extern "C" void const* const public_6fb20ac = __AsmFindLabelExport(&internal_6fb2090, 0x6fb20ac);
extern "C" void const* const public_6fb20b4 = __AsmFindLabelExport(&internal_6fb2090, 0x6fb20b4);
extern "C" void const* const public_6fb20bf = __AsmFindLabelExport(&internal_6fb2090, 0x6fb20bf);
extern "C" void const* const public_6fb20ca = __AsmFindLabelExport(&internal_6fb2090, 0x6fb20ca);
extern "C" void const* const public_6fb20d2 = __AsmFindLabelExport(&internal_6fb2090, 0x6fb20d2);
extern "C" void const* const public_6fb20e3 = __AsmFindLabelExport(&internal_6fb2090, 0x6fb20e3);
