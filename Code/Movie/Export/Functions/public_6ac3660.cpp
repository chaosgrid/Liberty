#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3660);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4550);

#define public_6ac368c _public_6ac368c
#define public_6ac369e _public_6ac369e
#define public_6ac36a7 _public_6ac36a7
#define public_6ac36ac _public_6ac36ac

PROC_DECLARE(0x6ac3660, internal_6ac3660, public_6ac3660);
extern "C" NAKED register_t __cdecl internal_6ac3660()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+8]
        cmp eax, 1
        je public_6ac36ac
        jle public_6ac36a7
        cmp eax, 3
        jg public_6ac36a7
        push esi
        mov esi, dword ptr ds : [ecx]
        test esi, esi
        je public_6ac369e
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        sub ecx, eax
        push edi
        sub edx, eax
        public_6ac368c : nop
        mov edi, dword ptr ds : [ecx+eax]
        mov ebx, dword ptr ds : [eax]
        xor edi, ebx
        mov dword ptr ds : [edx+eax], edi
        add eax, 4
        dec esi
        jne public_6ac368c
        pop edi
        pop ebx
        public_6ac369e : nop
        mov eax, 1
        pop esi
        ret 0x10
        public_6ac36a7 : nop
        xor eax, eax
        ret 0x10
        public_6ac36ac : nop
        mov eax, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push eax
        mov eax, dword ptr ss : [esp+8]
        push ecx
        push edx
        push eax
        call public_6ac4550
        mov eax, 1
        ret 0x10
        UNREACHABLE_TRAP(0x6ac3660)
    }
}

#undef public_6ac368c
#undef public_6ac369e
#undef public_6ac36a7
#undef public_6ac36ac
