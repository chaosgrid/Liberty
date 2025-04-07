#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433d50);

#define public_433d94 _public_433d94

PROC_DECLARE(0x433d50, internal_433d50, public_433d50);
extern "C" NAKED register_t __cdecl internal_433d50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_433d94
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+4], offset public_5cad44
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x10], edx
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [eax+0x14], dl
        mov dl, byte ptr ds : [ecx+0x15]
        mov byte ptr ds : [eax+0x15], dl
        mov cx, word ptr ds : [ecx+0x16]
        mov word ptr ds : [eax+0x16], cx
        mov dword ptr ds : [eax+4], offset public_5cabfc
        public_433d94 : nop
        ret 
        UNREACHABLE_TRAP(0x433d50)
    }
}

#undef public_433d94
