#include "FreeLancer-PCH.h"


#define public_4b5230 _public_4b5230
#define public_4b5232 _public_4b5232

PROC_DECLARE(0x4b51d0, internal_4b51d0, public_4b51d0);
extern "C" NAKED register_t __cdecl internal_4b51d0()
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
        jne public_4b5230
        fcomp dword ptr ds : [ecx+0xB4]
        fnstsw ax
        test ah, 0x41
        jp public_4b5232
        fld dword ptr ds : [ecx+0x64]
        fsub dword ptr ss : [esp+4]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_4b5230
        fcomp dword ptr ds : [ecx+0xB8]
        fnstsw ax
        test ah, 0x41
        jp public_4b5232
        mov al, 1
        add esp, 0xC
        ret 4
        public_4b5230 : nop
        fstp st(0)
        public_4b5232 : nop
        xor al, al
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x4b51d0)
    }
}

#undef public_4b5230
#undef public_4b5232
