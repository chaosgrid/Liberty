#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ceec90);

#define public_6ceece6 _public_6ceece6
#define public_6ceece8 _public_6ceece8
#define public_6ceecf4 _public_6ceecf4
#define public_6ceed28 _public_6ceed28
#define public_6ceed2c _public_6ceed2c
#define public_6ceed3d _public_6ceed3d
#define public_6ceed45 _public_6ceed45
#define public_6ceed66 _public_6ceed66
#define public_6ceed68 _public_6ceed68
#define public_6ceedaf _public_6ceedaf
#define public_6ceedce _public_6ceedce
#define public_6ceee16 _public_6ceee16

PROC_DECLARE(0x6ceec90, internal_6ceec90, public_6ceec90);
extern "C" NAKED register_t __cdecl internal_6ceec90()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        sub esp, 8
        fcomp dword ptr ds : [public_6d65188]
        push esi
        push edi
        mov esi, ecx
        fnstsw ax
        test ah, 0x44
        jnp public_6ceee16
        mov eax, dword ptr ds : [public_6d6401c]
        mov edi, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6d642a0]
        fst dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 5
        jp public_6ceecf4
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ceece6
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6ceece8
        public_6ceece6 : nop
        xor eax, eax
        public_6ceece8 : nop
        mov ecx, eax
        call dword ptr ds : [public_6d641f4]
        fstp dword ptr ss : [esp+8]
        public_6ceecf4 : nop
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6d65188]
        mov dword ptr ss : [esp+0x18], eax
        fnstsw ax
        test ah, 0x41
        jne public_6ceed2c
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x14]
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6ceed28
        fstp dword ptr ss : [esp+0x18]
        jmp public_6ceed45
        public_6ceed28 : nop
        fstp st(0)
        jmp public_6ceed3d
        public_6ceed2c : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 5
        jp public_6ceed45
        public_6ceed3d : nop
        mov dword ptr ss : [esp+0x18], 0
        public_6ceed45 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x1B8]
        test al, al
        je public_6ceedce
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ceed66
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6ceed68
        public_6ceed66 : nop
        xor eax, eax
        public_6ceed68 : nop
        mov ecx, eax
        call dword ptr ds : [public_6d641f0]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x1A0]
        fsubr dword ptr ds : [public_6d65520]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [public_6d65520]
        fdiv dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_6ceedaf
        mov eax, dword ptr ss : [esp+8]
        fstp st(0)
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6ceedce
        public_6ceedaf : nop
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_6ceedce
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x18]
        public_6ceedce : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x44
        jnp public_6ceee16
        mov edx, dword ptr ds : [public_6d6401c]
        mov ecx, dword ptr ss : [esp+0x18]
        xor eax, eax
        mov ax, word ptr ds : [edx]
        push 0
        push ecx
        mov ecx, edi
        push eax
        call dword ptr ds : [public_6d641ec]
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jp public_6ceee16
        mov al, 1
        mov byte ptr ds : [edi+0xC], al
        pop edi
        pop esi
        add esp, 8
        ret 8
        public_6ceee16 : nop
        pop edi
        xor al, al
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6ceec90)
    }
}

#undef public_6ceece6
#undef public_6ceece8
#undef public_6ceecf4
#undef public_6ceed28
#undef public_6ceed2c
#undef public_6ceed3d
#undef public_6ceed45
#undef public_6ceed66
#undef public_6ceed68
#undef public_6ceedaf
#undef public_6ceedce
#undef public_6ceee16
