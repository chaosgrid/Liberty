#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a720);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_623f960);

#define public_621a74c _public_621a74c

PROC_DECLARE(0x621a720, internal_621a720, public_621a720);
extern "C" NAKED register_t __cdecl internal_621a720()
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
        jne public_621a74c
        push edi
        push ebx
/*FIXUP push offset public_6255d78 @0x621a740*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255d78
        mov ecx, esi
        call public_623f920
        public_621a74c : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x621a720)
    }
}

#undef public_621a74c
