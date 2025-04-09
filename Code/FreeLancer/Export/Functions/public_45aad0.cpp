#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45aad0);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba2ba);

#define public_45ab21 _public_45ab21

PROC_DECLARE(0x45aad0, internal_45aad0, public_45aad0);
extern "C" NAKED register_t __cdecl internal_45aad0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba2ba @0x45aad2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba2ba
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp], ecx
        xor edx, edx
        cmp ecx, edx
        mov dword ptr ss : [esp+0xC], edx
        je public_45ab21
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        mov byte ptr ss : [esp+0xC], 1
        je public_45ab21
        add eax, 0xFFFFFFF8
        cmp eax, edx
        je public_45ab21
        add eax, 8
        cmp eax, edx
        je public_45ab21
        push eax
        call dword ptr ds : [public_5c62a8]
        public_45ab21 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x45aad0)
    }
}

#undef public_45ab21
