#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c258c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c25cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6c25ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6c25d10);

#define public_6c258e4 _public_6c258e4
#define public_6c25920 _public_6c25920
#define public_6c25993 _public_6c25993
#define public_6c259ae _public_6c259ae
#define public_6c259c7 _public_6c259c7
#define public_6c259e3 _public_6c259e3
#define public_6c259fb _public_6c259fb
#define public_6c25a16 _public_6c25a16
#define public_6c25a2d _public_6c25a2d
#define public_6c25a44 _public_6c25a44
#define public_6c25b07 _public_6c25b07
#define public_6c25b0b _public_6c25b0b
#define public_6c25b2b _public_6c25b2b
#define public_6c25b31 _public_6c25b31
#define public_6c25b35 _public_6c25b35
#define public_6c25b58 _public_6c25b58
#define public_6c25c6b _public_6c25c6b
#define public_6c25c6d _public_6c25c6d
#define public_6c25c7c _public_6c25c7c
#define public_6c25c8d _public_6c25c8d

PROC_DECLARE(0x6c258c0, internal_6c258c0, public_6c258c0);
extern "C" NAKED register_t __cdecl internal_6c258c0()
{
    __asm
    {
        sub esp, 0x84
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xA8]
        test al, 1
        mov dword ptr ss : [esp+0x3C], edi
        jne public_6c258e4
        or eax, 0xFFFFFFFF
        pop edi
        add esp, 0x84
        ret 8
        public_6c258e4 : nop
        test al, 2
        je public_6c25920
        mov ecx, dword ptr ss : [esp+0x8C]
        lea eax, ds:[edi+0x1D4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+0x90]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [edi+0x1E0]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        pop edi
        add esp, 0x84
        ret 8
        public_6c25920 : nop
        xor eax, eax
        push ebx
        lea ebx, ds:[edi+0x1D4]
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x1E0], eax
        mov edx, dword ptr ds : [edi+0x30]
        cmp edx, eax
        setne cl
        cmp cl, al
        mov dword ptr ss : [esp+0x3C], edx
        je public_6c25c8d
        push ebp
        push esi
        mov esi, dword ptr ds : [edi+0x20]
        xor edi, edi
        mov ecx, 1
        xor ebp, ebp
        xor ebx, ebx
        cmp edx, ecx
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x14], eax
        jbe public_6c25a44
        mov dword ptr ss : [esp+0x2C], eax
        mov edx, 0xC
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x10], eax
        lea edi, ds:[esi+0x14]
        public_6c25993 : nop
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi-8]
        fcomp dword ptr ds : [eax+esi]
        fnstsw ax
        test ah, 5
        jp public_6c259ae
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x10], edx
        jmp public_6c259c7
        public_6c259ae : nop
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [edi-8]
        fcomp dword ptr ds : [eax+esi]
        fnstsw ax
        test ah, 0x41
        jne public_6c259c7
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x18], edx
        public_6c259c7 : nop
        mov eax, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [edi-4]
        fcomp dword ptr ds : [eax+esi+4]
        fnstsw ax
        test ah, 5
        jp public_6c259e3
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x30], edx
        jmp public_6c259fb
        public_6c259e3 : nop
        mov eax, dword ptr ss : [esp+0x34]
        fld dword ptr ds : [edi-4]
        fcomp dword ptr ds : [eax+esi+4]
        fnstsw ax
        test ah, 0x41
        jne public_6c259fb
        mov ebp, ecx
        mov dword ptr ss : [esp+0x34], edx
        public_6c259fb : nop
        mov eax, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [eax+esi+8]
        fnstsw ax
        test ah, 5
        jp public_6c25a16
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x24], edx
        jmp public_6c25a2d
        public_6c25a16 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [eax+esi+8]
        fnstsw ax
        test ah, 0x41
        jne public_6c25a2d
        mov ebx, ecx
        mov dword ptr ss : [esp+0x2C], edx
        public_6c25a2d : nop
        mov eax, dword ptr ss : [esp+0x44]
        inc ecx
        add edx, 0xC
        add edi, 0xC
        cmp ecx, eax
        jb public_6c25993
        mov edi, dword ptr ss : [esp+0x1C]
        public_6c25a44 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ds:[eax+eax*2]
        fld dword ptr ds : [esi+ecx*4]
        lea eax, ds:[esi+ecx*4]
        mov ecx, dword ptr ss : [esp+0x28]
        lea edx, ds:[ecx+ecx*2]
        fsub dword ptr ds : [esi+edx*4]
        lea ecx, ds:[esi+edx*4]
        lea edx, ss:[ebp+ebp*2]
        lea edx, ds:[esi+edx*4+4]
        fstp dword ptr ss : [esp+0x18]
        lea ebx, ds:[ebx+ebx*2]
        fld dword ptr ds : [edx]
        lea edi, ds:[edi+edi*2]
        fsub dword ptr ds : [esi+edi*4+4]
        lea ebp, ds:[esi+ebx*4+8]
        mov ebx, dword ptr ss : [esp+0x14]
        lea edi, ds:[esi+edi*4+4]
        fstp dword ptr ss : [esp+0x10]
        lea ebx, ds:[ebx+ebx*2]
        fld dword ptr ss : [ebp]
        lea ebx, ds:[esi+ebx*4+8]
        fsub dword ptr ds : [ebx]
        push 0x3F000000
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x68]
        fadd dword ptr ds : [eax]
        lea eax, ss:[esp+0x80]
        push eax
        push ecx
        fstp dword ptr ss : [esp+0x88]
        fld dword ptr ds : [edx]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x8C]
        fld dword ptr ss : [ebp]
        fadd dword ptr ds : [ebx]
        fstp dword ptr ss : [esp+0x90]
        call public_6c25d10
        fld dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x54]
        fcomp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [esp+0x74]
        lea ebx, ds:[edi+0x1D4]
        mov edx, ebx
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x78]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        fnstsw ax
        add esp, 0xC
        test ah, 0x41
        jne public_6c25b07
        fld dword ptr ss : [esp+0x18]
        jmp public_6c25b0b
        public_6c25b07 : nop
        fld dword ptr ss : [esp+0x10]
        public_6c25b0b : nop
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_6c25b31
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_6c25b2b
        fld dword ptr ss : [esp+0x18]
        jmp public_6c25b35
        public_6c25b2b : nop
        fld dword ptr ss : [esp+0x10]
        jmp public_6c25b35
        public_6c25b31 : nop
        fld dword ptr ss : [esp+0x14]
        public_6c25b35 : nop
        fmul dword ptr ds : [public_6c361f0]
        xor ebp, ebp
        fst dword ptr ds : [edi+0x1E0]
        mov eax, dword ptr ds : [edi+0x30]
        test eax, eax
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        jbe public_6c25c7c
        public_6c25b58 : nop
        push ebx
        lea ecx, ss:[esp+0x3C]
        push esi
        push ecx
        call public_6c25ce0
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        add esp, 0xC
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_6c25c6b
        fsqrt 
        push ecx
        lea edx, ss:[esp+0x50]
        fst dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [edi+0x1E0]
        fmul dword ptr ds : [public_6c361f0]
        fst dword ptr ds : [edi+0x1E0]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fsub st, st(1)
        fstp dword ptr ss : [esp]
        push esi
        push edx
        fstp st(0)
        call public_6c25d10
        fld dword ptr ds : [edi+0x1E0]
        add esp, 8
        fstp dword ptr ss : [esp]
        lea eax, ss:[esp+0x5C]
        push ebx
        push eax
        call public_6c25d10
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ss : [esp+0x6C]
        lea ecx, ss:[esp+0x7C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp]
        call public_6c25cc0
        fld dword ptr ds : [public_6c361ec]
        sub esp, 0xC
        fdiv dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x94]
        fld dword ptr ss : [esp+0x84]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x80]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x7C]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_6c25cc0
        mov edx, dword ptr ss : [esp+0x88]
        mov eax, dword ptr ss : [esp+0x8C]
        mov ecx, ebx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x90]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        jmp public_6c25c6d
        public_6c25c6b : nop
        fstp st(0)
        public_6c25c6d : nop
        mov eax, dword ptr ds : [edi+0x30]
        inc ebp
        add esi, 0xC
        cmp ebp, eax
        jb public_6c25b58
        public_6c25c7c : nop
        mov eax, dword ptr ds : [edi+0xA8]
        or eax, 2
        pop esi
        mov dword ptr ds : [edi+0xA8], eax
        pop ebp
        public_6c25c8d : nop
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x90]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [edi+0x1E0]
        mov eax, dword ptr ss : [esp+0x94]
        pop ebx
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop edi
        add esp, 0x84
        ret 8
        UNREACHABLE_TRAP(0x6c258c0)
    }
}

#undef public_6c258e4
#undef public_6c25920
#undef public_6c25993
#undef public_6c259ae
#undef public_6c259c7
#undef public_6c259e3
#undef public_6c259fb
#undef public_6c25a16
#undef public_6c25a2d
#undef public_6c25a44
#undef public_6c25b07
#undef public_6c25b0b
#undef public_6c25b2b
#undef public_6c25b31
#undef public_6c25b35
#undef public_6c25b58
#undef public_6c25c6b
#undef public_6c25c6d
#undef public_6c25c7c
#undef public_6c25c8d
