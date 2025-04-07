#include "Deformable2-PCH.h"


#define public_65f16d9 _public_65f16d9

PROC_DECLARE(0x65f16b0, internal_65f16b0, public_65f16b0);
extern "C" NAKED register_t __cdecl internal_65f16b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ds : [edx]
        lea eax, ds:[ecx+0x30]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov al, byte ptr ds : [ecx+0x3C]
        test al, 1
        pop esi
        je public_65f16d9
        or al, 2
        mov byte ptr ds : [ecx+0x3C], al
        public_65f16d9 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x65f16b0)
    }
}

#undef public_65f16d9
