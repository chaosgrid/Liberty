#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f62120);
CLANG_FORWARD_PROC_SYMBOL(public_6f62440);
CLANG_FORWARD_PROC_SYMBOL(public_6f767c0);

#define public_6f621c7 _public_6f621c7
#define public_6f6221f _public_6f6221f
#define public_6f62238 _public_6f62238
#define public_6f6223a _public_6f6223a
#define public_6f62248 _public_6f62248

PROC_DECLARE(0x6f62120, internal_6f62120, public_6f62120);
extern "C" NAKED register_t __cdecl internal_6f62120()
{
    __asm
    {
        sub esp, 0x90
        mov ecx, dword ptr ss : [esp+0x98]
        push ebx
        push esi
        push edi
        call public_6f767c0
        mov esi, eax
        mov ebx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x44], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], 0xBF800000
        je public_6f62248
        push ebp
        mov ebp, dword ptr ss : [esp+0xAC]
        public_6f621c7 : nop
        push 0
        push ebx
        lea eax, ss:[esp+0x64]
        push ebp
        push eax
        call public_6f62440
        fld dword ptr ss : [esp+0x70]
        fsub dword ptr ss : [ebp]
        add esp, 0x10
        fld dword ptr ss : [esp+0x64]
        fsub dword ptr ss : [ebp+4]
        fld dword ptr ss : [esp+0x68]
        fsub dword ptr ss : [ebp+8]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        jnp public_6f6221f
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6f62238
        public_6f6221f : nop
        mov ecx, 0x11
        fstp dword ptr ss : [esp+0x10]
        lea esi, ss:[esp+0x5C]
        lea edi, ss:[esp+0x18]
        rep movsd
        mov esi, dword ptr ss : [esp+0x14]
        jmp public_6f6223a
        public_6f62238 : nop
        fstp st(0)
        public_6f6223a : nop
        mov eax, dword ptr ds : [esi+8]
        add ebx, 0x98
        cmp ebx, eax
        jne public_6f621c7
        pop ebp
        public_6f62248 : nop
        mov eax, dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ds:[eax+4]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [esp+0x54]
        lea edi, ds:[eax+0x10]
        mov ecx, 0xC
        lea esi, ss:[esp+0x24]
        rep movsd
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x40], edx
        pop ebx
        add esp, 0x90
        ret 
        UNREACHABLE_TRAP(0x6f62120)
    }
}

#undef public_6f621c7
#undef public_6f6221f
#undef public_6f62238
#undef public_6f6223a
#undef public_6f62248
