#include "Content-PCH.h"


#define public_6ed67f1 _public_6ed67f1

PROC_DECLARE(0x6ed67c0, internal_6ed67c0, public_6ed67c0);
extern "C" NAKED register_t __cdecl internal_6ed67c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x24]
        mov edx, dword ptr ds : [eax+0x48]
        mov eax, dword ptr ss : [esp+4]
        cmp edx, dword ptr ds : [eax+4]
        jne public_6ed67f1
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [eax]
        jne public_6ed67f1
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6ed67f1
        mov ecx, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx-4]
        cmp edx, dword ptr ds : [eax+0xC]
        jne public_6ed67f1
        mov eax, 1
        ret 4
        public_6ed67f1 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6ed67c0)
    }
}

#undef public_6ed67f1
