#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e3c0);
CLANG_FORWARD_PROC_SYMBOL(public_636e920);

#define public_636e3ca _public_636e3ca
#define public_636e3dd _public_636e3dd
#define public_636e3df _public_636e3df

PROC_DECLARE(0x636e3c0, internal_636e3c0, public_636e3c0);
extern "C" NAKED register_t __cdecl internal_636e3c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        jge public_636e3ca
        xor ecx, ecx
        public_636e3ca : nop
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi]
        mov esi, dword ptr ds : [edi+eax*4+4]
        test esi, esi
        je public_636e3dd
        dec esi
        jmp public_636e3df
        public_636e3dd : nop
        mov esi, eax
        public_636e3df : nop
        lea eax, ds:[esi+ecx]
        push eax
        call public_636e920
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+1]
        lea esi, ds:[edi+4]
        add esp, 4
        lea edi, ds:[eax+4]
        mov dword ptr ds : [eax+edx*4+4], ecx
        rep movsd
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636e3c0)
    }
}

#undef public_636e3ca
#undef public_636e3dd
#undef public_636e3df
