#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabc7b _public_6fabc7b
#define public_6fabc86 _public_6fabc86
#define public_6fabc91 _public_6fabc91
#define public_6fabc9c _public_6fabc9c
#define public_6fabca7 _public_6fabca7
#define public_6fabcb2 _public_6fabcb2
#define public_6fabcbd _public_6fabcbd
#define public_6fabcc8 _public_6fabcc8

PROC_DECLARE(0x6fabc70, internal_6fabc70, public_6fabc70);
/* CHUNK of public_6ee8d70 */
extern "C" NAKED register_t __cdecl internal_6fabc70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fabc7b : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fabc86 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fabc91 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fabc9c : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fabca7 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fabcb2 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fabcbd : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fabcc8 : nop
        mov eax, offset public_6fc0880
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabc70)
        ASM_EXPORT_ENTRY_FIRST(0x6fabc7b, public_6fabc7b)
        ASM_EXPORT_ENTRY(0x6fabc86, public_6fabc86)
        ASM_EXPORT_ENTRY(0x6fabc91, public_6fabc91)
        ASM_EXPORT_ENTRY(0x6fabc9c, public_6fabc9c)
        ASM_EXPORT_ENTRY(0x6fabca7, public_6fabca7)
        ASM_EXPORT_ENTRY(0x6fabcb2, public_6fabcb2)
        ASM_EXPORT_ENTRY(0x6fabcbd, public_6fabcbd)
        ASM_EXPORT_ENTRY_LAST(0x6fabcc8, public_6fabcc8)
    }
}

#undef public_6fabc7b
#undef public_6fabc86
#undef public_6fabc91
#undef public_6fabc9c
#undef public_6fabca7
#undef public_6fabcb2
#undef public_6fabcbd
#undef public_6fabcc8

#pragma init_seg(compiler)
extern "C" void const* const public_6fabc7b = __AsmFindLabelExport(&internal_6fabc70, 0x6fabc7b);
extern "C" void const* const public_6fabc86 = __AsmFindLabelExport(&internal_6fabc70, 0x6fabc86);
extern "C" void const* const public_6fabc91 = __AsmFindLabelExport(&internal_6fabc70, 0x6fabc91);
extern "C" void const* const public_6fabc9c = __AsmFindLabelExport(&internal_6fabc70, 0x6fabc9c);
extern "C" void const* const public_6fabca7 = __AsmFindLabelExport(&internal_6fabc70, 0x6fabca7);
extern "C" void const* const public_6fabcb2 = __AsmFindLabelExport(&internal_6fabc70, 0x6fabcb2);
extern "C" void const* const public_6fabcbd = __AsmFindLabelExport(&internal_6fabc70, 0x6fabcbd);
extern "C" void const* const public_6fabcc8 = __AsmFindLabelExport(&internal_6fabc70, 0x6fabcc8);
