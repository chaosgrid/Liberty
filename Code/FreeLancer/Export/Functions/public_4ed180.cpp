#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_4c4690);
CLANG_FORWARD_PROC_SYMBOL(public_4c46a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ff0);
CLANG_FORWARD_PROC_SYMBOL(public_4c5110);
CLANG_FORWARD_PROC_SYMBOL(public_4c52d0);
CLANG_FORWARD_PROC_SYMBOL(public_4ecfd0);
CLANG_FORWARD_PROC_SYMBOL(public_4ed180);
CLANG_FORWARD_PROC_SYMBOL(public_4f2da0);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4ed1b0 _public_4ed1b0
#define public_4ed1c5 _public_4ed1c5
#define public_4ed213 _public_4ed213
#define public_4ed217 _public_4ed217
#define public_4ed2bb _public_4ed2bb
#define public_4ed31d _public_4ed31d
#define public_4ed3a8 _public_4ed3a8
#define public_4ed3aa _public_4ed3aa
#define public_4ed3f1 _public_4ed3f1
#define public_4ed436 _public_4ed436
#define public_4ed53c _public_4ed53c
#define public_4ed53e _public_4ed53e
#define public_4ed55f _public_4ed55f
#define public_4ed561 _public_4ed561
#define public_4ed5b0 _public_4ed5b0
#define public_4ed5ca _public_4ed5ca
#define public_4ed5d5 _public_4ed5d5
#define public_4ed5de _public_4ed5de
#define public_4ed5fb _public_4ed5fb
#define public_4ed700 _public_4ed700
#define public_4ed720 _public_4ed720
#define public_4ed742 _public_4ed742
#define public_4ed756 _public_4ed756
#define public_4ed758 _public_4ed758
#define public_4ed75a _public_4ed75a
#define public_4ed777 _public_4ed777
#define public_4ed79a _public_4ed79a
#define public_4ed894 _public_4ed894
#define public_4ed898 _public_4ed898
#define public_4ed8b6 _public_4ed8b6
#define public_4ed8cd _public_4ed8cd
#define public_4ed8e9 _public_4ed8e9
#define public_4ed8fd _public_4ed8fd

PROC_DECLARE(0x4ed180, internal_4ed180, public_4ed180);
extern "C" NAKED register_t __cdecl internal_4ed180()
{
    __asm
    {
        sub esp, 0x88
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x368]
        add eax, 0x24
        mov dword ptr ss : [ebp+0x36C], eax
        mov edx, dword ptr ss : [ebp+0x378]
        mov ebx, dword ptr ss : [ebp+0x374]
        mov eax, edx
        cmp eax, edx
        push esi
        push edi
        je public_4ed1c5
        lea ecx, ds:[ecx]
        public_4ed1b0 : nop
        mov esi, eax
        mov edi, ebx
        add eax, 0x34
        mov ecx, 0xD
        add ebx, 0x34
        cmp eax, edx
        rep movsd
        jne public_4ed1b0
        public_4ed1c5 : nop
        mov ecx, dword ptr ss : [ebp+0x378]
        lea esi, ss:[ebp+0x370]
        push ecx
        push ebx
        mov ecx, esi
        call public_53aaa0
        mov dword ptr ds : [esi+8], ebx
        call public_54baf0
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x1C], ebx
        je public_4ed217
        add eax, 0xC
        cmp eax, ebx
        je public_4ed213
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_4ed213
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        mov dword ptr ss : [esp+0x1C], eax
        je public_4ed217
        public_4ed213 : nop
        mov dword ptr ss : [esp+0x1C], ebx
        public_4ed217 : nop
        mov byte ptr ss : [ebp+0x3AD], bl
        mov byte ptr ss : [ebp+0x3AF], bl
        mov dword ptr ss : [ebp+0x39C], ebx
        call public_4c4690
        test eax, eax
        jle public_4ed31d
        push ebx
        call public_4c46a0
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_4ed31d
        call public_4c4830
        cmp dword ptr ds : [esi+0xC], eax
        jne public_4ed31d
        mov eax, esi
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x18], 0x42200000
        je public_4ed2bb
        push ebx
        push eax
        call public_5416c0
        add esp, 8
        cmp eax, ebx
        je public_4ed2bb
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [ebp+0x39C], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x150]
        mov ecx, dword ptr ds : [eax+0x38]
        add eax, 0x2C
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x24], ecx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], edx
        public_4ed2bb : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        lea eax, ss:[ebp+0x390]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+4], edx
        lea edx, ss:[ebp+0x3A8]
        push edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        lea esi, ss:[ebp+0x3A0]
        push esi
        lea eax, ss:[ebp+0x384]
        push eax
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, ebp
        mov byte ptr ss : [ebp+0x3AF], 1
        call public_4ecfd0
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [public_5d3e40]
        mov byte ptr ss : [ebp+0x3AD], al
        fnstsw ax
        test ah, 5
        jp public_4ed31d
        mov dword ptr ds : [esi], 0x41F00000
        public_4ed31d : nop
        mov byte ptr ss : [ebp+0x3E1], bl
        mov byte ptr ss : [ebp+0x3E3], bl
        mov dword ptr ss : [ebp+0x3D0], ebx
        call public_4c4fb0
        test eax, eax
        jle public_4ed3f1
        push ebx
        call public_4c4ff0
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_4ed3f1
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, esi
        call public_4c52d0
        test al, al
        je public_4ed3f1
        call public_4c4830
        cmp dword ptr ss : [esp+0x14], eax
        jne public_4ed3f1
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        lea edx, ss:[ebp+0x3C4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, esi
        mov byte ptr ss : [ebp+0x3E3], 1
        mov dword ptr ds : [edx+8], eax
        call public_4c5110
        cmp eax, ebx
        je public_4ed3a8
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        jmp public_4ed3aa
        public_4ed3a8 : nop
        xor eax, eax
        public_4ed3aa : nop
        mov dword ptr ss : [ebp+0x3D0], eax
        lea eax, ss:[ebp+0x3DC]
        push eax
        lea esi, ss:[ebp+0x3D4]
        push esi
        lea ecx, ss:[ebp+0x3B8]
        push ecx
        push 0x42200000
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, ebp
        call public_4ecfd0
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [public_5d3e40]
        mov byte ptr ss : [ebp+0x3E1], al
        fnstsw ax
        test ah, 5
        jp public_4ed3f1
        mov dword ptr ds : [esi], 0x41F00000
        public_4ed3f1 : nop
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [ebp+0x3EC], 0x4CBEBC20
        mov dword ptr ss : [ebp+0x3E8], 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x408], ebx
        call public_40f130
        mov eax, dword ptr ss : [ebp+0x36C]
        mov edx, dword ptr ds : [eax+0x800]
        xor ecx, ecx
        cmp edx, ebx
        mov dword ptr ss : [esp+0x18], ecx
        jle public_4ed777
        public_4ed436 : nop
        mov eax, dword ptr ds : [eax+ecx*8]
        cmp eax, ebx
        je public_4ed75a
        lea edi, ds:[eax-8]
        cmp edi, ebx
        je public_4ed75a
        mov dword ptr ss : [esp+0x30], 0
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x34], 0
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x5C], eax
        lea eax, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x38], 0
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x54], ecx
        mov dword ptr ss : [esp+0x60], ecx
        push eax
        lea ecx, ss:[ebp+0x370]
        mov dword ptr ss : [esp+0x5C], edx
        mov dword ptr ss : [esp+0x68], edx
        mov edx, dword ptr ds : [ecx+8]
        push 1
        push edx
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x74], ebx
        mov dword ptr ss : [esp+0x78], 0
        mov byte ptr ss : [esp+0x7C], bl
        mov dword ptr ss : [esp+0x80], 0
        mov byte ptr ss : [esp+0x84], bl
        mov byte ptr ss : [esp+0x85], bl
        mov byte ptr ss : [esp+0x86], bl
        mov byte ptr ss : [esp+0x87], 1
        mov byte ptr ss : [esp+0x88], bl
        mov byte ptr ss : [esp+0x89], bl
        call public_4f2da0
        mov esi, dword ptr ss : [ebp+0x378]
        mov eax, dword ptr ss : [esp+0x1C]
        sub esi, 0x34
        cmp eax, ebx
        mov dword ptr ds : [esi], ebx
        mov byte ptr ds : [esi+0x24], bl
        mov byte ptr ds : [esi+0x2C], bl
        je public_4ed75a
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x10]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        cmp byte ptr ss : [ebp+0x3E3], bl
        je public_4ed53c
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ss : [ebp+0x3D0]
        jne public_4ed53c
        mov eax, 1
        jmp public_4ed53e
        public_4ed53c : nop
        xor eax, eax
        public_4ed53e : nop
        mov byte ptr ds : [esi+0x30], al
        cmp byte ptr ss : [ebp+0x3AF], bl
        je public_4ed55f
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        cmp eax, dword ptr ss : [ebp+0x39C]
        jne public_4ed55f
        mov eax, 1
        jmp public_4ed561
        public_4ed55f : nop
        xor eax, eax
        public_4ed561 : nop
        mov byte ptr ds : [esi+0x31], al
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        lea ecx, ss:[esp+0x40]
        mov dword ptr ds : [esi+0x1C], eax
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x88]
        test eax, eax
        jne public_4ed75a
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x150]
        cmp eax, ebx
        je public_4ed5b0
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4ed5b0
        cmp byte ptr ds : [eax+0x2BD], bl
        je public_4ed5b0
        mov byte ptr ds : [esi+0x2E], 1
        public_4ed5b0 : nop
        mov eax, dword ptr ss : [esp+0x40]
        test eax, 0x20004000
        jne public_4ed75a
        test eax, 0x7F0000
        je public_4ed5ca
        push 1
        jmp public_4ed5de
        public_4ed5ca : nop
        test eax, 0xFDFF
        je public_4ed5d5
        push 2
        jmp public_4ed5de
        public_4ed5d5 : nop
        test eax, 0x10000000
        je public_4ed5fb
        push 7
        public_4ed5de : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        push eax
        call public_5416c0
        add esp, 8
        cmp eax, ebx
        je public_4ed5fb
        mov al, byte ptr ds : [eax+0xA8]
        mov byte ptr ds : [esi+0x2C], al
        public_4ed5fb : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x80]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x150]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x8C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x64]
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        fstp dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x44]
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        lea eax, ss:[esp+0x90]
        push eax
        mov ecx, ebp
        call public_4ecfd0
        test al, al
        je public_4ed742
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        lea edx, ds:[esi+4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0x20], ecx
        mov dword ptr ds : [esi+0x28], edx
        mov byte ptr ds : [esi+0x2D], 1
        fild dword ptr ds : [public_616840]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x10]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_4ed756
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x10]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jp public_4ed758
        fild dword ptr ds : [public_616844]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x10]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_4ed756
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x10]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jp public_4ed758
        mov eax, dword ptr ss : [esp+0x44]
        xor ebx, ebx
        cmp eax, ebx
        je public_4ed700
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [ebp+0x3EC]
        fnstsw ax
        test ah, 0x41
        jp public_4ed720
        public_4ed700 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [ebp+0x3EC]
        fnstsw ax
        test ah, 0x44
        jp public_4ed720
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        je public_4ed75a
        public_4ed720 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x3E8], eax
        mov dword ptr ss : [esp+0x44], edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [ebp+0x3EC], edx
        jmp public_4ed75a
        public_4ed742 : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x2C]
        xor ebx, ebx
        mov dword ptr ds : [esi], eax
        mov byte ptr ds : [esi+0x2D], bl
        mov dword ptr ds : [esi+0x28], ecx
        jmp public_4ed75a
        public_4ed756 : nop
        fstp st(0)
        public_4ed758 : nop
        xor ebx, ebx
        public_4ed75a : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp+0x36C]
        mov edx, dword ptr ds : [eax+0x800]
        inc ecx
        cmp ecx, edx
        mov dword ptr ss : [esp+0x18], ecx
        jl public_4ed436
        public_4ed777 : nop
        mov eax, dword ptr ss : [ebp+0x3E8]
        cmp eax, ebx
        jl public_4ed79a
        mov edx, dword ptr ss : [ebp+0x374]
        imul eax, 0x34
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+edx+0x24], 1
        pop ebx
        add esp, 0x88
        ret 
        public_4ed79a : nop
        cmp dword ptr ss : [esp+0x1C], ebx
        je public_4ed8fd
        mov esi, dword ptr ss : [ebp+0x3F0]
        cmp esi, ebx
        je public_4ed8fd
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 3
        cmp al, 3
        jne public_4ed8fd
        test dword ptr ds : [esi+0xE0], 0x20004000
        mov edi, esi
        mov dword ptr ss : [esp+0x14], edi
        jne public_4ed8fd
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x64]
        fstp dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [eax+8]
        fld st(2)
        fmulp st(3), st
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fld st(1)
        fmul st, st(2)
        faddp st(3), st
        fxch st(2)
        fsqrt 
        fstp st(2)
        fstp st(0)
        fdiv dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [public_5d95ac]
        fnstsw ax
        test ah, 5
        jp public_4ed8fd
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x303
        cmp eax, 0x303
        jne public_4ed898
        mov ecx, esi
        call dword ptr ds : [public_5c64e0]
        mov ecx, eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_4ed894
        mov ecx, esi
        call dword ptr ds : [public_5c64e0]
        mov eax, dword ptr ds : [eax]
        push 2
        push eax
        call public_5416c0
        add esp, 8
        cmp eax, ebx
        je public_4ed894
        add eax, 0xC
        cmp eax, ebx
        je public_4ed8fd
        mov edi, dword ptr ds : [eax+4]
        cmp edi, ebx
        je public_4ed8fd
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_4ed8fd
        jmp public_4ed898
        public_4ed894 : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_4ed898 : nop
        mov eax, dword ptr ss : [ebp+0x36C]
        mov dword ptr ss : [ebp+0x408], edi
        mov ecx, dword ptr ds : [eax+0x800]
        mov edi, dword ptr ds : [edi+0xB0]
        xor esi, esi
        cmp ecx, ebx
        jle public_4ed8fd
        public_4ed8b6 : nop
        mov eax, dword ptr ds : [eax+esi*8]
        cmp eax, ebx
        je public_4ed8cd
        lea ecx, ds:[eax-8]
        cmp ecx, ebx
        je public_4ed8cd
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        cmp eax, edi
        je public_4ed8e9
        public_4ed8cd : nop
        mov eax, dword ptr ss : [ebp+0x36C]
        mov ecx, dword ptr ds : [eax+0x800]
        inc esi
        cmp esi, ecx
        jl public_4ed8b6
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x88
        ret 
        public_4ed8e9 : nop
        mov eax, dword ptr ss : [ebp+0x374]
        mov dword ptr ss : [ebp+0x3E8], esi
        imul esi, 0x34
        mov byte ptr ds : [esi+eax+0x24], 1
        public_4ed8fd : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x88
        ret 
        UNREACHABLE_TRAP(0x4ed180)
    }
}

#undef public_4ed1b0
#undef public_4ed1c5
#undef public_4ed213
#undef public_4ed217
#undef public_4ed2bb
#undef public_4ed31d
#undef public_4ed3a8
#undef public_4ed3aa
#undef public_4ed3f1
#undef public_4ed436
#undef public_4ed53c
#undef public_4ed53e
#undef public_4ed55f
#undef public_4ed561
#undef public_4ed5b0
#undef public_4ed5ca
#undef public_4ed5d5
#undef public_4ed5de
#undef public_4ed5fb
#undef public_4ed700
#undef public_4ed720
#undef public_4ed742
#undef public_4ed756
#undef public_4ed758
#undef public_4ed75a
#undef public_4ed777
#undef public_4ed79a
#undef public_4ed894
#undef public_4ed898
#undef public_4ed8b6
#undef public_4ed8cd
#undef public_4ed8e9
#undef public_4ed8fd
