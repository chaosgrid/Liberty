#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801df0);
CLANG_FORWARD_PROC_SYMBOL(public_6802950);

PROC_DECLARE(0x6801df0, internal_6801df0, public_6801df0);
extern "C" NAKED register_t __cdecl internal_6801df0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        sub ecx, edx
        mov edx, dword ptr ds : [eax+0xC]
        sar ecx, 4
        sub ecx, edx
        push ecx
        call public_6802950
        mov eax, dword ptr ds : [public_680e604]
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
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0xC]
        add esp, 4
        inc ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [ecx+0xC]
        ret 
        UNREACHABLE_TRAP(0x6801df0)
    }
}
