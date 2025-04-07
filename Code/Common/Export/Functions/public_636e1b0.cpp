#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e840);

#define public_636e1d2 _public_636e1d2
#define public_636e1e3 _public_636e1e3
#define public_636e1f4 _public_636e1f4

PROC_DECLARE(0x636e1b0, internal_636e1b0, public_636e1b0);
extern "C" NAKED register_t __cdecl internal_636e1b0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        je public_636e1f4
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_636e1d2
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+ecx*4+4]
        test edx, edx
        lea ecx, ds:[eax+ecx*4+4]
        jne public_636e1e3
        public_636e1d2 : nop
        push esi
        call public_636e840
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        lea ecx, ds:[eax+edx*4+4]
        public_636e1e3 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[eax+edx*4]
        mov dword ptr ds : [eax], edi
        inc dword ptr ds : [ecx]
        mov dword ptr ds : [eax+4], 0
        pop esi
        public_636e1f4 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x636e1b0)
    }
}

#undef public_636e1d2
#undef public_636e1e3
#undef public_636e1f4
