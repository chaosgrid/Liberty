#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_48e5f0);
CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4ca530);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5c4c58 _public_5c4c58
#define public_5c4c64 _public_5c4c64
#define public_5c4c7a _public_5c4c7a
#define public_5c4c88 _public_5c4c88
#define public_5c4c96 _public_5c4c96

PROC_DECLARE(0x5c4c50, internal_5c4c50, public_5c4c50);
/* CHUNK of public_59aca0 */
extern "C" NAKED register_t __cdecl internal_5c4c50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4b4fd0
        public_5c4c58 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x7C
        jmp dword ptr ds : [public_5c7090]
/*FIXUP public_5c4c64 : nop
        push offset _public_420d10 @0x5c4c64*/
  FIXUP public_5c4c64 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_420d10
        push 4
        push 0x10
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 4
        push eax
        call public_5b7ec6
        ret 
        public_5c4c7a : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x8C
        jmp public_4ca530
        public_5c4c88 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x324
        jmp public_48e5f0
        public_5c4c96 : nop
        mov eax, offset public_5fe998
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4c50)
        ASM_EXPORT_ENTRY_FIRST(0x5c4c58, public_5c4c58)
        ASM_EXPORT_ENTRY(0x5c4c64, public_5c4c64)
        ASM_EXPORT_ENTRY(0x5c4c7a, public_5c4c7a)
        ASM_EXPORT_ENTRY(0x5c4c88, public_5c4c88)
        ASM_EXPORT_ENTRY_LAST(0x5c4c96, public_5c4c96)
    }
}

#undef public_5c4c58
#undef public_5c4c64
#undef public_5c4c7a
#undef public_5c4c88
#undef public_5c4c96

#pragma init_seg(compiler)
extern "C" void const* const public_5c4c58 = __AsmFindLabelExport(&internal_5c4c50, 0x5c4c58);
extern "C" void const* const public_5c4c64 = __AsmFindLabelExport(&internal_5c4c50, 0x5c4c64);
extern "C" void const* const public_5c4c7a = __AsmFindLabelExport(&internal_5c4c50, 0x5c4c7a);
extern "C" void const* const public_5c4c88 = __AsmFindLabelExport(&internal_5c4c50, 0x5c4c88);
extern "C" void const* const public_5c4c96 = __AsmFindLabelExport(&internal_5c4c50, 0x5c4c96);
