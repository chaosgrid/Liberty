#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dfbd0);

PROC_DECLARE(0x4dfbd0, internal_4dfbd0, public_4dfbd0);
extern "C" NAKED register_t __cdecl internal_4dfbd0()
{
    __asm
    {
        push ecx
        mov eax, ecx
        xor ecx, ecx
        mov byte ptr ds : [eax+0x23], cl
        mov byte ptr ds : [eax+0x22], cl
        mov byte ptr ds : [eax+0x21], cl
        mov byte ptr ds : [eax+0x20], cl
        mov edx, dword ptr ds : [public_5c6368]
        mov dx, word ptr ds : [edx]
        mov word ptr ds : [eax], dx
        mov dl, 0xFF
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ss : [esp], dl
        mov byte ptr ss : [esp+1], cl
        mov byte ptr ss : [esp+2], cl
        mov byte ptr ss : [esp+3], dl
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [eax+8], 0x3F19999A
        mov dword ptr ds : [eax+0xC], 0x41800000
        mov dword ptr ds : [eax+0x10], 0x42000000
        mov dword ptr ds : [eax+0x14], 0x3E68BA2F
        mov dword ptr ds : [eax+0x18], 0x3E8BA2E9
        mov dword ptr ds : [eax+0x1C], 0x3EBA2E8C
        mov dword ptr ds : [eax+0x20], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4dfbd0)
    }
}
