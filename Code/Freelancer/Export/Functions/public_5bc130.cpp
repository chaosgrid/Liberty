#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_488be0);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5a1fe0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc138 _public_5bc138
#define public_5bc152 _public_5bc152
#define public_5bc159 _public_5bc159
#define public_5bc161 _public_5bc161
#define public_5bc16f _public_5bc16f
#define public_5bc17e _public_5bc17e
#define public_5bc18c _public_5bc18c
#define public_5bc198 _public_5bc198

PROC_DECLARE(0x5bc130, internal_5bc130, public_5bc130);
/* CHUNK of public_485a60 */
extern "C" NAKED register_t __cdecl internal_5bc130()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bc138 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5bc152
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x32C
        mov dword ptr ss : [ebp-0x1C], eax
        jmp public_5bc159
        public_5bc152 : nop
        mov dword ptr ss : [ebp-0x1C], 0
        public_5bc159 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_576010
        public_5bc161 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x340
        jmp public_488be0
        public_5bc16f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x350
        jmp dword ptr ds : [public_5c7058]
        public_5bc17e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x5DC
        jmp public_5a1fe0
        public_5bc18c : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 4
        jmp dword ptr ds : [public_5c7058]
        public_5bc198 : nop
        mov eax, offset public_5f6584
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc130)
        ASM_EXPORT_ENTRY_FIRST(0x5bc138, public_5bc138)
        ASM_EXPORT_ENTRY(0x5bc152, public_5bc152)
        ASM_EXPORT_ENTRY(0x5bc159, public_5bc159)
        ASM_EXPORT_ENTRY(0x5bc161, public_5bc161)
        ASM_EXPORT_ENTRY(0x5bc16f, public_5bc16f)
        ASM_EXPORT_ENTRY(0x5bc17e, public_5bc17e)
        ASM_EXPORT_ENTRY(0x5bc18c, public_5bc18c)
        ASM_EXPORT_ENTRY_LAST(0x5bc198, public_5bc198)
    }
}

#undef public_5bc138
#undef public_5bc152
#undef public_5bc159
#undef public_5bc161
#undef public_5bc16f
#undef public_5bc17e
#undef public_5bc18c
#undef public_5bc198

#pragma init_seg(compiler)
extern "C" void const* const public_5bc138 = __AsmFindLabelExport(&internal_5bc130, 0x5bc138);
extern "C" void const* const public_5bc152 = __AsmFindLabelExport(&internal_5bc130, 0x5bc152);
extern "C" void const* const public_5bc159 = __AsmFindLabelExport(&internal_5bc130, 0x5bc159);
extern "C" void const* const public_5bc161 = __AsmFindLabelExport(&internal_5bc130, 0x5bc161);
extern "C" void const* const public_5bc16f = __AsmFindLabelExport(&internal_5bc130, 0x5bc16f);
extern "C" void const* const public_5bc17e = __AsmFindLabelExport(&internal_5bc130, 0x5bc17e);
extern "C" void const* const public_5bc18c = __AsmFindLabelExport(&internal_5bc130, 0x5bc18c);
extern "C" void const* const public_5bc198 = __AsmFindLabelExport(&internal_5bc130, 0x5bc198);
