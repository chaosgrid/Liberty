#include "FreeLancer-PCH.h"


#define public_5a2700 _public_5a2700
#define public_5a2702 _public_5a2702

PROC_DECLARE(0x5a26a0, internal_5a26a0, public_5a26a0);
extern "C" NAKED register_t __cdecl internal_5a26a0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx+0x68]
        fdiv dword ptr ds : [eax+8]
        fld st(0)
        fmul dword ptr ds : [eax]
        fxch 
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fsub dword ptr ds : [ecx+0x60]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_5a2700
        fcomp dword ptr ds : [ecx+0x898]
        fnstsw ax
        test ah, 0x41
        jp public_5a2702
        fld dword ptr ds : [ecx+0x64]
        fsub dword ptr ss : [esp+4]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_5a2700
        fcomp dword ptr ds : [ecx+0x89C]
        fnstsw ax
        test ah, 0x41
        jp public_5a2702
        mov al, 1
        add esp, 0xC
        ret 4
        public_5a2700 : nop
        fstp st(0)
        public_5a2702 : nop
        xor al, al
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x5a26a0)
    }
}

#undef public_5a2700
#undef public_5a2702
