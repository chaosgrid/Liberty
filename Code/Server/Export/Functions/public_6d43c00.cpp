#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43680);
CLANG_FORWARD_PROC_SYMBOL(public_6d43c00);
CLANG_FORWARD_PROC_SYMBOL(public_6d43f70);
CLANG_FORWARD_PROC_SYMBOL(public_6d441c0);

#define public_6d43c15 _public_6d43c15
#define public_6d43c33 _public_6d43c33

PROC_DECLARE(0x6d43c00, internal_6d43c00, public_6d43c00);
extern "C" NAKED register_t __cdecl internal_6d43c00()
{
    __asm
    {
        push esi
        mov ecx, offset public_6d8f640
        call public_6d441c0
        mov esi, dword ptr ds : [public_6d8f644]
        cmp esi, dword ptr ds : [esi]
        je public_6d43c33
        public_6d43c15 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+0x18]
        push ecx
        call public_6d43f70
        mov edx, dword ptr ds : [public_6d8f644]
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx]
        add esp, 4
        cmp esi, eax
        jne public_6d43c15
        public_6d43c33 : nop
        push 0
        call public_6d43680
        add esp, 4
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d43c00)
    }
}

#undef public_6d43c15
#undef public_6d43c33
