#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419a9b _public_419a9b
#define public_419ab5 _public_419ab5
#define public_419ab6 _public_419ab6
#define public_419ac2 _public_419ac2
#define public_419ace _public_419ace
#define public_419ad7 _public_419ad7
#define public_419ae3 _public_419ae3
#define public_419aef _public_419aef

PROC_DECLARE(0x419a90, internal_419a90, public_419a90);
/* CHUNK of public_401a90 */
extern "C" NAKED register_t __cdecl internal_419a90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_418978
        pop ecx
        ret 
        public_419a9b : nop
        mov eax, dword ptr ss : [ebp-0x18]
        and eax, 1
        test eax, eax
        je public_419ab5
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x58
        jmp dword ptr ds : [public_41b858]
        public_419ab5 : nop
        ret 
        public_419ab6 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp dword ptr ds : [public_41b85c]
        public_419ac2 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x34
        jmp dword ptr ds : [public_41b860]
        public_419ace : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_41b864]
        public_419ad7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C
        jmp dword ptr ds : [public_41b860]
        public_419ae3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp dword ptr ds : [public_41b868]
        public_419aef : nop
        mov eax, offset public_41eb44
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419a90)
        ASM_EXPORT_ENTRY_FIRST(0x419a9b, public_419a9b)
        ASM_EXPORT_ENTRY(0x419ab5, public_419ab5)
        ASM_EXPORT_ENTRY(0x419ab6, public_419ab6)
        ASM_EXPORT_ENTRY(0x419ac2, public_419ac2)
        ASM_EXPORT_ENTRY(0x419ace, public_419ace)
        ASM_EXPORT_ENTRY(0x419ad7, public_419ad7)
        ASM_EXPORT_ENTRY(0x419ae3, public_419ae3)
        ASM_EXPORT_ENTRY_LAST(0x419aef, public_419aef)
    }
}

#undef public_419a9b
#undef public_419ab5
#undef public_419ab6
#undef public_419ac2
#undef public_419ace
#undef public_419ad7
#undef public_419ae3
#undef public_419aef

#pragma init_seg(compiler)
extern "C" void const* const public_419a9b = __AsmFindLabelExport(&internal_419a90, 0x419a9b);
extern "C" void const* const public_419ab5 = __AsmFindLabelExport(&internal_419a90, 0x419ab5);
extern "C" void const* const public_419ab6 = __AsmFindLabelExport(&internal_419a90, 0x419ab6);
extern "C" void const* const public_419ac2 = __AsmFindLabelExport(&internal_419a90, 0x419ac2);
extern "C" void const* const public_419ace = __AsmFindLabelExport(&internal_419a90, 0x419ace);
extern "C" void const* const public_419ad7 = __AsmFindLabelExport(&internal_419a90, 0x419ad7);
extern "C" void const* const public_419ae3 = __AsmFindLabelExport(&internal_419a90, 0x419ae3);
extern "C" void const* const public_419aef = __AsmFindLabelExport(&internal_419a90, 0x419aef);
