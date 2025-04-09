#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_492410);
CLANG_FORWARD_PROC_SYMBOL(public_496d40);
CLANG_FORWARD_PROC_SYMBOL(public_4980d0);
CLANG_FORWARD_PROC_SYMBOL(public_49e890);
CLANG_FORWARD_PROC_SYMBOL(public_49ea50);
CLANG_FORWARD_PROC_SYMBOL(public_4a1b50);
CLANG_FORWARD_PROC_SYMBOL(public_4c4690);
CLANG_FORWARD_PROC_SYMBOL(public_4c46a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4750);
CLANG_FORWARD_PROC_SYMBOL(public_4c4810);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c58e0);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_49eab5 _public_49eab5
#define public_49eadb _public_49eadb
#define public_49ec81 _public_49ec81
#define public_49ec93 _public_49ec93
#define public_49ec9d _public_49ec9d
#define public_49eca2 _public_49eca2
#define public_49ecb3 _public_49ecb3
#define public_49ecb8 _public_49ecb8
#define public_49ece0 _public_49ece0
#define public_49ecf3 _public_49ecf3
#define public_49ecf9 _public_49ecf9
#define public_49ed01 _public_49ed01
#define public_49ed0d _public_49ed0d
#define public_49ed29 _public_49ed29
#define public_49ed3f _public_49ed3f
#define public_49eda3 _public_49eda3
#define public_49ee69 _public_49ee69
#define public_49ee7e _public_49ee7e
#define public_49eec1 _public_49eec1
#define public_49eece _public_49eece
#define public_49eef6 _public_49eef6
#define public_49eefc _public_49eefc
#define public_49ef18 _public_49ef18
#define public_49ef24 _public_49ef24
#define public_49ef3c _public_49ef3c
#define public_49ef41 _public_49ef41
#define public_49ef5b _public_49ef5b
#define public_49ef8c _public_49ef8c
#define public_49ef91 _public_49ef91
#define public_49ef96 _public_49ef96
#define public_49efdd _public_49efdd
#define public_49efef _public_49efef
#define public_49f01a _public_49f01a
#define public_49f022 _public_49f022
#define public_49f02d _public_49f02d
#define public_49f044 _public_49f044
#define public_49f046 _public_49f046
#define public_49f04b _public_49f04b
#define public_49f0be _public_49f0be
#define public_49f0c6 _public_49f0c6

PROC_DECLARE(0x49ea50, internal_49ea50, public_49ea50);
extern "C" NAKED register_t __cdecl internal_49ea50()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x478]
        test al, al
        push edi
        jne public_49f0be
        lea eax, ss:[esp+0x40]
        push eax
        call public_492410
        test al, al
        je public_49f0be
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, esi
        call public_49e890
        test al, al
        je public_49f0be
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call public_4980d0
        test al, al
        je public_49f0be
        mov eax, dword ptr ds : [public_6720a0]
        cmp eax, 1
        je public_49eab5
        cmp eax, 2
        jne public_49eadb
        public_49eab5 : nop
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_5d3f20]
        fnstsw ax
        test ah, 0x41
        jne public_49eadb
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_5d3f1c]
        fnstsw ax
        test ah, 5
        jnp public_49f0be
        public_49eadb : nop
        mov eax, dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [public_5d3f18]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x34], ecx
        fstp dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [esi+0x8E0]
        push 0
        lea eax, ss:[esp+0x38]
        push eax
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x8E4]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x38]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x7FC]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x38]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [public_5d3f18]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x34], ecx
        fstp dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [esi+0x7F4]
        push 0
        lea eax, ss:[esp+0x38]
        push eax
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x800]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x38]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [public_5d3f18]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x3C], eax
        push 0
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, dword ptr ds : [esi+0x8E8]
        lea eax, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x3C], edx
        fstp dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [public_5d3f18]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ds : [esi+0x8EC]
        mov dword ptr ss : [esp+0x38], edx
        fstp dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x3C], eax
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x38]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x7F8]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x38]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        xor bl, bl
        push 0
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], bl
        mov byte ptr ss : [esp+0x1F], bl
        mov byte ptr ss : [esp+0x19], bl
        mov byte ptr ss : [esp+0x1B], bl
        call public_496d40
        mov edi, eax
        test edi, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_49ed29
        mov eax, dword ptr ds : [edi]
        cmp eax, 3
        jne public_49ee7e
        mov byte ptr ss : [esp+0x17], 1
        call public_4c4690
        mov ebx, eax
        or ebp, 0xFFFFFFFF
        xor edi, edi
        test ebx, ebx
        mov dword ptr ss : [esp+0x1C], 0x7FFFFFFF
        jle public_49eca2
        public_49ec81 : nop
        push edi
        call public_4c46a0
        mov eax, dword ptr ds : [eax+0x14]
        add esp, 4
        cmp eax, ebp
        jle public_49ec93
        mov ebp, eax
        public_49ec93 : nop
        cmp eax, dword ptr ss : [esp+0x1C]
        jge public_49ec9d
        mov dword ptr ss : [esp+0x1C], eax
        public_49ec9d : nop
        inc edi
        cmp edi, ebx
        jl public_49ec81
        public_49eca2 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx+0x54]
        cmp eax, ebp
        je public_49ecb3
        cmp eax, dword ptr ss : [esp+0x1C]
        jne public_49ecb8
        public_49ecb3 : nop
        mov byte ptr ss : [esp+0x14], 1
        public_49ecb8 : nop
        mov edx, dword ptr ds : [ecx+0x58]
        dec edx
        push edx
        call public_4c46a0
        add esp, 4
        test eax, eax
        je public_49ecf9
        mov edi, dword ptr ds : [eax+0x10]
        test edi, edi
        je public_49ecf9
        mov edx, dword ptr ds : [esi+0x400]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_49ecf9
        lea esp, ss:[esp]
        public_49ece0 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x48]
        test bl, bl
        je public_49ecf3
        cmp dword ptr ds : [ecx+0x70], edi
        je public_49ee69
        public_49ecf3 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_49ece0
        public_49ecf9 : nop
        mov edi, dword ptr ss : [esp+0x18]
        mov bl, byte ptr ss : [esp+0x14]
        public_49ed01 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, 3
        je public_49ed0d
        cmp eax, 4
        jne public_49ed29
        public_49ed0d : nop
        push 1
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, esi
        call public_496d40
        test eax, eax
        je public_49ed29
        cmp dword ptr ds : [eax], 0
        jne public_49ed29
        mov byte ptr ss : [esp+0x11], 1
        public_49ed29 : nop
        mov eax, dword ptr ds : [esi+0x7D0]
        test eax, eax
        jne public_49ed3f
        mov al, byte ptr ss : [esp+0x11]
        test al, al
        je public_49f0be
        public_49ed3f : nop
        mov al, byte ptr ss : [esp+0x11]
        test al, al
        mov byte ptr ss : [esp+0x15], 0
        jne public_49eda3
        fld dword ptr ds : [esi+0xF48]
        mov ecx, dword ptr ds : [esi+0x7E0]
        fdivr dword ptr ds : [public_5c75dc]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x87E]
        lea eax, ss:[esp+0x4C]
        push edx
        push 1
        push 0
        push eax
        push ecx
        fld dword ptr ss : [esp+0x54]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x58]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x68]
        call public_4a1b50
        add esp, 0x14
        test eax, eax
        je public_49eda3
        mov byte ptr ss : [esp+0x11], 1
        mov byte ptr ss : [esp+0x15], 1
        public_49eda3 : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x44]
        lea edx, ds:[esi+0x90C]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        lea ecx, ds:[esi+0x918]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ss : [esp+0x24]
        push 0
        mov dword ptr ds : [esi+0x928], ecx
        mov ecx, dword ptr ds : [esi+0xAD0]
        push 0
        mov dword ptr ds : [esi+0x924], eax
        mov byte ptr ds : [esi+0x92C], 1
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [esi+0xAD0]
        fadd dword ptr ds : [ecx+0x31C]
        push 0
        lea edx, ss:[esp+0x2C]
        push edx
        fstp dword ptr ss : [esp+0x30]
        push 6
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [ecx+0x320]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [ecx+0x324]
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xA8]
        movzx edx, byte ptr ss : [esp+0x13]
        cmp dword ptr ds : [esi+0x7D0], 2
        push 0
        push edx
        push 1
        jne public_49eef6
        mov ecx, dword ptr ds : [esi+0x8E4]
        jmp public_49eefc
        public_49ee69 : nop
        mov eax, dword ptr ds : [ecx+0x64]
        test eax, eax
        je public_49ecf9
        mov byte ptr ss : [esp+0x13], 1
        jmp public_49ecf9
        public_49ee7e : nop
        cmp eax, 4
        jne public_49eec1
        push 1
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, esi
        call public_496d40
        test eax, eax
        je public_49ed01
        mov ecx, dword ptr ds : [esi+0x7D0]
        test ecx, ecx
        je public_49ed01
        mov ecx, dword ptr ds : [eax+0x64]
        test ecx, ecx
        je public_49ed01
        mov byte ptr ss : [esp+0x11], 1
        mov byte ptr ss : [esp+0x13], 1
        jmp public_49ed01
        public_49eec1 : nop
        test eax, eax
        je public_49eece
        cmp eax, 1
        jne public_49ed01
        public_49eece : nop
        mov eax, dword ptr ds : [esi+0x7D0]
        test eax, eax
        mov byte ptr ss : [esp+0x11], 1
        je public_49ed01
        mov eax, dword ptr ds : [edi+0x64]
        test eax, eax
        je public_49ed01
        mov byte ptr ss : [esp+0x13], 1
        jmp public_49ed01
        public_49eef6 : nop
        mov ecx, dword ptr ds : [esi+0x8E0]
        public_49eefc : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xA8]
        mov byte ptr ss : [esp+0x16], 0
        call public_4c4750
        cmp eax, 0x63
        jl public_49ef18
        mov byte ptr ss : [esp+0x16], 1
        public_49ef18 : nop
        mov al, byte ptr ss : [esp+0x11]
        test al, al
        jne public_49ef24
        test bl, bl
        je public_49ef8c
        public_49ef24 : nop
        mov eax, dword ptr ds : [esi+0x7D0]
        test eax, eax
        mov byte ptr ss : [esp+0x12], 1
        je public_49ef3c
        call public_4c4810
        test al, al
        je public_49ef41
        public_49ef3c : nop
        mov byte ptr ss : [esp+0x12], 0
        public_49ef41 : nop
        mov ecx, dword ptr ds : [esi+0x7E0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ebp, eax
        call public_4c4830
        cmp ebp, eax
        je public_49ef5b
        mov byte ptr ss : [esp+0x12], 0
        public_49ef5b : nop
        mov eax, dword ptr ds : [esi+0x7D0]
        cmp eax, 1
        jne public_49f01a
        test bl, bl
        jne public_49f022
        test edi, edi
        je public_49ef91
        fld dword ptr ds : [esi+0xF48]
        fmul dword ptr ds : [edi+0x3C]
        fcomp dword ptr ds : [public_5d3f14]
        fnstsw ax
        test ah, 5
        jp public_49ef91
        public_49ef8c : nop
        mov byte ptr ss : [esp+0x12], 0
        public_49ef91 : nop
        mov eax, 1
        public_49ef96 : nop
        mov ecx, dword ptr ds : [esi+0x8EC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        mov bl, byte ptr ss : [esp+0x11]
        mov ecx, dword ptr ds : [esi+0x8E8]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        test bl, bl
        sete dl
        push 0
        push edx
        push 1
        call dword ptr ds : [eax+0xA8]
        xor bl, bl
        call public_4c4fb0
        test eax, eax
        jle public_49efdd
        call public_4c58e0
        test al, al
        je public_49efdd
        mov bl, 1
        public_49efdd : nop
        mov al, byte ptr ss : [esp+0x15]
        test al, al
        je public_49efef
        mov byte ptr ss : [esp+0x12], 0
        mov byte ptr ss : [esp+0x11], 0
        public_49efef : nop
        mov al, byte ptr ss : [esp+0x16]
        test al, al
        jne public_49f044
        mov al, byte ptr ss : [esp+0x14]
        test al, al
        jne public_49f044
        mov eax, dword ptr ds : [esi+0x7D0]
        test eax, eax
        je public_49f044
        mov al, byte ptr ss : [esp+0x17]
        test al, al
        jne public_49f044
        test bl, bl
        jne public_49f044
        jmp public_49f0c6
        public_49f01a : nop
        test bl, bl
        je public_49ef91
        public_49f022 : nop
        cmp dword ptr ds : [edi+0x54], 1
        je public_49f02d
        mov byte ptr ss : [esp+0x12], 0
        public_49f02d : nop
        test bl, bl
        je public_49ef91
        test eax, eax
        je public_49ef91
        xor eax, eax
        jmp public_49ef96
        public_49f044 : nop
        mov bl, 1
        public_49f046 : nop
        mov eax, 1
        public_49f04b : nop
        mov ecx, dword ptr ds : [esi+0x7F4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x7F8]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test bl, bl
        setne al
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        mov bl, byte ptr ss : [esp+0x13]
        mov ecx, dword ptr ds : [esi+0x7FC]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        test bl, bl
        sete dl
        push 0
        push edx
        push 1
        call dword ptr ds : [eax+0xA8]
        mov bl, byte ptr ss : [esp+0x12]
        mov ecx, dword ptr ds : [esi+0x800]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        test bl, bl
        sete dl
        push 0
        push edx
        push 1
        call dword ptr ds : [eax+0xA8]
        push 9
        call public_5645c0
        add esp, 4
        public_49f0be : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 
        public_49f0c6 : nop
        mov al, byte ptr ss : [esp+0x11]
        test al, al
        jne public_49f046
        xor eax, eax
        jmp public_49f04b
        UNREACHABLE_TRAP(0x49ea50)
    }
}

#undef public_49eab5
#undef public_49eadb
#undef public_49ec81
#undef public_49ec93
#undef public_49ec9d
#undef public_49eca2
#undef public_49ecb3
#undef public_49ecb8
#undef public_49ece0
#undef public_49ecf3
#undef public_49ecf9
#undef public_49ed01
#undef public_49ed0d
#undef public_49ed29
#undef public_49ed3f
#undef public_49eda3
#undef public_49ee69
#undef public_49ee7e
#undef public_49eec1
#undef public_49eece
#undef public_49eef6
#undef public_49eefc
#undef public_49ef18
#undef public_49ef24
#undef public_49ef3c
#undef public_49ef41
#undef public_49ef5b
#undef public_49ef8c
#undef public_49ef91
#undef public_49ef96
#undef public_49efdd
#undef public_49efef
#undef public_49f01a
#undef public_49f022
#undef public_49f02d
#undef public_49f044
#undef public_49f046
#undef public_49f04b
#undef public_49f0be
#undef public_49f0c6
