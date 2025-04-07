#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396e11 _public_6396e11
#define public_6396e1c _public_6396e1c
#define public_6396e27 _public_6396e27
#define public_6396e32 _public_6396e32

PROC_DECLARE(0x6396e00, internal_6396e00, public_6396e00);
/* CHUNK of public_63240a0 */
extern "C" NAKED register_t __cdecl internal_6396e00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_6396e11 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x10
        jmp public_630e210
        public_6396e1c : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x28
        jmp public_630e210
        public_6396e27 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x78
        jmp public_6269110
        public_6396e32 : nop
        mov eax, offset public_63b0e48
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396e00)
        ASM_EXPORT_ENTRY_FIRST(0x6396e11, public_6396e11)
        ASM_EXPORT_ENTRY(0x6396e1c, public_6396e1c)
        ASM_EXPORT_ENTRY(0x6396e27, public_6396e27)
        ASM_EXPORT_ENTRY_LAST(0x6396e32, public_6396e32)
    }
}

#undef public_6396e11
#undef public_6396e1c
#undef public_6396e27
#undef public_6396e32

#pragma init_seg(compiler)
extern "C" void const* const public_6396e11 = __AsmFindLabelExport(&internal_6396e00, 0x6396e11);
extern "C" void const* const public_6396e1c = __AsmFindLabelExport(&internal_6396e00, 0x6396e1c);
extern "C" void const* const public_6396e27 = __AsmFindLabelExport(&internal_6396e00, 0x6396e27);
extern "C" void const* const public_6396e32 = __AsmFindLabelExport(&internal_6396e00, 0x6396e32);
