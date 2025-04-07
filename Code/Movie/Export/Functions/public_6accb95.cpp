#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6accb95);
CLANG_FORWARD_PROC_SYMBOL(public_6accbd0);

#define public_6accba1 _public_6accba1
#define public_6accbc4 _public_6accbc4
#define public_6accbc7 _public_6accbc7
#define public_6accbcc _public_6accbcc

PROC_DECLARE(0x6accb95, internal_6accb95, public_6accb95);
extern "C" NAKED register_t __cdecl internal_6accb95()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        xor esi, esi
        cmp dword ptr ss : [ebp+0x10], esi
        jbe public_6accbc4
        public_6accba1 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        sub eax, esi
        mov dword ptr ss : [ebp-4], eax
        lea eax, ss:[ebp-4]
        push eax
        mov eax, dword ptr ss : [ebp+0xC]
        add eax, esi
        push eax
        call public_6accbd0
        test eax, eax
        je public_6accbcc
        add esi, dword ptr ss : [ebp-4]
        cmp esi, dword ptr ss : [ebp+0x10]
        jb public_6accba1
        public_6accbc4 : nop
        push 1
        pop eax
        public_6accbc7 : nop
        pop esi
        leave 
        ret 0xC
        public_6accbcc : nop
        xor eax, eax
        jmp public_6accbc7
        UNREACHABLE_TRAP(0x6accb95)
    }
}

#undef public_6accba1
#undef public_6accbc4
#undef public_6accbc7
#undef public_6accbcc
