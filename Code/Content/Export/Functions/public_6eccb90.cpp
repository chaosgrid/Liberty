#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6eccbd6 _public_6eccbd6

PROC_DECLARE(0x6eccb90, internal_6eccb90, public_6eccb90);
extern "C" NAKED register_t __cdecl internal_6eccb90()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6eccbd6
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f481e0
        test eax, 0x3FFFFFFF
        je public_6eccbd6
        mov edx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0xC]
        push edx
        mov edx, dword ptr ds : [ecx+8]
        push eax
        mov eax, dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        call dword ptr ds : [public_6fb33f8]
        add esp, 0xC
        public_6eccbd6 : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eccb90)
    }
}

#undef public_6eccbd6
