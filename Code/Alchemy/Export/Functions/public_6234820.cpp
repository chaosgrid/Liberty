#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6234820);

#define public_6234829 _public_6234829
#define public_6234839 _public_6234839

PROC_DECLARE(0x6234820, internal_6234820, public_6234820);
extern "C" NAKED register_t __cdecl internal_6234820()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, edx
        je public_6234839
        push esi
        public_6234829 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx]
        cmp eax, edx
        jne public_6234829
        pop esi
        public_6234839 : nop
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        ret 
        UNREACHABLE_TRAP(0x6234820)
    }
}

#undef public_6234829
#undef public_6234839
