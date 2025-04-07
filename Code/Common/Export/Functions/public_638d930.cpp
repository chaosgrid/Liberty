#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6380e30);
CLANG_FORWARD_PROC_SYMBOL(public_638d930);

#define public_638d98c _public_638d98c
#define public_638d990 _public_638d990
#define public_638d9b0 _public_638d9b0
#define public_638d9dc _public_638d9dc

PROC_DECLARE(0x638d930, internal_638d930, public_638d930);
extern "C" NAKED register_t __cdecl internal_638d930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x18
        test eax, eax
        push esi
        je public_638d990
        mov eax, dword ptr ds : [public_658ba58]
        mov ecx, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x28]
        inc eax
        mov dword ptr ds : [public_658ba58], eax
        mov edx, dword ptr ds : [ecx+0x28]
        lea eax, ss:[esp+0xC]
        push eax
        push esi
        push edx
        call public_637fd60
        fild dword ptr ds : [public_658b24c]
        add esp, 0xC
        fmul qword ptr ss : [esp+0xC]
        fcom qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 1
        je public_638d98c
        fld qword ptr ds : [public_63a58b0]
        fld st(1)
        fstp qword ptr ss : [esp+4]
        fxch 
        fchs 
        fxch 
        jmp public_638d9b0
        public_638d98c : nop
        fld st(0)
        jmp public_638d9b0
        public_638d990 : nop
        mov esi, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        push esi
        push edx
        call public_6380e30
        fld qword ptr ss : [esp+0x24]
        add esp, 0x10
        public_638d9b0 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        fld st(1)
        fcomp qword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_638d9dc
        mov eax, dword ptr ss : [esp+0x2C]
        fld qword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax], esi
        fstp qword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x38]
        fstp qword ptr ds : [eax]
        pop esi
        fstp qword ptr ds : [ecx]
        add esp, 0x18
        ret 
        public_638d9dc : nop
        fstp st(0)
        pop esi
        fstp st(0)
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x638d930)
    }
}

#undef public_638d98c
#undef public_638d990
#undef public_638d9b0
#undef public_638d9dc
