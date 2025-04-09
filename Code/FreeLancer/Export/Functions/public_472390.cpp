#include "FreeLancer-PCH.h"


#define public_4723c6 _public_4723c6

PROC_DECLARE(0x472390, internal_472390, public_472390);
extern "C" NAKED register_t __cdecl internal_472390()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0x42
        push esi
        push edi
        mov esi, ecx
        jne public_4723c6
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+0x60]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        public_4723c6 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x472390)
    }
}

#undef public_4723c6
