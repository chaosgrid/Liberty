#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c83a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c83b0);

#define public_5a5f5e _public_5a5f5e
#define public_5a5f6c _public_5a5f6c

PROC_DECLARE(0x5a5f20, internal_5a5f20, public_5a5f20);
extern "C" NAKED register_t __cdecl internal_5a5f20()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_5c6c8c]
        push edi
/*FIXUP push offset public_5e6438 @0x5a5f28*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6438
        call esi
        xor edi, edi
/*FIXUP push offset public_5e6428 @0x5a5f31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6428
        mov di, ax
        call esi
        mov edx, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        add esp, 8
        mov cx, ax
        mov eax, dword ptr ds : [edx]
        cmp eax, edi
        pop edi
        pop esi
        jne public_5a5f5e
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_4c83a0
        add esp, 4
        ret 8
        public_5a5f5e : nop
        cmp eax, ecx
        jne public_5a5f6c
        mov ecx, dword ptr ds : [edx+4]
        push ecx
        call public_4c83b0
        pop ecx
        public_5a5f6c : nop
        ret 8
        UNREACHABLE_TRAP(0x5a5f20)
    }
}

#undef public_5a5f5e
#undef public_5a5f6c
