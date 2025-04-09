#include "FreeLancer-PCH.h"


#define public_454621 _public_454621

PROC_DECLARE(0x454600, internal_454600, public_454600);
extern "C" NAKED register_t __cdecl internal_454600()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d2c0]
        mov ecx, dword ptr ss : [esp+0xC]
        test eax, eax
        mov eax, dword ptr ss : [esp+8]
        je public_454621
        mov byte ptr ds : [eax], 0
        mov edx, dword ptr ds : [public_66d2c0]
        mov dword ptr ds : [ecx], edx
        xor eax, eax
        ret 0xC
        public_454621 : nop
        mov byte ptr ds : [eax], 1
        mov edx, dword ptr ds : [public_66d2bc]
        mov dword ptr ds : [ecx], edx
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x454600)
    }
}

#undef public_454621
