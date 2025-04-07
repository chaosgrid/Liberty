#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46d40);
CLANG_FORWARD_PROC_SYMBOL(public_6f46e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faee28 _public_6faee28
#define public_6faee33 _public_6faee33
#define public_6faee3e _public_6faee3e
#define public_6faee49 _public_6faee49
#define public_6faee54 _public_6faee54
#define public_6faee5f _public_6faee5f

PROC_DECLARE(0x6faee20, internal_6faee20, public_6faee20);
/* CHUNK of public_6f46ee0 */
extern "C" NAKED register_t __cdecl internal_6faee20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6f46d40
        public_6faee28 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x14
        jmp public_6f46e00
        public_6faee33 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x28
        jmp public_6f46e00
        public_6faee3e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x3C
        jmp public_6f46e00
        public_6faee49 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x58
        jmp public_6eec8d0
        public_6faee54 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x68
        jmp public_6eec8d0
        public_6faee5f : nop
        mov eax, offset public_6fc3de4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faee20)
        ASM_EXPORT_ENTRY_FIRST(0x6faee28, public_6faee28)
        ASM_EXPORT_ENTRY(0x6faee33, public_6faee33)
        ASM_EXPORT_ENTRY(0x6faee3e, public_6faee3e)
        ASM_EXPORT_ENTRY(0x6faee49, public_6faee49)
        ASM_EXPORT_ENTRY(0x6faee54, public_6faee54)
        ASM_EXPORT_ENTRY_LAST(0x6faee5f, public_6faee5f)
    }
}

#undef public_6faee28
#undef public_6faee33
#undef public_6faee3e
#undef public_6faee49
#undef public_6faee54
#undef public_6faee5f

#pragma init_seg(compiler)
extern "C" void const* const public_6faee28 = __AsmFindLabelExport(&internal_6faee20, 0x6faee28);
extern "C" void const* const public_6faee33 = __AsmFindLabelExport(&internal_6faee20, 0x6faee33);
extern "C" void const* const public_6faee3e = __AsmFindLabelExport(&internal_6faee20, 0x6faee3e);
extern "C" void const* const public_6faee49 = __AsmFindLabelExport(&internal_6faee20, 0x6faee49);
extern "C" void const* const public_6faee54 = __AsmFindLabelExport(&internal_6faee20, 0x6faee54);
extern "C" void const* const public_6faee5f = __AsmFindLabelExport(&internal_6faee20, 0x6faee5f);
