#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4042c0);

#define public_404301 _public_404301
#define public_40431b _public_40431b
#define public_404380 _public_404380
#define public_40447d _public_40447d
#define public_4044e0 _public_4044e0
#define public_404529 _public_404529
#define public_40455b _public_40455b
#define public_40455f _public_40455f

PROC_DECLARE(0x4042c0, internal_4042c0, public_4042c0);
extern "C" NAKED register_t __cdecl internal_4042c0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x20]
        push ecx
        push 0
        push edi
        call dword ptr ds : [eax+0x108]
        mov eax, dword ptr ds : [esi+0x24]
        dec eax
        je public_404301
        dec eax
        jne public_40431b
        mov edx, dword ptr ds : [edi]
        push 5
        push 0x13
        push edi
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [edi]
        push 6
        push 0x14
        push edi
        call dword ptr ds : [eax+0xF0]
        jmp public_40431b
        public_404301 : nop
        mov ecx, dword ptr ds : [edi]
        push 2
        push 0x13
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [edi]
        push 2
        push 0x14
        push edi
        call dword ptr ds : [edx+0xF0]
        public_40431b : nop
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [edi]
        xor ecx, ecx
        test edx, edx
        setne cl
        push ecx
        push 0x1B
        push edi
        call dword ptr ds : [eax+0xF0]
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+0x18]
        lea eax, ds:[eax+edx*4]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_40455f
        mov ebp, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        push 0x1C4
        push ebp
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        jl public_40455f
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x28]
        xor ebx, ebx
        test ecx, ecx
        mov edi, eax
        jle public_40447d
        xor edx, edx
        add eax, 0x28
        lea esp, ss:[esp]
        public_404380 : nop
        mov ecx, dword ptr ds : [esi+8]
        fld dword ptr ds : [ecx+edx+0x1C]
        mov ebp, dword ptr ds : [ecx+edx+0x28]
        fld dword ptr ds : [ecx+edx+0x18]
        add ecx, edx
        fld dword ptr ds : [ecx+0x14]
        inc ebx
        fld dword ptr ds : [ecx+0x10]
        add edx, 0x2C
        fld dword ptr ds : [ecx+4]
        add edi, 0x80
        fld dword ptr ds : [ecx]
        mov dword ptr ds : [eax-0x18], ebp
        mov dword ptr ds : [eax-0x14], 0
        fstp dword ptr ds : [edi-0x80]
        add eax, 0x80
        fstp dword ptr ds : [eax-0xA4]
        fstp dword ptr ds : [eax-0xA0]
        fstp dword ptr ds : [eax-0x9C]
        fstp dword ptr ds : [eax-0x90]
        fstp dword ptr ds : [eax-0x8C]
        mov ebp, dword ptr ds : [ecx+0x28]
        fld dword ptr ds : [ecx+0x24]
        fld dword ptr ds : [ecx+0x18]
        fld dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ecx]
        mov dword ptr ds : [eax-0x78], ebp
        mov dword ptr ds : [eax-0x74], 0
        fstp dword ptr ds : [eax-0x88]
        fstp dword ptr ds : [eax-0x84]
        fstp dword ptr ds : [eax-0x80]
        fstp dword ptr ds : [eax-0x7C]
        fstp dword ptr ds : [eax-0x70]
        fstp dword ptr ds : [eax-0x6C]
        mov ebp, dword ptr ds : [ecx+0x28]
        fld dword ptr ds : [ecx+0x24]
        fld dword ptr ds : [ecx+0x20]
        fld dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax-0x58], ebp
        fstp dword ptr ds : [eax-0x68]
        mov dword ptr ds : [eax-0x54], 0
        fstp dword ptr ds : [eax-0x64]
        fstp dword ptr ds : [eax-0x60]
        fstp dword ptr ds : [eax-0x5C]
        fstp dword ptr ds : [eax-0x50]
        fstp dword ptr ds : [eax-0x4C]
        mov ebp, dword ptr ds : [ecx+0x28]
        fld dword ptr ds : [ecx+0x1C]
        fld dword ptr ds : [ecx+0x20]
        fld dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax-0x38], ebp
        fstp dword ptr ds : [eax-0x48]
        mov dword ptr ds : [eax-0x34], 0
        fstp dword ptr ds : [eax-0x44]
        fstp dword ptr ds : [eax-0x40]
        fstp dword ptr ds : [eax-0x3C]
        fstp dword ptr ds : [eax-0x30]
        fstp dword ptr ds : [eax-0x2C]
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ebx, ecx
        jl public_404380
        mov ebp, dword ptr ss : [esp+0x34]
        public_40447d : nop
        mov ecx, dword ptr ds : [esi+0x18]
        mov esi, dword ptr ds : [esi+0x14]
        shl ecx, 5
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        lea edx, ss:[esp+0x1C]
        push edx
        rep movsb
        mov ecx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [ecx+0x18]
        mov ebp, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x38]
        mov esi, ebp
        shr esi, 2
        lea edi, ds:[esi+esi*2]
        shl edi, 1
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x1C]
        xor eax, eax
        push edx
        push 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+0x1C]
        test eax, eax
        jl public_40455b
        xor eax, eax
        test esi, esi
        jbe public_404529
        lea ecx, ds:[ecx]
        public_4044e0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov word ptr ds : [ecx], ax
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[eax+1]
        mov word ptr ds : [ecx+2], dx
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ds:[eax+2]
        mov word ptr ds : [edx+4], cx
        mov edx, dword ptr ss : [esp+0x10]
        mov word ptr ds : [edx+6], ax
        mov edx, dword ptr ss : [esp+0x10]
        mov word ptr ds : [edx+8], cx
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ds:[eax+3]
        mov word ptr ds : [edx+0xA], cx
        mov ecx, dword ptr ss : [esp+0x10]
        add ecx, 0xC
        add eax, 4
        dec esi
        mov dword ptr ss : [esp+0x10], ecx
        jne public_4044e0
        public_404529 : nop
        mov eax, dword ptr ds : [ebx]
        push 0xFFFFFFFF
        push ebx
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [ebx]
        push 0
        push 0
        push edx
        push 0xFFFFFFFF
        push ebx
        call dword ptr ds : [ecx+0x24]
        test eax, eax
        jl public_40455b
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push ebp
        push 0
        push 4
        push eax
        call dword ptr ds : [ecx+0xC]
        public_40455b : nop
        mov edi, dword ptr ss : [esp+0x30]
        public_40455f : nop
        mov eax, dword ptr ds : [edi]
        push 0
        push 0x1B
        push edi
        call dword ptr ds : [eax+0xF0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 0x10
        UNREACHABLE_TRAP(0x4042c0)
    }
}

#undef public_404301
#undef public_40431b
#undef public_404380
#undef public_40447d
#undef public_4044e0
#undef public_404529
#undef public_40455b
#undef public_40455f
