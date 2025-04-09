#include "FreeLancer-PCH.h"


#define public_57aafe _public_57aafe
#define public_57ab00 _public_57ab00

PROC_DECLARE(0x57aa80, internal_57aa80, public_57aa80);
extern "C" NAKED register_t __cdecl internal_57aa80()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x471]
        sub esp, 0xC
        test al, al
        jne public_57ab00
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
        jne public_57aafe
        fld dword ptr ds : [ecx+0x340]
        fsub dword ptr ds : [ecx+0x338]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jp public_57ab00
        fld dword ptr ds : [ecx+0x64]
        fsub dword ptr ss : [esp+4]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_57aafe
        fld dword ptr ds : [ecx+0x33C]
        fsub dword ptr ds : [ecx+0x344]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jp public_57ab00
        mov al, 1
        add esp, 0xC
        ret 4
        public_57aafe : nop
        fstp st(0)
        public_57ab00 : nop
        xor al, al
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x57aa80)
    }
}

#undef public_57aafe
#undef public_57ab00
