#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6212130);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_6244320);

#define public_621215c _public_621215c

PROC_DECLARE(0x6212130, internal_6212130, public_6212130);
extern "C" NAKED register_t __cdecl internal_6212130()
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
        call public_6244320
        test eax, eax
        jne public_621215c
        push edi
        push ebx
/*FIXUP push offset public_6255918 @0x6212150*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255918
        mov ecx, esi
        call public_623f920
        public_621215c : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6212130)
    }
}

#undef public_621215c
