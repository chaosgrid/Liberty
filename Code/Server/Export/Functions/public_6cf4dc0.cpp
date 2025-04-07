#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee9e0);

#define public_6cf4dd7 _public_6cf4dd7
#define public_6cf4de9 _public_6cf4de9
#define public_6cf4deb _public_6cf4deb
#define public_6cf4e1d _public_6cf4e1d

PROC_DECLARE(0x6cf4dc0, internal_6cf4dc0, public_6cf4dc0);
extern "C" NAKED register_t __cdecl internal_6cf4dc0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push edi
        push ebx
        mov edi, ecx
        call public_6cee9e0
        test al, al
        jne public_6cf4dd7
        pop edi
        pop ebx
        ret 4
        public_6cf4dd7 : nop
        push esi
        mov esi, dword ptr ds : [edi+0x10]
        test esi, esi
        je public_6cf4de9
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x67
        cmp al, 0x67
        je public_6cf4deb
        public_6cf4de9 : nop
        xor esi, esi
        public_6cf4deb : nop
        mov eax, dword ptr ds : [public_6d64194]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        push ecx
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x50]
        fld dword ptr ds : [esi+0xE8]
        fcomp dword ptr ds : [public_6d65188]
        pop esi
        fnstsw ax
        test ah, 1
        je public_6cf4e1d
        mov edx, dword ptr ds : [edi]
        push 0
        push 0
        mov ecx, edi
        call dword ptr ds : [edx+0x158]
        public_6cf4e1d : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x160]
        neg al
        pop edi
        pop ebx
        sbb eax, eax
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x6cf4dc0)
    }
}

#undef public_6cf4dd7
#undef public_6cf4de9
#undef public_6cf4deb
#undef public_6cf4e1d
