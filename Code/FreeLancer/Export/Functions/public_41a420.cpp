#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fb80);
CLANG_FORWARD_PROC_SYMBOL(public_41a420);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_41a47a _public_41a47a
#define public_41a4bc _public_41a4bc
#define public_41a4c2 _public_41a4c2
#define public_41a4e9 _public_41a4e9
#define public_41a58b _public_41a58b

PROC_DECLARE(0x41a420, internal_41a420, public_41a420);
extern "C" NAKED register_t __cdecl internal_41a420()
{
    __asm
    {
        mov al, byte ptr ds : [public_6166b4]
        sub esp, 0x30
        push ebx
        xor ebx, ebx
        push esi
        xor cl, cl
        cmp al, bl
        push edi
        je public_41a4c2
        fld dword ptr ds : [public_6166b0]
        mov cl, 1
        fcomp dword ptr ds : [public_6166ac]
        fnstsw ax
        test ah, 5
        jp public_41a47a
        fld dword ptr ds : [public_610690]
        fmul dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [public_6166b0]
        fst dword ptr ds : [public_6166b0]
        fcomp dword ptr ds : [public_6166ac]
        fnstsw ax
        test cl, ah
        jne public_41a4c2
        mov eax, dword ptr ds : [public_6166ac]
        mov dword ptr ds : [public_6166b0], eax
        jmp public_41a4bc
        public_41a47a : nop
        fld dword ptr ds : [public_6166b0]
        fcomp dword ptr ds : [public_6166ac]
        fnstsw ax
        test ah, 0x41
        jne public_41a4bc
        fld dword ptr ds : [public_610690]
        fmul dword ptr ss : [esp+0x44]
        fsubr dword ptr ds : [public_6166b0]
        fst dword ptr ds : [public_6166b0]
        fcomp dword ptr ds : [public_6166ac]
        fnstsw ax
        test ah, 0x41
        jp public_41a4c2
        mov edx, dword ptr ds : [public_6166ac]
        mov dword ptr ds : [public_6166b0], edx
        public_41a4bc : nop
        mov byte ptr ds : [public_6166b4], bl
        public_41a4c2 : nop
        mov esi, dword ptr ss : [esp+0x40]
        cmp esi, ebx
        je public_41a58b
        cmp dword ptr ds : [public_6166b8], esi
        setne al
        cmp cl, bl
        mov dword ptr ds : [public_6166b8], esi
        jne public_41a4e9
        cmp al, bl
        je public_41a58b
        public_41a4e9 : nop
        fild dword ptr ds : [public_610850]
        sub esp, 8
        fild dword ptr ds : [public_610854]
        fld st(1)
        fdiv st, st(1)
        fld dword ptr ds : [public_5c9020]
        fsub st, st(1)
        fmul dword ptr ds : [public_6166b0]
        fadd st, st(1)
        fdivp st(3), st
        fxch st(2)
        fsubr st, st(1)
        fmul qword ptr ds : [public_5c75e8]
        fstp st(2)
        fstp st(0)
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        call public_5b7ec0
        mov ecx, dword ptr ds : [public_610850]
        lea edx, ds:[eax+eax]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_610854]
        mov dword ptr ss : [esp+0x1C], ecx
        sub eax, edx
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [public_5c6070]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        add esp, 0x10
        mov dword ptr ss : [esp+0x28], eax
        push ebx
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], ecx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], edi
        call public_40fb80
        public_41a58b : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x41a420)
    }
}

#undef public_41a47a
#undef public_41a4bc
#undef public_41a4c2
#undef public_41a4e9
#undef public_41a58b
