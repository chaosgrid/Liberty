#include "Common-PCH.h"

PROC_DECLARE(0x6290930, internal_6290930, public_6290930);
extern "C" NAKED register_t __cdecl internal_6290930()
{
    __asm
    {
        sub esp, 0xC
        mov eax, ecx
        push esi
        push edi
        lea ecx, ds:[eax+0x48]
        mov edi, ecx
        mov dword ptr ss : [esp+8], 0
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ss : [esp+0x10], 0
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[eax+0x78]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[eax+0x9C]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[eax+0x54]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[eax+0x84]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[eax+0xA8]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[eax+0x90]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[eax+0x60]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[eax+0x6C]
        mov dword ptr ds : [edi], ecx
        xor ecx, ecx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        pop edi
        mov dword ptr ds : [eax], offset public_639b98c
        mov dword ptr ds : [eax+0xB4], ecx
        mov dword ptr ds : [eax+0xB8], ecx
        mov dword ptr ds : [eax+0xBC], ecx
        mov dword ptr ds : [eax+0xC0], ecx
        mov dword ptr ds : [eax+0xC4], ecx
        mov dword ptr ds : [eax+0xC8], ecx
        mov dword ptr ds : [eax+0xCC], 0x3FD00000
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6290930)
    }
}
