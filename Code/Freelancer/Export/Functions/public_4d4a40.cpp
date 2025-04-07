#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d4a40);
CLANG_FORWARD_JUMP_SYMBOL(public_5bdff9);

#define public_4d4a89 _public_4d4a89

PROC_DECLARE(0x4d4a40, internal_4d4a40, public_4d4a40);
extern "C" NAKED register_t __cdecl internal_4d4a40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bdff9 @0x4d4a42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bdff9
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
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_4d4a89
        add eax, 0xFFFFFFF8
        cmp eax, ecx
        je public_4d4a89
        add eax, 8
        cmp eax, ecx
        je public_4d4a89
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c62a8]
        public_4d4a89 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x4d4a40)
    }
}

#undef public_4d4a89
