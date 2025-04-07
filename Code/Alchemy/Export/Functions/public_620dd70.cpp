#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dd70);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_6244320);

#define public_620dd9c _public_620dd9c

PROC_DECLARE(0x620dd70, internal_620dd70, public_620dd70);
extern "C" NAKED register_t __cdecl internal_620dd70()
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
        jne public_620dd9c
        push edi
        push ebx
/*FIXUP push offset public_62555c0 @0x620dd90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62555c0
        mov ecx, esi
        call public_623f920
        public_620dd9c : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x620dd70)
    }
}

#undef public_620dd9c
