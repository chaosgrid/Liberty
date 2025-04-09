#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_538f50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0a1c _public_5c0a1c
#define public_5c0a2a _public_5c0a2a
#define public_5c0a35 _public_5c0a35
#define public_5c0a40 _public_5c0a40
#define public_5c0a4c _public_5c0a4c
#define public_5c0a58 _public_5c0a58

PROC_DECLARE(0x5c0a10, internal_5c0a10, public_5c0a10);
/* CHUNK of public_538b20 */
extern "C" NAKED register_t __cdecl internal_5c0a10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5c0a1c : nop
        mov eax, dword ptr ss : [ebp-0x1578]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c0a2a : nop
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp public_538f50
        public_5c0a35 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5c0a40 : nop
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp dword ptr ds : [public_5c7090]
        public_5c0a4c : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5c0a58 : nop
        mov eax, offset public_5fac70
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0a10)
        ASM_EXPORT_ENTRY_FIRST(0x5c0a1c, public_5c0a1c)
        ASM_EXPORT_ENTRY(0x5c0a2a, public_5c0a2a)
        ASM_EXPORT_ENTRY(0x5c0a35, public_5c0a35)
        ASM_EXPORT_ENTRY(0x5c0a40, public_5c0a40)
        ASM_EXPORT_ENTRY(0x5c0a4c, public_5c0a4c)
        ASM_EXPORT_ENTRY_LAST(0x5c0a58, public_5c0a58)
    }
}

#undef public_5c0a1c
#undef public_5c0a2a
#undef public_5c0a35
#undef public_5c0a40
#undef public_5c0a4c
#undef public_5c0a58

#pragma init_seg(compiler)
extern "C" void const* const public_5c0a1c = __AsmFindLabelExport(&internal_5c0a10, 0x5c0a1c);
extern "C" void const* const public_5c0a2a = __AsmFindLabelExport(&internal_5c0a10, 0x5c0a2a);
extern "C" void const* const public_5c0a35 = __AsmFindLabelExport(&internal_5c0a10, 0x5c0a35);
extern "C" void const* const public_5c0a40 = __AsmFindLabelExport(&internal_5c0a10, 0x5c0a40);
extern "C" void const* const public_5c0a4c = __AsmFindLabelExport(&internal_5c0a10, 0x5c0a4c);
extern "C" void const* const public_5c0a58 = __AsmFindLabelExport(&internal_5c0a10, 0x5c0a58);
