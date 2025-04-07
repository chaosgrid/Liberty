#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d23a60);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d627d1 _public_6d627d1
#define public_6d627d9 _public_6d627d9
#define public_6d627ea _public_6d627ea
#define public_6d627f2 _public_6d627f2

PROC_DECLARE(0x6d627c0, internal_6d627c0, public_6d627c0);
/* CHUNK of public_6d20ac0 */
extern "C" NAKED register_t __cdecl internal_6d627c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d627d1 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        jmp public_6d23a60
        public_6d627d9 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d627ea : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        jmp public_6d23a60
        public_6d627f2 : nop
        mov eax, offset public_6d734cc
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d627c0)
        ASM_EXPORT_ENTRY_FIRST(0x6d627d1, public_6d627d1)
        ASM_EXPORT_ENTRY(0x6d627d9, public_6d627d9)
        ASM_EXPORT_ENTRY(0x6d627ea, public_6d627ea)
        ASM_EXPORT_ENTRY_LAST(0x6d627f2, public_6d627f2)
    }
}

#undef public_6d627d1
#undef public_6d627d9
#undef public_6d627ea
#undef public_6d627f2

#pragma init_seg(compiler)
extern "C" void const* const public_6d627d1 = __AsmFindLabelExport(&internal_6d627c0, 0x6d627d1);
extern "C" void const* const public_6d627d9 = __AsmFindLabelExport(&internal_6d627c0, 0x6d627d9);
extern "C" void const* const public_6d627ea = __AsmFindLabelExport(&internal_6d627c0, 0x6d627ea);
extern "C" void const* const public_6d627f2 = __AsmFindLabelExport(&internal_6d627c0, 0x6d627f2);
