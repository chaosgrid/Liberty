#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806550);
CLANG_FORWARD_PROC_SYMBOL(public_68069d0);

#define public_6806a1e _public_6806a1e

PROC_DECLARE(0x68069d0, internal_68069d0, public_68069d0);
extern "C" NAKED register_t __cdecl internal_68069d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, 0xFFFFFFFF
        je public_6806a1e
        push edi
        mov edi, dword ptr ds : [esi]
        push 0x7FFFFFFD
/*FIXUP push offset public_680e600 @0x68069e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e600
        push 8
        push 1
        push eax
        mov eax, dword ptr ds : [edi+0x1C]
        push eax
        call public_6806550
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
        public_6806a1e : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68069d0)
    }
}

#undef public_6806a1e
