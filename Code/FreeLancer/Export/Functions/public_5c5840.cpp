#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c5851 _public_5c5851
#define public_5c585a _public_5c585a
#define public_5c5865 _public_5c5865
#define public_5c5871 _public_5c5871
#define public_5c587d _public_5c587d
#define public_5c5889 _public_5c5889

PROC_DECLARE(0x5c5840, internal_5c5840, public_5c5840);
/* CHUNK of public_5af3b0 */
extern "C" NAKED register_t __cdecl internal_5c5840()
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
        public_5c5851 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c7058]
        public_5c585a : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp public_4de730
        public_5c5865 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x44
        jmp dword ptr ds : [public_5c7058]
        public_5c5871 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x54
        jmp dword ptr ds : [public_5c7058]
        public_5c587d : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp dword ptr ds : [public_5c7090]
        public_5c5889 : nop
        mov eax, offset public_5ff658
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5840)
        ASM_EXPORT_ENTRY_FIRST(0x5c5851, public_5c5851)
        ASM_EXPORT_ENTRY(0x5c585a, public_5c585a)
        ASM_EXPORT_ENTRY(0x5c5865, public_5c5865)
        ASM_EXPORT_ENTRY(0x5c5871, public_5c5871)
        ASM_EXPORT_ENTRY(0x5c587d, public_5c587d)
        ASM_EXPORT_ENTRY_LAST(0x5c5889, public_5c5889)
    }
}

#undef public_5c5851
#undef public_5c585a
#undef public_5c5865
#undef public_5c5871
#undef public_5c587d
#undef public_5c5889

#pragma init_seg(compiler)
extern "C" void const* const public_5c5851 = __AsmFindLabelExport(&internal_5c5840, 0x5c5851);
extern "C" void const* const public_5c585a = __AsmFindLabelExport(&internal_5c5840, 0x5c585a);
extern "C" void const* const public_5c5865 = __AsmFindLabelExport(&internal_5c5840, 0x5c5865);
extern "C" void const* const public_5c5871 = __AsmFindLabelExport(&internal_5c5840, 0x5c5871);
extern "C" void const* const public_5c587d = __AsmFindLabelExport(&internal_5c5840, 0x5c587d);
extern "C" void const* const public_5c5889 = __AsmFindLabelExport(&internal_5c5840, 0x5c5889);
