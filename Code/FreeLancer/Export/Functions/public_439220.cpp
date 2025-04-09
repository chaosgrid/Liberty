#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_439220);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_439256 _public_439256

PROC_DECLARE(0x439220, internal_439220, public_439220);
extern "C" NAKED register_t __cdecl internal_439220()
{
    __asm
    {
        push esi
/*FIXUP push offset public_5caf68 @0x439221*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf68
        call public_59da10
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_439256
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test eax, eax
        je public_439256
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push 0x4B
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        public_439256 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x439220)
    }
}

#undef public_439256
