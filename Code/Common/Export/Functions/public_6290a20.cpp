#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6290a20);

PROC_DECLARE(0x6290a20, internal_6290a20, public_6290a20);
extern "C" NAKED register_t __cdecl internal_6290a20()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        lea eax, ds:[ecx+0x48]
        mov edi, eax
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [edi], eax
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ss : [esp+0x10], 0
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[ecx+0x78]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[ecx+0x9C]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[ecx+0x54]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[ecx+0x84]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[ecx+0xA8]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[ecx+0x90]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[ecx+0x60]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[ecx+0x6C]
        mov dword ptr ds : [edi], eax
        xor eax, eax
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        pop edi
        mov dword ptr ds : [ecx+0xB4], eax
        mov dword ptr ds : [ecx+0xB8], eax
        mov dword ptr ds : [ecx+0xBC], eax
        mov dword ptr ds : [ecx+0xC0], eax
        mov dword ptr ds : [ecx+0xC4], eax
        mov dword ptr ds : [ecx+0xC8], eax
        mov dword ptr ds : [ecx+0xCC], 0x3FD00000
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6290a20)
    }
}
