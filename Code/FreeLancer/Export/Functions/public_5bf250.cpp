#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f4a10);
CLANG_FORWARD_PROC_SYMBOL(public_4f4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf25b _public_5bf25b
#define public_5bf266 _public_5bf266
#define public_5bf272 _public_5bf272
#define public_5bf27e _public_5bf27e
#define public_5bf28c _public_5bf28c
#define public_5bf297 _public_5bf297
#define public_5bf2a3 _public_5bf2a3

PROC_DECLARE(0x5bf250, internal_5bf250, public_5bf250);
/* CHUNK of public_4f42e0 */
extern "C" NAKED register_t __cdecl internal_5bf250()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1CC]
        jmp public_4f4a10
        public_5bf25b : nop
        lea ecx, ss:[ebp-0x1CC]
        jmp public_4f4ab0
        public_5bf266 : nop
        lea ecx, ss:[ebp-0x20C]
        jmp dword ptr ds : [public_5c6098]
        public_5bf272 : nop
        lea ecx, ss:[ebp-0x1E8]
        jmp dword ptr ds : [public_5c6098]
        public_5bf27e : nop
        mov eax, dword ptr ss : [ebp-0x214]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bf28c : nop
        lea ecx, ss:[ebp-0x1CC]
        jmp public_4f4a10
        public_5bf297 : nop
        lea ecx, ss:[ebp-0x130]
        jmp dword ptr ds : [public_5c658c]
        public_5bf2a3 : nop
        mov eax, offset public_5f91b8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf250)
        ASM_EXPORT_ENTRY_FIRST(0x5bf25b, public_5bf25b)
        ASM_EXPORT_ENTRY(0x5bf266, public_5bf266)
        ASM_EXPORT_ENTRY(0x5bf272, public_5bf272)
        ASM_EXPORT_ENTRY(0x5bf27e, public_5bf27e)
        ASM_EXPORT_ENTRY(0x5bf28c, public_5bf28c)
        ASM_EXPORT_ENTRY(0x5bf297, public_5bf297)
        ASM_EXPORT_ENTRY_LAST(0x5bf2a3, public_5bf2a3)
    }
}

#undef public_5bf25b
#undef public_5bf266
#undef public_5bf272
#undef public_5bf27e
#undef public_5bf28c
#undef public_5bf297
#undef public_5bf2a3

#pragma init_seg(compiler)
extern "C" void const* const public_5bf25b = __AsmFindLabelExport(&internal_5bf250, 0x5bf25b);
extern "C" void const* const public_5bf266 = __AsmFindLabelExport(&internal_5bf250, 0x5bf266);
extern "C" void const* const public_5bf272 = __AsmFindLabelExport(&internal_5bf250, 0x5bf272);
extern "C" void const* const public_5bf27e = __AsmFindLabelExport(&internal_5bf250, 0x5bf27e);
extern "C" void const* const public_5bf28c = __AsmFindLabelExport(&internal_5bf250, 0x5bf28c);
extern "C" void const* const public_5bf297 = __AsmFindLabelExport(&internal_5bf250, 0x5bf297);
extern "C" void const* const public_5bf2a3 = __AsmFindLabelExport(&internal_5bf250, 0x5bf2a3);
