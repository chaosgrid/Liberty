#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b7180);
CLANG_FORWARD_PROC_SYMBOL(public_62b7250);
CLANG_FORWARD_PROC_SYMBOL(public_62b8e90);
CLANG_FORWARD_PROC_SYMBOL(public_62b8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_62b9040);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_6395d28 _public_6395d28
#define public_6395d33 _public_6395d33
#define public_6395d3e _public_6395d3e
#define public_6395d49 _public_6395d49
#define public_6395d5f _public_6395d5f
#define public_6395d6d _public_6395d6d

PROC_DECLARE(0x6395d20, internal_6395d20, public_6395d20);
/* CHUNK of public_62ff600 */
extern "C" NAKED register_t __cdecl internal_6395d20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_62b8e90
        public_6395d28 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0xC
        jmp public_62b8e90
        public_6395d33 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x18
        jmp public_62b8fe0
        public_6395d3e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x24
        jmp public_62b9040
/*FIXUP public_6395d49 : nop
        push offset _public_62b7180 @0x6395d49*/
  FIXUP public_6395d49 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62b7180
        push 4
        push 0x14
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x30
        push eax
        call public_6391dfc
        ret 
        public_6395d5f : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x80
        jmp public_62b7250
        public_6395d6d : nop
        mov eax, offset public_63afb30
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395d20)
        ASM_EXPORT_ENTRY_FIRST(0x6395d28, public_6395d28)
        ASM_EXPORT_ENTRY(0x6395d33, public_6395d33)
        ASM_EXPORT_ENTRY(0x6395d3e, public_6395d3e)
        ASM_EXPORT_ENTRY(0x6395d49, public_6395d49)
        ASM_EXPORT_ENTRY(0x6395d5f, public_6395d5f)
        ASM_EXPORT_ENTRY_LAST(0x6395d6d, public_6395d6d)
    }
}

#undef public_6395d28
#undef public_6395d33
#undef public_6395d3e
#undef public_6395d49
#undef public_6395d5f
#undef public_6395d6d

#pragma init_seg(compiler)
extern "C" void const* const public_6395d28 = __AsmFindLabelExport(&internal_6395d20, 0x6395d28);
extern "C" void const* const public_6395d33 = __AsmFindLabelExport(&internal_6395d20, 0x6395d33);
extern "C" void const* const public_6395d3e = __AsmFindLabelExport(&internal_6395d20, 0x6395d3e);
extern "C" void const* const public_6395d49 = __AsmFindLabelExport(&internal_6395d20, 0x6395d49);
extern "C" void const* const public_6395d5f = __AsmFindLabelExport(&internal_6395d20, 0x6395d5f);
extern "C" void const* const public_6395d6d = __AsmFindLabelExport(&internal_6395d20, 0x6395d6d);
