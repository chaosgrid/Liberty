#include "THORN-PCH.h"


#define public_6f49424 _public_6f49424
#define public_6f4942e _public_6f4942e

PROC_DECLARE(0x6f493e0, internal_6f493e0, public_6f493e0);
extern "C" NAKED register_t __cdecl internal_6f493e0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx+0x40]
        test eax, eax
        mov dword ptr ss : [esp], eax
        je public_6f4942e
        mov eax, dword ptr ss : [esp+0x10]
        sub eax, dword ptr ds : [ecx+0x2C]
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp+8], 0
        fild qword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+0x4C]
        test ecx, ecx
        fidiv dword ptr ss : [esp]
        fstp dword ptr ss : [esp+0x10]
        je public_6f49424
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xC]
        add esp, 0xC
        ret 8
        public_6f49424 : nop
        fld dword ptr ss : [esp+0x10]
        add esp, 0xC
        ret 8
        public_6f4942e : nop
        fld dword ptr ds : [public_6f5a1b8]
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6f493e0)
    }
}

#undef public_6f49424
#undef public_6f4942e
