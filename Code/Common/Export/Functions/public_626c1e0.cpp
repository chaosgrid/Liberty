#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);

#define public_626c222 _public_626c222

PROC_DECLARE(0x626c1e0, internal_626c1e0, public_626c1e0);
extern "C" NAKED register_t __cdecl internal_626c1e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_626c222
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        mov dx, word ptr ds : [ecx+2]
        mov word ptr ds : [eax+2], dx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov dl, byte ptr ds : [ecx+0xC]
        mov byte ptr ds : [eax+0xC], dl
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x10], edx
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax+0x14], edx
        mov dl, byte ptr ds : [ecx+0x18]
        mov byte ptr ds : [eax+0x18], dl
        mov ecx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [eax+0x1C], ecx
        public_626c222 : nop
        ret 
        UNREACHABLE_TRAP(0x626c1e0)
    }
}

#undef public_626c222
