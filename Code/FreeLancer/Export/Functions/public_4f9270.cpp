#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f86c0);

#define public_4f92d7 _public_4f92d7
#define public_4f92e3 _public_4f92e3

PROC_DECLARE(0x4f9270, internal_4f9270, public_4f9270);
extern "C" NAKED register_t __cdecl internal_4f9270()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x80]
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], eax
        call public_4f86c0
        mov dl, byte ptr ds : [esi+0x7C]
        mov cl, dl
        xor cl, al
        and cl, 1
        xor cl, dl
        test cl, 1
        mov byte ptr ds : [esi+0x7C], cl
        jne public_4f92e3
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4f92e3
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ss : [esp+4]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4f92d7
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        public_4f92d7 : nop
        or cl, 1
        fstp dword ptr ds : [esi+0x80]
        mov byte ptr ds : [esi+0x7C], cl
        public_4f92e3 : nop
        mov al, byte ptr ds : [esi+0x7C]
        and al, 1
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x4f9270)
    }
}

#undef public_4f92d7
#undef public_4f92e3
