#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_44fd80);
CLANG_FORWARD_PROC_SYMBOL(public_4520c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9e5e);

PROC_DECLARE(0x4520c0, internal_4520c0, public_4520c0);
extern "C" NAKED register_t __cdecl internal_4520c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9e5e @0x4520c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9e5e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
/*FIXUP push offset _public_401e90 @0x4520dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_401e90
        push 0x20
        push 0x3C
        lea eax, ds:[esi+0x278]
        push eax
        mov dword ptr ss : [esp+0x20], 1
        call public_5b7ec6
/*FIXUP push offset _public_401e90 @0x4520fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_401e90
        push 0x20
        push 0x10
        lea ecx, ds:[esi+0x78]
        push ecx
        mov byte ptr ss : [esp+0x20], 0
        call public_5b7ec6
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_44fd80
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4520c0)
    }
}
