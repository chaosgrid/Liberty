#include "FLServer-PCH.h"


#define public_409c10 _public_409c10
#define public_409c40 _public_409c40

PROC_DECLARE(0x409bf0, internal_409bf0, public_409bf0);
extern "C" NAKED register_t __cdecl internal_409bf0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push ecx
        mov edx, dword ptr ss : [ebp+8]
        push ebx
        mov eax, ecx
        push esi
        push edi
        lea ecx, ds:[eax+8]
        sub edx, eax
        mov dword ptr ss : [esp+0xC], 3
        lea esp, ss:[esp]
        public_409c10 : nop
        lea esi, ds:[edx+ecx]
        mov ebx, dword ptr ds : [esi]
        mov edi, ecx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], esi
        mov esi, dword ptr ss : [esp+0xC]
        add ecx, 0xC
        dec esi
        mov dword ptr ss : [esp+0xC], esi
        jne public_409c10
        lea ecx, ds:[eax+0x30]
        mov esi, 3
        nop 
        lea esp, ss:[esp]
        public_409c40 : nop
        mov edi, dword ptr ds : [ecx+edx]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [ecx+edx+4]
        mov dword ptr ds : [ecx+4], edi
        add ecx, 8
        dec esi
        jne public_409c40
        mov ecx, dword ptr ss : [ebp+8]
        lea edx, ds:[ecx+0x48]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x48]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x54]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x54]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x60]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x60]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x6C]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x6C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x78]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x78]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x84]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x84]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x90]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x90]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x9C]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x9C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0xA8]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0xA8]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ds : [ecx+0xB4]
        mov dword ptr ds : [eax+0xB4], edx
        mov edx, dword ptr ds : [ecx+0xB8]
        mov dword ptr ds : [eax+0xB8], edx
        mov edx, dword ptr ds : [ecx+0xBC]
        mov dword ptr ds : [eax+0xBC], edx
        mov edx, dword ptr ds : [ecx+0xC0]
        mov dword ptr ds : [eax+0xC0], edx
        mov edx, dword ptr ds : [ecx+0xC4]
        mov dword ptr ds : [eax+0xC4], edx
        mov edx, dword ptr ds : [ecx+0xC8]
        pop edi
        mov dword ptr ds : [eax+0xC8], edx
        mov ecx, dword ptr ds : [ecx+0xCC]
        pop esi
        mov dword ptr ds : [eax+0xCC], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x409bf0)
    }
}

#undef public_409c10
#undef public_409c40
