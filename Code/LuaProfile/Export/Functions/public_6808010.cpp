#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806ed0);
CLANG_FORWARD_PROC_SYMBOL(public_68074b0);
CLANG_FORWARD_PROC_SYMBOL(public_6808010);
CLANG_FORWARD_PROC_SYMBOL(public_68080c0);
CLANG_FORWARD_PROC_SYMBOL(public_680bdaa);

#define public_6808028 _public_6808028
#define public_680807b _public_680807b
#define public_680808e _public_680808e
#define public_6808090 _public_6808090

PROC_DECLARE(0x6808010, internal_6808010, public_6808010);
extern "C" NAKED register_t __cdecl internal_6808010()
{
    __asm
    {
        push ecx
        fld qword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_680c180]
        fld qword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 1
        je public_6808028
        fchs 
        public_6808028 : nop
        fld qword ptr ds : [public_680c180]
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_680808e
        fcom qword ptr ds : [public_680c1a0]
        fnstsw ax
        test ah, 0x41
        je public_680808e
        fld st(0)
        call public_680bdaa
        mov ecx, eax
        mov dword ptr ss : [esp], ecx
        fild dword ptr ss : [esp]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x40
        je public_6808090
        fld qword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_680c180]
        fnstsw ax
        test ah, 1
        mov eax, 9
        jne public_680807b
        mov eax, 7
        public_680807b : nop
        push 1
        push ecx
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_6806ed0
        add esp, 0x10
        pop ecx
        ret 
        public_680808e : nop
        fstp st(0)
        public_6808090 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        push edx
        push eax
        call public_68080c0
        push eax
        push esi
        call public_68074b0
        add esp, 0x14
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6808010)
    }
}

#undef public_6808028
#undef public_680807b
#undef public_680808e
#undef public_6808090
