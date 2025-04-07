#include "EngBase-PCH.h"


#define public_6621bad _public_6621bad
#define public_6621bb5 _public_6621bb5

PROC_DECLARE(0x6621ba0, internal_6621ba0, public_6621ba0);
extern "C" NAKED register_t __cdecl internal_6621ba0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0xFFFFFFFF
        je public_6621bad
        test ecx, ecx
        jne public_6621bb5
        public_6621bad : nop
        mov eax, dword ptr ds : [public_662b110]
        ret 8
        public_6621bb5 : nop
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        mov edx, dword ptr ds : [eax]
        jmp dword ptr ds : [edx+0x18]
        UNREACHABLE_TRAP(0x6621ba0)
    }
}

#undef public_6621bad
#undef public_6621bb5
