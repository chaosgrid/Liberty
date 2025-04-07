#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fadf4b _public_6fadf4b
#define public_6fadf53 _public_6fadf53
#define public_6fadf5e _public_6fadf5e
#define public_6fadf69 _public_6fadf69

PROC_DECLARE(0x6fadf40, internal_6fadf40, public_6fadf40);
/* CHUNK of public_6f22fa0 */
extern "C" NAKED register_t __cdecl internal_6fadf40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3C
        jmp public_6f15350
        public_6fadf4b : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_6f15350
        public_6fadf53 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x58
        jmp public_6ecfa90
        public_6fadf5e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x68
        jmp public_6f28e10
        public_6fadf69 : nop
        mov eax, offset public_6fc2ef8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fadf40)
        ASM_EXPORT_ENTRY_FIRST(0x6fadf4b, public_6fadf4b)
        ASM_EXPORT_ENTRY(0x6fadf53, public_6fadf53)
        ASM_EXPORT_ENTRY(0x6fadf5e, public_6fadf5e)
        ASM_EXPORT_ENTRY_LAST(0x6fadf69, public_6fadf69)
    }
}

#undef public_6fadf4b
#undef public_6fadf53
#undef public_6fadf5e
#undef public_6fadf69

#pragma init_seg(compiler)
extern "C" void const* const public_6fadf4b = __AsmFindLabelExport(&internal_6fadf40, 0x6fadf4b);
extern "C" void const* const public_6fadf53 = __AsmFindLabelExport(&internal_6fadf40, 0x6fadf53);
extern "C" void const* const public_6fadf5e = __AsmFindLabelExport(&internal_6fadf40, 0x6fadf5e);
extern "C" void const* const public_6fadf69 = __AsmFindLabelExport(&internal_6fadf40, 0x6fadf69);
