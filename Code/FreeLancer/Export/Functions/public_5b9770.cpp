#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444080);
CLANG_FORWARD_PROC_SYMBOL(public_5594b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5b9778 _public_5b9778
#define public_5b9787 _public_5b9787
#define public_5b97a1 _public_5b97a1
#define public_5b97b0 _public_5b97b0
#define public_5b97c8 _public_5b97c8

PROC_DECLARE(0x5b9770, internal_5b9770, public_5b9770);
/* CHUNK of public_443ed0 */
extern "C" NAKED register_t __cdecl internal_5b9770()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_5594b0
        public_5b9778 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x154
        jmp dword ptr ds : [public_5c6104]
        public_5b9787 : nop
        mov eax, dword ptr ds : [public_5c61b4]
        push eax
        push 8
        push 0x20
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1F0
        push ecx
        call public_5b7ec6
        ret 
        public_5b97a1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x304
        jmp dword ptr ds : [public_5c61b4]
/*FIXUP public_5b97b0 : nop
        push offset _public_444080 @0x5b97b0*/
  FIXUP public_5b97b0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_444080
        push 5
        push 0xC
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x324
        push eax
        call public_5b7ec6
        ret 
        public_5b97c8 : nop
        mov eax, offset public_5f37fc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9770)
        ASM_EXPORT_ENTRY_FIRST(0x5b9778, public_5b9778)
        ASM_EXPORT_ENTRY(0x5b9787, public_5b9787)
        ASM_EXPORT_ENTRY(0x5b97a1, public_5b97a1)
        ASM_EXPORT_ENTRY(0x5b97b0, public_5b97b0)
        ASM_EXPORT_ENTRY_LAST(0x5b97c8, public_5b97c8)
    }
}

#undef public_5b9778
#undef public_5b9787
#undef public_5b97a1
#undef public_5b97b0
#undef public_5b97c8

#pragma init_seg(compiler)
extern "C" void const* const public_5b9778 = __AsmFindLabelExport(&internal_5b9770, 0x5b9778);
extern "C" void const* const public_5b9787 = __AsmFindLabelExport(&internal_5b9770, 0x5b9787);
extern "C" void const* const public_5b97a1 = __AsmFindLabelExport(&internal_5b9770, 0x5b97a1);
extern "C" void const* const public_5b97b0 = __AsmFindLabelExport(&internal_5b9770, 0x5b97b0);
extern "C" void const* const public_5b97c8 = __AsmFindLabelExport(&internal_5b9770, 0x5b97c8);
