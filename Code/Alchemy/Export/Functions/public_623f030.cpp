#include "Alchemy-PCH.h"


#define public_623f061 _public_623f061
#define public_623f07d _public_623f07d

PROC_DECLARE(0x623f030, internal_623f030, public_623f030);
extern "C" NAKED register_t __cdecl internal_623f030()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        and eax, 0x4100
        jne public_623f061
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [ecx]
        fst dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        and eax, 0x100
        jne public_623f07d
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        mov al, 1
        ret 
        public_623f061 : nop
        fld dword ptr ds : [ecx]
        fsub dword ptr ss : [esp+0xC]
        fst dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jp public_623f07d
        mov edx, dword ptr ss : [esp+8]
        mov al, 1
        mov dword ptr ds : [ecx], edx
        ret 
        public_623f07d : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x623f030)
    }
}

#undef public_623f061
#undef public_623f07d
