#include "Deformable2-PCH.h"


#define public_65f1752 _public_65f1752

PROC_DECLARE(0x65f1730, internal_65f1730, public_65f1730);
extern "C" NAKED register_t __cdecl internal_65f1730()
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
        mov ecx, 0xC
        rep movsd
        pop edi
        pop esi
        je public_65f1752
        or al, 2
        mov byte ptr ds : [edx+0x3C], al
        public_65f1752 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x65f1730)
    }
}

#undef public_65f1752
