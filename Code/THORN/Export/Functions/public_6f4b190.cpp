#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b190);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c340);

PROC_DECLARE(0x6f4b190, internal_6f4b190, public_6f4b190);
extern "C" NAKED register_t __cdecl internal_6f4b190()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        sub ecx, edx
        mov edx, dword ptr ds : [eax+0xC]
        sar ecx, 4
        sub ecx, edx
        push ecx
        call public_6f4c340
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+8]
        shl edx, 4
        add edx, ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0xC]
        add esp, 4
        inc ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [ecx+0xC]
        ret 
        UNREACHABLE_TRAP(0x6f4b190)
    }
}
