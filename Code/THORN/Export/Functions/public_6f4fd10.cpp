#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4fd10);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

#define public_6f4fd19 _public_6f4fd19
#define public_6f4fd3a _public_6f4fd3a

PROC_DECLARE(0x6f4fd10, internal_6f4fd10, public_6f4fd10);
extern "C" NAKED register_t __cdecl internal_6f4fd10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f4fd3a
        push esi
        public_6f4fd19 : nop
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+0x78]
        mov esi, dword ptr ds : [eax]
        dec edx
        push 0
        push eax
        mov dword ptr ds : [ecx+0x78], edx
        call public_6f4fe10
        add esp, 8
        test esi, esi
        mov eax, esi
        jne public_6f4fd19
        pop esi
        public_6f4fd3a : nop
        ret 
        UNREACHABLE_TRAP(0x6f4fd10)
    }
}

#undef public_6f4fd19
#undef public_6f4fd3a
