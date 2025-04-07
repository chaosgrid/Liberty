#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_551500);

#define public_50bcb7 _public_50bcb7
#define public_50bcc9 _public_50bcc9

PROC_DECLARE(0x50bc90, internal_50bc90, public_50bc90);
extern "C" NAKED register_t __cdecl internal_50bc90()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x74]
        test al, al
        push esi
        push edi
        je public_50bcc9
        fld dword ptr ds : [ecx+0x70]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_50bcc9
        mov edi, dword ptr ds : [ecx+0x68]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_50bcc9
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        public_50bcb7 : nop
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push ebx
        call public_551500
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_50bcb7
        pop ebx
        public_50bcc9 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x50bc90)
    }
}

#undef public_50bcb7
#undef public_50bcc9
