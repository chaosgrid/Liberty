#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_595840);
CLANG_FORWARD_PROC_SYMBOL(public_595ca0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_596c01 _public_596c01
#define public_596c3c _public_596c3c
#define public_596c60 _public_596c60
#define public_596c74 _public_596c74
#define public_596c96 _public_596c96
#define public_596cb1 _public_596cb1
#define public_596d15 _public_596d15
#define public_596d17 _public_596d17

PROC_DECLARE(0x596b90, internal_596b90, public_596b90);
extern "C" NAKED register_t __cdecl internal_596b90()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x3D4]
        test al, al
        push edi
        je public_596d17
        mov al, byte ptr ds : [esi+0x32C]
        test al, al
        je public_596d17
        mov eax, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0x68]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], eax
        fdiv dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_67d9fc]
        test eax, eax
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], edx
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        jne public_596c01
        call public_5b73e0
        mov dword ptr ds : [public_67d9fc], eax
        public_596c01 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        lea edx, ds:[esi+0x3DC]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov al, byte ptr ds : [esi+0x42C]
        test al, al
        mov al, byte ptr ds : [esi+0x3B4]
        je public_596c60
        test al, al
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi+0x3D8]
        je public_596c3c
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        public_596c3c : nop
        fld dword ptr ds : [esi+0x3C4]
        fsub dword ptr ds : [esi+0x3C0]
        fld dword ptr ds : [esi+0x364]
        fsub st, st(2)
        fmulp 
        fld dword ptr ds : [esi+0x364]
        fsub dword ptr ds : [esi+0x380]
        jmp public_596c96
        public_596c60 : nop
        test al, al
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+0x3D8]
        je public_596c74
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        public_596c74 : nop
        fld dword ptr ds : [esi+0x3C4]
        fsub dword ptr ds : [esi+0x3C0]
        fld dword ptr ds : [esi+0x368]
        fsub st, st(2)
        fmulp 
        fld dword ptr ds : [esi+0x368]
        fsub dword ptr ds : [esi+0x384]
        public_596c96 : nop
        test al, al
        fdivp 
        fadd dword ptr ds : [esi+0x3C0]
        fstp st(1)
        je public_596cb1
        call public_5b7ec0
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        public_596cb1 : nop
        fcom dword ptr ds : [esi+0x3C8]
        fnstsw ax
        test ah, 0x44
        jnp public_596d15
        mov ecx, esi
        fstp dword ptr ds : [esi+0x3C8]
        call public_595ca0
        call public_595840
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_596d17
        mov eax, dword ptr ds : [ecx]
        push 0
        push esi
        push 0xF005
        call dword ptr ds : [eax+0x5C]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov edi, eax
        test edi, edi
        je public_596d17
        fld dword ptr ds : [esi+0x3C8]
        push ebx
        mov ebx, dword ptr ds : [edi]
        call public_5b7ec0
        push eax
        push esi
        push 0x3E
        mov ecx, edi
        call dword ptr ds : [ebx+0xA8]
        pop ebx
        pop edi
        pop esi
        add esp, 0x18
        ret 4
        public_596d15 : nop
        fstp st(0)
        public_596d17 : nop
        pop edi
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x596b90)
    }
}

#undef public_596c01
#undef public_596c3c
#undef public_596c60
#undef public_596c74
#undef public_596c96
#undef public_596cb1
#undef public_596d15
#undef public_596d17
