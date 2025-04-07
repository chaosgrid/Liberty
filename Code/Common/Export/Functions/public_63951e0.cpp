#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63951f1 _public_63951f1
#define public_63951f9 _public_63951f9
#define public_6395204 _public_6395204
#define public_639520c _public_639520c

PROC_DECLARE(0x63951e0, internal_63951e0, public_63951e0);
/* CHUNK of public_62d4d60 */
extern "C" NAKED register_t __cdecl internal_63951e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_63951f1 : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_62881d0
        public_63951f9 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_62881d0
        public_6395204 : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_62881d0
        public_639520c : nop
        mov eax, offset public_63aec30
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63951e0)
        ASM_EXPORT_ENTRY_FIRST(0x63951f1, public_63951f1)
        ASM_EXPORT_ENTRY(0x63951f9, public_63951f9)
        ASM_EXPORT_ENTRY(0x6395204, public_6395204)
        ASM_EXPORT_ENTRY_LAST(0x639520c, public_639520c)
    }
}

#undef public_63951f1
#undef public_63951f9
#undef public_6395204
#undef public_639520c

#pragma init_seg(compiler)
extern "C" void const* const public_63951f1 = __AsmFindLabelExport(&internal_63951e0, 0x63951f1);
extern "C" void const* const public_63951f9 = __AsmFindLabelExport(&internal_63951e0, 0x63951f9);
extern "C" void const* const public_6395204 = __AsmFindLabelExport(&internal_63951e0, 0x6395204);
extern "C" void const* const public_639520c = __AsmFindLabelExport(&internal_63951e0, 0x639520c);
