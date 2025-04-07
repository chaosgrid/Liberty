#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4fd90);
CLANG_FORWARD_PROC_SYMBOL(public_6f528d0);

#define public_6f5291e _public_6f5291e

PROC_DECLARE(0x6f528d0, internal_6f528d0, public_6f528d0);
extern "C" NAKED register_t __cdecl internal_6f528d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, 0xFFFFFFFF
        je public_6f5291e
        push edi
        mov edi, dword ptr ds : [esi]
        push 0x7FFFFFFD
/*FIXUP push offset public_6f61e0c @0x6f528e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61e0c
        push 8
        push 1
        push eax
        mov eax, dword ptr ds : [edi+0x1C]
        push eax
        call public_6f4fd90
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edi+0x1C], eax
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax+ecx*8], edx
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [edi+0x1C]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+eax*8+4], edx
        mov eax, dword ptr ds : [esi+0x1C]
        add esp, 0x18
        inc eax
        mov dword ptr ds : [esi+0x1C], eax
        pop edi
        public_6f5291e : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f528d0)
    }
}

#undef public_6f5291e
