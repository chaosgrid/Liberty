#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f18c70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1fb1 _public_6fb1fb1
#define public_6fb1fbf _public_6fb1fbf
#define public_6fb1fc7 _public_6fb1fc7
#define public_6fb1fd8 _public_6fb1fd8

PROC_DECLARE(0x6fb1fa0, internal_6fb1fa0, public_6fb1fa0);
/* CHUNK of public_6fa3ec0 */
extern "C" NAKED register_t __cdecl internal_6fb1fa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fb1fb1 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x46C
        jmp public_6f15350
        public_6fb1fbf : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6f18c70
        public_6fb1fc7 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fb1fd8 : nop
        mov eax, offset public_6fc7588
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1fa0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb1fb1, public_6fb1fb1)
        ASM_EXPORT_ENTRY(0x6fb1fbf, public_6fb1fbf)
        ASM_EXPORT_ENTRY(0x6fb1fc7, public_6fb1fc7)
        ASM_EXPORT_ENTRY_LAST(0x6fb1fd8, public_6fb1fd8)
    }
}

#undef public_6fb1fb1
#undef public_6fb1fbf
#undef public_6fb1fc7
#undef public_6fb1fd8

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1fb1 = __AsmFindLabelExport(&internal_6fb1fa0, 0x6fb1fb1);
extern "C" void const* const public_6fb1fbf = __AsmFindLabelExport(&internal_6fb1fa0, 0x6fb1fbf);
extern "C" void const* const public_6fb1fc7 = __AsmFindLabelExport(&internal_6fb1fa0, 0x6fb1fc7);
extern "C" void const* const public_6fb1fd8 = __AsmFindLabelExport(&internal_6fb1fa0, 0x6fb1fd8);
