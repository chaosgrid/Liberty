#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acca22);
CLANG_FORWARD_PROC_SYMBOL(public_6acca95);

#define public_6accadb _public_6accadb
#define public_6accaea _public_6accaea

PROC_DECLARE(0x6acca95, internal_6acca95, public_6acca95);
extern "C" NAKED register_t __cdecl internal_6acca95()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push esi
        push edi
        xor eax, eax
        lea edi, ss:[ebp-0x10]
        stosd 
        stosd 
        stosd 
        stosd 
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x10], 0x10
        test eax, eax
        je public_6accadb
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        je public_6accadb
        mov eax, dword ptr ds : [eax]
        push dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ds : [esi]
        push dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-4], eax
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6acca22
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [esi], ecx
        jmp public_6accaea
        public_6accadb : nop
        push dword ptr ss : [ebp+0x14]
        lea eax, ss:[ebp-0x10]
        push dword ptr ss : [ebp+0x10]
        push eax
        call public_6acca22
        public_6accaea : nop
        pop edi
        pop esi
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6acca95)
    }
}

#undef public_6accadb
#undef public_6accaea
