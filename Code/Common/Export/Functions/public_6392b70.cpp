#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392b81 _public_6392b81
#define public_6392b8d _public_6392b8d
#define public_6392b9e _public_6392b9e

PROC_DECLARE(0x6392b70, internal_6392b70, public_6392b70);
/* CHUNK of public_6279af0 */
extern "C" NAKED register_t __cdecl internal_6392b70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_6392b81 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_6392b8d : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_6392b9e : nop
        mov eax, offset public_63ab998
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392b70)
        ASM_EXPORT_ENTRY_FIRST(0x6392b81, public_6392b81)
        ASM_EXPORT_ENTRY(0x6392b8d, public_6392b8d)
        ASM_EXPORT_ENTRY_LAST(0x6392b9e, public_6392b9e)
    }
}

#undef public_6392b81
#undef public_6392b8d
#undef public_6392b9e

#pragma init_seg(compiler)
extern "C" void const* const public_6392b81 = __AsmFindLabelExport(&internal_6392b70, 0x6392b81);
extern "C" void const* const public_6392b8d = __AsmFindLabelExport(&internal_6392b70, 0x6392b8d);
extern "C" void const* const public_6392b9e = __AsmFindLabelExport(&internal_6392b70, 0x6392b9e);
