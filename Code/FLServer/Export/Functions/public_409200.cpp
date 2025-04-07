#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409200);
CLANG_FORWARD_PROC_SYMBOL(public_40f900);
CLANG_FORWARD_PROC_SYMBOL(public_418a92);
CLANG_FORWARD_PROC_SYMBOL(public_418c2a);
CLANG_FORWARD_JUMP_SYMBOL(public_419e6d);

PROC_DECLARE(0x409200, internal_409200, public_409200);
extern "C" NAKED register_t __cdecl internal_409200()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419e6d @0x409202*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419e6d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push eax
        mov esi, ecx
        push 0x8D
        mov dword ptr ss : [esp+0x10], esi
        call public_418a92
        lea edi, ds:[esi+0x60]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0
        call public_418c2a
        mov dword ptr ds : [edi], offset public_41cce0
        lea ecx, ds:[esi+0xA0]
        mov byte ptr ss : [esp+0x14], 1
        call public_40f900
        lea edi, ds:[esi+0x140]
        mov ecx, edi
        mov byte ptr ss : [esp+0x14], 2
        call public_418c2a
        mov dword ptr ds : [edi], offset public_41cce0
        lea edi, ds:[esi+0x180]
        mov ecx, edi
        mov byte ptr ss : [esp+0x14], 3
        call public_418c2a
        mov dword ptr ds : [edi], offset public_41cce0
        lea edi, ds:[esi+0x1C0]
        mov ecx, edi
        mov byte ptr ss : [esp+0x14], 4
        call public_418c2a
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi], offset public_41c820
        mov dword ptr ds : [esi], offset public_41cc08
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x409200)
    }
}
