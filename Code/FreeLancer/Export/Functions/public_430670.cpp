#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430670);

#define public_430766 _public_430766

PROC_DECLARE(0x430670, internal_430670, public_430670);
extern "C" NAKED register_t __cdecl internal_430670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_430766
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x10], edx
        push esi
        push edi
        lea edx, ds:[ecx+0x14]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x14]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x20]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x20]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x2C]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x2C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x38]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x38]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x44]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x44]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x50]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x50]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
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
        mov edx, dword ptr ds : [ecx+0x7C]
        mov dword ptr ds : [eax+0x7C], edx
        mov ecx, dword ptr ds : [ecx+0x80]
        mov dword ptr ds : [eax+0x80], ecx
        pop edi
        pop esi
        public_430766 : nop
        ret 
        UNREACHABLE_TRAP(0x430670)
    }
}

#undef public_430766
