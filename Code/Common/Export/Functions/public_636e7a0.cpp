#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);

#define public_636e7ce _public_636e7ce

PROC_DECLARE(0x636e7a0, internal_636e7a0, public_636e7a0);
extern "C" NAKED register_t __cdecl internal_636e7a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_636e7ce
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_658b970]
        lea ecx, ds:[ecx*4+8]
        cmp ecx, edx
        jle public_636e7ce
        push ecx
        push eax
        call public_6377fe0
        add esp, 8
        mov dword ptr ds : [esi], 0
        public_636e7ce : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636e7a0)
    }
}

#undef public_636e7ce
