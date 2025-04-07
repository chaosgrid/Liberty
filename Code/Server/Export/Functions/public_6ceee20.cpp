#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ceee20);

#define public_6ceee69 _public_6ceee69

PROC_DECLARE(0x6ceee20, internal_6ceee20, public_6ceee20);
extern "C" NAKED register_t __cdecl internal_6ceee20()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+0x10]
        test esi, esi
        je public_6ceee69
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 3
        cmp al, 3
        jne public_6ceee69
        mov ecx, esi
        call dword ptr ds : [public_6d641f8]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 5
        jp public_6ceee69
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6d641f4]
        push ecx
        mov ecx, dword ptr ds : [public_6d6401c]
        fstp dword ptr ss : [esp]
        xor edx, edx
        mov dx, word ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        call dword ptr ds : [public_6d641ec]
        public_6ceee69 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ceee20)
    }
}

#undef public_6ceee69
