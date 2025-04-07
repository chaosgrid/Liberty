#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_629ff20);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63943a8 _public_63943a8
#define public_63943c0 _public_63943c0
#define public_63943c7 _public_63943c7
#define public_63943cf _public_63943cf
#define public_63943da _public_63943da

PROC_DECLARE(0x63943a0, internal_63943a0, public_63943a0);
/* CHUNK of public_62afec0 */
extern "C" NAKED register_t __cdecl internal_63943a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629ff20
        public_63943a8 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_63943c0
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 8
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_63943c7
        public_63943c0 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_63943c7 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6285b90
        public_63943cf : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C
        jmp public_62881d0
        public_63943da : nop
        mov eax, offset public_63ad97c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63943a0)
        ASM_EXPORT_ENTRY_FIRST(0x63943a8, public_63943a8)
        ASM_EXPORT_ENTRY(0x63943c0, public_63943c0)
        ASM_EXPORT_ENTRY(0x63943c7, public_63943c7)
        ASM_EXPORT_ENTRY(0x63943cf, public_63943cf)
        ASM_EXPORT_ENTRY_LAST(0x63943da, public_63943da)
    }
}

#undef public_63943a8
#undef public_63943c0
#undef public_63943c7
#undef public_63943cf
#undef public_63943da

#pragma init_seg(compiler)
extern "C" void const* const public_63943a8 = __AsmFindLabelExport(&internal_63943a0, 0x63943a8);
extern "C" void const* const public_63943c0 = __AsmFindLabelExport(&internal_63943a0, 0x63943c0);
extern "C" void const* const public_63943c7 = __AsmFindLabelExport(&internal_63943a0, 0x63943c7);
extern "C" void const* const public_63943cf = __AsmFindLabelExport(&internal_63943a0, 0x63943cf);
extern "C" void const* const public_63943da = __AsmFindLabelExport(&internal_63943a0, 0x63943da);
