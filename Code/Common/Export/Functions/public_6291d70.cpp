#include "Common-PCH.h"

PROC_DECLARE(0x6291d70, internal_6291d70, public_6291d70);
extern "C" NAKED register_t __cdecl internal_6291d70()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        lea eax, ds:[ecx+0x278]
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
        lea edi, ds:[ecx+0x284]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[ecx+0x290]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        lea edi, ds:[ecx+0x2AC]
        mov dword ptr ds : [edi], eax
        xor eax, eax
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        pop edi
        mov dword ptr ds : [ecx+0x2B8], eax
        mov dword ptr ds : [ecx+0x2C8], eax
        mov dword ptr ds : [ecx+0x2CC], eax
        mov dword ptr ds : [ecx+0x2C0], eax
        mov dword ptr ds : [ecx+0x2C4], eax
        mov dword ptr ds : [ecx+0x2D8], eax
        mov dword ptr ds : [ecx+0x2DC], 0x40140000
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6291d70)
    }
}
