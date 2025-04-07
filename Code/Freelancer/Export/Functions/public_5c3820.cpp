#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_575590);
CLANG_FORWARD_PROC_SYMBOL(public_591ba0);
CLANG_FORWARD_PROC_SYMBOL(public_591ef0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3828 _public_5c3828
#define public_5c3836 _public_5c3836
#define public_5c3844 _public_5c3844
#define public_5c3852 _public_5c3852
#define public_5c3860 _public_5c3860
#define public_5c386e _public_5c386e
#define public_5c387c _public_5c387c
#define public_5c388b _public_5c388b

PROC_DECLARE(0x5c3820, internal_5c3820, public_5c3820);
/* CHUNK of public_5726c0 */
extern "C" NAKED register_t __cdecl internal_5c3820()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_591ba0
        public_5c3828 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x8C
        jmp public_591ef0
        public_5c3836 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE0
        jmp public_575590
        public_5c3844 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE4
        jmp public_575590
        public_5c3852 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE8
        jmp public_575590
        public_5c3860 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xEC
        jmp public_575590
        public_5c386e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xF0
        jmp public_575590
        public_5c387c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xF4
        jmp dword ptr ds : [public_5c62c4]
        public_5c388b : nop
        mov eax, offset public_5fd560
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3820)
        ASM_EXPORT_ENTRY_FIRST(0x5c3828, public_5c3828)
        ASM_EXPORT_ENTRY(0x5c3836, public_5c3836)
        ASM_EXPORT_ENTRY(0x5c3844, public_5c3844)
        ASM_EXPORT_ENTRY(0x5c3852, public_5c3852)
        ASM_EXPORT_ENTRY(0x5c3860, public_5c3860)
        ASM_EXPORT_ENTRY(0x5c386e, public_5c386e)
        ASM_EXPORT_ENTRY(0x5c387c, public_5c387c)
        ASM_EXPORT_ENTRY_LAST(0x5c388b, public_5c388b)
    }
}

#undef public_5c3828
#undef public_5c3836
#undef public_5c3844
#undef public_5c3852
#undef public_5c3860
#undef public_5c386e
#undef public_5c387c
#undef public_5c388b

#pragma init_seg(compiler)
extern "C" void const* const public_5c3828 = __AsmFindLabelExport(&internal_5c3820, 0x5c3828);
extern "C" void const* const public_5c3836 = __AsmFindLabelExport(&internal_5c3820, 0x5c3836);
extern "C" void const* const public_5c3844 = __AsmFindLabelExport(&internal_5c3820, 0x5c3844);
extern "C" void const* const public_5c3852 = __AsmFindLabelExport(&internal_5c3820, 0x5c3852);
extern "C" void const* const public_5c3860 = __AsmFindLabelExport(&internal_5c3820, 0x5c3860);
extern "C" void const* const public_5c386e = __AsmFindLabelExport(&internal_5c3820, 0x5c386e);
extern "C" void const* const public_5c387c = __AsmFindLabelExport(&internal_5c3820, 0x5c387c);
extern "C" void const* const public_5c388b = __AsmFindLabelExport(&internal_5c3820, 0x5c388b);
