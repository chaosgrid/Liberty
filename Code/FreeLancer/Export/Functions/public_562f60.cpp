#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_562a50);
CLANG_FORWARD_PROC_SYMBOL(public_562f60);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1de8);

PROC_DECLARE(0x562f60, internal_562f60, public_562f60);
extern "C" NAKED register_t __cdecl internal_562f60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1de8 @0x562f62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1de8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5e20ec
        mov dword ptr ds : [esi+0x7C], offset public_5e20e0
/*FIXUP push offset _public_562a50 @0x562f8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_562a50
        push 5
        push 0xC
        lea eax, ds:[esi+0x338]
        push eax
        mov dword ptr ss : [esp+0x20], 0
        call public_5b7ec6
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x562f60)
    }
}
