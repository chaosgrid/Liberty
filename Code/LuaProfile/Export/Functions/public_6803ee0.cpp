#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_6803ee0);
CLANG_FORWARD_PROC_SYMBOL(public_68053a0);

#define public_6803ef7 _public_6803ef7

PROC_DECLARE(0x6803ee0, internal_6803ee0, public_6803ee0);
extern "C" NAKED register_t __cdecl internal_6803ee0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp dword ptr ds : [eax], 0xFFFFFFFD
        je public_6803ef7
/*FIXUP push offset public_680d524 @0x6803ee9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d524
        call public_6802e00
        add esp, 4
        ret 
        public_6803ef7 : nop
        push esi
        mov esi, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [esi]
        sub ecx, 0x10
        push ecx
        lea edx, ds:[eax+0x10]
        mov eax, dword ptr ds : [eax+8]
        push edx
        push eax
        call public_68053a0
        mov eax, dword ptr ds : [esi]
        add eax, 0xFFFFFFD0
        add esp, 0xC
        mov dword ptr ds : [esi], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6803ee0)
    }
}

#undef public_6803ef7
