#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c290);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_62458f0);

#define public_623c2bc _public_623c2bc

PROC_DECLARE(0x623c290, internal_623c290, public_623c290);
extern "C" NAKED register_t __cdecl internal_623c290()
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
        call public_62458f0
        test eax, eax
        jne public_623c2bc
        push edi
        push ebx
/*FIXUP push offset public_6256c4c @0x623c2b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256c4c
        mov ecx, esi
        call public_623f920
        public_623c2bc : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x623c290)
    }
}

#undef public_623c2bc
