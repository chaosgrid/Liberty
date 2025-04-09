#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_579620);
CLANG_FORWARD_PROC_SYMBOL(public_57b260);
CLANG_FORWARD_PROC_SYMBOL(public_57bb30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3e28 _public_5c3e28
#define public_5c3e42 _public_5c3e42
#define public_5c3e49 _public_5c3e49
#define public_5c3e51 _public_5c3e51
#define public_5c3e5f _public_5c3e5f
#define public_5c3e6e _public_5c3e6e
#define public_5c3e7d _public_5c3e7d
#define public_5c3e8c _public_5c3e8c
#define public_5c3e9a _public_5c3e9a
#define public_5c3ea2 _public_5c3ea2

PROC_DECLARE(0x5c3e20, internal_5c3e20, public_5c3e20);
/* CHUNK of public_57bbf0 */
extern "C" NAKED register_t __cdecl internal_5c3e20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_57b260
        public_5c3e28 : nop
        cmp dword ptr ss : [ebp-0x14], 0
        je public_5c3e42
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0x498
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_5c3e49
        public_5c3e42 : nop
        mov dword ptr ss : [ebp-0x18], 0
        public_5c3e49 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_576010
        public_5c3e51 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C4
        jmp public_4de730
        public_5c3e5f : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4DC
        jmp dword ptr ds : [public_5c62c4]
        public_5c3e6e : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4E8
        jmp dword ptr ds : [public_5c62c4]
        public_5c3e7d : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4FC
        jmp dword ptr ds : [public_5c62c4]
        public_5c3e8c : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x514
        jmp public_57bb30
        public_5c3e9a : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_579620
        public_5c3ea2 : nop
        mov eax, offset public_5fdb24
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3e20)
        ASM_EXPORT_ENTRY_FIRST(0x5c3e28, public_5c3e28)
        ASM_EXPORT_ENTRY(0x5c3e42, public_5c3e42)
        ASM_EXPORT_ENTRY(0x5c3e49, public_5c3e49)
        ASM_EXPORT_ENTRY(0x5c3e51, public_5c3e51)
        ASM_EXPORT_ENTRY(0x5c3e5f, public_5c3e5f)
        ASM_EXPORT_ENTRY(0x5c3e6e, public_5c3e6e)
        ASM_EXPORT_ENTRY(0x5c3e7d, public_5c3e7d)
        ASM_EXPORT_ENTRY(0x5c3e8c, public_5c3e8c)
        ASM_EXPORT_ENTRY(0x5c3e9a, public_5c3e9a)
        ASM_EXPORT_ENTRY_LAST(0x5c3ea2, public_5c3ea2)
    }
}

#undef public_5c3e28
#undef public_5c3e42
#undef public_5c3e49
#undef public_5c3e51
#undef public_5c3e5f
#undef public_5c3e6e
#undef public_5c3e7d
#undef public_5c3e8c
#undef public_5c3e9a
#undef public_5c3ea2

#pragma init_seg(compiler)
extern "C" void const* const public_5c3e28 = __AsmFindLabelExport(&internal_5c3e20, 0x5c3e28);
extern "C" void const* const public_5c3e42 = __AsmFindLabelExport(&internal_5c3e20, 0x5c3e42);
extern "C" void const* const public_5c3e49 = __AsmFindLabelExport(&internal_5c3e20, 0x5c3e49);
extern "C" void const* const public_5c3e51 = __AsmFindLabelExport(&internal_5c3e20, 0x5c3e51);
extern "C" void const* const public_5c3e5f = __AsmFindLabelExport(&internal_5c3e20, 0x5c3e5f);
extern "C" void const* const public_5c3e6e = __AsmFindLabelExport(&internal_5c3e20, 0x5c3e6e);
extern "C" void const* const public_5c3e7d = __AsmFindLabelExport(&internal_5c3e20, 0x5c3e7d);
extern "C" void const* const public_5c3e8c = __AsmFindLabelExport(&internal_5c3e20, 0x5c3e8c);
extern "C" void const* const public_5c3e9a = __AsmFindLabelExport(&internal_5c3e20, 0x5c3e9a);
extern "C" void const* const public_5c3ea2 = __AsmFindLabelExport(&internal_5c3e20, 0x5c3ea2);
