#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62c3040);
CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394e48 _public_6394e48
#define public_6394e53 _public_6394e53
#define public_6394e5e _public_6394e5e
#define public_6394e6c _public_6394e6c
#define public_6394e7a _public_6394e7a

PROC_DECLARE(0x6394e40, internal_6394e40, public_6394e40);
/* CHUNK of public_62cb3b0 */
extern "C" NAKED register_t __cdecl internal_6394e40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394e48 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_62881d0
        public_6394e53 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34
        jmp public_62c3040
        public_6394e5e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x90
        jmp public_62c3040
        public_6394e6c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x150
        jmp public_62c3040
        public_6394e7a : nop
        mov eax, offset public_63ae530
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394e40)
        ASM_EXPORT_ENTRY_FIRST(0x6394e48, public_6394e48)
        ASM_EXPORT_ENTRY(0x6394e53, public_6394e53)
        ASM_EXPORT_ENTRY(0x6394e5e, public_6394e5e)
        ASM_EXPORT_ENTRY(0x6394e6c, public_6394e6c)
        ASM_EXPORT_ENTRY_LAST(0x6394e7a, public_6394e7a)
    }
}

#undef public_6394e48
#undef public_6394e53
#undef public_6394e5e
#undef public_6394e6c
#undef public_6394e7a

#pragma init_seg(compiler)
extern "C" void const* const public_6394e48 = __AsmFindLabelExport(&internal_6394e40, 0x6394e48);
extern "C" void const* const public_6394e53 = __AsmFindLabelExport(&internal_6394e40, 0x6394e53);
extern "C" void const* const public_6394e5e = __AsmFindLabelExport(&internal_6394e40, 0x6394e5e);
extern "C" void const* const public_6394e6c = __AsmFindLabelExport(&internal_6394e40, 0x6394e6c);
extern "C" void const* const public_6394e7a = __AsmFindLabelExport(&internal_6394e40, 0x6394e7a);
