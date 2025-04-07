#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68064b0);
CLANG_FORWARD_PROC_SYMBOL(public_68064e0);

#define public_68064b9 _public_68064b9
#define public_68064da _public_68064da

PROC_DECLARE(0x68064b0, internal_68064b0, public_68064b0);
extern "C" NAKED register_t __cdecl internal_68064b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_68064da
        push esi
        public_68064b9 : nop
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx+0x78]
        mov esi, dword ptr ds : [eax]
        add edx, 0xFFFFFFFB
        push eax
        mov dword ptr ds : [ecx+0x78], edx
        call public_68064e0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_68064b9
        pop esi
        public_68064da : nop
        ret 
        UNREACHABLE_TRAP(0x68064b0)
    }
}

#undef public_68064b9
#undef public_68064da
