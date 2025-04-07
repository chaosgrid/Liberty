#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e160);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);
CLANG_FORWARD_PROC_SYMBOL(public_41901a);
CLANG_FORWARD_JUMP_SYMBOL(public_41a21a);

#define public_40dca3 _public_40dca3

PROC_DECLARE(0x40dc10, internal_40dc10, public_40dc10);
extern "C" NAKED register_t __cdecl internal_40dc10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a21a @0x40dc12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a21a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push 0x188
        call public_418a9e
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_40dca3
        mov ecx, esi
        call public_41901a
        mov dword ptr ds : [esi+0x184], 0
        mov dword ptr ds : [esi], offset public_41d550
        mov eax, dword ptr ds : [public_427870]
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [public_41b1b4]
        mov eax, dword ptr ds : [public_41b0a8]
        mov dword ptr ds : [public_427c9c], esi
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_427c98], ecx
        mov dword ptr ds : [eax], offset _public_40e160
        mov edx, dword ptr ds : [public_427870]
        push edx
        call dword ptr ds : [public_41b1a4]
        mov eax, esi
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_40dca3 : nop
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x40dc10)
    }
}

#undef public_40dca3
