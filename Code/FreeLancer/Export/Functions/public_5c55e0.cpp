#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c55eb _public_5c55eb
#define public_5c55fa _public_5c55fa
#define public_5c5609 _public_5c5609
#define public_5c5618 _public_5c5618
#define public_5c5627 _public_5c5627

PROC_DECLARE(0x5c55e0, internal_5c55e0, public_5c55e0);
/* CHUNK of public_5aa9c0 */
extern "C" NAKED register_t __cdecl internal_5c55e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c55eb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x204
        jmp dword ptr ds : [public_5c7058]
        public_5c55fa : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x214
        jmp dword ptr ds : [public_5c7058]
        public_5c5609 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x248
        jmp dword ptr ds : [public_5c60fc]
        public_5c5618 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x254
        jmp dword ptr ds : [public_5c63a8]
        public_5c5627 : nop
        mov eax, offset public_5ff414
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c55e0)
        ASM_EXPORT_ENTRY_FIRST(0x5c55eb, public_5c55eb)
        ASM_EXPORT_ENTRY(0x5c55fa, public_5c55fa)
        ASM_EXPORT_ENTRY(0x5c5609, public_5c5609)
        ASM_EXPORT_ENTRY(0x5c5618, public_5c5618)
        ASM_EXPORT_ENTRY_LAST(0x5c5627, public_5c5627)
    }
}

#undef public_5c55eb
#undef public_5c55fa
#undef public_5c5609
#undef public_5c5618
#undef public_5c5627

#pragma init_seg(compiler)
extern "C" void const* const public_5c55eb = __AsmFindLabelExport(&internal_5c55e0, 0x5c55eb);
extern "C" void const* const public_5c55fa = __AsmFindLabelExport(&internal_5c55e0, 0x5c55fa);
extern "C" void const* const public_5c5609 = __AsmFindLabelExport(&internal_5c55e0, 0x5c5609);
extern "C" void const* const public_5c5618 = __AsmFindLabelExport(&internal_5c55e0, 0x5c5618);
extern "C" void const* const public_5c5627 = __AsmFindLabelExport(&internal_5c55e0, 0x5c5627);
