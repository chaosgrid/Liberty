#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6315b30);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63969e1 _public_63969e1
#define public_63969ed _public_63969ed
#define public_63969f8 _public_63969f8
#define public_6396a04 _public_6396a04
#define public_6396a0f _public_6396a0f
#define public_6396a1b _public_6396a1b

PROC_DECLARE(0x63969d0, internal_63969d0, public_63969d0);
/* CHUNK of public_631a340 */
extern "C" NAKED register_t __cdecl internal_63969d0()
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
        public_63969e1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_63991ac]
        public_63969ed : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_6315b30
        public_63969f8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp dword ptr ds : [public_63991ac]
        public_6396a04 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34
        jmp public_6315b30
        public_6396a0f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x44
        jmp dword ptr ds : [public_63991ac]
        public_6396a1b : nop
        mov eax, offset public_63b08d8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63969d0)
        ASM_EXPORT_ENTRY_FIRST(0x63969e1, public_63969e1)
        ASM_EXPORT_ENTRY(0x63969ed, public_63969ed)
        ASM_EXPORT_ENTRY(0x63969f8, public_63969f8)
        ASM_EXPORT_ENTRY(0x6396a04, public_6396a04)
        ASM_EXPORT_ENTRY(0x6396a0f, public_6396a0f)
        ASM_EXPORT_ENTRY_LAST(0x6396a1b, public_6396a1b)
    }
}

#undef public_63969e1
#undef public_63969ed
#undef public_63969f8
#undef public_6396a04
#undef public_6396a0f
#undef public_6396a1b

#pragma init_seg(compiler)
extern "C" void const* const public_63969e1 = __AsmFindLabelExport(&internal_63969d0, 0x63969e1);
extern "C" void const* const public_63969ed = __AsmFindLabelExport(&internal_63969d0, 0x63969ed);
extern "C" void const* const public_63969f8 = __AsmFindLabelExport(&internal_63969d0, 0x63969f8);
extern "C" void const* const public_6396a04 = __AsmFindLabelExport(&internal_63969d0, 0x6396a04);
extern "C" void const* const public_6396a0f = __AsmFindLabelExport(&internal_63969d0, 0x6396a0f);
extern "C" void const* const public_6396a1b = __AsmFindLabelExport(&internal_63969d0, 0x6396a1b);
