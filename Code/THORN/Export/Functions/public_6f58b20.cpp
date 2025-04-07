#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37d40);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ba30);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bc10);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58b2c _public_6f58b2c
#define public_6f58b37 _public_6f58b37
#define public_6f58b45 _public_6f58b45
#define public_6f58b53 _public_6f58b53
#define public_6f58b61 _public_6f58b61
#define public_6f58b6f _public_6f58b6f
#define public_6f58b7d _public_6f58b7d

PROC_DECLARE(0x6f58b20, internal_6f58b20, public_6f58b20);
/* CHUNK of public_6f37b50 */
extern "C" NAKED register_t __cdecl internal_6f58b20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp dword ptr ds : [public_6f5a014]
        public_6f58b2c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C
        jmp public_6f3ba30
        public_6f58b37 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA4
        jmp public_6f37d40
        public_6f58b45 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xB8
        jmp public_6f3bbd0
        public_6f58b53 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC8
        jmp public_6f3bbd0
        public_6f58b61 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xD8
        jmp public_6f3bbd0
        public_6f58b6f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE8
        jmp public_6f3bc10
        public_6f58b7d : nop
        mov eax, offset public_6f5bd1c
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58b20)
        ASM_EXPORT_ENTRY_FIRST(0x6f58b2c, public_6f58b2c)
        ASM_EXPORT_ENTRY(0x6f58b37, public_6f58b37)
        ASM_EXPORT_ENTRY(0x6f58b45, public_6f58b45)
        ASM_EXPORT_ENTRY(0x6f58b53, public_6f58b53)
        ASM_EXPORT_ENTRY(0x6f58b61, public_6f58b61)
        ASM_EXPORT_ENTRY(0x6f58b6f, public_6f58b6f)
        ASM_EXPORT_ENTRY_LAST(0x6f58b7d, public_6f58b7d)
    }
}

#undef public_6f58b2c
#undef public_6f58b37
#undef public_6f58b45
#undef public_6f58b53
#undef public_6f58b61
#undef public_6f58b6f
#undef public_6f58b7d

#pragma init_seg(compiler)
extern "C" void const* const public_6f58b2c = __AsmFindLabelExport(&internal_6f58b20, 0x6f58b2c);
extern "C" void const* const public_6f58b37 = __AsmFindLabelExport(&internal_6f58b20, 0x6f58b37);
extern "C" void const* const public_6f58b45 = __AsmFindLabelExport(&internal_6f58b20, 0x6f58b45);
extern "C" void const* const public_6f58b53 = __AsmFindLabelExport(&internal_6f58b20, 0x6f58b53);
extern "C" void const* const public_6f58b61 = __AsmFindLabelExport(&internal_6f58b20, 0x6f58b61);
extern "C" void const* const public_6f58b6f = __AsmFindLabelExport(&internal_6f58b20, 0x6f58b6f);
extern "C" void const* const public_6f58b7d = __AsmFindLabelExport(&internal_6f58b20, 0x6f58b7d);
