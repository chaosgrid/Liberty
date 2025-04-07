#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806520);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

#define public_6806529 _public_6806529
#define public_680654a _public_680654a

PROC_DECLARE(0x6806520, internal_6806520, public_6806520);
extern "C" NAKED register_t __cdecl internal_6806520()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_680654a
        push esi
        public_6806529 : nop
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx+0x78]
        mov esi, dword ptr ds : [eax]
        dec edx
        push 0
        push eax
        mov dword ptr ds : [ecx+0x78], edx
        call public_68065d0
        add esp, 8
        test esi, esi
        mov eax, esi
        jne public_6806529
        pop esi
        public_680654a : nop
        ret 
        UNREACHABLE_TRAP(0x6806520)
    }
}

#undef public_6806529
#undef public_680654a
