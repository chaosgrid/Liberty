#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8630);
CLANG_FORWARD_PROC_SYMBOL(public_4d42e0);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bdc59 _public_5bdc59
#define public_5bdc64 _public_5bdc64
#define public_5bdc6c _public_5bdc6c
#define public_5bdc77 _public_5bdc77
#define public_5bdc85 _public_5bdc85
#define public_5bdc93 _public_5bdc93

PROC_DECLARE(0x5bdc50, internal_5bdc50, public_5bdc50);
/* CHUNK of public_4cf390 */
extern "C" NAKED register_t __cdecl internal_5bdc50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c62a4]
        public_5bdc59 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_5154f0
        public_5bdc64 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_4c8630
        public_5bdc6c : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x38
        jmp public_59fa50
        public_5bdc77 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x364
        jmp public_576010
        public_5bdc85 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x410
        jmp public_4d42e0
        public_5bdc93 : nop
        mov eax, offset public_5f80d8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bdc50)
        ASM_EXPORT_ENTRY_FIRST(0x5bdc59, public_5bdc59)
        ASM_EXPORT_ENTRY(0x5bdc64, public_5bdc64)
        ASM_EXPORT_ENTRY(0x5bdc6c, public_5bdc6c)
        ASM_EXPORT_ENTRY(0x5bdc77, public_5bdc77)
        ASM_EXPORT_ENTRY(0x5bdc85, public_5bdc85)
        ASM_EXPORT_ENTRY_LAST(0x5bdc93, public_5bdc93)
    }
}

#undef public_5bdc59
#undef public_5bdc64
#undef public_5bdc6c
#undef public_5bdc77
#undef public_5bdc85
#undef public_5bdc93

#pragma init_seg(compiler)
extern "C" void const* const public_5bdc59 = __AsmFindLabelExport(&internal_5bdc50, 0x5bdc59);
extern "C" void const* const public_5bdc64 = __AsmFindLabelExport(&internal_5bdc50, 0x5bdc64);
extern "C" void const* const public_5bdc6c = __AsmFindLabelExport(&internal_5bdc50, 0x5bdc6c);
extern "C" void const* const public_5bdc77 = __AsmFindLabelExport(&internal_5bdc50, 0x5bdc77);
extern "C" void const* const public_5bdc85 = __AsmFindLabelExport(&internal_5bdc50, 0x5bdc85);
extern "C" void const* const public_5bdc93 = __AsmFindLabelExport(&internal_5bdc50, 0x5bdc93);
