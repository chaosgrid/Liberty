#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623a2e0);
CLANG_FORWARD_PROC_SYMBOL(public_623abe0);

#define public_6238244 _public_6238244

PROC_DECLARE(0x6238210, internal_6238210, public_6238210);
extern "C" NAKED register_t __cdecl internal_6238210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6257b78]
        push esi
        test eax, eax
        push edi
        jne public_6238244
        mov eax, dword ptr ds : [public_6257b7c]
        mov edi, dword ptr ds : [public_6257b6c]
        sub eax, edi
        mov edx, dword ptr ds : [public_6257b68]
        shr eax, 3
        imul eax, dword ptr ds : [public_6257b70]
        mov ecx, dword ptr ds : [eax+edx+8]
        add eax, edx
        push eax
        call public_623abe0
        public_6238244 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push ecx
        sub esp, 0x18
        mov ecx, 6
        mov edi, esp
        rep movsd
        push eax
        lea ecx, ds:[eax+0xD8]
        call public_623a2e0
        pop edi
        xor eax, eax
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6238210)
    }
}

#undef public_6238244
