#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43140);
CLANG_FORWARD_PROC_SYMBOL(public_6f431d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f48e92 _public_6f48e92
#define public_6f48e9e _public_6f48e9e
#define public_6f48eaa _public_6f48eaa
#define public_6f48ece _public_6f48ece
#define public_6f48eee _public_6f48eee
#define public_6f48f0e _public_6f48f0e
#define public_6f48f9c _public_6f48f9c
#define public_6f48fb9 _public_6f48fb9
#define public_6f48fd1 _public_6f48fd1

PROC_DECLARE(0x6f48de0, internal_6f48de0, public_6f48de0);
extern "C" NAKED register_t __cdecl internal_6f48de0()
{
    __asm
    {
        sub esp, 0x6C
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x54]
        test eax, eax
        push esi
        push edi
        je public_6f48fb9
        lea esi, ss:[ebp+0x58]
        mov ecx, 8
        lea edi, ss:[esp+0x1C]
        rep movsd
        mov esi, dword ptr ss : [esp+0x80]
        lea eax, ss:[ebp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_6f4aa40
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [esi+4]
        je public_6f48fb9
        mov ecx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [ebp]
        push 0x3F800000
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax+0x18]
        fstp dword ptr ss : [esp+0x80]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        cmp eax, 9
        jne public_6f48fb9
        fld dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6f5a1b8]
        mov edx, dword ptr ds : [ecx+0x10]
        lea esi, ds:[edx+0x11C]
        mov ecx, 0xF
        lea edi, ss:[esp+0x3C]
        fnstsw ax
        mov dword ptr ss : [esp+0x10], edx
        rep movsd
        test ah, 1
        jne public_6f48eaa
        mov eax, dword ptr ss : [ebp+0x54]
        test al, 1
        je public_6f48e92
        mov cl, byte ptr ss : [esp+0x1C]
        mov byte ptr ss : [esp+0x58], cl
        public_6f48e92 : nop
        test al, 2
        je public_6f48e9e
        mov cl, byte ptr ss : [esp+0x1D]
        mov byte ptr ss : [esp+0x59], cl
        public_6f48e9e : nop
        test al, 8
        je public_6f48eaa
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x68], eax
        public_6f48eaa : nop
        push ebx
        mov ebx, dword ptr ss : [ebp+0x54]
        test bl, 0x10
        je public_6f48ece
        fld dword ptr ss : [ebp+0x8C]
        fld dword ptr ss : [esp+0x34]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x84]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x70]
        fstp st(0)
        public_6f48ece : nop
        test bl, 0x20
        je public_6f48eee
        fld dword ptr ss : [ebp+0x90]
        fld dword ptr ss : [esp+0x38]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x84]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x74]
        fstp st(0)
        public_6f48eee : nop
        test bl, 0x40
        je public_6f48f0e
        fld dword ptr ss : [ebp+0x94]
        fld dword ptr ss : [esp+0x3C]
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x84]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x78]
        fstp st(0)
        public_6f48f0e : nop
        test bl, 4
        je public_6f48f9c
        mov eax, dword ptr ss : [ebp+0x7C]
        mov ecx, dword ptr ss : [esp+0x24]
        sub ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], eax
        fmul dword ptr ss : [esp+0x84]
        fiadd dword ptr ss : [esp+0x1C]
        call public_6f57f16
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x60], eax
        mov eax, dword ptr ss : [ebp+0x80]
        sub edx, eax
        mov dword ptr ss : [esp+0x1C], edx
        fild dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        fmul dword ptr ss : [esp+0x84]
        fiadd dword ptr ss : [esp+0x18]
        call public_6f57f16
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ss : [ebp+0x84]
        sub ecx, eax
        mov dword ptr ss : [esp+0x1C], ecx
        fild dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        fmul dword ptr ss : [esp+0x84]
        fiadd dword ptr ss : [esp+0x18]
        call public_6f57f16
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x68], eax
        public_6f48f9c : nop
        push ebx
        push 0
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, edx
        call public_6f431d0
        mov ecx, dword ptr ss : [ebp+0x54]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        call public_6f43140
        pop ebx
        public_6f48fb9 : nop
        mov ebp, dword ptr ss : [ebp+0x1C]
        cmp dword ptr ss : [esp+0x7C], ebp
        jb public_6f48fd1
        test ebp, ebp
        jl public_6f48fd1
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x6C
        ret 8
        public_6f48fd1 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0x6C
        ret 8
        UNREACHABLE_TRAP(0x6f48de0)
    }
}

#undef public_6f48e92
#undef public_6f48e9e
#undef public_6f48eaa
#undef public_6f48ece
#undef public_6f48eee
#undef public_6f48f0e
#undef public_6f48f9c
#undef public_6f48fb9
#undef public_6f48fd1
