#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223d70);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_623f960);

#define public_6223d9c _public_6223d9c

PROC_DECLARE(0x6223d70, internal_6223d70, public_6223d70);
extern "C" NAKED register_t __cdecl internal_6223d70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esi, ds:[eax+4]
        push edi
        push ebx
        push esi
        call public_623f960
        test eax, eax
        jne public_6223d9c
        push edi
        push ebx
/*FIXUP push offset public_6256240 @0x6223d90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256240
        mov ecx, esi
        call public_623f920
        public_6223d9c : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6223d70)
    }
}

#undef public_6223d9c
