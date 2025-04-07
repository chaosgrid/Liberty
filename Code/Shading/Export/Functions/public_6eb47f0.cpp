#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb47f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6eb4836 _public_6eb4836

PROC_DECLARE(0x6eb47f0, internal_6eb47f0, public_6eb47f0);
/* CHUNK of public_6ecf440 */
extern "C" NAKED register_t __cdecl internal_6eb47f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        push 0xC
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6eb4836
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6ed1560
        mov dword ptr ds : [esi], offset public_6ed1588
        call dword ptr ds : [public_6ed1008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_6ed1560 @0x6eb4822*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1560
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_6eb4836 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eb47f0)
        ASM_EXPORT_ENTRY_SINGLE(0x6eb4836, public_6eb4836)
    }
}

#undef public_6eb4836

#pragma init_seg(compiler)
extern "C" void const* const public_6eb4836 = __AsmFindLabelExport(&internal_6eb47f0, 0x6eb4836);
