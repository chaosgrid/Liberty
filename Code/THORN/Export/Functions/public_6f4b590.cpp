#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b590);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ce50);
CLANG_FORWARD_PROC_SYMBOL(public_6f4edc0);

#define public_6f4b5c1 _public_6f4b5c1
#define public_6f4b5d3 _public_6f4b5d3

PROC_DECLARE(0x6f4b590, internal_6f4b590, public_6f4b590);
extern "C" NAKED register_t __cdecl internal_6f4b590()
{
    __asm
    {
        push esi
        call public_6f4edc0
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6f4b5d3
        shl eax, 4
        mov esi, eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+4]
        lea eax, ds:[ecx+esi-0x10]
        cmp dword ptr ds : [eax], 0xFFFFFFFE
        je public_6f4b5c1
        push eax
        call public_6f4ce50
        add esp, 4
        test eax, eax
        jne public_6f4b5d3
        public_6f4b5c1 : nop
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [eax+esi-8]
        add eax, 0x28
        pop esi
        ret 
        public_6f4b5d3 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4b590)
    }
}

#undef public_6f4b5c1
#undef public_6f4b5d3
