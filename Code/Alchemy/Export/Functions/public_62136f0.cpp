#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62136f0);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_623f960);

#define public_621371c _public_621371c

PROC_DECLARE(0x62136f0, internal_62136f0, public_62136f0);
extern "C" NAKED register_t __cdecl internal_62136f0()
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
        jne public_621371c
        push edi
        push ebx
/*FIXUP push offset public_6255aa8 @0x6213710*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255aa8
        mov ecx, esi
        call public_623f920
        public_621371c : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62136f0)
    }
}

#undef public_621371c
