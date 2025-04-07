#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7db30);

#define public_6f7db7f _public_6f7db7f

PROC_DECLARE(0x6f7db30, internal_6f7db30, public_6f7db30);
extern "C" NAKED register_t __cdecl internal_6f7db30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f7db7f
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        push esi
        push edi
        lea ecx, ds:[edx+8]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+8]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea esi, ds:[edx+0x14]
        lea edi, ds:[eax+0x14]
        mov ecx, 0xC
        rep movsd
        mov ecx, dword ptr ds : [edx+0x44]
        mov dword ptr ds : [eax+0x44], ecx
        mov ecx, dword ptr ds : [edx+0x48]
        mov dword ptr ds : [eax+0x48], ecx
        mov edx, dword ptr ds : [edx+0x4C]
        pop edi
        mov dword ptr ds : [eax+0x4C], edx
        pop esi
        public_6f7db7f : nop
        ret 
        UNREACHABLE_TRAP(0x6f7db30)
    }
}

#undef public_6f7db7f
