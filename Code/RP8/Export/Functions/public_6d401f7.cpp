#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d401f7);

#define public_6d4024f _public_6d4024f

PROC_DECLARE(0x6d401f7, internal_6d401f7, public_6d401f7);
extern "C" NAKED register_t __cdecl internal_6d401f7()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        and dword ptr ss : [ebp-4], 0
        lea eax, ss:[ebp-4]
        push eax
/*FIXUP push offset public_6d5f8fc @0x6d40204*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5f8fc
        push 0x80000002
        call dword ptr ds : [public_6d5e008]
        test eax, eax
        jne public_6d4024f
        push esi
        lea eax, ss:[ebp+0x14]
        push eax
        push dword ptr ss : [ebp+0x10]
        lea eax, ss:[ebp-8]
        push eax
        push 0
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp-4]
        call dword ptr ds : [public_6d5e000]
        push dword ptr ss : [ebp-4]
        mov esi, eax
        call dword ptr ds : [public_6d5e004]
        test esi, esi
        pop esi
        jne public_6d4024f
        mov eax, dword ptr ss : [ebp-8]
        cmp eax, dword ptr ss : [ebp+8]
        jne public_6d4024f
        xor eax, eax
        inc eax
        leave 
        ret 
        public_6d4024f : nop
        xor eax, eax
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d401f7)
    }
}

#undef public_6d4024f
