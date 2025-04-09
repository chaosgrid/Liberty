#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5af900);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c57e1 _public_5c57e1
#define public_5c57ed _public_5c57ed
#define public_5c57f8 _public_5c57f8
#define public_5c5803 _public_5c5803

PROC_DECLARE(0x5c57d0, internal_5c57d0, public_5c57d0);
/* CHUNK of public_5af120 */
extern "C" NAKED register_t __cdecl internal_5c57d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5c57e1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_5c7090]
        public_5c57ed : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_5af900
        public_5c57f8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp public_5af900
        public_5c5803 : nop
        mov eax, offset public_5ff5e0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c57d0)
        ASM_EXPORT_ENTRY_FIRST(0x5c57e1, public_5c57e1)
        ASM_EXPORT_ENTRY(0x5c57ed, public_5c57ed)
        ASM_EXPORT_ENTRY(0x5c57f8, public_5c57f8)
        ASM_EXPORT_ENTRY_LAST(0x5c5803, public_5c5803)
    }
}

#undef public_5c57e1
#undef public_5c57ed
#undef public_5c57f8
#undef public_5c5803

#pragma init_seg(compiler)
extern "C" void const* const public_5c57e1 = __AsmFindLabelExport(&internal_5c57d0, 0x5c57e1);
extern "C" void const* const public_5c57ed = __AsmFindLabelExport(&internal_5c57d0, 0x5c57ed);
extern "C" void const* const public_5c57f8 = __AsmFindLabelExport(&internal_5c57d0, 0x5c57f8);
extern "C" void const* const public_5c5803 = __AsmFindLabelExport(&internal_5c57d0, 0x5c5803);
