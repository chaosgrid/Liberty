#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f89340);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0fbb _public_6fb0fbb
#define public_6fb0fc5 _public_6fb0fc5
#define public_6fb0fd0 _public_6fb0fd0

PROC_DECLARE(0x6fb0fa0, internal_6fb0fa0, public_6fb0fa0);
/* CHUNK of public_6f89230 */
extern "C" NAKED register_t __cdecl internal_6fb0fa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        cmp dword ptr ss : [ebp-0x10], 0
        je public_6fb0fbb
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 4
        mov dword ptr ss : [ebp-0x84], eax
        jmp public_6fb0fc5
        public_6fb0fbb : nop
        mov dword ptr ss : [ebp-0x84], 0
        public_6fb0fc5 : nop
        mov ecx, dword ptr ss : [ebp-0x84]
        jmp public_6f89340
        public_6fb0fd0 : nop
        mov eax, offset public_6fc6510
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0fa0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0fbb, public_6fb0fbb)
        ASM_EXPORT_ENTRY(0x6fb0fc5, public_6fb0fc5)
        ASM_EXPORT_ENTRY_LAST(0x6fb0fd0, public_6fb0fd0)
    }
}

#undef public_6fb0fbb
#undef public_6fb0fc5
#undef public_6fb0fd0

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0fbb = __AsmFindLabelExport(&internal_6fb0fa0, 0x6fb0fbb);
extern "C" void const* const public_6fb0fc5 = __AsmFindLabelExport(&internal_6fb0fa0, 0x6fb0fc5);
extern "C" void const* const public_6fb0fd0 = __AsmFindLabelExport(&internal_6fb0fa0, 0x6fb0fd0);
