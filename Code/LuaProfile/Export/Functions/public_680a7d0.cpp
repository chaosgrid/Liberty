#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805a80);
CLANG_FORWARD_PROC_SYMBOL(public_680a7d0);

#define public_680a7da _public_680a7da

PROC_DECLARE(0x680a7d0, internal_680a7d0, public_680a7d0);
extern "C" NAKED register_t __cdecl internal_680a7d0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor edi, edi
        mov esi, offset public_680e368
        public_680a7da : nop
        mov eax, dword ptr ds : [esi]
        push eax
        lea ebx, ds:[edi+0x104]
        call public_6805a80
        add esp, 4
        add esi, 4
        inc edi
        cmp esi, offset public_680e3a8
        mov dword ptr ds : [eax+4], ebx
        jb public_680a7da
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x680a7d0)
    }
}

#undef public_680a7da
