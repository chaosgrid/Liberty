#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);
CLANG_FORWARD_PROC_SYMBOL(public_6d498f0);

#define public_6d49958 _public_6d49958

PROC_DECLARE(0x6d498f0, internal_6d498f0, public_6d498f0);
extern "C" NAKED register_t __cdecl internal_6d498f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d49958
        mov eax, dword ptr ds : [esi+0x3E4]
        push eax
        call public_6d00670
        mov ecx, eax
        add esp, 4
        test ecx, ecx
        je public_6d49958
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp qword ptr ds : [public_6d6b450]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_6d49958
        mov eax, dword ptr ds : [esi+0x3E4]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 1
        call dword ptr ds : [edx+0x158]
        xor al, al
        pop esi
        ret 0xC
        public_6d49958 : nop
        mov al, 1
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6d498f0)
    }
}

#undef public_6d49958
