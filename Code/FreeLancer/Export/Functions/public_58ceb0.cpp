#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57a620);
CLANG_FORWARD_PROC_SYMBOL(public_58ceb0);

#define public_58ceff _public_58ceff
#define public_58cf0a _public_58cf0a
#define public_58cf19 _public_58cf19
#define public_58cf1c _public_58cf1c
#define public_58cf3b _public_58cf3b
#define public_58cf4c _public_58cf4c
#define public_58cf9d _public_58cf9d
#define public_58cf9f _public_58cf9f
#define public_58cfa8 _public_58cfa8

PROC_DECLARE(0x58ceb0, internal_58ceb0, public_58ceb0);
extern "C" NAKED register_t __cdecl internal_58ceb0()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ss : [esp+8]
        test edx, edx
        push esi
        jbe public_58cfa8
        mov esi, dword ptr ds : [ecx+0x4B4]
        test esi, esi
        je public_58cfa8
        mov eax, dword ptr ds : [ecx+0x4B8]
        sub eax, esi
        sar eax, 2
        cmp edx, eax
        jae public_58cfa8
        fld dword ptr ds : [ecx+0x4FC]
        push ebx
        fadd st(0), st
        lea ebx, ds:[edx-1]
        push edi
        mov edi, esi
        test edi, edi
        fld st(0)
        fadd dword ptr ds : [esi+ebx*4]
        fstp dword ptr ss : [esp+0x14]
        jne public_58ceff
        xor eax, eax
        jmp public_58cf0a
        public_58ceff : nop
        mov eax, dword ptr ds : [ecx+0x4B8]
        sub eax, edi
        sar eax, 2
        public_58cf0a : nop
        lea edi, ds:[edx+1]
        cmp edi, eax
        jne public_58cf19
        fld dword ptr ds : [ecx+0x488]
        jmp public_58cf1c
        public_58cf19 : nop
        fld dword ptr ds : [esi+edi*4]
        public_58cf1c : nop
        fsub st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_58cf3b
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        jmp public_58cf4c
        public_58cf3b : nop
        fcom dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jne public_58cf4c
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        public_58cf4c : nop
        fcom dword ptr ds : [esi+edx*4]
        fnstsw ax
        test ah, 0x44
        jnp public_58cf9d
        fstp dword ptr ds : [esi+edx*4]
        mov edx, dword ptr ds : [ecx+0x4A4]
        test edx, edx
        je public_58cf9f
        mov eax, dword ptr ds : [ecx+0x4A8]
        sub eax, edx
        sar eax, 2
        test eax, eax
        jbe public_58cf9f
        mov edx, dword ptr ds : [ecx+0x4B4]
        test edx, edx
        je public_58cf9f
        mov eax, dword ptr ds : [ecx+0x4B8]
        sub eax, edx
        sar eax, 2
        cmp ebx, eax
        jae public_58cf9f
        push 1
        push 1
        call public_57a620
        pop edi
        pop ebx
        mov al, 1
        pop esi
        pop ecx
        ret 8
        public_58cf9d : nop
        fstp st(0)
        public_58cf9f : nop
        pop edi
        pop ebx
        mov al, 1
        pop esi
        pop ecx
        ret 8
        public_58cfa8 : nop
        xor al, al
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x58ceb0)
    }
}

#undef public_58ceff
#undef public_58cf0a
#undef public_58cf19
#undef public_58cf1c
#undef public_58cf3b
#undef public_58cf4c
#undef public_58cf9d
#undef public_58cf9f
#undef public_58cfa8
