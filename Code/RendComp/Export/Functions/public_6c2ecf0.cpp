#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2ecf0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2ed1c _public_6c2ed1c
#define public_6c2ed41 _public_6c2ed41

PROC_DECLARE(0x6c2ecf0, internal_6c2ecf0, public_6c2ecf0);
extern "C" NAKED register_t __cdecl internal_6c2ecf0()
{
    __asm
    {
        push esi
        push 0xC
        call public_6c34eac
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6c2ed41
        mov eax, dword ptr ds : [public_6c375e4]
        test eax, eax
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], eax
        jne public_6c2ed1c
        mov eax, dword ptr ds : [public_6c364bc]
        mov dword ptr ds : [esi+8], eax
        public_6c2ed1c : nop
        mov dword ptr ds : [esi], offset public_6c364ac
        call dword ptr ds : [public_6c36004]
        mov edx, dword ptr ds : [public_6c375e4]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        public_6c2ed41 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c2ecf0)
    }
}

#undef public_6c2ed1c
#undef public_6c2ed41
