#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3110);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7570);

#define public_6ac75c3 _public_6ac75c3

PROC_DECLARE(0x6ac7570, internal_6ac7570, public_6ac7570);
extern "C" NAKED register_t __cdecl internal_6ac7570()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ds : [eax]
        push edi
        push esi
        mov ebx, dword ptr ds : [esi]
        lea edi, ds:[esi+0x12C]
        push 1
        push ebp
        push edi
        call public_6ac3140
        test eax, eax
        je public_6ac75c3
        push esi
        lea ecx, ss:[ebp+ebx*4]
        push 1
        push ecx
        push edi
        call public_6ac3140
        test eax, eax
        je public_6ac75c3
        push esi
        lea edx, ss:[ebp+ebx*8]
        push 3
        push edx
        call public_6ac3110
        test eax, eax
        je public_6ac75c3
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 0xC
        public_6ac75c3 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ac7570)
    }
}

#undef public_6ac75c3
