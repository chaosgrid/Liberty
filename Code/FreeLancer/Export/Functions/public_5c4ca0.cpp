#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_48e5f0);
CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4ca530);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5c4ca8 _public_5c4ca8
#define public_5c4cb4 _public_5c4cb4
#define public_5c4cc2 _public_5c4cc2
#define public_5c4cd0 _public_5c4cd0
#define public_5c4ce6 _public_5c4ce6

PROC_DECLARE(0x5c4ca0, internal_5c4ca0, public_5c4ca0);
/* CHUNK of public_59ae60 */
extern "C" NAKED register_t __cdecl internal_5c4ca0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4b4fd0
        public_5c4ca8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x7C
        jmp dword ptr ds : [public_5c7090]
        public_5c4cb4 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x8C
        jmp public_4ca530
        public_5c4cc2 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x324
        jmp public_48e5f0
/*FIXUP public_5c4cd0 : nop
        push offset _public_420d10 @0x5c4cd0*/
  FIXUP public_5c4cd0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_420d10
        push 4
        push 0x10
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 4
        push eax
        call public_5b7ec6
        ret 
        public_5c4ce6 : nop
        mov eax, offset public_5fe9dc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4ca0)
        ASM_EXPORT_ENTRY_FIRST(0x5c4ca8, public_5c4ca8)
        ASM_EXPORT_ENTRY(0x5c4cb4, public_5c4cb4)
        ASM_EXPORT_ENTRY(0x5c4cc2, public_5c4cc2)
        ASM_EXPORT_ENTRY(0x5c4cd0, public_5c4cd0)
        ASM_EXPORT_ENTRY_LAST(0x5c4ce6, public_5c4ce6)
    }
}

#undef public_5c4ca8
#undef public_5c4cb4
#undef public_5c4cc2
#undef public_5c4cd0
#undef public_5c4ce6

#pragma init_seg(compiler)
extern "C" void const* const public_5c4ca8 = __AsmFindLabelExport(&internal_5c4ca0, 0x5c4ca8);
extern "C" void const* const public_5c4cb4 = __AsmFindLabelExport(&internal_5c4ca0, 0x5c4cb4);
extern "C" void const* const public_5c4cc2 = __AsmFindLabelExport(&internal_5c4ca0, 0x5c4cc2);
extern "C" void const* const public_5c4cd0 = __AsmFindLabelExport(&internal_5c4ca0, 0x5c4cd0);
extern "C" void const* const public_5c4ce6 = __AsmFindLabelExport(&internal_5c4ca0, 0x5c4ce6);
