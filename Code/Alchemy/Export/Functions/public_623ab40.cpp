#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ab40);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_6244320);

#define public_623ab6c _public_623ab6c

PROC_DECLARE(0x623ab40, internal_623ab40, public_623ab40);
extern "C" NAKED register_t __cdecl internal_623ab40()
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
        jne public_623ab6c
        push edi
        push ebx
/*FIXUP push offset public_6256aa0 @0x623ab60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256aa0
        mov ecx, esi
        call public_623f920
        public_623ab6c : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x623ab40)
    }
}

#undef public_623ab6c
