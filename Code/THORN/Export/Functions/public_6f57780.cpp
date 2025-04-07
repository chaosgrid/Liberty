#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57780);
CLANG_FORWARD_PROC_SYMBOL(public_6f577c0);

#define public_6f577ba _public_6f577ba

PROC_DECLARE(0x6f57780, internal_6f57780, public_6f57780);
extern "C" NAKED register_t __cdecl internal_6f57780()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push esi
        push eax
        call public_6f577c0
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi+eax*8+0xC]
        sub ecx, ebx
        add esp, 8
        cmp ecx, edx
        jl public_6f577ba
        mov esi, dword ptr ds : [esi+eax*8+8]
        push edi
        mov ecx, edx
        mov edi, ebx
        xor eax, eax
        repe cmpsb
        pop edi
        jne public_6f577ba
        pop esi
        lea eax, ds:[edx+ebx]
        pop ebx
        ret 
        public_6f577ba : nop
        pop esi
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f57780)
    }
}

#undef public_6f577ba
