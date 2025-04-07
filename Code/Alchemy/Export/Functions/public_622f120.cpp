#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_6244320);

#define public_622f149 _public_622f149

PROC_DECLARE(0x622f120, internal_622f120, public_622f120);
extern "C" NAKED register_t __cdecl internal_622f120()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push ebx
        call public_6244320
        test eax, eax
        jne public_622f149
        push esi
        push edi
/*FIXUP push offset public_6256780 @0x622f13d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256780
        mov ecx, ebx
        call public_623f920
        public_622f149 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x622f120)
    }
}

#undef public_622f149
