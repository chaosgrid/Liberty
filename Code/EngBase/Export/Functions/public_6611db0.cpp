#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611840);
CLANG_FORWARD_PROC_SYMBOL(public_6611db0);

#define public_6611deb _public_6611deb

PROC_DECLARE(0x6611db0, internal_6611db0, public_6611db0);
extern "C" NAKED register_t __cdecl internal_6611db0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
/*FIXUP push offset public_662a060 @0x6611db7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a060
        push esi
        mov eax, dword ptr ds : [esi]
        mov edi, ecx
        or ebx, 0xFFFFFFFF
        call dword ptr ds : [eax+0x60]
        test eax, eax
        je public_6611deb
        add edi, 4
        push esi
        push edi
        call public_6611840
        mov ecx, dword ptr ds : [esi]
        add esp, 8
/*FIXUP push offset public_662a03c @0x6611dda*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a03c
        push esi
        call dword ptr ds : [ecx+0x60]
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        public_6611deb : nop
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6611db0)
    }
}

#undef public_6611deb
