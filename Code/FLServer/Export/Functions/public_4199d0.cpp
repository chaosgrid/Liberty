#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4023c0);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_4199df _public_4199df
#define public_4199ee _public_4199ee
#define public_4199fd _public_4199fd
#define public_419a0c _public_419a0c
#define public_419a1a _public_419a1a

PROC_DECLARE(0x4199d0, internal_4199d0, public_4199d0);
/* CHUNK of public_401440 */
extern "C" NAKED register_t __cdecl internal_4199d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x618
        jmp dword ptr ds : [public_41b87c]
        public_4199df : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x738
        jmp dword ptr ds : [public_41b880]
        public_4199ee : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74C
        jmp dword ptr ds : [public_41b87c]
        public_4199fd : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x75C
        jmp dword ptr ds : [public_41b87c]
        public_419a0c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x770
        jmp public_4023c0
        public_419a1a : nop
        mov eax, offset public_41eaa4
        jmp public_4193c0
        UNREACHABLE_TRAP(0x4199d0)
        ASM_EXPORT_ENTRY_FIRST(0x4199df, public_4199df)
        ASM_EXPORT_ENTRY(0x4199ee, public_4199ee)
        ASM_EXPORT_ENTRY(0x4199fd, public_4199fd)
        ASM_EXPORT_ENTRY(0x419a0c, public_419a0c)
        ASM_EXPORT_ENTRY_LAST(0x419a1a, public_419a1a)
    }
}

#undef public_4199df
#undef public_4199ee
#undef public_4199fd
#undef public_419a0c
#undef public_419a1a

#pragma init_seg(compiler)
extern "C" void const* const public_4199df = __AsmFindLabelExport(&internal_4199d0, 0x4199df);
extern "C" void const* const public_4199ee = __AsmFindLabelExport(&internal_4199d0, 0x4199ee);
extern "C" void const* const public_4199fd = __AsmFindLabelExport(&internal_4199d0, 0x4199fd);
extern "C" void const* const public_419a0c = __AsmFindLabelExport(&internal_4199d0, 0x419a0c);
extern "C" void const* const public_419a1a = __AsmFindLabelExport(&internal_4199d0, 0x419a1a);
