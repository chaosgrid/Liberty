#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ed620);

#define public_62ed662 _public_62ed662

PROC_DECLARE(0x62ed620, internal_62ed620, public_62ed620);
extern "C" NAKED register_t __cdecl internal_62ed620()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        xor edx, edx
        cmp esi, edx
        je public_62ed662
        mov eax, dword ptr ds : [esi+8]
        cmp eax, edx
        je public_62ed662
        add eax, 0xFFFFFFF8
        cmp eax, edx
        je public_62ed662
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ecx+8], 2
        mov dword ptr ds : [ecx+0x18], edx
        mov dword ptr ds : [ecx+0xC], 0x3F000000
        mov dword ptr ds : [ecx+0x44], edx
        mov dword ptr ds : [ecx+0x40], edx
        mov dword ptr ds : [ecx+0x3C], edx
        mov dword ptr ds : [ecx+0x4C], edx
        mov byte ptr ds : [ecx+0x48], dl
        mov al, 1
        pop esi
        ret 4
        public_62ed662 : nop
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62ed620)
    }
}

#undef public_62ed662
