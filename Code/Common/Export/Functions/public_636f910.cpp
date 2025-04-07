#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636f910);
CLANG_FORWARD_PROC_SYMBOL(public_63812e0);

#define public_636f91b _public_636f91b
#define public_636f934 _public_636f934
#define public_636f93b _public_636f93b
#define public_636f96d _public_636f96d
#define public_636f96f _public_636f96f

PROC_DECLARE(0x636f910, internal_636f910, public_636f910);
extern "C" NAKED register_t __cdecl internal_636f910()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_658b81c]
        test esi, esi
        je public_636f93b
        public_636f91b : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_636f93b
        test dword ptr ds : [esi+0x50], 0x1000000
        jne public_636f934
        push esi
        call public_63812e0
        add esp, 4
        public_636f934 : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_636f91b
        public_636f93b : nop
        fld qword ptr ds : [public_658b878]
        pop esi
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_636f96f
        fld qword ptr ds : [public_658bdd0]
        fchs 
        fld qword ptr ds : [public_658b898]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_636f96d
        fstp qword ptr ds : [public_658b898]
        ret 
        public_636f96d : nop
        fstp st(0)
        public_636f96f : nop
        ret 
        UNREACHABLE_TRAP(0x636f910)
    }
}

#undef public_636f91b
#undef public_636f934
#undef public_636f93b
#undef public_636f96d
#undef public_636f96f
