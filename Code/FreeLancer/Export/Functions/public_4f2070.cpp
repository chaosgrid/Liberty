#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_4f2070);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5a2940);

#define public_4f20e0 _public_4f20e0
#define public_4f2117 _public_4f2117
#define public_4f2119 _public_4f2119
#define public_4f2133 _public_4f2133
#define public_4f214f _public_4f214f
#define public_4f21ff _public_4f21ff
#define public_4f220d _public_4f220d

PROC_DECLARE(0x4f2070, internal_4f2070, public_4f2070);
extern "C" NAKED register_t __cdecl internal_4f2070()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call public_40f130
        call public_54baf0
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x74]
        mov ecx, dword ptr ds : [public_679ba8]
        mov dx, word ptr ds : [public_679baa]
        xor eax, eax
        mov al, cl
        movzx edi, dh
        shl edi, 8
        movzx ecx, ch
        or edi, eax
        shl eax, 8
        or eax, ecx
        movzx esi, dl
        shl edi, 8
        shl eax, 8
        or eax, esi
        or edi, ecx
        shl edi, 8
        mov ebx, eax
        mov eax, dword ptr ss : [ebp+0x914]
        or edi, esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_4f220d
        lea esp, ss:[esp]
        public_4f20e0 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_4f21ff
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_4f21ff
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x88]
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_4f2117
        add eax, 0xFFFFFFF8
        jmp public_4f2119
        public_4f2117 : nop
        xor eax, eax
        public_4f2119 : nop
        cmp eax, dword ptr ss : [esp+0x14]
        jne public_4f2133
        fild dword ptr ds : [public_610850]
        fmul dword ptr ds : [public_5d966c]
        fmul dword ptr ds : [public_5d4f08]
        jmp public_4f214f
        public_4f2133 : nop
        test dword ptr ss : [esp+0x18], 0x55F0000
        je public_4f21ff
        fild dword ptr ds : [public_610850]
        fmul dword ptr ds : [public_5d966c]
        fadd st(0), st
        public_4f214f : nop
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_4f21ff
        fld dword ptr ds : [esi+0x1C]
        push 0x40000000
        fsub dword ptr ss : [esp+0x14]
        push ebx
        push edi
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0x20]
        push ecx
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x38]
        fadd dword ptr ds : [esi+0x1C]
        push edx
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x38], 0
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0x20]
        fstp dword ptr ss : [esp+0x34]
        call public_5a2940
        fld dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ds : [esi+0x20]
        push 0x40000000
        fsub dword ptr ss : [esp+0x28]
        push ebx
        push edi
        lea eax, ss:[esp+0x54]
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ds : [esi+0x1C]
        push eax
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x64]
        fadd dword ptr ds : [esi+0x20]
        push ecx
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x64], 0
        fstp dword ptr ss : [esp+0x60]
        call public_5a2940
        add esp, 0x28
        public_4f21ff : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0x914]
        jne public_4f20e0
        public_4f220d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x4f2070)
    }
}

#undef public_4f20e0
#undef public_4f2117
#undef public_4f2119
#undef public_4f2133
#undef public_4f214f
#undef public_4f21ff
#undef public_4f220d
