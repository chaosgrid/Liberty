#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31000);

#define public_6f3103d _public_6f3103d

PROC_DECLARE(0x6f31000, internal_6f31000, public_6f31000);
extern "C" NAKED register_t __cdecl internal_6f31000()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f3103d
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [edx]
        push esi
        mov dword ptr ds : [eax], ecx
        push edi
        lea ecx, ds:[edx+4]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+4]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea esi, ds:[edx+0x10]
        lea edi, ds:[eax+0x10]
        mov ecx, 0xC
        rep movsd
        mov edx, dword ptr ds : [edx+0x40]
        pop edi
        mov dword ptr ds : [eax+0x40], edx
        pop esi
        public_6f3103d : nop
        ret 
        UNREACHABLE_TRAP(0x6f31000)
    }
}

#undef public_6f3103d
