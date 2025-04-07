#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4bb30);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bb60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);

#define public_6f4bbd7 _public_6f4bbd7

PROC_DECLARE(0x6f4bbb0, internal_6f4bbb0, public_6f4bbb0);
extern "C" NAKED register_t __cdecl internal_6f4bbb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 4
        push esi
        lea esi, ds:[edx+eax-0x10]
        cmp dword ptr ds : [esi], 0xFFFFFFFD
        je public_6f4bbd7
/*FIXUP push offset public_6f60478 @0x6f4bbca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60478
        call public_6f4c7f0
        add esp, 4
        public_6f4bbd7 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ecx
        call public_6f4bb60
        mov esi, eax
        mov edx, esi
        neg edx
        sbb edx, edx
        and edx, 2
        push edx
        call public_6f4bb30
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4bbb0)
    }
}

#undef public_6f4bbd7
