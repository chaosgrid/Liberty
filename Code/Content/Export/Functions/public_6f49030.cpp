#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49030);

#define public_6f49082 _public_6f49082

PROC_DECLARE(0x6f49030, internal_6f49030, public_6f49030);
extern "C" NAKED register_t __cdecl internal_6f49030()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fadd dword ptr ds : [ecx+0x9C]
        fstp dword ptr ds : [ecx+0x9C]
        fld dword ptr ds : [ecx+0xD4]
        fcomp dword ptr ds : [public_6fb7d70]
        fnstsw ax
        test ah, 0x44
        jnp public_6f49082
        fld dword ptr ds : [ecx+0xD4]
        fsub dword ptr ss : [esp+4]
        fst dword ptr ds : [ecx+0xD4]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jp public_6f49082
        mov eax, dword ptr ds : [public_6fb7d70]
        mov dword ptr ds : [ecx+0xD4], eax
        and dword ptr ds : [ecx+0xD0], 0xFFFFFFFB
        public_6f49082 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f49030)
    }
}

#undef public_6f49082
