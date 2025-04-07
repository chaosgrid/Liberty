#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634dc20);
CLANG_FORWARD_PROC_SYMBOL(public_635d3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6360dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6369b30);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_63985a8 _public_63985a8
#define public_63985b3 _public_63985b3
#define public_63985c9 _public_63985c9
#define public_63985d4 _public_63985d4

PROC_DECLARE(0x63985a0, internal_63985a0, public_63985a0);
/* CHUNK of public_6369be0 */
extern "C" NAKED register_t __cdecl internal_63985a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_634dc20
        public_63985a8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_6360dc0
/*FIXUP public_63985b3 : nop
        push offset _public_6369b30 @0x63985b3*/
  FIXUP public_63985b3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6369b30
        push 2
        push 0x10
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x18
        push eax
        call public_6391dfc
        ret 
        public_63985c9 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x38
        jmp public_635d3b0
        public_63985d4 : nop
        mov eax, offset public_63b2be0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63985a0)
        ASM_EXPORT_ENTRY_FIRST(0x63985a8, public_63985a8)
        ASM_EXPORT_ENTRY(0x63985b3, public_63985b3)
        ASM_EXPORT_ENTRY(0x63985c9, public_63985c9)
        ASM_EXPORT_ENTRY_LAST(0x63985d4, public_63985d4)
    }
}

#undef public_63985a8
#undef public_63985b3
#undef public_63985c9
#undef public_63985d4

#pragma init_seg(compiler)
extern "C" void const* const public_63985a8 = __AsmFindLabelExport(&internal_63985a0, 0x63985a8);
extern "C" void const* const public_63985b3 = __AsmFindLabelExport(&internal_63985a0, 0x63985b3);
extern "C" void const* const public_63985c9 = __AsmFindLabelExport(&internal_63985a0, 0x63985c9);
extern "C" void const* const public_63985d4 = __AsmFindLabelExport(&internal_63985a0, 0x63985d4);
