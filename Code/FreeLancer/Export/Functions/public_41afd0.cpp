#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41afd0);

#define public_41b017 _public_41b017
#define public_41b026 _public_41b026

PROC_DECLARE(0x41afd0, internal_41afd0, public_41afd0);
extern "C" NAKED register_t __cdecl internal_41afd0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        or eax, 0xFFFFFFFF
        test esi, esi
        je public_41b026
/*FIXUP push offset public_6166ec @0x41afdc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        call dword ptr ds : [public_5c6f70]
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, 0xFFFFFFFF
        je public_41b017
        mov eax, dword ptr ds : [public_5c6d38]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push 0x3F800000
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ds : [public_5c6d38]
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
/*FIXUP public_41b017 : nop
        push offset public_6166ec @0x41b017*/
  FIXUP public_41b017 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        xor esi, esi
        call dword ptr ds : [public_5c6ee8]
        mov eax, esi
        public_41b026 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x41afd0)
    }
}

#undef public_41b017
#undef public_41b026
