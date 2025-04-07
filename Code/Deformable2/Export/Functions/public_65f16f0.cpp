#include "Deformable2-PCH.h"


#define public_65f1712 _public_65f1712

PROC_DECLARE(0x65f16f0, internal_65f16f0, public_65f16f0);
extern "C" NAKED register_t __cdecl internal_65f16f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov al, byte ptr ds : [edx+0x3C]
        test al, 1
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[edx+0xC]
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        je public_65f1712
        or al, 2
        mov byte ptr ds : [edx+0x3C], al
        public_65f1712 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x65f16f0)
    }
}

#undef public_65f1712
