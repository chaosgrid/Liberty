#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);

#define public_6f4934b _public_6f4934b
#define public_6f49367 _public_6f49367
#define public_6f49384 _public_6f49384
#define public_6f493a1 _public_6f493a1
#define public_6f493af _public_6f493af
#define public_6f493c8 _public_6f493c8

PROC_DECLARE(0x6f49290, internal_6f49290, public_6f49290);
extern "C" NAKED register_t __cdecl internal_6f49290()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        push edi
        je public_6f493af
        mov edi, dword ptr ss : [esp+0x3C]
        lea eax, ds:[esi+0x58]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x1C], ecx
        lea eax, ds:[esi+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], edx
        call public_6f4aa40
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [edi+4]
        je public_6f493af
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [esi]
        push 0x3F800000
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        fstp dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+0x10]
        lea edx, ds:[esi+0x68]
        mov edi, dword ptr ds : [edx]
        mov eax, dword ptr ds : [edx+4]
        mov ebp, dword ptr ds : [edx+8]
        mov ebx, dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [edx+4]
        cmp eax, 9
        jne public_6f493af
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax+0x110]
        test ecx, ecx
        je public_6f493af
        fld dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [public_6f5a1b8]
        fnstsw ax
        test ah, 1
        jne public_6f4934b
        test byte ptr ds : [esi+0x54], 1
        je public_6f4934b
        mov edi, dword ptr ss : [esp+0x14]
        public_6f4934b : nop
        mov eax, dword ptr ds : [esi+0x54]
        test al, 2
        je public_6f49367
        fld dword ptr ds : [esi+0x6C]
        fld dword ptr ss : [esp+0x18]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x3C]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        public_6f49367 : nop
        test al, 4
        je public_6f49384
        fld dword ptr ds : [esi+0x70]
        fld dword ptr ss : [esp+0x1C]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x3C]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x2C]
        fstp st(0)
        public_6f49384 : nop
        test al, 8
        je public_6f493a1
        fld dword ptr ds : [esi+0x74]
        fld dword ptr ss : [esp+0x20]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x3C]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x30]
        mov ebx, dword ptr ss : [esp+0x30]
        fstp st(0)
        public_6f493a1 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebp
        push eax
        push edi
        push ecx
        call dword ptr ds : [edx+0xC]
        public_6f493af : nop
        mov esi, dword ptr ds : [esi+0x1C]
        cmp dword ptr ss : [esp+0x38], esi
        jb public_6f493c8
        test esi, esi
        jl public_6f493c8
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x24
        ret 8
        public_6f493c8 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x6f49290)
    }
}

#undef public_6f4934b
#undef public_6f49367
#undef public_6f49384
#undef public_6f493a1
#undef public_6f493af
#undef public_6f493c8
