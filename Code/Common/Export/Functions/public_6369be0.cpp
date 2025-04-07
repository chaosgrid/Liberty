#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6369a10);
CLANG_FORWARD_PROC_SYMBOL(public_6369b30);
CLANG_FORWARD_PROC_SYMBOL(public_6369b70);
CLANG_FORWARD_PROC_SYMBOL(public_6369be0);
CLANG_FORWARD_PROC_SYMBOL(public_6369cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391ef0);
CLANG_FORWARD_JUMP_SYMBOL(public_63985d4);

PROC_DECLARE(0x6369be0, internal_6369be0, public_6369be0);
extern "C" NAKED register_t __cdecl internal_6369be0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63985d4 @0x6369be2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63985d4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+8], eax
        or eax, 0xFFFFFFFF
        push edi
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_63a55b8
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ds : [esi+0x14], offset public_63a5750
/*FIXUP push offset _public_6369b30 @0x6369c23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6369b30
/*FIXUP push offset _public_6369cb0 @0x6369c28*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6369cb0
        push 2
        push 0x10
        lea edi, ds:[esi+0x18]
        push edi
        mov byte ptr ss : [esp+0x28], 1
        call public_6391ef0
        push 0x20
        mov byte ptr ss : [esp+0x18], 2
        mov word ptr ds : [esi+0x38], 8
        mov word ptr ds : [esi+0x3A], 0
        call public_6343f70
        add esp, 4
        mov dword ptr ds : [esi+0x3C], eax
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push esi
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 3
        mov dword ptr ds : [esi], offset public_63a58e0
        mov dword ptr ds : [esi+0x14], offset public_63a58d0
        call public_6369b70
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push esi
        lea ecx, ds:[esi+0x28]
        call public_6369b70
        mov ecx, esi
        call public_6369a10
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6369be0)
    }
}
