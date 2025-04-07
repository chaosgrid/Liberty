#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634dc20);
CLANG_FORWARD_PROC_SYMBOL(public_635d3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6360dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6369b30);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_63985e8 _public_63985e8
#define public_6398600 _public_6398600
#define public_6398607 _public_6398607
#define public_639860f _public_639860f
#define public_6398625 _public_6398625
#define public_6398630 _public_6398630

PROC_DECLARE(0x63985e0, internal_63985e0, public_63985e0);
/* CHUNK of public_6369ce0 */
extern "C" NAKED register_t __cdecl internal_63985e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_634dc20
        public_63985e8 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_6398600
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x14
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_6398607
        public_6398600 : nop
        mov dword ptr ss : [ebp-0x18], 0
        public_6398607 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6360dc0
/*FIXUP public_639860f : nop
        push offset _public_6369b30 @0x639860f*/
  FIXUP public_639860f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6369b30
        push 2
        push 0x10
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x18
        push eax
        call public_6391dfc
        ret 
        public_6398625 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x38
        jmp public_635d3b0
        public_6398630 : nop
        mov eax, offset public_63b2c20
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63985e0)
        ASM_EXPORT_ENTRY_FIRST(0x63985e8, public_63985e8)
        ASM_EXPORT_ENTRY(0x6398600, public_6398600)
        ASM_EXPORT_ENTRY(0x6398607, public_6398607)
        ASM_EXPORT_ENTRY(0x639860f, public_639860f)
        ASM_EXPORT_ENTRY(0x6398625, public_6398625)
        ASM_EXPORT_ENTRY_LAST(0x6398630, public_6398630)
    }
}

#undef public_63985e8
#undef public_6398600
#undef public_6398607
#undef public_639860f
#undef public_6398625
#undef public_6398630

#pragma init_seg(compiler)
extern "C" void const* const public_63985e8 = __AsmFindLabelExport(&internal_63985e0, 0x63985e8);
extern "C" void const* const public_6398600 = __AsmFindLabelExport(&internal_63985e0, 0x6398600);
extern "C" void const* const public_6398607 = __AsmFindLabelExport(&internal_63985e0, 0x6398607);
extern "C" void const* const public_639860f = __AsmFindLabelExport(&internal_63985e0, 0x639860f);
extern "C" void const* const public_6398625 = __AsmFindLabelExport(&internal_63985e0, 0x6398625);
extern "C" void const* const public_6398630 = __AsmFindLabelExport(&internal_63985e0, 0x6398630);
