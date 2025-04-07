#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68029a0);

PROC_DECLARE(0x68029a0, internal_68029a0, public_68029a0);
extern "C" NAKED register_t __cdecl internal_68029a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        push ebx
        lea ecx, ds:[eax+0xC]
        push ebp
        push esi
        mov esi, dword ptr ds : [eax+4]
        mov edx, ecx
        push edi
        mov edi, dword ptr ds : [edx]
        mov ebx, dword ptr ds : [edx+4]
        mov ebp, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [eax]
        sub edx, esi
        sar edx, 4
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x10], ecx
        mov eax, dword ptr ds : [public_680e604]
        mov esi, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax+0x14], 0
        mov eax, dword ptr ds : [public_680e604]
        push edx
        call dword ptr ds : [eax+0x3C]
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+4]
        shl esi, 4
        add ecx, esi
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [public_680e604]
        add esp, 4
        add edx, 0xC
        mov dword ptr ds : [edx], edi
        pop edi
        mov dword ptr ds : [edx+4], ebx
        pop esi
        mov dword ptr ds : [edx+8], ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x68029a0)
    }
}
