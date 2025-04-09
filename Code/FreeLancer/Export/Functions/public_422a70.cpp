#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422a70);

#define public_422a99 _public_422a99

PROC_DECLARE(0x422a70, internal_422a70, public_422a70);
extern "C" NAKED register_t __cdecl internal_422a70()
{
    __asm
    {
        mov al, byte ptr ds : [public_610844]
        test al, al
        je public_422a99
        mov eax, dword ptr ds : [public_66490c]
        push esi
        push edi
        mov ecx, 6
        mov esi, offset public_664910
        mov edi, offset public_66492c
        mov dword ptr ds : [public_664928], eax
        rep movsd
        pop edi
        pop esi
        ret 
        public_422a99 : nop
        mov ecx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_664948 @0x422aa3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_664948
        push eax
        call dword ptr ds : [edx+0x88]
        ret 
        UNREACHABLE_TRAP(0x422a70)
    }
}

#undef public_422a99
