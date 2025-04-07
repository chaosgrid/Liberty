#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e040);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e0a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fd90);

#define public_6f4e088 _public_6f4e088
#define public_6f4e096 _public_6f4e096

PROC_DECLARE(0x6f4e040, internal_6f4e040, public_6f4e040);
extern "C" NAKED register_t __cdecl internal_6f4e040()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        push esi
        push 0x7FFFFFFD
/*FIXUP push offset public_6f6078c @0x6f4e04b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6078c
        push 0x120
        mov dword ptr ds : [eax+0x68], 0xFFFFFFFA
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+0x64]
        push 7
        push 0
        push edx
        call public_6f4fd90
        mov ecx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [ecx+0x64], eax
        mov edx, dword ptr ds : [public_6f61e28]
        mov esi, dword ptr ds : [edx+0x68]
        add esp, 0x18
        test esi, esi
        jg public_6f4e096
        public_6f4e088 : nop
        push esi
        call public_6f4e0a0
        add esp, 4
        inc esi
        test esi, esi
        jle public_6f4e088
        public_6f4e096 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4e040)
    }
}

#undef public_6f4e088
#undef public_6f4e096
