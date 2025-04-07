#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40dd70);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_418ac8);
CLANG_FORWARD_PROC_SYMBOL(public_419020);
CLANG_FORWARD_PROC_SYMBOL(public_419026);
CLANG_FORWARD_JUMP_SYMBOL(public_41a24b);

PROC_DECLARE(0x40dd70, internal_40dd70, public_40dd70);
extern "C" NAKED register_t __cdecl internal_40dd70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a24b @0x40dd72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a24b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_41d550
        mov eax, dword ptr ds : [public_427870]
        push 0xFFFFFFFF
        push eax
        mov dword ptr ss : [esp+0xC], esi
        call dword ptr ds : [public_41b1b4]
        mov ecx, dword ptr ds : [public_41b0a8]
        mov edx, dword ptr ds : [public_427c98]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [public_427870]
        push eax
        mov dword ptr ds : [public_427c9c], 0
        call dword ptr ds : [public_41b1a4]
        lea ecx, ds:[esi+0x8C]
        mov dword ptr ss : [esp+0x10], 1
        call public_419026
        lea ecx, ds:[esi+0x58]
        mov byte ptr ss : [esp+0x10], 0
        call public_418ac8
        lea ecx, ds:[esi+0x44]
        mov dword ptr ss : [esp+0x10], 2
        call public_418aa4
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_419020
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x40dd70)
    }
}
