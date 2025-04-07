#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a950);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59248 _public_6f59248
#define public_6f59256 _public_6f59256

PROC_DECLARE(0x6f59240, internal_6f59240, public_6f59240);
/* CHUNK of public_6f43450 */
extern "C" NAKED register_t __cdecl internal_6f59240()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f405e0
        public_6f59248 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xCC
        jmp public_6f4a950
        public_6f59256 : nop
        mov eax, offset public_6f5c400
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59240)
        ASM_EXPORT_ENTRY_FIRST(0x6f59248, public_6f59248)
        ASM_EXPORT_ENTRY_LAST(0x6f59256, public_6f59256)
    }
}

#undef public_6f59248
#undef public_6f59256

#pragma init_seg(compiler)
extern "C" void const* const public_6f59248 = __AsmFindLabelExport(&internal_6f59240, 0x6f59248);
extern "C" void const* const public_6f59256 = __AsmFindLabelExport(&internal_6f59240, 0x6f59256);
