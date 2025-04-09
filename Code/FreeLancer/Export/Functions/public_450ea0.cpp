#include "FreeLancer-PCH.h"


#define public_450eb4 _public_450eb4

PROC_DECLARE(0x450ea0, internal_450ea0, public_450ea0);
extern "C" NAKED register_t __cdecl internal_450ea0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x6C]
        test eax, eax
        je public_450eb4
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x30]
        public_450eb4 : nop
        mov ecx, dword ptr ds : [ecx+0x64]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x24D
/*FIXUP push offset public_5ccdf0 @0x450ec3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdf0
        mov eax, 0x100001
/*FIXUP push offset public_5ccdb8 @0x450ecd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ccdb8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x450ea0)
    }
}

#undef public_450eb4
