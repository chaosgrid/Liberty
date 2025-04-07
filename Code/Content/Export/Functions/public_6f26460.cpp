#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f26460);

#define public_6f264bc _public_6f264bc

PROC_DECLARE(0x6f26460, internal_6f26460, public_6f26460);
extern "C" NAKED register_t __cdecl internal_6f26460()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov dword ptr ds : [ecx+0x118], 1
        mov esi, dword ptr ds : [edx]
        lea eax, ds:[ecx+0x11C]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x15C], eax
        mov eax, dword ptr ss : [esp+0x14]
        test eax, 0x3FFFFFFF
        mov dword ptr ds : [ecx+0x160], edx
        mov dl, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [ecx+0x164], 0
        pop esi
        mov byte ptr ds : [ecx+0x166], dl
        je public_6f264bc
        mov dword ptr ds : [ecx+0x168], eax
        public_6f264bc : nop
        mov al, byte ptr ss : [esp+0x14]
        mov byte ptr ds : [ecx+0x167], al
        ret 0x18
        UNREACHABLE_TRAP(0x6f26460)
    }
}

#undef public_6f264bc
