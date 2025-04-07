#include "Common-PCH.h"


#define public_62c87e8 _public_62c87e8

PROC_DECLARE(0x62c87c0, internal_62c87c0, public_62c87c0);
extern "C" NAKED register_t __cdecl internal_62c87c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx+0xC]
        test eax, eax
        mov dword ptr ds : [ecx+0x40], eax
        jne public_62c87e8
        push esi
        push edi
        lea eax, ds:[edx+0x10]
        mov edi, dword ptr ds : [eax]
        lea esi, ds:[ecx+0x34]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edi
        mov eax, dword ptr ds : [eax+8]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_62c87e8 : nop
        mov al, byte ptr ds : [ecx+0x28]
        mov edx, dword ptr ds : [edx+0x1C]
        or al, 2
        mov byte ptr ds : [ecx+0x28], al
        mov dword ptr ds : [ecx+0x30], edx
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x62c87c0)
    }
}

#undef public_62c87e8
