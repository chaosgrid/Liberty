#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62df740);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62df770 _public_62df770
#define public_62df78c _public_62df78c
#define public_62df795 _public_62df795

PROC_DECLARE(0x62df740, internal_62df740, public_62df740);
extern "C" NAKED register_t __cdecl internal_62df740()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, esi
        imul eax, 0x72C
        mov ebp, ecx
        push eax
        mov dword ptr ss : [ebp], esi
        call public_6391d9c
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        je public_62df795
        lea eax, ds:[esi-1]
        test eax, eax
        mov edx, ebx
        jl public_62df78c
        lea esi, ds:[eax+1]
        push edi
        public_62df770 : nop
        xor eax, eax
        lea edi, ds:[edx+0x48]
        mov ecx, 0x1B9
        rep stosd
        mov dword ptr ds : [edx], 0xFFFFFFFF
        add edx, 0x72C
        dec esi
        jne public_62df770
        pop edi
        public_62df78c : nop
        pop esi
        mov dword ptr ss : [ebp+4], ebx
        pop ebp
        pop ebx
        ret 4
        public_62df795 : nop
        xor eax, eax
        pop esi
        mov dword ptr ss : [ebp+4], eax
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62df740)
    }
}

#undef public_62df770
#undef public_62df78c
#undef public_62df795
