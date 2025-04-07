#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5990);

#define public_6bd59d2 _public_6bd59d2

PROC_DECLARE(0x6bd5990, internal_6bd5990, public_6bd5990);
extern "C" NAKED register_t __cdecl internal_6bd5990()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6bd59d2
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
        public_6bd59d2 : nop
        ret 
        UNREACHABLE_TRAP(0x6bd5990)
    }
}

#undef public_6bd59d2
