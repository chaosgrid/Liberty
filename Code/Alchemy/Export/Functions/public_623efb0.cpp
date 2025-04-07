#include "Alchemy-PCH.h"


#define public_623efc3 _public_623efc3
#define public_623efd8 _public_623efd8
#define public_623efe5 _public_623efe5
#define public_623eff8 _public_623eff8

PROC_DECLARE(0x623efb0, internal_623efb0, public_623efb0);
extern "C" NAKED register_t __cdecl internal_623efb0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcom dword ptr ds : [public_624d4c8]
        fnstsw ax
        and eax, 0x4100
        jne public_623efd8
        public_623efc3 : nop
        fsub dword ptr ds : [public_624d4c8]
        fcom dword ptr ds : [public_624d4c8]
        fnstsw ax
        and eax, 0x4100
        je public_623efc3
        public_623efd8 : nop
        fcom dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 5
        jp public_623eff8
        public_623efe5 : nop
        fadd dword ptr ds : [public_624d4c8]
        fcom dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 5
        jnp public_623efe5
        public_623eff8 : nop
        ret 
        UNREACHABLE_TRAP(0x623efb0)
    }
}

#undef public_623efc3
#undef public_623efd8
#undef public_623efe5
#undef public_623eff8
