#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284f70);
CLANG_FORWARD_PROC_SYMBOL(public_62888b0);
CLANG_FORWARD_PROC_SYMBOL(public_6288900);
CLANG_FORWARD_PROC_SYMBOL(public_6297b20);
CLANG_FORWARD_PROC_SYMBOL(public_6298860);

#define public_62989c4 _public_62989c4
#define public_62989d5 _public_62989d5
#define public_62989e8 _public_62989e8
#define public_62989f7 _public_62989f7
#define public_6298a10 _public_6298a10
#define public_6298a7f _public_6298a7f
#define public_6298a90 _public_6298a90
#define public_6298aa3 _public_6298aa3
#define public_6298ab2 _public_6298ab2
#define public_6298acb _public_6298acb
#define public_6298af2 _public_6298af2
#define public_6298af4 _public_6298af4
#define public_6298b01 _public_6298b01

PROC_DECLARE(0x6298860, internal_6298860, public_6298860);
extern "C" NAKED register_t __cdecl internal_6298860()
{
    __asm
    {
        sub esp, 0x94
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp]
        xor bl, bl
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6298b01
        push esi
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebp
        call public_6297b20
        mov ecx, dword ptr ss : [esp+0xA8]
        fld dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [ebp]
        fsub dword ptr ds : [eax+8]
        push 0
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx]
        mov ecx, ebp
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x38]
        call dword ptr ds : [edx+0x64]
        mov ecx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x5C]
        lea eax, ss:[ebp+0x22C]
        rep movsd
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        call public_6288900
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x4C]
        add esp, 0xC
        push eax
        mov eax, dword ptr ss : [esp+0x58]
        push ecx
        mov ecx, dword ptr ss : [esp+0x50]
        push edx
        mov edx, dword ptr ss : [esp+0x48]
        push eax
        mov eax, dword ptr ss : [esp+0x60]
        push ecx
        mov ecx, dword ptr ss : [esp+0x58]
        push edx
        mov edx, dword ptr ss : [esp+0x50]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0xA4]
        call public_6284f70
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x84]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        call public_62888b0
        fld dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x28]
        add esp, 0xC
        fchs 
        fpatan 
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fsqrt 
        fdivp 
        fld1 
        fpatan 
        pop edi
        pop esi
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0xA4]
        fchs 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0xA4]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ss : [ebp+0x1FC]
        cmp eax, 0xFFFFFFFF
        je public_62989c4
        mov ecx, dword ptr ds : [public_6399040]
        fstp st(0)
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xC4]
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [eax+0x4C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xA4]
        fadd dword ptr ds : [eax+0x50]
        public_62989c4 : nop
        fld dword ptr ss : [esp+8]
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_62989e8
        public_62989d5 : nop
        fsub dword ptr ds : [public_639c9e8]
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        je public_62989d5
        public_62989e8 : nop
        fld st(1)
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 5
        jp public_6298a10
        public_62989f7 : nop
        fxch 
        fadd dword ptr ds : [public_639c9e8]
        fxch 
        fld st(1)
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 5
        jnp public_62989f7
        public_6298a10 : nop
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+8]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jp public_6298af2
        fld dword ptr ss : [esp+8]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6298af4
        mov ebp, dword ptr ss : [ebp+0x218]
        fld dword ptr ss : [esp+0xA4]
        cmp ebp, 0xFFFFFFFF
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+8], eax
        je public_6298a7f
        mov ecx, dword ptr ds : [public_6399040]
        fstp st(0)
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [edx+0xC4]
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [eax+0x4C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xA4]
        fadd dword ptr ds : [eax+0x50]
        public_6298a7f : nop
        fld dword ptr ss : [esp+8]
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_6298aa3
        public_6298a90 : nop
        fsub dword ptr ds : [public_639c9e8]
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        je public_6298a90
        public_6298aa3 : nop
        fld st(1)
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 5
        jp public_6298acb
        public_6298ab2 : nop
        fxch 
        fadd dword ptr ds : [public_639c9e8]
        fxch 
        fld st(1)
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 5
        jnp public_6298ab2
        public_6298acb : nop
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x41
        jp public_6298af2
        fld dword ptr ss : [esp+0x1C]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6298af4
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x94
        ret 8
        public_6298af2 : nop
        fstp st(0)
        public_6298af4 : nop
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x94
        ret 8
        public_6298b01 : nop
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x94
        ret 8
        UNREACHABLE_TRAP(0x6298860)
    }
}

#undef public_62989c4
#undef public_62989d5
#undef public_62989e8
#undef public_62989f7
#undef public_6298a10
#undef public_6298a7f
#undef public_6298a90
#undef public_6298aa3
#undef public_6298ab2
#undef public_6298acb
#undef public_6298af2
#undef public_6298af4
#undef public_6298b01
