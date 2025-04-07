#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226e10);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_6244320);

#define public_6226e3c _public_6226e3c

PROC_DECLARE(0x6226e10, internal_6226e10, public_6226e10);
extern "C" NAKED register_t __cdecl internal_6226e10()
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
        jne public_6226e3c
        push edi
        push ebx
/*FIXUP push offset public_6256298 @0x6226e30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256298
        mov ecx, esi
        call public_623f920
        public_6226e3c : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6226e10)
    }
}

#undef public_6226e3c
