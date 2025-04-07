#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6efc7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f62440);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6f624da _public_6f624da
#define public_6f624e0 _public_6f624e0
#define public_6f6256d _public_6f6256d
#define public_6f62582 _public_6f62582
#define public_6f625bc _public_6f625bc
#define public_6f62698 _public_6f62698
#define public_6f626b0 _public_6f626b0
#define public_6f626d0 _public_6f626d0
#define public_6f626fa _public_6f626fa

PROC_DECLARE(0x6f62440, internal_6f62440, public_6f62440);
extern "C" NAKED register_t __cdecl internal_6f62440()
{
    __asm
    {
        sub esp, 0xF8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x110]
        mov ebx, dword ptr ds : [esi+4]
        xor ebp, ebp
        push edi
        lea ecx, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0x5C], ebp
        call public_6efc7a0
        or edi, 0xFFFFFFFF
        lea ecx, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0x98], ebp
        mov dword ptr ss : [esp+0x94], ebp
        mov dword ptr ss : [esp+0x90], ebp
        mov dword ptr ss : [esp+0x9C], edi
        mov dword ptr ss : [esp+0x1C], 0xBF800000
        mov dword ptr ss : [esp+0xA0], ebp
        call public_6efc7a0
        cmp ebx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0xDC], ebp
        mov dword ptr ss : [esp+0xD8], ebp
        mov dword ptr ss : [esp+0xD4], ebp
        mov dword ptr ss : [esp+0xE0], edi
        mov dword ptr ss : [esp+0x14], 0xBF800000
        je public_6f626d0
        mov ebp, dword ptr ss : [esp+0x110]
        lea esi, ds:[ebx+0x10]
        mov dword ptr ss : [esp+0x18], esi
        jmp public_6f624e0
        public_6f624da : nop
        mov esi, dword ptr ss : [esp+0x18]
        mov edi, edi
        public_6f624e0 : nop
        lea eax, ds:[esi-0xC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x34], eax
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [ebp+8]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x3C], edx
        mov dword ptr ss : [esp+0x38], ecx
        fstp dword ptr ss : [esp+8]
        mov ecx, 9
        fld dword ptr ss : [esp+0x3C]
        lea edi, ss:[esp+0xF0]
        fsub dword ptr ss : [ebp+4]
        rep movsd
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [ebp]
        fstp dword ptr ss : [esp]
        lea ecx, ss:[esp+0x44]
        call public_6eb7810
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jnp public_6f6256d
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        jp public_6f62582
        public_6f6256d : nop
        mov ecx, 0x11
        mov esi, ebx
        lea edi, ss:[esp+0x5C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6f62582 : nop
        mov esi, dword ptr ss : [esp+0x118]
        test esi, esi
        je public_6f626b0
        mov eax, dword ptr ds : [public_6fd1c70]
        test eax, eax
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0xBF800000
        jne public_6f625bc
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd1c70], eax
        public_6f625bc : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x50]
        push ecx
        lea ecx, ss:[esp+0xE8]
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x4C], ecx
        mov edx, dword ptr ss : [esp+0x20]
        faddp 
        mov dword ptr ss : [esp+0x44], edx
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6fb5810]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fld st(1)
        fmul dword ptr ss : [esp+0x48]
        fxch st(2)
        fmul dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul st, st(4)
        faddp 
        fchs 
        fld st(1)
        fmul dword ptr ds : [esi+8]
        fld st(4)
        fmul dword ptr ds : [esi+4]
        faddp 
        fld st(3)
        fmul dword ptr ds : [esi]
        faddp 
        fadd st, st(1)
        fxch st(2)
        fmul dword ptr ss : [ebp+8]
        fxch st(4)
        fmul dword ptr ss : [ebp+4]
        faddp st(4), st
        fxch st(2)
        fmul dword ptr ss : [ebp]
        faddp st(3), st
        fxch st(2)
        fadd st, st(1)
        fmulp st(2), st
        fxch 
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_6f626b0
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jnp public_6f62698
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        jp public_6f626b0
        public_6f62698 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, 0x11
        mov esi, ebx
        lea edi, ss:[esp+0xA0]
        rep movsd
        mov dword ptr ss : [esp+0x14], edx
        public_6f626b0 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x114]
        mov ecx, dword ptr ds : [eax+8]
        add ebx, 0x44
        add edx, 0x44
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x18], edx
        jne public_6f624da
        public_6f626d0 : nop
        mov eax, dword ptr ss : [esp+0x118]
        test eax, eax
        je public_6f626fa
        test dword ptr ss : [esp+0xA0], 0x3FFFFFFF
        je public_6f626fa
        mov ecx, 0x11
        lea esi, ss:[esp+0xA0]
        lea edi, ss:[esp+0x5C]
        rep movsd
        public_6f626fa : nop
        mov eax, dword ptr ss : [esp+0x10C]
        mov ecx, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x60]
        lea edx, ds:[eax+4]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x64]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [esp+0x9C]
        lea edi, ds:[eax+0x10]
        mov ecx, 0xC
        lea esi, ss:[esp+0x6C]
        rep movsd
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+0x40], edx
        pop ebx
        add esp, 0xF8
        ret 
        UNREACHABLE_TRAP(0x6f62440)
    }
}

#undef public_6f624da
#undef public_6f624e0
#undef public_6f6256d
#undef public_6f62582
#undef public_6f625bc
#undef public_6f62698
#undef public_6f626b0
#undef public_6f626d0
#undef public_6f626fa
