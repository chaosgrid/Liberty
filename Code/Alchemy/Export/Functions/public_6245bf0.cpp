#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_6245bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);
CLANG_FORWARD_JUMP_SYMBOL(public_624abb8);

#define public_6245d15 _public_6245d15
#define public_6245d44 _public_6245d44
#define public_6245db9 _public_6245db9
#define public_6245dbe _public_6245dbe
#define public_6245dd4 _public_6245dd4
#define public_6245e4e _public_6245e4e
#define public_6245e61 _public_6245e61
#define public_6245f80 _public_6245f80
#define public_6245fd5 _public_6245fd5
#define public_624602a _public_624602a
#define public_624602c _public_624602c
#define public_624603f _public_624603f
#define public_6246088 _public_6246088
#define public_62460a9 _public_62460a9
#define public_62460bf _public_62460bf

PROC_DECLARE(0x6245bf0, internal_6245bf0, public_6245bf0);
extern "C" NAKED register_t __cdecl internal_6245bf0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624abb8 @0x6245bf8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624abb8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        mov ecx, dword ptr ss : [esp+0x14]
        sub esp, 0x4C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x68]
        push edi
        push ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x44]
        mov eax, dword ptr ds : [esi+0x98]
        xor ebx, ebx
        cmp eax, ebx
        je public_62460bf
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x1C]
        test al, al
        jne public_62460a9
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        js public_62460a9
        mov eax, dword ptr ds : [esi+0x98]
        mov ecx, dword ptr ds : [esi]
        lea edx, ds:[esi+0xBC]
        push edx
        push eax
        push esi
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0x9C]
        mov edx, dword ptr ds : [esi+0x84]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov eax, dword ptr ds : [eax+0x58]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0x9C]
        mov edx, dword ptr ds : [esi+0x84]
        fstp dword ptr ds : [esi+0xB0]
        mov eax, dword ptr ds : [eax+0x54]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0x9C]
        mov edx, dword ptr ds : [esi+0x84]
        fstp dword ptr ds : [esi+0xB4]
        mov eax, dword ptr ds : [eax+0x4C]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x84]
        fsub dword ptr ds : [esi+0xAC]
        fst dword ptr ss : [esp+0x70]
        fmul dword ptr ss : [esp+0x18]
        call public_6246188
        mov cl, byte ptr ds : [esi+0xB8]
        mov dword ptr ss : [esp+0x6C], eax
        cmp cl, bl
        je public_6245d15
        mov ecx, dword ptr ds : [esi+0x9C]
        mov edx, dword ptr ds : [ecx+0x64]
        mov byte ptr ds : [esi+0xB8], bl
        add eax, edx
        lea edx, ds:[esi+0x70]
        mov dword ptr ss : [esp+0x6C], eax
        lea eax, ds:[esi+0xA0]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        public_6245d15 : nop
        mov dword ptr ss : [esp+0x10], ebx
        mov eax, dword ptr ds : [esi+0x9C]
        lea edx, ss:[esp+0x10]
        push edx
        push ebx
        mov eax, dword ptr ds : [eax+0x5C]
        mov dword ptr ss : [esp+0x6C], ebx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x14]
        mov ebp, eax
        xor edi, edi
        cmp ebp, ebx
        jle public_6245dbe
        public_6245d44 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edi
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x2C]
        test eax, eax
        jne public_6245db9
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+0xAC]
        fnstsw ax
        test ah, 5
        jnp public_6245db9
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [esi+0x84]
        fnstsw ax
        and eax, 0x4100
        je public_6245dbe
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov edx, dword ptr ds : [eax]
        push ecx
        push edi
        push eax
        call dword ptr ds : [edx+0x30]
        test eax, eax
        jne public_6245db9
        fild dword ptr ss : [esp+0x6C]
        fadd dword ptr ss : [esp+0x50]
        call public_6246188
        mov dword ptr ss : [esp+0x6C], eax
        public_6245db9 : nop
        inc edi
        cmp edi, ebp
        jl public_6245d44
        public_6245dbe : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        cmp eax, ebx
        je public_6245dd4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6245dd4 : nop
        mov eax, dword ptr ds : [esi+0x9C]
        mov edx, dword ptr ds : [esi+0x90]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov eax, dword ptr ds : [eax+0x68]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        fimul dword ptr ss : [esp+0x6C]
        fadd dword ptr ds : [esi+0xEC]
        fst dword ptr ds : [esi+0xEC]
        call public_6246188
        mov ebp, eax
        mov dword ptr ss : [esp+0x6C], ebp
        cmp ebp, ebx
        fild dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ds : [esi+0xEC]
        fsub dword ptr ss : [esp+0x6C]
        fstp dword ptr ds : [esi+0xEC]
        jne public_6245e4e
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 0x44
        jp public_62460bf
        mov eax, dword ptr ds : [esi+0x84]
        mov dword ptr ds : [esi+0xAC], eax
        jmp public_62460bf
        public_6245e4e : nop
        mov eax, dword ptr ds : [public_6257c5c]
        cmp eax, ebx
        jne public_6245e61
        call public_623e830
        mov dword ptr ds : [public_6257c5c], eax
        public_6245e61 : nop
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0xA0]
        lea edx, ds:[esi+0x4C]
        push edi
        push edx
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        fld dword ptr ds : [public_624bac4]
        fdiv dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x20], eax
        lea eax, ds:[esi+0x70]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x44], 0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ds : [edi], ecx
        mov dword ptr ss : [esp+0x4C], 0
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], eax
        fst dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fstp st(0)
        fld dword ptr ss : [esp+0x70]
        fcomp dword ptr ds : [public_624bc38]
        fnstsw ax
        and eax, 0x4100
        jne public_6245f80
        fld dword ptr ss : [esp+0x70]
        fchs 
        fdivr dword ptr ds : [public_624bac4]
        mov ecx, dword ptr ds : [esi+0x9C]
        mov eax, dword ptr ds : [ecx+0x60]
        mov ecx, dword ptr ds : [esi+0x84]
        push ecx
        mov ecx, dword ptr ds : [esi+0x8C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x64]
        fstp st(0)
        call dword ptr ds : [edx+0x1C]
        fld dword ptr ss : [esp+0x50]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x54]
        fmul st, st(1)
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x44], edx
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x30]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x48], eax
        fstp dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x34]
        fstp st(0)
        mov dword ptr ss : [esp+0x4C], ecx
        public_6245f80 : nop
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [esi+0x98]
        mov edx, dword ptr ss : [esp+0x70]
        push eax
        mov dword ptr ss : [esp+0x14], edx
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x18]
        call dword ptr ds : [ecx+0x28]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6245fd5
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        public_6245fd5 : nop
        mov edx, dword ptr ds : [esi+0x9C]
        mov eax, dword ptr ds : [edx+0x50]
        mov edx, dword ptr ds : [esi+0x84]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0x98]
        lea edx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], ebx
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xCC]
        fild dword ptr ss : [esp+0x1C]
        fsubr dword ptr ss : [esp+0x18]
        fcom dword ptr ss : [esp+0x6C]
        fnstsw ax
        test ah, 5
        jp public_624602a
        call public_6246188
        mov ebp, eax
        jmp public_624602c
        public_624602a : nop
        fstp st(0)
        public_624602c : nop
        mov eax, dword ptr ds : [esi+0x98]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xB4]
        cmp ebp, ebx
        jle public_6246088
        public_624603f : nop
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x34]
        call dword ptr ds : [edx+0x50]
        dec ebp
        jne public_624603f
        public_6246088 : nop
        mov eax, dword ptr ds : [esi+0x98]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC0]
        fld dword ptr ss : [esp+0x70]
        fadd dword ptr ds : [esi+0xAC]
        fstp dword ptr ds : [esi+0xAC]
        jmp public_62460bf
        public_62460a9 : nop
        mov eax, dword ptr ds : [esi+0x98]
        cmp eax, ebx
        je public_62460bf
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x98], ebx
        public_62460bf : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 8
        UNREACHABLE_TRAP(0x6245bf0)
    }
}

#undef public_6245d15
#undef public_6245d44
#undef public_6245db9
#undef public_6245dbe
#undef public_6245dd4
#undef public_6245e4e
#undef public_6245e61
#undef public_6245f80
#undef public_6245fd5
#undef public_624602a
#undef public_624602c
#undef public_624603f
#undef public_6246088
#undef public_62460a9
#undef public_62460bf
