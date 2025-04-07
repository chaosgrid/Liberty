#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661e3d0);

#define public_661e4c6 _public_661e4c6
#define public_661e4ed _public_661e4ed
#define public_661e4f9 _public_661e4f9
#define public_661e506 _public_661e506
#define public_661e51a _public_661e51a
#define public_661e522 _public_661e522
#define public_661e52d _public_661e52d
#define public_661e555 _public_661e555
#define public_661e561 _public_661e561
#define public_661e570 _public_661e570
#define public_661e583 _public_661e583
#define public_661e589 _public_661e589
#define public_661e595 _public_661e595
#define public_661e5c7 _public_661e5c7
#define public_661e5d3 _public_661e5d3
#define public_661e5e5 _public_661e5e5
#define public_661e5fa _public_661e5fa
#define public_661e606 _public_661e606
#define public_661e608 _public_661e608

PROC_DECLARE(0x661e400, internal_661e400, public_661e400);
extern "C" NAKED register_t __cdecl internal_661e400()
{
    __asm
    {
        sub esp, 0xC
        or eax, 0xFFFFFFFF
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        xor ebx, ebx
        mov dword ptr ss : [ebp], ebx
        push edi
        cmp dword ptr ds : [esi+0xC], 8
        jne public_661e608
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        push esi
        mov edi, 0xFFFFFFFE
        call dword ptr ds : [eax+0x10]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_6629564]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_6629560]
        fnstsw ax
        and eax, 0x100
        jne public_661e606
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        test ah, 0x41
        jp public_661e606
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_6629560]
        fnstsw ax
        and eax, 0x100
        jne public_661e606
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        test ah, 0x41
        jp public_661e606
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x44
        jnp public_661e606
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 5
        jp public_661e522
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x20], 1
        xor ecx, ecx
        public_661e4c6 : nop
        cmp ecx, edx
        jge public_661e51a
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        and eax, 0x100
        jne public_661e4ed
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], ebx
        fild qword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi+8]
        jmp public_661e4f9
        public_661e4ed : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ebx, dword ptr ds : [esi+0x10]
        imul eax, ecx
        fld dword ptr ds : [eax+ebx]
        public_661e4f9 : nop
        fcom dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x41
        jp public_661e506
        mov edi, ecx
        public_661e506 : nop
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_661e51a
        mov dword ptr ss : [esp+0x34], ecx
        inc ecx
        xor ebx, ebx
        jmp public_661e4c6
        public_661e51a : nop
        mov eax, dword ptr ss : [esp+0x34]
        inc edi
        inc eax
        jmp public_661e589
        public_661e522 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        public_661e52d : nop
        dec ecx
        cmp ecx, ebx
        jl public_661e583
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        and eax, 0x100
        jne public_661e555
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], ebx
        fild qword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi+8]
        jmp public_661e561
        public_661e555 : nop
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+0x10]
        imul edx, ecx
        fld dword ptr ds : [edx+eax]
        public_661e561 : nop
        fcom dword ptr ss : [esp+0x24]
        fnstsw ax
        and eax, 0x100
        jne public_661e570
        mov edi, ecx
        public_661e570 : nop
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        and eax, 0x4100
        jne public_661e583
        mov dword ptr ss : [esp+0x34], ecx
        jmp public_661e52d
        public_661e583 : nop
        mov eax, dword ptr ss : [esp+0x34]
        dec edi
        dec eax
        public_661e589 : nop
        cmp edi, eax
        mov dword ptr ss : [esp+0x34], eax
        je public_661e5fa
        mov ebx, dword ptr ss : [esp+0x2C]
        public_661e595 : nop
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [esp+0x30]
        cmp ecx, eax
        jae public_661e5e5
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        and eax, 0x100
        jne public_661e5c7
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], 0
        fild qword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi+8]
        jmp public_661e5d3
        public_661e5c7 : nop
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+0x10]
        imul edx, edi
        fld dword ptr ds : [edx+eax]
        public_661e5d3 : nop
        fstp dword ptr ds : [ebx+ecx*8]
        push edi
        mov ecx, esi
        call public_661e3d0
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx+ecx*8+4], eax
        public_661e5e5 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [esp+0x34]
        add edi, edx
        inc ecx
        cmp edi, eax
        mov dword ptr ss : [ebp], ecx
        jne public_661e595
        public_661e5fa : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 0x18
        public_661e606 : nop
        mov eax, edi
        public_661e608 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0x18
        UNREACHABLE_TRAP(0x661e400)
    }
}

#undef public_661e4c6
#undef public_661e4ed
#undef public_661e4f9
#undef public_661e506
#undef public_661e51a
#undef public_661e522
#undef public_661e52d
#undef public_661e555
#undef public_661e561
#undef public_661e570
#undef public_661e583
#undef public_661e589
#undef public_661e595
#undef public_661e5c7
#undef public_661e5d3
#undef public_661e5e5
#undef public_661e5fa
#undef public_661e606
#undef public_661e608
