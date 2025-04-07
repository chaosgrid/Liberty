#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62355f0);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_6244320);

#define public_623561c _public_623561c

PROC_DECLARE(0x62355f0, internal_62355f0, public_62355f0);
extern "C" NAKED register_t __cdecl internal_62355f0()
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
        jne public_623561c
        push edi
        push ebx
/*FIXUP push offset public_6256890 @0x6235610*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256890
        mov ecx, esi
        call public_623f920
        public_623561c : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62355f0)
    }
}

#undef public_623561c
