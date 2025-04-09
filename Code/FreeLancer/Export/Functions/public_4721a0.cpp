#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d6d0);
CLANG_FORWARD_PROC_SYMBOL(public_4721a0);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_577c30);
CLANG_FORWARD_PROC_SYMBOL(public_59d8c0);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbab1);

PROC_DECLARE(0x4721a0, internal_4721a0, public_4721a0);
extern "C" NAKED register_t __cdecl internal_4721a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bbab1 @0x4721a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbab1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x32C]
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_5d0554
        mov dword ptr ds : [esi+0x7C], offset public_5d0548
        mov dword ptr ds : [edi], offset public_5d0540
        mov ecx, dword ptr ds : [public_67dccc]
        dec ecx
        push 0
        mov dword ptr ss : [esp+0x1C], 1
        mov dword ptr ds : [public_67dccc], ecx
        call public_59d8c0
        push edi
        call public_577c30
        add esp, 8
        call public_42d6d0
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 0
        call public_576010
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4721a0)
    }
}
