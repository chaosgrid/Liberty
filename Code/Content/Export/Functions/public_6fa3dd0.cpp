#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa3dd0);

#define public_6fa3de1 _public_6fa3de1
#define public_6fa3deb _public_6fa3deb

PROC_DECLARE(0x6fa3dd0, internal_6fa3dd0, public_6fa3dd0);
extern "C" NAKED register_t __cdecl internal_6fa3dd0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp ecx, esi
        je public_6fa3deb
        public_6fa3de1 : nop
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        inc eax
        inc ecx
        cmp ecx, esi
        jne public_6fa3de1
        public_6fa3deb : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6fa3dd0)
    }
}

#undef public_6fa3de1
#undef public_6fa3deb
