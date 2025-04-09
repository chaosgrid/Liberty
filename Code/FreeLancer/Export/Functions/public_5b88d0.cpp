#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_416490);
CLANG_FORWARD_PROC_SYMBOL(public_417e50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b88dc _public_5b88dc
#define public_5b88e7 _public_5b88e7
#define public_5b88f2 _public_5b88f2
#define public_5b88fd _public_5b88fd
#define public_5b8909 _public_5b8909
#define public_5b8915 _public_5b8915

PROC_DECLARE(0x5b88d0, internal_5b88d0, public_5b88d0);
/* CHUNK of public_417800 */
extern "C" NAKED register_t __cdecl internal_5b88d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1678]
        jmp dword ptr ds : [public_5c6048]
        public_5b88dc : nop
        lea ecx, ss:[ebp-0x17E8]
        jmp public_416490
        public_5b88e7 : nop
        lea ecx, ss:[ebp-0x168C]
        jmp public_417e50
        public_5b88f2 : nop
        lea ecx, ss:[ebp-0x1678]
        jmp public_40edf0
        public_5b88fd : nop
        mov ecx, dword ptr ss : [ebp-0x1900]
        jmp dword ptr ds : [public_5c7090]
        public_5b8909 : nop
        lea ecx, ss:[ebp-0x1678]
        jmp dword ptr ds : [public_5c7090]
        public_5b8915 : nop
        mov eax, offset public_5f2764
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b88d0)
        ASM_EXPORT_ENTRY_FIRST(0x5b88dc, public_5b88dc)
        ASM_EXPORT_ENTRY(0x5b88e7, public_5b88e7)
        ASM_EXPORT_ENTRY(0x5b88f2, public_5b88f2)
        ASM_EXPORT_ENTRY(0x5b88fd, public_5b88fd)
        ASM_EXPORT_ENTRY(0x5b8909, public_5b8909)
        ASM_EXPORT_ENTRY_LAST(0x5b8915, public_5b8915)
    }
}

#undef public_5b88dc
#undef public_5b88e7
#undef public_5b88f2
#undef public_5b88fd
#undef public_5b8909
#undef public_5b8915

#pragma init_seg(compiler)
extern "C" void const* const public_5b88dc = __AsmFindLabelExport(&internal_5b88d0, 0x5b88dc);
extern "C" void const* const public_5b88e7 = __AsmFindLabelExport(&internal_5b88d0, 0x5b88e7);
extern "C" void const* const public_5b88f2 = __AsmFindLabelExport(&internal_5b88d0, 0x5b88f2);
extern "C" void const* const public_5b88fd = __AsmFindLabelExport(&internal_5b88d0, 0x5b88fd);
extern "C" void const* const public_5b8909 = __AsmFindLabelExport(&internal_5b88d0, 0x5b8909);
extern "C" void const* const public_5b8915 = __AsmFindLabelExport(&internal_5b88d0, 0x5b8915);
