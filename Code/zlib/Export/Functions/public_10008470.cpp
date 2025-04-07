#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100083d0);
CLANG_FORWARD_PROC_SYMBOL(public_10008470);

#define public_100084a5 _public_100084a5
#define public_100084c1 _public_100084c1
#define public_100084ed _public_100084ed

PROC_DECLARE(0x10008470, internal_10008470, public_10008470);
extern "C" NAKED register_t __cdecl internal_10008470()
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
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        test eax, eax
        mov ebx, ecx
        jne public_100084a5
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_100083d0
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        public_100084a5 : nop
        mov edx, ecx
        shl edx, 8
        add ebx, edx
        test eax, eax
        jne public_100084c1
        lea eax, ss:[esp+0x10]
        push eax
        call public_100083d0
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        public_100084c1 : nop
        shl ecx, 0x10
        add ebx, ecx
        test eax, eax
        jne public_100084ed
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_100083d0
        add esp, 4
        test eax, eax
        jne public_100084ed
        mov edx, dword ptr ss : [esp+0x10]
        pop edi
        shl edx, 0x18
        add edx, ebx
        pop esi
        mov dword ptr ss : [ebp], edx
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_100084ed : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp], 0
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x10008470)
    }
}

#undef public_100084a5
#undef public_100084c1
#undef public_100084ed
