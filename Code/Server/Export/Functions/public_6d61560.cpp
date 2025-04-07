#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61571 _public_6d61571
#define public_6d6157d _public_6d6157d
#define public_6d6158c _public_6d6158c

PROC_DECLARE(0x6d61560, internal_6d61560, public_6d61560);
/* CHUNK of public_6d0af00 */
extern "C" NAKED register_t __cdecl internal_6d61560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ce1090
        add esp, 8
        ret 
        public_6d61571 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x70
        jmp dword ptr ds : [public_6d64390]
        public_6d6157d : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x80
        jmp dword ptr ds : [public_6d6438c]
        public_6d6158c : nop
        mov eax, offset public_6d721a8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61560)
        ASM_EXPORT_ENTRY_FIRST(0x6d61571, public_6d61571)
        ASM_EXPORT_ENTRY(0x6d6157d, public_6d6157d)
        ASM_EXPORT_ENTRY_LAST(0x6d6158c, public_6d6158c)
    }
}

#undef public_6d61571
#undef public_6d6157d
#undef public_6d6158c

#pragma init_seg(compiler)
extern "C" void const* const public_6d61571 = __AsmFindLabelExport(&internal_6d61560, 0x6d61571);
extern "C" void const* const public_6d6157d = __AsmFindLabelExport(&internal_6d61560, 0x6d6157d);
extern "C" void const* const public_6d6158c = __AsmFindLabelExport(&internal_6d61560, 0x6d6158c);
