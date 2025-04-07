#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4023c0);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419a3f _public_419a3f
#define public_419a4e _public_419a4e
#define public_419a5d _public_419a5d
#define public_419a6c _public_419a6c
#define public_419a7a _public_419a7a

PROC_DECLARE(0x419a30, internal_419a30, public_419a30);
/* CHUNK of public_401730 */
extern "C" NAKED register_t __cdecl internal_419a30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x618
        jmp dword ptr ds : [public_41b87c]
        public_419a3f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x738
        jmp dword ptr ds : [public_41b880]
        public_419a4e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74C
        jmp dword ptr ds : [public_41b87c]
        public_419a5d : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x75C
        jmp dword ptr ds : [public_41b87c]
        public_419a6c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x770
        jmp public_4023c0
        public_419a7a : nop
        mov eax, offset public_41eae8
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419a30)
        ASM_EXPORT_ENTRY_FIRST(0x419a3f, public_419a3f)
        ASM_EXPORT_ENTRY(0x419a4e, public_419a4e)
        ASM_EXPORT_ENTRY(0x419a5d, public_419a5d)
        ASM_EXPORT_ENTRY(0x419a6c, public_419a6c)
        ASM_EXPORT_ENTRY_LAST(0x419a7a, public_419a7a)
    }
}

#undef public_419a3f
#undef public_419a4e
#undef public_419a5d
#undef public_419a6c
#undef public_419a7a

#pragma init_seg(compiler)
extern "C" void const* const public_419a3f = __AsmFindLabelExport(&internal_419a30, 0x419a3f);
extern "C" void const* const public_419a4e = __AsmFindLabelExport(&internal_419a30, 0x419a4e);
extern "C" void const* const public_419a5d = __AsmFindLabelExport(&internal_419a30, 0x419a5d);
extern "C" void const* const public_419a6c = __AsmFindLabelExport(&internal_419a30, 0x419a6c);
extern "C" void const* const public_419a7a = __AsmFindLabelExport(&internal_419a30, 0x419a7a);
