#include "Common-PCH.h"


#define public_62bfd3f _public_62bfd3f

PROC_DECLARE(0x62bfd10, internal_62bfd10, public_62bfd10);
extern "C" NAKED register_t __cdecl internal_62bfd10()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], 0
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        push esi
        mov esi, 0xFFFFFFFD
        je public_62bfd3f
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 3
        cmp al, 3
        jne public_62bfd3f
        mov ecx, dword ptr ds : [ecx+0xE0]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        pop esi
        ret 4
        public_62bfd3f : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62bfd10)
    }
}

#undef public_62bfd3f
