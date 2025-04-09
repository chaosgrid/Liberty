#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cc50);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc3a8 _public_5bc3a8
#define public_5bc3c2 _public_5bc3c2
#define public_5bc3c9 _public_5bc3c9
#define public_5bc3d1 _public_5bc3d1
#define public_5bc3e0 _public_5bc3e0
#define public_5bc3ee _public_5bc3ee
#define public_5bc3fd _public_5bc3fd

PROC_DECLARE(0x5bc3a0, internal_5bc3a0, public_5bc3a0);
/* CHUNK of public_48b510 */
extern "C" NAKED register_t __cdecl internal_5bc3a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bc3a8 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5bc3c2
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x32C
        mov dword ptr ss : [ebp-0x18], eax
        jmp public_5bc3c9
        public_5bc3c2 : nop
        mov dword ptr ss : [ebp-0x18], 0
        public_5bc3c9 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_576010
        public_5bc3d1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34C
        jmp dword ptr ds : [public_5c7090]
        public_5bc3e0 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x35C
        jmp public_42cc50
        public_5bc3ee : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x37C
        jmp dword ptr ds : [public_5c6098]
        public_5bc3fd : nop
        mov eax, offset public_5f67e0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc3a0)
        ASM_EXPORT_ENTRY_FIRST(0x5bc3a8, public_5bc3a8)
        ASM_EXPORT_ENTRY(0x5bc3c2, public_5bc3c2)
        ASM_EXPORT_ENTRY(0x5bc3c9, public_5bc3c9)
        ASM_EXPORT_ENTRY(0x5bc3d1, public_5bc3d1)
        ASM_EXPORT_ENTRY(0x5bc3e0, public_5bc3e0)
        ASM_EXPORT_ENTRY(0x5bc3ee, public_5bc3ee)
        ASM_EXPORT_ENTRY_LAST(0x5bc3fd, public_5bc3fd)
    }
}

#undef public_5bc3a8
#undef public_5bc3c2
#undef public_5bc3c9
#undef public_5bc3d1
#undef public_5bc3e0
#undef public_5bc3ee
#undef public_5bc3fd

#pragma init_seg(compiler)
extern "C" void const* const public_5bc3a8 = __AsmFindLabelExport(&internal_5bc3a0, 0x5bc3a8);
extern "C" void const* const public_5bc3c2 = __AsmFindLabelExport(&internal_5bc3a0, 0x5bc3c2);
extern "C" void const* const public_5bc3c9 = __AsmFindLabelExport(&internal_5bc3a0, 0x5bc3c9);
extern "C" void const* const public_5bc3d1 = __AsmFindLabelExport(&internal_5bc3a0, 0x5bc3d1);
extern "C" void const* const public_5bc3e0 = __AsmFindLabelExport(&internal_5bc3a0, 0x5bc3e0);
extern "C" void const* const public_5bc3ee = __AsmFindLabelExport(&internal_5bc3a0, 0x5bc3ee);
extern "C" void const* const public_5bc3fd = __AsmFindLabelExport(&internal_5bc3a0, 0x5bc3fd);
