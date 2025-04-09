#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_442880);
CLANG_FORWARD_PROC_SYMBOL(public_4539e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9f3f _public_5b9f3f
#define public_5b9f4e _public_5b9f4e
#define public_5b9f5c _public_5b9f5c
#define public_5b9f6a _public_5b9f6a
#define public_5b9f78 _public_5b9f78

PROC_DECLARE(0x5b9f30, internal_5b9f30, public_5b9f30);
/* CHUNK of public_454920 */
extern "C" NAKED register_t __cdecl internal_5b9f30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0xD4
        jmp dword ptr ds : [public_5c6098]
        public_5b9f3f : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0xEC
        jmp dword ptr ds : [public_5c6098]
        public_5b9f4e : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0x114
        jmp public_4539e0
        public_5b9f5c : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0x124
        jmp public_442880
        public_5b9f6a : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0x130
        jmp public_442880
        public_5b9f78 : nop
        mov eax, offset public_5f4294
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9f30)
        ASM_EXPORT_ENTRY_FIRST(0x5b9f3f, public_5b9f3f)
        ASM_EXPORT_ENTRY(0x5b9f4e, public_5b9f4e)
        ASM_EXPORT_ENTRY(0x5b9f5c, public_5b9f5c)
        ASM_EXPORT_ENTRY(0x5b9f6a, public_5b9f6a)
        ASM_EXPORT_ENTRY_LAST(0x5b9f78, public_5b9f78)
    }
}

#undef public_5b9f3f
#undef public_5b9f4e
#undef public_5b9f5c
#undef public_5b9f6a
#undef public_5b9f78

#pragma init_seg(compiler)
extern "C" void const* const public_5b9f3f = __AsmFindLabelExport(&internal_5b9f30, 0x5b9f3f);
extern "C" void const* const public_5b9f4e = __AsmFindLabelExport(&internal_5b9f30, 0x5b9f4e);
extern "C" void const* const public_5b9f5c = __AsmFindLabelExport(&internal_5b9f30, 0x5b9f5c);
extern "C" void const* const public_5b9f6a = __AsmFindLabelExport(&internal_5b9f30, 0x5b9f6a);
extern "C" void const* const public_5b9f78 = __AsmFindLabelExport(&internal_5b9f30, 0x5b9f78);
