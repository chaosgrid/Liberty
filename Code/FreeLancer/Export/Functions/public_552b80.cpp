#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_552b80);
CLANG_FORWARD_JUMP_SYMBOL(public_5c13bb);

PROC_DECLARE(0x552b80, internal_552b80, public_552b80);
extern "C" NAKED register_t __cdecl internal_552b80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c13bb @0x552b82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c13bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        call public_420d40
        mov ebp, dword ptr ds : [public_5c69a0]
        lea ecx, ds:[esi+0x10]
        mov dword ptr ss : [esp+0x1C], 0
        call ebp
        mov dword ptr ds : [esi], offset public_5e0e20
        lea edi, ds:[esi+0x14]
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 1
        mov dword ptr ss : [esp+0x10], edi
        call public_420d40
        lea ecx, ds:[edi+0x10]
        mov byte ptr ss : [esp+0x1C], 2
        call ebp
        mov dword ptr ds : [edi], offset public_5e0e20
        lea edi, ds:[esi+0x28]
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 3
        mov dword ptr ss : [esp+0x10], edi
        call public_420d40
        lea ecx, ds:[edi+0x10]
        mov byte ptr ss : [esp+0x1C], 4
        call ebp
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], offset public_5e0e20
        pop edi
        mov dword ptr ds : [esi+0x3C], 0
        mov dword ptr ds : [esi+0x40], 3
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x552b80)
    }
}
