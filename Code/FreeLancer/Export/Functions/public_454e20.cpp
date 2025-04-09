#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_454e20);

PROC_DECLARE(0x454e20, internal_454e20, public_454e20);
extern "C" NAKED register_t __cdecl internal_454e20()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov eax, ecx
        xor ecx, ecx
        lea edx, ds:[eax+0xC]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        push edi
        mov edi, ecx
        mov esi, edx
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov esi, 0x3F800000
        mov dword ptr ds : [edx+0x2C], esi
        mov dword ptr ds : [edx+0x1C], esi
        mov dword ptr ds : [edx+0xC], esi
        pop edi
        mov dword ptr ds : [edx+0x28], ecx
        mov dword ptr ds : [edx+0x24], ecx
        mov dword ptr ds : [edx+0x20], ecx
        mov dword ptr ds : [edx+0x18], ecx
        mov dword ptr ds : [edx+0x14], ecx
        mov dword ptr ds : [edx+0x10], ecx
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x454e20)
    }
}
