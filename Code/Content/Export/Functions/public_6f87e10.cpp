#include "Content-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6fb0bec);

#define public_6f87e5e _public_6f87e5e
#define public_6f87e60 _public_6f87e60

PROC_DECLARE(0x6f87e10, internal_6f87e10, public_6f87e10);
extern "C" NAKED register_t __cdecl internal_6f87e10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0bec @0x6f87e12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0bec
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x20
        mov edi, ecx
        call dword ptr ds : [public_6fb3264]
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 0
        je public_6f87e5e
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb3260]
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi], offset public_6fbc6d0
        jmp public_6f87e60
        public_6f87e5e : nop
        xor esi, esi
        public_6f87e60 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x1C], eax
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f87e10)
    }
}

#undef public_6f87e5e
#undef public_6f87e60
