#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9e5a0);

PROC_DECLARE(0x6f9e5a0, internal_6f9e5a0, public_6f9e5a0);
extern "C" NAKED register_t __cdecl internal_6f9e5a0()
{
    __asm
    {
        push ecx
        mov dl, byte ptr ss : [esp+3]
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [eax+0xC], cl
        mov byte ptr ds : [eax+0xD], cl
        mov byte ptr ds : [eax+0xE], cl
        mov byte ptr ds : [eax+0xF], cl
        mov byte ptr ds : [eax+0x10], cl
        mov byte ptr ds : [eax+0x11], cl
        mov byte ptr ds : [eax+0x12], cl
        mov byte ptr ds : [eax+0x13], cl
        mov byte ptr ds : [eax+0x14], cl
        mov byte ptr ds : [eax+0x15], cl
        mov byte ptr ds : [eax+0x16], cl
        mov byte ptr ds : [eax+0x17], cl
        mov byte ptr ds : [eax+0x18], cl
        mov byte ptr ds : [eax+0x19], cl
        mov dword ptr ds : [eax+0x1C], ecx
        mov byte ptr ds : [eax+0x20], dl
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax], offset public_6fbc700
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f9e5a0)
    }
}
