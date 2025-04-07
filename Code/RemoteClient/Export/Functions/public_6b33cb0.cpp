#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b33cb0);

#define public_6b33cf2 _public_6b33cf2

PROC_DECLARE(0x6b33cb0, internal_6b33cb0, public_6b33cb0);
extern "C" NAKED register_t __cdecl internal_6b33cb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6b33cf2
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
        public_6b33cf2 : nop
        ret 
        UNREACHABLE_TRAP(0x6b33cb0)
    }
}

#undef public_6b33cf2
