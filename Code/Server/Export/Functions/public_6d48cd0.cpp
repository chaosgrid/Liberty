#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d48cd0);

#define public_6d48cec _public_6d48cec
#define public_6d48d12 _public_6d48d12

PROC_DECLARE(0x6d48cd0, internal_6d48cd0, public_6d48cd0);
extern "C" NAKED register_t __cdecl internal_6d48cd0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        xor esi, esi
        call dword ptr ds : [public_6d647c0]
        test eax, eax
        je public_6d48cec
        mov esi, dword ptr ds : [eax]
        test esi, esi
        jne public_6d48d12
        public_6d48cec : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push edi
        push 0x263
/*FIXUP push offset public_6d6b280 @0x6d48cfd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b280
        mov eax, 0x100002
/*FIXUP push offset public_6d6b3a0 @0x6d48d07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b3a0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x18
        public_6d48d12 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d48cd0)
    }
}

#undef public_6d48cec
#undef public_6d48d12
