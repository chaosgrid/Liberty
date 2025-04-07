#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100083d0);
CLANG_FORWARD_PROC_SYMBOL(public_10008410);

#define public_10008455 _public_10008455

PROC_DECLARE(0x10008410, internal_10008410, public_10008410);
extern "C" NAKED register_t __cdecl internal_10008410()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, eax
        lea eax, ss:[esp+0x10]
        mov esi, ecx
        push eax
        call public_100083d0
        mov ebx, dword ptr ss : [esp+0x14]
        add esp, 4
        test eax, eax
        jne public_10008455
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_100083d0
        add esp, 4
        test eax, eax
        jne public_10008455
        mov edx, dword ptr ss : [esp+0x10]
        pop edi
        shl edx, 8
        add edx, ebx
        pop esi
        mov dword ptr ss : [ebp], edx
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_10008455 : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp], 0
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x10008410)
    }
}

#undef public_10008455
