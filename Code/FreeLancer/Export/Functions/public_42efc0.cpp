#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42efc0);

PROC_DECLARE(0x42efc0, internal_42efc0, public_42efc0);
extern "C" NAKED register_t __cdecl internal_42efc0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        push esi
        push edi
        lea edx, ds:[ecx+0x10]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x10]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x1C]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x1C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x28]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x28]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x34]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x34]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x40]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x40]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x4C]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x4C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ds : [ecx+0x58]
        mov dword ptr ds : [eax+0x58], edx
        mov edx, dword ptr ds : [ecx+0x5C]
        mov dword ptr ds : [eax+0x5C], edx
        mov edx, dword ptr ds : [ecx+0x60]
        mov dword ptr ds : [eax+0x60], edx
        mov edx, dword ptr ds : [ecx+0x64]
        mov dword ptr ds : [eax+0x64], edx
        mov edx, dword ptr ds : [ecx+0x68]
        mov dword ptr ds : [eax+0x68], edx
        mov edx, dword ptr ds : [ecx+0x6C]
        mov dword ptr ds : [eax+0x6C], edx
        mov edx, dword ptr ds : [ecx+0x70]
        mov dword ptr ds : [eax+0x70], edx
        mov edx, dword ptr ds : [ecx+0x74]
        mov dword ptr ds : [eax+0x74], edx
        mov edx, dword ptr ds : [ecx+0x78]
        mov dword ptr ds : [eax+0x78], edx
        mov ecx, dword ptr ds : [ecx+0x7C]
        mov dword ptr ds : [eax+0x7C], ecx
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x42efc0)
    }
}
