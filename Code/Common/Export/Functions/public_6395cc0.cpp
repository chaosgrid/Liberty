#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b7180);
CLANG_FORWARD_PROC_SYMBOL(public_62b7250);
CLANG_FORWARD_PROC_SYMBOL(public_62b8e90);
CLANG_FORWARD_PROC_SYMBOL(public_62b8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_62b9040);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6395cc8 _public_6395cc8
#define public_6395cd3 _public_6395cd3
#define public_6395cde _public_6395cde
#define public_6395ce9 _public_6395ce9
#define public_6395cff _public_6395cff
#define public_6395d0d _public_6395d0d

PROC_DECLARE(0x6395cc0, internal_6395cc0, public_6395cc0);
/* CHUNK of public_62ff4a0 */
extern "C" NAKED register_t __cdecl internal_6395cc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62b8e90
        public_6395cc8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_62b8e90
        public_6395cd3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp public_62b8fe0
        public_6395cde : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_62b9040
/*FIXUP public_6395ce9 : nop
        push offset _public_62b7180 @0x6395ce9*/
  FIXUP public_6395ce9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62b7180
        push 4
        push 0x14
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x30
        push eax
        call public_6391dfc
        ret 
        public_6395cff : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x80
        jmp public_62b7250
        public_6395d0d : nop
        mov eax, offset public_63afae4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395cc0)
        ASM_EXPORT_ENTRY_FIRST(0x6395cc8, public_6395cc8)
        ASM_EXPORT_ENTRY(0x6395cd3, public_6395cd3)
        ASM_EXPORT_ENTRY(0x6395cde, public_6395cde)
        ASM_EXPORT_ENTRY(0x6395ce9, public_6395ce9)
        ASM_EXPORT_ENTRY(0x6395cff, public_6395cff)
        ASM_EXPORT_ENTRY_LAST(0x6395d0d, public_6395d0d)
    }
}

#undef public_6395cc8
#undef public_6395cd3
#undef public_6395cde
#undef public_6395ce9
#undef public_6395cff
#undef public_6395d0d

#pragma init_seg(compiler)
extern "C" void const* const public_6395cc8 = __AsmFindLabelExport(&internal_6395cc0, 0x6395cc8);
extern "C" void const* const public_6395cd3 = __AsmFindLabelExport(&internal_6395cc0, 0x6395cd3);
extern "C" void const* const public_6395cde = __AsmFindLabelExport(&internal_6395cc0, 0x6395cde);
extern "C" void const* const public_6395ce9 = __AsmFindLabelExport(&internal_6395cc0, 0x6395ce9);
extern "C" void const* const public_6395cff = __AsmFindLabelExport(&internal_6395cc0, 0x6395cff);
extern "C" void const* const public_6395d0d = __AsmFindLabelExport(&internal_6395cc0, 0x6395d0d);
