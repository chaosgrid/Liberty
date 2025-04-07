#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5cd10);
CLANG_FORWARD_PROC_SYMBOL(public_6f5cda0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf938);

PROC_DECLARE(0x6f5cd10, internal_6f5cd10, public_6f5cd10);
extern "C" NAKED register_t __cdecl internal_6f5cd10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf938 @0x6f5cd12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf938
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], offset public_6fbbc08
        mov ecx, dword ptr ds : [public_6fce770]
        push ecx
/*FIXUP push offset public_6fd1c74 @0x6f5cd3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c74
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ds : [public_6fd1c74], eax
        call dword ptr ds : [public_6fb36a4]
        add esp, 8
        mov ecx, esi
        call public_6f5cda0
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f5cd10)
    }
}
