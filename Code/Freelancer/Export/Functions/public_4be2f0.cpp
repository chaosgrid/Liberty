#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4be2f0);

#define public_4be366 _public_4be366

PROC_DECLARE(0x4be2f0, internal_4be2f0, public_4be2f0);
extern "C" NAKED register_t __cdecl internal_4be2f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67244c]
        test eax, eax
        je public_4be366
        mov ecx, dword ptr ds : [eax+0xF4]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [public_67244c]
        mov ecx, dword ptr ds : [edx+0xF8]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [public_67244c]
        add edx, 0x13C
        push esi
        mov esi, dword ptr ds : [edx]
        lea ecx, ds:[eax+0x48]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ds : [public_67244c]
        add ecx, 0x148
        mov esi, dword ptr ds : [ecx]
        lea edx, ds:[eax+0x54]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ds : [public_67244c]
        mov cl, byte ptr ds : [edx+0x154]
        mov byte ptr ds : [eax+0x60], cl
        mov al, 1
        pop esi
        ret 
        public_4be366 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x4be2f0)
    }
}

#undef public_4be366
