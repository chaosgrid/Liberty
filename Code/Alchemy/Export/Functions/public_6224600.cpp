#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_622462c _public_622462c
#define public_6224655 _public_6224655

PROC_DECLARE(0x6224600, internal_6224600, public_6224600);
extern "C" NAKED register_t __cdecl internal_6224600()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6224655
        mov eax, dword ptr ds : [public_6256290]
        mov dword ptr ds : [esi+4], 1
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        jne public_622462c
        mov eax, dword ptr ds : [public_624dd0c]
        mov dword ptr ds : [esi+8], eax
        public_622462c : nop
        mov dword ptr ds : [esi], offset public_624dcfc
        call dword ptr ds : [public_624b008]
        mov edx, dword ptr ds : [public_6256290]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov al, 1
        pop esi
        ret 
        public_6224655 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6224600)
    }
}

#undef public_622462c
#undef public_6224655
