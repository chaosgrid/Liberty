#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efc7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f62290);
CLANG_FORWARD_PROC_SYMBOL(public_6f767c0);

#define public_6f622f8 _public_6f622f8
#define public_6f623a6 _public_6f623a6
#define public_6f623b9 _public_6f623b9
#define public_6f623bb _public_6f623bb
#define public_6f623e1 _public_6f623e1
#define public_6f623f7 _public_6f623f7

PROC_DECLARE(0x6f62290, internal_6f62290, public_6f62290);
extern "C" NAKED register_t __cdecl internal_6f62290()
{
    __asm
    {
        sub esp, 0x94
        mov ecx, dword ptr ss : [esp+0x9C]
        push ebp
        push esi
        push edi
        call public_6f767c0
        mov esi, eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], 0
        call public_6efc7a0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        mov ebp, dword ptr ds : [esi+4]
        cmp ebp, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0xC], 0xBF800000
        je public_6f623f7
        mov edx, dword ptr ss : [esp+0xAC]
        push ebx
        public_6f622f8 : nop
        mov ebx, dword ptr ss : [ebp+4]
        fld dword ptr ds : [ebx+4]
        mov eax, dword ptr ss : [ebp+8]
        fsub dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax-0x44]
        fld dword ptr ds : [ebx+8]
        sub eax, 0x44
        fsub dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x60], ecx
        fld dword ptr ds : [ebx+0xC]
        lea ecx, ds:[eax+4]
        fsub dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [ecx]
        fld st(2)
        mov dword ptr ss : [esp+0x64], esi
        fmulp st(3), st
        mov esi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x68], esi
        fld st(0)
        mov dword ptr ss : [esp+0x6C], ecx
        fmul st, st(1)
        lea esi, ds:[eax+0x10]
        mov ecx, 0xC
        lea edi, ss:[esp+0x70]
        faddp st(3), st
        rep movsd
        fld st(1)
        fmul st, st(2)
        faddp st(3), st
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x64]
        fsub dword ptr ds : [edx]
        mov eax, dword ptr ds : [eax+0x40]
        fld dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0xA0], eax
        fsub dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x6C]
        fsub dword ptr ds : [edx+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        jnp public_6f623a6
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6f623b9
        public_6f623a6 : nop
        mov ecx, 0x11
        fstp dword ptr ss : [esp+0x10]
        mov esi, ebx
        lea edi, ss:[esp+0x1C]
        rep movsd
        jmp public_6f623bb
        public_6f623b9 : nop
        fstp st(0)
        public_6f623bb : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6f623e1
        mov ecx, 0x11
        lea esi, ss:[esp+0x60]
        lea edi, ss:[esp+0x1C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], ecx
        public_6f623e1 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add ebp, 0x98
        cmp ebp, ecx
        jne public_6f622f8
        pop ebx
        public_6f623f7 : nop
        mov eax, dword ptr ss : [esp+0xA4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ds:[eax+4]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [esp+0x58]
        lea edi, ds:[eax+0x10]
        mov ecx, 0xC
        lea esi, ss:[esp+0x28]
        rep movsd
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x40], edx
        pop ebp
        add esp, 0x94
        ret 
        UNREACHABLE_TRAP(0x6f62290)
    }
}

#undef public_6f622f8
#undef public_6f623a6
#undef public_6f623b9
#undef public_6f623bb
#undef public_6f623e1
#undef public_6f623f7
