#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4580);
CLANG_FORWARD_PROC_SYMBOL(public_65f45a0);
CLANG_FORWARD_PROC_SYMBOL(public_65f4c50);

#define public_65f8d90 _public_65f8d90
#define public_65f8dab _public_65f8dab
#define public_65f8dc4 _public_65f8dc4
#define public_65f8de0 _public_65f8de0
#define public_65f8dfa _public_65f8dfa
#define public_65f8e13 _public_65f8e13
#define public_65f8e2a _public_65f8e2a
#define public_65f8e45 _public_65f8e45
#define public_65f8f0d _public_65f8f0d
#define public_65f8f11 _public_65f8f11
#define public_65f8f31 _public_65f8f31
#define public_65f8f37 _public_65f8f37
#define public_65f8f3b _public_65f8f3b
#define public_65f8f60 _public_65f8f60
#define public_65f9070 _public_65f9070
#define public_65f9072 _public_65f9072
#define public_65f907c _public_65f907c
#define public_65f9086 _public_65f9086

PROC_DECLARE(0x65f8d00, internal_65f8d00, public_65f8d00);
extern "C" NAKED register_t __cdecl internal_65f8d00()
{
    __asm
    {
        sub esp, 0x8C
        push edi
        mov edi, ecx
        mov cl, byte ptr ds : [edi+0x71]
        xor eax, eax
        cmp cl, al
        mov dword ptr ss : [esp+0x3C], edi
        jne public_65f9086
        mov ecx, dword ptr ds : [edi+0x24]
        push ebx
        cmp ecx, eax
        push ebp
        mov dword ptr ss : [esp+0x58], ecx
        setne cl
        cmp cl, al
        push esi
        mov esi, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [edi+0x7C], eax
        mov dword ptr ds : [edi+0x78], eax
        mov dword ptr ds : [edi+0x74], eax
        mov dword ptr ds : [edi+0x80], eax
        mov byte ptr ss : [esp+0x1F], cl
        je public_65f907c
        xor edx, edx
        xor edi, edi
        mov ecx, 1
        xor ebx, ebx
        xor ebp, ebp
        cmp dword ptr ss : [esp+0x5C], ecx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x34], edi
        jbe public_65f8e45
        mov dword ptr ss : [esp+0x28], eax
        mov edx, 0xC
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x10], eax
        lea edi, ds:[esi+0x14]
        mov edi, edi
        public_65f8d90 : nop
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi-8]
        fcomp dword ptr ds : [eax+esi]
        fnstsw ax
        test ah, 5
        jp public_65f8dab
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x10], edx
        jmp public_65f8dc4
        public_65f8dab : nop
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [edi-8]
        fcomp dword ptr ds : [eax+esi]
        fnstsw ax
        test ah, 0x41
        jne public_65f8dc4
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x18], edx
        public_65f8dc4 : nop
        mov eax, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [edi-4]
        fcomp dword ptr ds : [eax+esi+4]
        fnstsw ax
        test ah, 5
        jp public_65f8de0
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x30], edx
        jmp public_65f8dfa
        public_65f8de0 : nop
        mov eax, dword ptr ss : [esp+0x38]
        fld dword ptr ds : [edi-4]
        fcomp dword ptr ds : [eax+esi+4]
        fnstsw ax
        test ah, 0x41
        jne public_65f8dfa
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        public_65f8dfa : nop
        mov eax, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [eax+esi+8]
        fnstsw ax
        test ah, 5
        jp public_65f8e13
        mov ebx, ecx
        mov dword ptr ss : [esp+0x2C], edx
        jmp public_65f8e2a
        public_65f8e13 : nop
        mov eax, dword ptr ss : [esp+0x28]
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [eax+esi+8]
        fnstsw ax
        test ah, 0x41
        jne public_65f8e2a
        mov ebp, ecx
        mov dword ptr ss : [esp+0x28], edx
        public_65f8e2a : nop
        mov eax, dword ptr ss : [esp+0x5C]
        inc ecx
        add edx, 0xC
        add edi, 0xC
        cmp ecx, eax
        jb public_65f8d90
        mov edi, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x24]
        public_65f8e45 : nop
        lea ecx, ds:[edx+edx*2]
        fld dword ptr ds : [esi+ecx*4]
        lea eax, ds:[esi+ecx*4]
        mov ecx, dword ptr ss : [esp+0x20]
        lea edx, ds:[ecx+ecx*2]
        fsub dword ptr ds : [esi+edx*4]
        lea ecx, ds:[esi+edx*4]
        lea edx, ds:[edi+edi*2]
        mov edi, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        lea edx, ds:[esi+edx*4+4]
        fld dword ptr ds : [edx]
        lea edi, ds:[edi+edi*2]
        fsub dword ptr ds : [esi+edi*4+4]
        lea edi, ds:[esi+edi*4+4]
        lea ebp, ss:[ebp+ebp*2]
        lea ebp, ds:[esi+ebp*4+8]
        fstp dword ptr ss : [esp+0x10]
        lea ebx, ds:[ebx+ebx*2]
        fld dword ptr ss : [ebp]
        lea ebx, ds:[esi+ebx*4+8]
        fsub dword ptr ds : [ebx]
        push 0x3F000000
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x94]
        fadd dword ptr ds : [eax]
        lea eax, ss:[esp+0x88]
        push eax
        push ecx
        fstp dword ptr ss : [esp+0x90]
        fld dword ptr ds : [edx]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x94]
        fld dword ptr ss : [ebp]
        fadd dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x98]
        call public_65f45a0
        fld dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x54]
        fcomp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x9C]
        mov ecx, dword ptr ss : [esp+0xA0]
        lea ebx, ds:[edi+0x74]
        mov edx, ebx
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0xA4]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        fnstsw ax
        add esp, 0xC
        test ah, 0x41
        jne public_65f8f0d
        fld dword ptr ss : [esp+0x18]
        jmp public_65f8f11
        public_65f8f0d : nop
        fld dword ptr ss : [esp+0x10]
        public_65f8f11 : nop
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_65f8f37
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_65f8f31
        fld dword ptr ss : [esp+0x18]
        jmp public_65f8f3b
        public_65f8f31 : nop
        fld dword ptr ss : [esp+0x10]
        jmp public_65f8f3b
        public_65f8f37 : nop
        fld dword ptr ss : [esp+0x14]
        public_65f8f3b : nop
        fmul dword ptr ds : [public_6601328]
        mov eax, dword ptr ss : [esp+0x5C]
        test eax, eax
        fst dword ptr ds : [edi+0x80]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        jbe public_65f907c
        mov ebp, eax
        nop 
        public_65f8f60 : nop
        push ebx
        lea ecx, ss:[esp+0x40]
        push esi
        push ecx
        call public_65f4c50
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        add esp, 0xC
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_65f9070
        fsqrt 
        push ecx
        lea edx, ss:[esp+0x64]
        fst dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [edi+0x80]
        fmul dword ptr ds : [public_6601328]
        fst dword ptr ds : [edi+0x80]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fsub st, st(1)
        fstp dword ptr ss : [esp]
        push esi
        push edx
        fstp st(0)
        call public_65f45a0
        fld dword ptr ds : [edi+0x80]
        add esp, 8
        fstp dword ptr ss : [esp]
        lea eax, ss:[esp+0x70]
        push ebx
        push eax
        call public_65f45a0
        fld dword ptr ss : [esp+0x74]
        fadd dword ptr ss : [esp+0x80]
        lea ecx, ss:[esp+0x84]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x70]
        fadd dword ptr ss : [esp+0x7C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x6C]
        fadd dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp]
        call public_65f4580
        fld dword ptr ds : [public_66011e0]
        sub esp, 0xC
        fdiv dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x58]
        fld dword ptr ss : [esp+0x8C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x88]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x84]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_65f4580
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, ebx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        jmp public_65f9072
        public_65f9070 : nop
        fstp st(0)
        public_65f9072 : nop
        add esi, 0xC
        dec ebp
        jne public_65f8f60
        public_65f907c : nop
        mov al, byte ptr ss : [esp+0x1F]
        pop esi
        pop ebp
        mov byte ptr ds : [edi+0x71], al
        pop ebx
        public_65f9086 : nop
        mov edx, dword ptr ss : [esp+0x98]
        lea ecx, ds:[edi+0x74]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+0x94]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [eax], edx
        mov al, 1
        pop edi
        add esp, 0x8C
        ret 8
        UNREACHABLE_TRAP(0x65f8d00)
    }
}

#undef public_65f8d90
#undef public_65f8dab
#undef public_65f8dc4
#undef public_65f8de0
#undef public_65f8dfa
#undef public_65f8e13
#undef public_65f8e2a
#undef public_65f8e45
#undef public_65f8f0d
#undef public_65f8f11
#undef public_65f8f31
#undef public_65f8f37
#undef public_65f8f3b
#undef public_65f8f60
#undef public_65f9070
#undef public_65f9072
#undef public_65f907c
#undef public_65f9086
