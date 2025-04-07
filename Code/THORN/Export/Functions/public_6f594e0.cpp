#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f594e8 _public_6f594e8
#define public_6f594f4 _public_6f594f4
#define public_6f59500 _public_6f59500

PROC_DECLARE(0x6f594e0, internal_6f594e0, public_6f594e0);
/* CHUNK of public_6f48050 */
extern "C" NAKED register_t __cdecl internal_6f594e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f594e8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x5C
        jmp dword ptr ds : [public_6f5a014]
        public_6f594f4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x6C
        jmp dword ptr ds : [public_6f5a014]
        public_6f59500 : nop
        mov eax, offset public_6f5c6fc
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f594e0)
        ASM_EXPORT_ENTRY_FIRST(0x6f594e8, public_6f594e8)
        ASM_EXPORT_ENTRY(0x6f594f4, public_6f594f4)
        ASM_EXPORT_ENTRY_LAST(0x6f59500, public_6f59500)
    }
}

#undef public_6f594e8
#undef public_6f594f4
#undef public_6f59500

#pragma init_seg(compiler)
extern "C" void const* const public_6f594e8 = __AsmFindLabelExport(&internal_6f594e0, 0x6f594e8);
extern "C" void const* const public_6f594f4 = __AsmFindLabelExport(&internal_6f594e0, 0x6f594f4);
extern "C" void const* const public_6f59500 = __AsmFindLabelExport(&internal_6f594e0, 0x6f59500);
