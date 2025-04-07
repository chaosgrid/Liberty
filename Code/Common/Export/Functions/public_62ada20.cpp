#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284570);

#define public_62ada3c _public_62ada3c

PROC_DECLARE(0x62ada20, internal_62ada20, public_62ada20);
extern "C" NAKED register_t __cdecl internal_62ada20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x54]
        test eax, eax
        push esi
        je public_62ada3c
        mov esi, dword ptr ss : [esp+8]
        push ecx
        push esi
        call public_6284570
        add esp, 8
        mov eax, esi
        pop esi
        ret 4
        public_62ada3c : nop
        mov eax, dword ptr ss : [esp+8]
        add ecx, 0x2C
        mov esi, dword ptr ds : [ecx]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62ada20)
    }
}

#undef public_62ada3c
