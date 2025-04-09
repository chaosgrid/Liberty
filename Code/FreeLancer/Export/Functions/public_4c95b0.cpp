#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c95b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd909);

#define public_4c95f0 _public_4c95f0

PROC_DECLARE(0x4c95b0, internal_4c95b0, public_4c95b0);
extern "C" NAKED register_t __cdecl internal_4c95b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd909 @0x4c95b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd909
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        xor ecx, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+4], ecx
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_4c95f0
        add eax, 8
        cmp eax, ecx
        je public_4c95f0
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c62a8]
        public_4c95f0 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x4c95b0)
    }
}

#undef public_4c95f0
