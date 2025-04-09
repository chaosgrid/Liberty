#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_585630);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_585682 _public_585682
#define public_58569f _public_58569f
#define public_5856e7 _public_5856e7
#define public_58573c _public_58573c
#define public_5857a6 _public_5857a6
#define public_5857df _public_5857df
#define public_585848 _public_585848
#define public_585884 _public_585884

PROC_DECLARE(0x585630, internal_585630, public_585630);
extern "C" NAKED register_t __cdecl internal_585630()
{
    __asm
    {
        sub esp, 0x4C
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x4B8]
        cmp ecx, 0xFFFFFFFF
        push esi
        push edi
        je public_585884
        fld dword ptr ss : [ebp+0x4B4]
        fmul dword ptr ds : [public_5c8a5c]
        fmul qword ptr ds : [public_5d7470]
        fptan 
        fstp st(0)
        fdivr qword ptr ds : [public_5c89b8]
        fld dword ptr ss : [ebp+0x4A4]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_585682
        fstp st(0)
        fld dword ptr ss : [ebp+0x4A4]
        fadd st(0), st
        jmp public_58569f
        public_585682 : nop
        fmul dword ptr ss : [ebp+0x4A4]
        fld st(0)
        fcomp qword ptr ds : [public_5ca228]
        fnstsw ax
        test ah, 5
        jp public_58569f
        fstp st(0)
        fld qword ptr ds : [public_5ca228]
        public_58569f : nop
        mov eax, dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0xC]
        cmp eax, 1
        jne public_5857a6
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        fld qword ptr ds : [public_5d8ec0]
        mov esi, eax
        fcos 
        mov ecx, 0xC
        lea edi, ss:[esp+0x28]
        rep movsd
        lea eax, ss:[esp+0x30]
        mov ecx, 3
        fld qword ptr ds : [public_5d8ec0]
        fsin 
        public_5856e7 : nop
        fld dword ptr ds : [eax-4]
        add eax, 0xC
        dec ecx
        fld st(1)
        fmul dword ptr ds : [eax-0xC]
        fld st(1)
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-0xC]
        jne public_5856e7
        mov eax, dword ptr ds : [public_5c6d90]
        fstp st(0)
        mov edx, dword ptr ss : [ebp+0x4B8]
        fstp st(0)
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_67c500]
        test eax, eax
        jne public_58573c
        call public_5b73e0
        mov dword ptr ds : [public_67c500], eax
        public_58573c : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x4A8]
        push edx
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x3C]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x28]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x18]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x28]
        jmp public_585848
        public_5857a6 : nop
        test eax, eax
        jne public_585884
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_67c500]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x28]
        rep movsd
        jne public_5857df
        call public_5b73e0
        mov dword ptr ds : [public_67c500], eax
        public_5857df : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x4A8]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x3C]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x1C]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x24]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x1C]
        public_585848 : nop
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x50], ecx
        lea esi, ss:[esp+0x28]
        lea edi, ss:[ebp+0x38C]
        mov ecx, 0xC
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x4C], eax
        mov byte ptr ss : [ebp+0x3BC], 1
        rep movsd
        public_585884 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x4C
        ret 4
        UNREACHABLE_TRAP(0x585630)
    }
}

#undef public_585682
#undef public_58569f
#undef public_5856e7
#undef public_58573c
#undef public_5857a6
#undef public_5857df
#undef public_585848
#undef public_585884
