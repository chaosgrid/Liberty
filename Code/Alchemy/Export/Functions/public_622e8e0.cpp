#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e8e0);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_6244320);

#define public_622e90c _public_622e90c

PROC_DECLARE(0x622e8e0, internal_622e8e0, public_622e8e0);
extern "C" NAKED register_t __cdecl internal_622e8e0()
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
        jne public_622e90c
        push edi
        push ebx
/*FIXUP push offset public_62565b8 @0x622e900*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62565b8
        mov ecx, esi
        call public_623f920
        public_622e90c : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x622e8e0)
    }
}

#undef public_622e90c
