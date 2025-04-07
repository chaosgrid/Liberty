#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623df40);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_623f960);

#define public_623df6c _public_623df6c

PROC_DECLARE(0x623df40, internal_623df40, public_623df40);
extern "C" NAKED register_t __cdecl internal_623df40()
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
        jne public_623df6c
        push edi
        push ebx
/*FIXUP push offset public_6256ccc @0x623df60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256ccc
        mov ecx, esi
        call public_623f920
        public_623df6c : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x623df40)
    }
}

#undef public_623df6c
