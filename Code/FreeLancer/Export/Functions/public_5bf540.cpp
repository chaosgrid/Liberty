#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf54c _public_5bf54c
#define public_5bf55a _public_5bf55a
#define public_5bf565 _public_5bf565
#define public_5bf571 _public_5bf571
#define public_5bf57d _public_5bf57d

PROC_DECLARE(0x5bf540, internal_5bf540, public_5bf540);
/* CHUNK of public_4fe1c0 */
extern "C" NAKED register_t __cdecl internal_5bf540()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5bf54c : nop
        mov eax, dword ptr ss : [ebp-0x15D4]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bf55a : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5bf565 : nop
        mov ecx, dword ptr ss : [ebp-0x15C4]
        jmp dword ptr ds : [public_5c7090]
        public_5bf571 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5bf57d : nop
        mov eax, offset public_5f9554
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf540)
        ASM_EXPORT_ENTRY_FIRST(0x5bf54c, public_5bf54c)
        ASM_EXPORT_ENTRY(0x5bf55a, public_5bf55a)
        ASM_EXPORT_ENTRY(0x5bf565, public_5bf565)
        ASM_EXPORT_ENTRY(0x5bf571, public_5bf571)
        ASM_EXPORT_ENTRY_LAST(0x5bf57d, public_5bf57d)
    }
}

#undef public_5bf54c
#undef public_5bf55a
#undef public_5bf565
#undef public_5bf571
#undef public_5bf57d

#pragma init_seg(compiler)
extern "C" void const* const public_5bf54c = __AsmFindLabelExport(&internal_5bf540, 0x5bf54c);
extern "C" void const* const public_5bf55a = __AsmFindLabelExport(&internal_5bf540, 0x5bf55a);
extern "C" void const* const public_5bf565 = __AsmFindLabelExport(&internal_5bf540, 0x5bf565);
extern "C" void const* const public_5bf571 = __AsmFindLabelExport(&internal_5bf540, 0x5bf571);
extern "C" void const* const public_5bf57d = __AsmFindLabelExport(&internal_5bf540, 0x5bf57d);
