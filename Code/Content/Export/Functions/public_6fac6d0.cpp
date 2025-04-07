#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6ef38e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac6e1 _public_6fac6e1
#define public_6fac6ec _public_6fac6ec
#define public_6fac6fd _public_6fac6fd
#define public_6fac708 _public_6fac708

PROC_DECLARE(0x6fac6d0, internal_6fac6d0, public_6fac6d0);
/* CHUNK of public_6efa340 */
extern "C" NAKED register_t __cdecl internal_6fac6d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fac6e1 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x18
        jmp public_6ef38e0
        public_6fac6ec : nop
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fac6fd : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x2C
        jmp public_6ef6640
        public_6fac708 : nop
        mov eax, offset public_6fc1398
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac6d0)
        ASM_EXPORT_ENTRY_FIRST(0x6fac6e1, public_6fac6e1)
        ASM_EXPORT_ENTRY(0x6fac6ec, public_6fac6ec)
        ASM_EXPORT_ENTRY(0x6fac6fd, public_6fac6fd)
        ASM_EXPORT_ENTRY_LAST(0x6fac708, public_6fac708)
    }
}

#undef public_6fac6e1
#undef public_6fac6ec
#undef public_6fac6fd
#undef public_6fac708

#pragma init_seg(compiler)
extern "C" void const* const public_6fac6e1 = __AsmFindLabelExport(&internal_6fac6d0, 0x6fac6e1);
extern "C" void const* const public_6fac6ec = __AsmFindLabelExport(&internal_6fac6d0, 0x6fac6ec);
extern "C" void const* const public_6fac6fd = __AsmFindLabelExport(&internal_6fac6d0, 0x6fac6fd);
extern "C" void const* const public_6fac708 = __AsmFindLabelExport(&internal_6fac6d0, 0x6fac708);
