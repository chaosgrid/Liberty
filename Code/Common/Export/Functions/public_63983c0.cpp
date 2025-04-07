#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63983cb _public_63983cb
#define public_63983d6 _public_63983d6
#define public_63983e1 _public_63983e1
#define public_63983ec _public_63983ec
#define public_63983f7 _public_63983f7

PROC_DECLARE(0x63983c0, internal_63983c0, public_63983c0);
/* CHUNK of public_63615a0 */
extern "C" NAKED register_t __cdecl internal_63983c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_63449d0
        public_63983cb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp public_63449d0
        public_63983d6 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63983e1 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63983ec : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63983f7 : nop
        mov eax, offset public_63b28c8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63983c0)
        ASM_EXPORT_ENTRY_FIRST(0x63983cb, public_63983cb)
        ASM_EXPORT_ENTRY(0x63983d6, public_63983d6)
        ASM_EXPORT_ENTRY(0x63983e1, public_63983e1)
        ASM_EXPORT_ENTRY(0x63983ec, public_63983ec)
        ASM_EXPORT_ENTRY_LAST(0x63983f7, public_63983f7)
    }
}

#undef public_63983cb
#undef public_63983d6
#undef public_63983e1
#undef public_63983ec
#undef public_63983f7

#pragma init_seg(compiler)
extern "C" void const* const public_63983cb = __AsmFindLabelExport(&internal_63983c0, 0x63983cb);
extern "C" void const* const public_63983d6 = __AsmFindLabelExport(&internal_63983c0, 0x63983d6);
extern "C" void const* const public_63983e1 = __AsmFindLabelExport(&internal_63983c0, 0x63983e1);
extern "C" void const* const public_63983ec = __AsmFindLabelExport(&internal_63983c0, 0x63983ec);
extern "C" void const* const public_63983f7 = __AsmFindLabelExport(&internal_63983c0, 0x63983f7);
