#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_630e270);
CLANG_FORWARD_JUMP_SYMBOL(public_6396abb);

PROC_DECLARE(0x631aeb0, internal_631aeb0, public_631aeb0);
extern "C" NAKED register_t __cdecl internal_631aeb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396abb @0x631aeb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396abb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        lea ebp, ds:[esi+0xC]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], 0
        call public_630e270
        mov ecx, ebp
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], 0
        mov byte ptr ds : [esi+8], 0
        call public_630e270
        xor eax, eax
        mov ecx, 6
        mov edi, ebp
        rep stosd
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_630e210
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x631aeb0)
    }
}
