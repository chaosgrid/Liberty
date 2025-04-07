#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ad70);

PROC_DECLARE(0x629ad70, internal_629ad70, public_629ad70);
extern "C" NAKED register_t __cdecl internal_629ad70()
{
    __asm
    {
        mov dx, word ptr ss : [esp+0xC]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov word ptr ds : [eax+8], dx
        mov dl, byte ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0xC], ecx
        xor ecx, ecx
        mov byte ptr ds : [eax+0x12], dl
        mov edx, dword ptr ss : [esp+4]
        mov byte ptr ds : [eax+0x10], cl
        mov byte ptr ds : [eax+0x11], cl
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_639bdcc
        ret 0x14
        UNREACHABLE_TRAP(0x629ad70)
    }
}
