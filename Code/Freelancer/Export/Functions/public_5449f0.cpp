#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_5449f0);

#define public_544a33 _public_544a33
#define public_544a37 _public_544a37
#define public_544a70 _public_544a70
#define public_544ae1 _public_544ae1
#define public_544af1 _public_544af1
#define public_544b3b _public_544b3b
#define public_544b54 _public_544b54
#define public_544b56 _public_544b56
#define public_544b7b _public_544b7b
#define public_544b7f _public_544b7f

PROC_DECLARE(0x5449f0, internal_5449f0, public_5449f0);
extern "C" NAKED register_t __cdecl internal_5449f0()
{
    __asm
    {
        sub esp, 0x1C
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp]
        xor esi, esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0xC], 0x4E6E6B28
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x10], 0x4E6E6B28
        call dword ptr ds : [eax+0x150]
        cmp eax, esi
        je public_544a33
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        mov dword ptr ss : [esp+8], eax
        je public_544a37
        public_544a33 : nop
        mov dword ptr ss : [esp+8], esi
        public_544a37 : nop
        mov edx, dword ptr ss : [esp+8]
        push 0x80000
        lea ecx, ds:[edx+0xE4]
        call dword ptr ds : [public_5c649c]
        cmp eax, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_544b7b
        mov edx, dword ptr ds : [eax+0x824]
        xor ecx, ecx
        cmp edx, esi
        mov dword ptr ss : [esp+0x14], ecx
        jle public_544b7b
        push ebx
        push edi
        mov edi, edi
        public_544a70 : nop
        mov eax, dword ptr ds : [eax+ecx*8+0x24]
        test eax, eax
        je public_544b56
        lea esi, ds:[eax-8]
        test esi, esi
        je public_544b56
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        xor bl, bl
        call dword ptr ds : [public_5c6ae8]
        test al, al
        je public_544b56
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x38]
        test al, al
        jne public_544b56
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        mov edi, eax
        test edi, edi
        je public_544af1
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 3
        cmp al, 3
        jne public_544af1
        mov edx, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_544ae1
        mov bl, byte ptr ds : [eax+0xA8]
        public_544ae1 : nop
        test dword ptr ds : [edi+0xE0], 0x7F0000
        jne public_544af1
        test bl, bl
        je public_544b56
        public_544af1 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        fld st(2)
        fmulp st(3), st
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fld st(1)
        fmul st, st(2)
        faddp st(3), st
        fxch st(2)
        fsqrt 
        fstp st(2)
        fstp st(0)
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_544b3b
        fst dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x24], esi
        public_544b3b : nop
        test bl, bl
        je public_544b54
        fcom dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jp public_544b54
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x20], esi
        jmp public_544b56
        public_544b54 : nop
        fstp st(0)
        public_544b56 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [eax+0x824]
        inc ecx
        cmp ecx, edx
        mov dword ptr ss : [esp+0x1C], ecx
        jl public_544a70
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        pop edi
        pop ebx
        jne public_544b7f
        public_544b7b : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_544b7f : nop
        pop esi
        pop ebp
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x5449f0)
    }
}

#undef public_544a33
#undef public_544a37
#undef public_544a70
#undef public_544ae1
#undef public_544af1
#undef public_544b3b
#undef public_544b54
#undef public_544b56
#undef public_544b7b
#undef public_544b7f
