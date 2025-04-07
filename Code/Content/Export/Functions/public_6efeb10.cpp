#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efe300);
CLANG_FORWARD_PROC_SYMBOL(public_6efeb10);
CLANG_FORWARD_PROC_SYMBOL(public_6f058d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faca03);

#define public_6efeb6e _public_6efeb6e

PROC_DECLARE(0x6efeb10, internal_6efeb10, public_6efeb10);
extern "C" NAKED register_t __cdecl internal_6efeb10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faca03 @0x6efeb12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faca03
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ds:[esi+4]
        push 0x3F800000
        push eax
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi], offset public_6fb7d74
        call dword ptr ds : [public_6fb36a4]
        push 0x24
        call public_6fa912a
        add esp, 0xC
        mov dword ptr ss : [esp+0x18], eax
        test eax, eax
        mov byte ptr ss : [esp+0x10], 1
        je public_6efeb6e
        mov ecx, eax
        call public_6f058d0
        public_6efeb6e : nop
        mov byte ptr ss : [esp+0x10], 0
        call public_6efe300
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6efeb10)
    }
}

#undef public_6efeb6e
