#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced210);

#define public_6ced252 _public_6ced252

PROC_DECLARE(0x6ced210, internal_6ced210, public_6ced210);
extern "C" NAKED register_t __cdecl internal_6ced210()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6ced252
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
        public_6ced252 : nop
        ret 
        UNREACHABLE_TRAP(0x6ced210)
    }
}

#undef public_6ced252
