#include "ImeUi-PCH.h"


#define public_6711e0a _public_6711e0a

PROC_DECLARE(0x6711dc0, internal_6711dc0, public_6711dc0);
extern "C" NAKED register_t __cdecl internal_6711dc0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push ebx
        mov eax, ecx
        push esi
        push edi
        lea esi, ds:[edx+4]
        lea edi, ds:[eax+4]
        mov ecx, 6
        rep movsd
        lea ecx, ds:[edx+0x1C]
        lea esi, ds:[eax+0x1C]
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov edi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], edi
        mov edi, 0x20
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [edx+0x2C]
        mov dword ptr ds : [eax+0x2C], ecx
        mov ecx, dword ptr ds : [edx+0x30]
        mov esi, edx
        mov dword ptr ds : [eax+0x30], ecx
        lea ecx, ds:[eax+0x34]
        sub esi, eax
        public_6711e0a : nop
        mov bx, word ptr ds : [esi+ecx]
        mov word ptr ds : [ecx], bx
        add ecx, 2
        dec edi
        jne public_6711e0a
        mov ecx, dword ptr ds : [edx+0x74]
        pop edi
        mov dword ptr ds : [eax+0x74], ecx
        mov ecx, dword ptr ds : [edx+0x78]
        mov dword ptr ds : [eax+0x78], ecx
        mov cl, byte ptr ds : [edx+0x7C]
        mov byte ptr ds : [eax+0x7C], cl
        mov ecx, dword ptr ds : [edx+0x80]
        mov dword ptr ds : [eax+0x80], ecx
        mov ecx, dword ptr ds : [edx+0x84]
        mov dword ptr ds : [eax+0x84], ecx
        mov ecx, dword ptr ds : [edx+0x88]
        mov dword ptr ds : [eax+0x88], ecx
        mov cl, byte ptr ds : [edx+0x8C]
        mov byte ptr ds : [eax+0x8C], cl
        mov edx, dword ptr ds : [edx+0x90]
        pop esi
        mov dword ptr ds : [eax+0x90], edx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6711dc0)
    }
}

#undef public_6711e0a
