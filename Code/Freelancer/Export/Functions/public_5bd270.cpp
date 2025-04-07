#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_477da0);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd27b _public_5bd27b
#define public_5bd283 _public_5bd283
#define public_5bd291 _public_5bd291
#define public_5bd2a0 _public_5bd2a0

PROC_DECLARE(0x5bd270, internal_5bd270, public_5bd270);
/* CHUNK of public_4b7270 */
extern "C" NAKED register_t __cdecl internal_5bd270()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd27b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_477da0
        public_5bd283 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x974
        jmp public_576010
        public_5bd291 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x978
        jmp dword ptr ds : [public_5c60fc]
        public_5bd2a0 : nop
        mov eax, offset public_5f7568
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd270)
        ASM_EXPORT_ENTRY_FIRST(0x5bd27b, public_5bd27b)
        ASM_EXPORT_ENTRY(0x5bd283, public_5bd283)
        ASM_EXPORT_ENTRY(0x5bd291, public_5bd291)
        ASM_EXPORT_ENTRY_LAST(0x5bd2a0, public_5bd2a0)
    }
}

#undef public_5bd27b
#undef public_5bd283
#undef public_5bd291
#undef public_5bd2a0

#pragma init_seg(compiler)
extern "C" void const* const public_5bd27b = __AsmFindLabelExport(&internal_5bd270, 0x5bd27b);
extern "C" void const* const public_5bd283 = __AsmFindLabelExport(&internal_5bd270, 0x5bd283);
extern "C" void const* const public_5bd291 = __AsmFindLabelExport(&internal_5bd270, 0x5bd291);
extern "C" void const* const public_5bd2a0 = __AsmFindLabelExport(&internal_5bd270, 0x5bd2a0);
