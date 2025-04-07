#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_636b830);
CLANG_FORWARD_PROC_SYMBOL(public_636bce0);
CLANG_FORWARD_PROC_SYMBOL(public_636bdc0);
CLANG_FORWARD_PROC_SYMBOL(public_636be20);
CLANG_FORWARD_PROC_SYMBOL(public_636d960);
CLANG_FORWARD_PROC_SYMBOL(public_636e080);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6372280);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639881e);

#define public_636be7d _public_636be7d
#define public_636be81 _public_636be81
#define public_636beab _public_636beab
#define public_636beb1 _public_636beb1
#define public_636becb _public_636becb
#define public_636beef _public_636beef
#define public_636bf05 _public_636bf05
#define public_636bf33 _public_636bf33
#define public_636bf56 _public_636bf56
#define public_636bf86 _public_636bf86
#define public_636bfb1 _public_636bfb1
#define public_636c00c _public_636c00c
#define public_636c043 _public_636c043
#define public_636c0a5 _public_636c0a5
#define public_636c0a7 _public_636c0a7
#define public_636c0ae _public_636c0ae
#define public_636c0b2 _public_636c0b2
#define public_636c0c0 _public_636c0c0
#define public_636c11a _public_636c11a
#define public_636c11c _public_636c11c
#define public_636c121 _public_636c121
#define public_636c12b _public_636c12b
#define public_636c133 _public_636c133
#define public_636c13a _public_636c13a
#define public_636c144 _public_636c144
#define public_636c14a _public_636c14a
#define public_636c166 _public_636c166
#define public_636c1a2 _public_636c1a2
#define public_636c1ab _public_636c1ab
#define public_636c1cd _public_636c1cd
#define public_636c1d4 _public_636c1d4
#define public_636c1e1 _public_636c1e1
#define public_636c1ef _public_636c1ef
#define public_636c20d _public_636c20d
#define public_636c216 _public_636c216
#define public_636c23c _public_636c23c

PROC_DECLARE(0x636be20, internal_636be20, public_636be20);
extern "C" NAKED register_t __cdecl internal_636be20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639881e @0x636be22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639881e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x28
        mov eax, dword ptr ss : [esp+0x3C]
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        push edi
        mov dword ptr ds : [eax], ebx
        mov word ptr ss : [esp+0x30], bx
        mov word ptr ss : [esp+0x32], bx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov word ptr ss : [esp+0x28], bx
        mov word ptr ss : [esp+0x2A], bx
        mov dword ptr ss : [esp+0x2C], ebx
        mov edi, dword ptr ds : [public_658b810]
        cmp edi, ebx
        mov byte ptr ss : [esp+0x40], 1
        mov dword ptr ss : [esp+0x10], edi
        je public_636c166
        jmp public_636be81
        public_636be7d : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_636be81 : nop
        cmp dword ptr ds : [edi+0x30], ebx
        je public_636c166
        push 0x18
        call public_6391d9c
        add esp, 4
        cmp eax, ebx
        je public_636beab
        mov esi, eax
        mov word ptr ds : [eax+0x10], bx
        mov word ptr ds : [eax+0x12], bx
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ss : [esp+0x18], esi
        jmp public_636beb1
        public_636beab : nop
        mov dword ptr ss : [esp+0x18], ebx
        mov esi, ebx
        public_636beb1 : nop
        mov cx, word ptr ss : [esp+0x32]
        cmp cx, word ptr ss : [esp+0x30]
        mov byte ptr ss : [esp+0x40], 1
        jb public_636becb
        lea ecx, ss:[esp+0x30]
        call public_63441a0
        public_636becb : nop
        mov edx, dword ptr ss : [esp+0x32]
        mov eax, dword ptr ss : [esp+0x34]
        and edx, 0xFFFF
        mov dword ptr ds : [eax+edx*4], esi
        mov ecx, dword ptr ds : [public_658b24c]
        inc word ptr ss : [esp+0x32]
        xor eax, eax
        cmp ecx, ebx
        jle public_636bf05
        mov ecx, esi
        public_636beef : nop
        mov edx, dword ptr ds : [edi+0x18]
        fld qword ptr ds : [edx+eax*8]
        inc eax
        fstp dword ptr ds : [ecx]
        mov edx, dword ptr ds : [public_658b24c]
        add ecx, 4
        cmp eax, edx
        jl public_636beef
        public_636bf05 : nop
        push edi
        call public_6372280
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        mov word ptr ss : [esp+0x2A], bx
        je public_636bfb1
        lea ebp, ds:[eax+4]
        mov eax, dword ptr ss : [ebp]
        add ebp, 4
        cmp eax, ebx
        je public_636bfb1
        add esi, 0x10
        public_636bf33 : nop
        mov eax, dword ptr ds : [eax+8]
        push eax
        call public_6370570
        mov cx, word ptr ss : [esp+0x2E]
        add esp, 4
        cmp cx, word ptr ss : [esp+0x28]
        mov edi, eax
        jb public_636bf56
        lea ecx, ss:[esp+0x28]
        call public_63441a0
        public_636bf56 : nop
        mov edx, dword ptr ss : [esp+0x2A]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x48]
        and edx, 0xFFFF
        mov dword ptr ds : [eax+edx*4], edi
        inc word ptr ss : [esp+0x2A]
        mov ax, word ptr ds : [esi+2]
        cmp ax, word ptr ds : [esi]
        mov edx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [edx+edi*4]
        jb public_636bf86
        mov ecx, esi
        call public_63441a0
        public_636bf86 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x54]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        add ebp, 4
        mov dword ptr ds : [edx+ecx*4], ebx
        inc word ptr ds : [esi+2]
        inc byte ptr ds : [edi+eax]
        mov eax, dword ptr ss : [ebp-4]
        test eax, eax
        jne public_636bf33
        mov esi, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        public_636bfb1 : nop
        mov ecx, esi
        call public_636bce0
        fstp dword ptr ss : [esp+0x20]
        mov ecx, esi
        call public_636bdc0
        fld dword ptr ss : [esp+0x20]
        fcom dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_636c00c
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [public_63a5498]
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [public_63a5498]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_63a5498]
        mov dword ptr ds : [esi+4], eax
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [esi]
        mov dword ptr ds : [esi+8], ecx
        fmul dword ptr ds : [public_63a5498]
        public_636c00c : nop
        fxch 
        fsqrt 
        fxch 
        fxch 
        fmul qword ptr ds : [public_63a5900]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_636c14a
        mov ebp, dword ptr ss : [esp+0x2A]
        xor edi, edi
        xor edx, edx
        and ebp, 0xFFFF
        mov dword ptr ss : [esp+0x14], 0xBF800000
        mov dword ptr ss : [esp+0x20], ebx
        jle public_636c0ae
        public_636c043 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [eax+edx*4]
        mov ebx, dword ptr ss : [esp+0x50]
        cmp byte ptr ds : [eax+ebx], 0
        jne public_636c144
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx+edx*4]
        mov ecx, dword ptr ds : [ecx]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x1C]
        fld st(0)
        fmulp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fadd st, st(1)
        faddp st(2), st
        fstp st(0)
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_636c0a5
        fstp dword ptr ss : [esp+0x14]
        mov edi, edx
        jmp public_636c0a7
        public_636c0a5 : nop
        fstp st(0)
        public_636c0a7 : nop
        inc edx
        cmp edx, ebp
        jl public_636c043
        jmp public_636c0b2
        public_636c0ae : nop
        mov ebx, dword ptr ss : [esp+0x50]
        public_636c0b2 : nop
        xor edx, edx
        test ebp, ebp
        mov dword ptr ss : [esp+0x14], 0xBF800000
        jle public_636c121
        public_636c0c0 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [ecx], 1
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx+edx*4]
        mov ecx, dword ptr ds : [ecx+edi*4]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x18]
        fld st(0)
        fmulp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fadd st, st(1)
        faddp st(2), st
        fstp st(0)
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_636c11a
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], edx
        jmp public_636c11c
        public_636c11a : nop
        fstp st(0)
        public_636c11c : nop
        inc edx
        cmp edx, ebp
        jl public_636c0c0
        public_636c121 : nop
        xor eax, eax
        test ebp, ebp
        jle public_636c144
        mov ecx, dword ptr ss : [esp+0x20]
        public_636c12b : nop
        cmp eax, ecx
        je public_636c133
        cmp eax, edi
        jne public_636c13a
        public_636c133 : nop
        inc eax
        cmp eax, ebp
        jl public_636c12b
        jmp public_636c144
        public_636c13a : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edx+eax*4]
        inc byte ptr ds : [eax+ebx]
        public_636c144 : nop
        mov edi, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        public_636c14a : nop
        lea eax, ss:[esp+0x24]
        push eax
        call public_636ecc0
        mov eax, dword ptr ds : [edi+0x30]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        jne public_636be7d
        public_636c166 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [ecx]
        xor ebp, ebp
        cmp eax, ebx
        jne public_636c1a2
        mov eax, dword ptr ss : [esp+0x48]
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call public_636b830
        mov esi, eax
        push esi
        call public_636e080
        add esp, 0xC
        cmp esi, ebx
        mov ebp, eax
        je public_636c1a2
        mov ecx, esi
        call public_636d960
        push esi
        call public_6391d5a
        add esp, 4
        public_636c1a2 : nop
        xor edi, edi
        cmp word ptr ss : [esp+0x32], bx
        jbe public_636c1ef
        public_636c1ab : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [ecx+edi*4]
        cmp esi, ebx
        je public_636c1e1
        mov eax, dword ptr ds : [esi+0x14]
        lea edx, ds:[esi+0x18]
        cmp eax, edx
        je public_636c1d4
        cmp eax, ebx
        je public_636c1cd
        push eax
        call public_6343fb0
        add esp, 4
        public_636c1cd : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov word ptr ds : [esi+0x10], bx
        public_636c1d4 : nop
        push esi
        mov word ptr ds : [esi+0x12], bx
        call public_6391d5a
        add esp, 4
        public_636c1e1 : nop
        mov eax, dword ptr ss : [esp+0x32]
        inc edi
        and eax, 0xFFFF
        cmp edi, eax
        jl public_636c1ab
        public_636c1ef : nop
        mov eax, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x30]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x40], 0
        je public_636c216
        cmp eax, ebx
        je public_636c20d
        push eax
        call public_6343fb0
        add esp, 4
        public_636c20d : nop
        mov dword ptr ss : [esp+0x2C], ebx
        mov word ptr ss : [esp+0x28], bx
        public_636c216 : nop
        mov eax, dword ptr ss : [esp+0x34]
        lea edx, ss:[esp+0x38]
        cmp eax, edx
        mov word ptr ss : [esp+0x2A], bx
        mov dword ptr ss : [esp+0x40], 0xFFFFFFFF
        je public_636c23c
        cmp eax, ebx
        je public_636c23c
        push eax
        call public_6343fb0
        add esp, 4
        public_636c23c : nop
        mov ecx, dword ptr ss : [esp+0x38]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x636be20)
    }
}

#undef public_636be7d
#undef public_636be81
#undef public_636beab
#undef public_636beb1
#undef public_636becb
#undef public_636beef
#undef public_636bf05
#undef public_636bf33
#undef public_636bf56
#undef public_636bf86
#undef public_636bfb1
#undef public_636c00c
#undef public_636c043
#undef public_636c0a5
#undef public_636c0a7
#undef public_636c0ae
#undef public_636c0b2
#undef public_636c0c0
#undef public_636c11a
#undef public_636c11c
#undef public_636c121
#undef public_636c12b
#undef public_636c133
#undef public_636c13a
#undef public_636c144
#undef public_636c14a
#undef public_636c166
#undef public_636c1a2
#undef public_636c1ab
#undef public_636c1cd
#undef public_636c1d4
#undef public_636c1e1
#undef public_636c1ef
#undef public_636c20d
#undef public_636c216
#undef public_636c23c
