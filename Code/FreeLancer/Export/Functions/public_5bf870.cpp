#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_502e00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5bf87e _public_5bf87e
#define public_5bf88c _public_5bf88c
#define public_5bf89a _public_5bf89a
#define public_5bf8a8 _public_5bf8a8
#define public_5bf8b6 _public_5bf8b6
#define public_5bf8c4 _public_5bf8c4
#define public_5bf8dd _public_5bf8dd

PROC_DECLARE(0x5bf870, internal_5bf870, public_5bf870);
/* CHUNK of public_503440 */
extern "C" NAKED register_t __cdecl internal_5bf870()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x88]
        add ecx, 0x28
        jmp public_502d90
        public_5bf87e : nop
        mov ecx, dword ptr ss : [ebp-0x88]
        add ecx, 0x38
        jmp public_502d90
        public_5bf88c : nop
        mov ecx, dword ptr ss : [ebp-0x88]
        add ecx, 0x48
        jmp public_502d90
        public_5bf89a : nop
        mov ecx, dword ptr ss : [ebp-0x88]
        add ecx, 0x58
        jmp public_502d90
        public_5bf8a8 : nop
        mov eax, dword ptr ss : [ebp-0xA0]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bf8b6 : nop
        mov ecx, dword ptr ss : [ebp-0xA0]
        add ecx, 0x1C
        jmp public_502d90
/*FIXUP public_5bf8c4 : nop
        push offset _public_502e00 @0x5bf8c4*/
  FIXUP public_5bf8c4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_502e00
        push 5
        push 0x24
        mov eax, dword ptr ss : [ebp-0xA0]
        add eax, 0x2C
        push eax
        call public_5b7ec6
        ret 
        public_5bf8dd : nop
        mov eax, offset public_5f9838
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf870)
        ASM_EXPORT_ENTRY_FIRST(0x5bf87e, public_5bf87e)
        ASM_EXPORT_ENTRY(0x5bf88c, public_5bf88c)
        ASM_EXPORT_ENTRY(0x5bf89a, public_5bf89a)
        ASM_EXPORT_ENTRY(0x5bf8a8, public_5bf8a8)
        ASM_EXPORT_ENTRY(0x5bf8b6, public_5bf8b6)
        ASM_EXPORT_ENTRY(0x5bf8c4, public_5bf8c4)
        ASM_EXPORT_ENTRY_LAST(0x5bf8dd, public_5bf8dd)
    }
}

#undef public_5bf87e
#undef public_5bf88c
#undef public_5bf89a
#undef public_5bf8a8
#undef public_5bf8b6
#undef public_5bf8c4
#undef public_5bf8dd

#pragma init_seg(compiler)
extern "C" void const* const public_5bf87e = __AsmFindLabelExport(&internal_5bf870, 0x5bf87e);
extern "C" void const* const public_5bf88c = __AsmFindLabelExport(&internal_5bf870, 0x5bf88c);
extern "C" void const* const public_5bf89a = __AsmFindLabelExport(&internal_5bf870, 0x5bf89a);
extern "C" void const* const public_5bf8a8 = __AsmFindLabelExport(&internal_5bf870, 0x5bf8a8);
extern "C" void const* const public_5bf8b6 = __AsmFindLabelExport(&internal_5bf870, 0x5bf8b6);
extern "C" void const* const public_5bf8c4 = __AsmFindLabelExport(&internal_5bf870, 0x5bf8c4);
extern "C" void const* const public_5bf8dd = __AsmFindLabelExport(&internal_5bf870, 0x5bf8dd);
