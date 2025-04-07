#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802140);
CLANG_FORWARD_PROC_SYMBOL(public_6803ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6803bf0);

#define public_6802171 _public_6802171
#define public_6802183 _public_6802183

PROC_DECLARE(0x6802140, internal_6802140, public_6802140);
extern "C" NAKED register_t __cdecl internal_6802140()
{
    __asm
    {
        push esi
        call public_6803ab0
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6802183
        shl eax, 4
        mov esi, eax
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+4]
        lea eax, ds:[ecx+esi-0x10]
        cmp dword ptr ds : [eax], 0xFFFFFFFE
        je public_6802171
        push eax
        call public_6803bf0
        add esp, 4
        test eax, eax
        jne public_6802183
        public_6802171 : nop
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [eax+esi-8]
        add eax, 0x28
        pop esi
        ret 
        public_6802183 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6802140)
    }
}

#undef public_6802171
#undef public_6802183
