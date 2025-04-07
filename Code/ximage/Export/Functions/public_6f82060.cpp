#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f81df0);
CLANG_FORWARD_PROC_SYMBOL(public_6f822d0);

#define public_6f820b1 _public_6f820b1
#define public_6f820bf _public_6f820bf
#define public_6f820c7 _public_6f820c7
#define public_6f82147 _public_6f82147
#define public_6f8217f _public_6f8217f
#define public_6f8218e _public_6f8218e
#define public_6f821a5 _public_6f821a5
#define public_6f821df _public_6f821df
#define public_6f821f2 _public_6f821f2
#define public_6f8227c _public_6f8227c
#define public_6f82288 _public_6f82288
#define public_6f8229a _public_6f8229a
#define public_6f822bd _public_6f822bd

PROC_DECLARE(0x6f82060, internal_6f82060, public_6f82060);
extern "C" NAKED register_t __cdecl internal_6f82060()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x58
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x68]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        je public_6f820b1
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x4C], edx
        mov edx, dword ptr ds : [eax+0xC]
        lea eax, ss:[esp+0x48]
        push eax
        mov dword ptr ss : [esp+0x54], ecx
        mov dword ptr ss : [esp+0x58], edx
        call public_6f822d0
        add esp, 4
        test eax, eax
        jne public_6f820c7
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x50], ecx
        mov dword ptr ss : [esp+0x54], edx
        jmp public_6f820bf
        public_6f820b1 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x54], ecx
        public_6f820bf : nop
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x48], ebx
        public_6f820c7 : nop
        lea edx, ss:[esp+0x48]
        push edx
        mov ecx, esi
        call public_6f81df0
        mov eax, dword ptr ss : [esp+0x50]
        sub eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x24], eax
        je public_6f822bd
        mov eax, dword ptr ss : [esp+0x54]
        sub eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x20], eax
        je public_6f822bd
        mov edi, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x70], eax
        fild dword ptr ss : [esp+0x70]
        sub ecx, eax
        mov dword ptr ss : [esp+0x70], ecx
        mov ebp, dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ds : [edi+0xC]
        fild dword ptr ss : [esp+0x70]
        sub edx, ebp
        mov dword ptr ss : [esp+0x70], edx
        mov eax, dword ptr ds : [esi+0x18]
        fidiv dword ptr ss : [esp+0x24]
        xor ebp, ebp
        cmp eax, ebx
        fstp dword ptr ss : [esp+0x14]
        fild dword ptr ss : [esp+0x70]
        fidiv dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x18]
        jle public_6f822bd
        mov dword ptr ss : [esp+0x10], ebx
        public_6f82147 : nop
        fild dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        add ecx, edx
        fstp dword ptr ss : [esp+0x70]
        dec eax
        cmp ebp, eax
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x1C]
        jne public_6f8217f
        mov eax, dword ptr ds : [esi+0x20]
        xor edx, edx
        div dword ptr ds : [esi+0x3C]
        cmp edx, ebx
        je public_6f8217f
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], ebx
        fild qword ptr ss : [esp+0x28]
        jmp public_6f8218e
        public_6f8217f : nop
        mov eax, dword ptr ds : [esi+0x3C]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], ebx
        fild qword ptr ss : [esp+0x30]
        public_6f8218e : nop
        fmul dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, ebx
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x24]
        jle public_6f8229a
        public_6f821a5 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [esi+0x10]
        imul ecx, ebx
        add ecx, ebp
        shl ecx, 2
        lea edi, ds:[edx+ecx*8]
        dec eax
        cmp ebx, eax
        fld dword ptr ds : [edi+0x14]
        fsub dword ptr ds : [edi+4]
        jne public_6f821df
        mov eax, dword ptr ds : [esi+0x24]
        xor edx, edx
        div dword ptr ds : [esi+0x40]
        test edx, edx
        je public_6f821df
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x3C], 0
        fild qword ptr ss : [esp+0x38]
        jmp public_6f821f2
        public_6f821df : nop
        mov eax, dword ptr ds : [esi+0x40]
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], 0
        fild qword ptr ss : [esp+0x40]
        public_6f821f2 : nop
        fmul dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6f83060]
        fnstsw ax
        test ah, 0x44
        jnp public_6f82288
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        je public_6f8227c
        fld dword ptr ss : [esp+0x6C]
        push edi
        fsub qword ptr ds : [public_6f83068]
        mov edi, dword ptr ds : [esi+0x28]
        lea edx, ss:[esp+0x5C]
        push edx
        movzx edx, byte ptr ds : [esi+0x2C]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x28]
        shl edx, 0x18
        fadd dword ptr ss : [esp+0x78]
        or edx, edi
        push edx
        mov edx, dword ptr ds : [esi+0xC]
        fsub qword ptr ds : [public_6f83068]
        mov ecx, dword ptr ds : [edx+ecx]
        push ecx
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x7C]
        fsub qword ptr ds : [public_6f83068]
        fstp dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x80]
        fsub qword ptr ds : [public_6f83068]
        fstp dword ptr ss : [esp+0x74]
        call eax
        add esp, 0x10
        public_6f8227c : nop
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp+0x70]
        public_6f82288 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        inc ebx
        cmp ebx, eax
        jl public_6f821a5
        mov edi, dword ptr ss : [esp+0x74]
        xor ebx, ebx
        public_6f8229a : nop
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [esi+0x18]
        inc ebp
        add edx, 0x20
        cmp ebp, eax
        fstp dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x10], edx
        jl public_6f82147
        public_6f822bd : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x58
        ret 0xC
        UNREACHABLE_TRAP(0x6f82060)
    }
}

#undef public_6f820b1
#undef public_6f820bf
#undef public_6f820c7
#undef public_6f82147
#undef public_6f8217f
#undef public_6f8218e
#undef public_6f821a5
#undef public_6f821df
#undef public_6f821f2
#undef public_6f8227c
#undef public_6f82288
#undef public_6f8229a
#undef public_6f822bd
