#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392dc1 _public_6392dc1
#define public_6392dc9 _public_6392dc9

PROC_DECLARE(0x6392db0, internal_6392db0, public_6392db0);
/* CHUNK of public_627f810 */
extern "C" NAKED register_t __cdecl internal_6392db0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_6392dc1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_627e5e0
        public_6392dc9 : nop
        mov eax, offset public_63abcf4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392db0)
        ASM_EXPORT_ENTRY_FIRST(0x6392dc1, public_6392dc1)
        ASM_EXPORT_ENTRY_LAST(0x6392dc9, public_6392dc9)
    }
}

#undef public_6392dc1
#undef public_6392dc9

#pragma init_seg(compiler)
extern "C" void const* const public_6392dc1 = __AsmFindLabelExport(&internal_6392db0, 0x6392dc1);
extern "C" void const* const public_6392dc9 = __AsmFindLabelExport(&internal_6392db0, 0x6392dc9);
