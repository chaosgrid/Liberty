#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68020f0);
CLANG_FORWARD_PROC_SYMBOL(public_6803ad0);

#define public_6802101 _public_6802101
#define public_680212c _public_680212c

PROC_DECLARE(0x68020f0, internal_68020f0, public_68020f0);
extern "C" NAKED register_t __cdecl internal_68020f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        jne public_6802101
        fld qword ptr ds : [public_680c180]
        pop esi
        ret 
        public_6802101 : nop
        shl eax, 4
        mov esi, eax
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+4]
        lea eax, ds:[ecx+esi-0x10]
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        je public_680212c
        push eax
        call public_6803ad0
        add esp, 4
        test eax, eax
        je public_680212c
        fld qword ptr ds : [public_680c180]
        pop esi
        ret 
        public_680212c : nop
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx+4]
        fld qword ptr ds : [eax+esi-8]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68020f0)
    }
}

#undef public_6802101
#undef public_680212c
