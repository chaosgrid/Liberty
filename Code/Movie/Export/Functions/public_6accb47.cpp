#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6accb47);
CLANG_FORWARD_PROC_SYMBOL(public_6ace834);

#define public_6accb7b _public_6accb7b
#define public_6accb8c _public_6accb8c

PROC_DECLARE(0x6accb47, internal_6accb47, public_6accb47);
extern "C" NAKED register_t __cdecl internal_6accb47()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        test edi, edi
        je public_6accb8c
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6accb8c
        lea eax, ss:[ebp+8]
        push eax
        lea eax, ss:[ebp-4]
        push eax
/*FIXUP push offset public_6ae0c38 @0x6accb62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ae0c38
        call public_6ace834
        test eax, eax
        je public_6accb8c
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ss : [ebp+0xC], ecx
        ja public_6accb7b
        mov ecx, dword ptr ss : [ebp+0xC]
        public_6accb7b : nop
        mov esi, dword ptr ss : [ebp-4]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        public_6accb8c : nop
        push 1
        pop eax
        pop edi
        pop esi
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6accb47)
    }
}

#undef public_6accb7b
#undef public_6accb8c
