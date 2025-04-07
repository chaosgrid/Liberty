#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e2a0);
CLANG_FORWARD_PROC_SYMBOL(public_636e840);

#define public_636e2b6 _public_636e2b6
#define public_636e2c7 _public_636e2c7

PROC_DECLARE(0x636e2a0, internal_636e2a0, public_636e2a0);
extern "C" NAKED register_t __cdecl internal_636e2a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_636e2b6
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[eax+ecx*4+4]
        cmp dword ptr ds : [edx], 0
        jne public_636e2c7
        public_636e2b6 : nop
        push esi
        call public_636e840
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        lea edx, ds:[eax+edx*4+4]
        public_636e2c7 : nop
        mov ecx, dword ptr ds : [edx]
        lea esi, ds:[ecx+1]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+ecx*4-4]
        lea edx, ds:[eax+ecx*4-4]
        mov dword ptr ds : [eax+ecx*4], esi
        mov dword ptr ds : [eax+ecx*4+4], 0
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636e2a0)
    }
}

#undef public_636e2b6
#undef public_636e2c7
