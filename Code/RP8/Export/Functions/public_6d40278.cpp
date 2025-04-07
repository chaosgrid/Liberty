#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40253);
CLANG_FORWARD_PROC_SYMBOL(public_6d40278);

#define public_6d402dd _public_6d402dd
#define public_6d402e6 _public_6d402e6
#define public_6d40309 _public_6d40309
#define public_6d4030e _public_6d4030e

PROC_DECLARE(0x6d40278, internal_6d40278, public_6d40278);
extern "C" NAKED register_t __cdecl internal_6d40278()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push edi
        lea eax, ss:[ebp-4]
        push eax
/*FIXUP push offset public_6d5f8fc @0x6d40283*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5f8fc
        push 0x80000002
        call dword ptr ds : [public_6d5e008]
        xor edi, edi
        test eax, eax
        jne public_6d402e6
        lea eax, ss:[ebp-8]
        push eax
        lea eax, ss:[ebp-0x10]
        push eax
        lea eax, ss:[ebp-0xC]
        push eax
        push edi
/*FIXUP push offset public_6d5f918 @0x6d402a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d5f918
        push dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-8], 4
        call dword ptr ds : [public_6d5e000]
        test eax, eax
        jne public_6d402dd
        cmp dword ptr ss : [ebp-0xC], 4
        jne public_6d402dd
        cmp dword ptr ss : [ebp-0x10], edi
        je public_6d402dd
        push dword ptr ss : [ebp-4]
        call dword ptr ds : [public_6d5e004]
        mov dword ptr ds : [public_6d6d3b8], edi
        xor eax, eax
        jmp public_6d4030e
        public_6d402dd : nop
        push dword ptr ss : [ebp-4]
        call dword ptr ds : [public_6d5e004]
        public_6d402e6 : nop
        cmp dword ptr ds : [public_6d6d3b8], edi
        jge public_6d40309
        mov dword ptr ds : [public_6d6d3b8], edi
        call public_6d40253
        test eax, eax
        je public_6d40309
        emms 
        mov dword ptr ds : [public_6d6d3b8], 1
        public_6d40309 : nop
        mov eax, dword ptr ds : [public_6d6d3b8]
        public_6d4030e : nop
        pop edi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d40278)
    }
}

#undef public_6d402dd
#undef public_6d402e6
#undef public_6d40309
#undef public_6d4030e
