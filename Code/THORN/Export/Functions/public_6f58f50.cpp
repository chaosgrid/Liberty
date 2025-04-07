#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4a760);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a780);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58f5b _public_6f58f5b
#define public_6f58f66 _public_6f58f66
#define public_6f58f72 _public_6f58f72
#define public_6f58f7e _public_6f58f7e

PROC_DECLARE(0x6f58f50, internal_6f58f50, public_6f58f50);
/* CHUNK of public_6f405e0 */
extern "C" NAKED register_t __cdecl internal_6f58f50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x10
        jmp public_6f4a760
        public_6f58f5b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x14
        jmp public_6f4a780
        public_6f58f66 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x18
        jmp dword ptr ds : [public_6f5a014]
        public_6f58f72 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp dword ptr ds : [public_6f5a014]
        public_6f58f7e : nop
        mov eax, offset public_6f5c118
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58f50)
        ASM_EXPORT_ENTRY_FIRST(0x6f58f5b, public_6f58f5b)
        ASM_EXPORT_ENTRY(0x6f58f66, public_6f58f66)
        ASM_EXPORT_ENTRY(0x6f58f72, public_6f58f72)
        ASM_EXPORT_ENTRY_LAST(0x6f58f7e, public_6f58f7e)
    }
}

#undef public_6f58f5b
#undef public_6f58f66
#undef public_6f58f72
#undef public_6f58f7e

#pragma init_seg(compiler)
extern "C" void const* const public_6f58f5b = __AsmFindLabelExport(&internal_6f58f50, 0x6f58f5b);
extern "C" void const* const public_6f58f66 = __AsmFindLabelExport(&internal_6f58f50, 0x6f58f66);
extern "C" void const* const public_6f58f72 = __AsmFindLabelExport(&internal_6f58f50, 0x6f58f72);
extern "C" void const* const public_6f58f7e = __AsmFindLabelExport(&internal_6f58f50, 0x6f58f7e);
