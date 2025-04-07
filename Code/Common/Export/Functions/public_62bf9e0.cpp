#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6296620);
CLANG_FORWARD_PROC_SYMBOL(public_629b720);
CLANG_FORWARD_PROC_SYMBOL(public_629fb90);

#define public_62bfa5c _public_62bfa5c
#define public_62bfa68 _public_62bfa68
#define public_62bfa75 _public_62bfa75

PROC_DECLARE(0x62bf9e0, internal_62bf9e0, public_62bf9e0);
extern "C" NAKED register_t __cdecl internal_62bf9e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        push esi
        mov esi, 0xFFFFFFFD
        je public_62bfa75
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62bfa75
        push 0x20000
        lea ecx, ds:[eax+0xE4]
        call public_629b720
        push eax
        call public_6296620
        add esp, 4
        test eax, eax
        je public_62bfa75
        mov cl, byte ptr ds : [eax+0x54]
        test cl, cl
        mov edx, dword ptr ss : [esp+8]
        mov byte ptr ds : [edx], cl
        je public_62bfa68
        mov ecx, dword ptr ds : [eax+0x50]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, eax
        call public_629fb90
        fld dword ptr ds : [eax+0x80]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jne public_62bfa5c
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, 1
        mov byte ptr ds : [edx], al
        xor eax, eax
        pop esi
        ret 8
        public_62bfa5c : nop
        mov edx, dword ptr ss : [esp+0xC]
        xor eax, eax
        mov byte ptr ds : [edx], al
        pop esi
        ret 8
        public_62bfa68 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [eax], 0
        xor eax, eax
        pop esi
        ret 8
        public_62bfa75 : nop
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62bf9e0)
    }
}

#undef public_62bfa5c
#undef public_62bfa68
#undef public_62bfa75
