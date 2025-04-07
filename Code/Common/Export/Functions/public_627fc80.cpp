#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_626c600);
CLANG_FORWARD_PROC_SYMBOL(public_6279fb0);
CLANG_FORWARD_PROC_SYMBOL(public_627fc80);
CLANG_FORWARD_PROC_SYMBOL(public_6280560);
CLANG_FORWARD_PROC_SYMBOL(public_628e0b0);
CLANG_FORWARD_PROC_SYMBOL(public_62bed70);
CLANG_FORWARD_PROC_SYMBOL(public_6315b10);
CLANG_FORWARD_PROC_SYMBOL(public_6343fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6343ff0);
CLANG_FORWARD_JUMP_SYMBOL(public_6392e11);

#define public_627fda5 _public_627fda5
#define public_627fdc9 _public_627fdc9
#define public_627fe30 _public_627fe30
#define public_627feea _public_627feea
#define public_627ff1a _public_627ff1a
#define public_627ff7e _public_627ff7e
#define public_627ffa0 _public_627ffa0
#define public_627ffc6 _public_627ffc6
#define public_628003c _public_628003c
#define public_6280082 _public_6280082
#define public_628009d _public_628009d
#define public_62800e0 _public_62800e0
#define public_6280110 _public_6280110
#define public_628011b _public_628011b
#define public_628011d _public_628011d
#define public_6280145 _public_6280145
#define public_6280150 _public_6280150
#define public_6280152 _public_6280152
#define public_6280162 _public_6280162
#define public_6280171 _public_6280171
#define public_6280187 _public_6280187
#define public_628018d _public_628018d
#define public_62801a7 _public_62801a7
#define public_62801ed _public_62801ed
#define public_62801f1 _public_62801f1
#define public_62801f6 _public_62801f6
#define public_628020b _public_628020b
#define public_628020d _public_628020d
#define public_6280226 _public_6280226
#define public_628023b _public_628023b

PROC_DECLARE(0x627fc80, internal_627fc80, public_627fc80);
extern "C" NAKED register_t __cdecl internal_627fc80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392e11 @0x627fc82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392e11
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xF0
        push ebx
        push ebp
        push esi
        xor ebp, ebp
        push edi
        xor bl, bl
        mov dword ptr ss : [esp+0x10], ebp
        xor eax, eax
        mov dword ptr ss : [esp+0x6C], offset public_639b84c
        mov ecx, 0xB
        lea edi, ss:[esp+0x70]
        rep stosd
        mov edi, dword ptr ss : [esp+0x110]
        mov eax, dword ptr ds : [public_639905c]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x7C], 0x80000000
        mov dword ptr ss : [esp+0x80], 1
        mov dword ptr ss : [esp+0x88], 3
        mov dword ptr ss : [esp+0x8C], 0x8000080
        mov dword ptr ss : [esp+0x78], edi
        mov dword ptr ss : [esp+0x6C], 0x34
        or esi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x9C], esi
        mov dword ptr ss : [esp+0x74], offset public_639b558
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x6C]
        push edx
        push eax
        mov dword ptr ss : [esp+0x114], ebp
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_62801f6
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        lea edx, ss:[esp+0x18]
        push edx
        mov ebx, 4
        push ebx
        lea edx, ss:[esp+0x50]
        push edx
        push ebp
        mov dword ptr ss : [esp+0x54], 0x3F800000
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        cmp eax, ebp
        je public_6280226
        cmp dword ptr ss : [esp+0x14], ebx
        jne public_6280226
        mov esi, dword ptr ds : [public_639902c]
        lea eax, ss:[esp+0x44]
/*FIXUP push offset public_639b844 @0x627fd70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b844
        push eax
        mov byte ptr ss : [esp+0x50], 0
        call esi
        add esp, 8
        test eax, eax
        jne public_627fdc9
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push ebp
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        lea edx, ss:[esp+0x4C]
        push edx
        push ebp
        push eax
        call dword ptr ds : [ecx+0x14]
        cmp eax, ebp
        je public_627fda5
        cmp dword ptr ss : [esp+0x14], ebx
        je public_627fdc9
        public_627fda5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x108], 0xFFFFFFFF
        je public_62801ed
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        xor al, al
        jmp public_628020d
        public_627fdc9 : nop
        fld dword ptr ss : [esp+0x40]
        fcomp dword ptr ds : [public_639b6f4]
        fnstsw ax
        test ah, 0x44
        jnp public_627fe30
        fld dword ptr ds : [public_639b6f4]
        mov edx, dword ptr ds : [public_6399028]
        sub esp, 8
        fstp qword ptr ss : [esp]
        push edi
        push 0xB1
/*FIXUP push offset public_639b81c @0x627fdf2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b81c
        mov eax, 0x100002
/*FIXUP push offset public_639b7c0 @0x627fdfc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b7c0
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0x1C
        cmp eax, ebp
        mov dword ptr ss : [esp+0x108], 0xFFFFFFFF
        je public_62801ed
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        xor al, al
        jmp public_628020d
        nop 
        lea esp, ss:[esp]
        public_627fe30 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ebp
        lea ecx, ss:[esp+0x18]
        push ecx
        push 4
        lea ecx, ss:[esp+0x3C]
        push ecx
        push ebp
        push eax
        call dword ptr ds : [edx+0x14]
        cmp eax, ebp
        je public_62801f1
        cmp dword ptr ss : [esp+0x14], 4
        jne public_62801f1
        lea edx, ss:[esp+0x2F]
        push edx
        lea ecx, ss:[esp+0xC0]
        mov byte ptr ss : [esp+0xA0], 1
        mov dword ptr ss : [esp+0xA4], ebp
        call public_6315b10
        mov eax, dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x9C]
        push ecx
        lea ecx, ss:[esp+0xD4]
        mov byte ptr ss : [esp+0x10C], 1
        mov dword ptr ss : [esp+0xD0], eax
        call public_626c600
        mov ecx, dword ptr ss : [esp+0x114]
        lea edx, ss:[esp+0xCC]
        push edx
        lea eax, ss:[esp+0x5C]
        push eax
        mov byte ptr ss : [esp+0x110], 2
        call public_6280560
        lea ecx, ss:[esp+0xD0]
        mov dword ptr ss : [esp+0x28], ecx
        mov eax, dword ptr ss : [esp+0xD4]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x108], 3
        je public_627feea
        push eax
        call public_6343ff0
        add esp, 4
        public_627feea : nop
        lea ecx, ss:[esp+0xF0]
        mov byte ptr ss : [esp+0x108], 1
        call public_6269110
        mov eax, dword ptr ss : [esp+0xA0]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x108], 4
        je public_627ff1a
        push eax
        call public_6343ff0
        add esp, 4
        public_627ff1a : nop
        lea ecx, ss:[esp+0xBC]
        mov byte ptr ss : [esp+0x108], 0
        call public_6269110
        mov al, byte ptr ss : [esp+0x5C]
        test al, al
        mov ebx, dword ptr ss : [esp+0x58]
        jne public_627ffa0
        mov edx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x110]
        push edx
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push 0xC6
/*FIXUP push offset public_639b81c @0x627ff52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b81c
        mov eax, 0x100001
/*FIXUP push offset public_639b770 @0x627ff5c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b770
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [ebx+0x14]
        add esp, 0x18
        cmp eax, ebp
        mov byte ptr ds : [ebx+0x10], 1
        je public_627ff7e
        push eax
        call public_6343ff0
        add esp, 4
        mov dword ptr ds : [ebx+0x14], ebp
        public_627ff7e : nop
        mov dword ptr ds : [ebx+0x20], ebp
        mov dword ptr ds : [ebx+0x1C], ebp
        mov dword ptr ds : [ebx+0x18], ebp
        lea ecx, ds:[ebx+0x30]
        mov dword ptr ds : [ebx+0x2C], ebp
        mov dword ptr ds : [ebx+0x28], ebp
        mov dword ptr ds : [ebx+0x24], ebp
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+4]
        push eax
        push edx
        call public_6279fb0
        public_627ffa0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push ebp
        lea edx, ss:[esp+0x18]
        push edx
        push 4
        lea edx, ss:[esp+0x44]
        push edx
        push ebp
        push eax
        call dword ptr ds : [ecx+0x14]
        cmp dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x28], ebp
        jle public_627fe30
        public_627ffc6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push ebp
        lea edx, ss:[esp+0x18]
        push edx
        push 4
        lea edx, ss:[esp+0x2C]
        push edx
        push ebp
        push eax
        call dword ptr ds : [ecx+0x14]
        lea eax, ss:[esp+0x20]
/*FIXUP push offset public_639b764 @0x627ffe2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b764
        push eax
        mov byte ptr ss : [esp+0x2C], 0
        call esi
        add esp, 8
        test eax, eax
        jne public_628003c
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push ebp
        lea edx, ss:[esp+0x54]
        push edx
        push 4
        lea edx, ss:[esp+0x40]
        push edx
        push ebp
        push eax
        mov esi, eax
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ss : [esp+0x34]
        push 0x10
        push eax
        call public_6343fc0
        mov ecx, dword ptr ds : [esi]
        add esp, 8
        push ebp
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x38]
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        push edi
        push ebp
        push esi
        call dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ebx+0x14], edi
        jmp public_6280187
        public_628003c : nop
        lea ecx, ss:[esp+0x20]
/*FIXUP push offset public_639b75c @0x6280040*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b75c
        push ecx
        call esi
        add esp, 8
        test eax, eax
        jne public_6280082
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ebp
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0xC
        lea ecx, ds:[ebx+0x18]
        push ecx
        push ebp
        push eax
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ebp
        lea ecx, ss:[esp+0x18]
        push ecx
        push 0xC
        lea ecx, ds:[ebx+0x24]
        push ecx
        push ebp
        push eax
        call dword ptr ds : [edx+0x14]
        jmp public_628018d
        public_6280082 : nop
        lea edx, ss:[esp+0x20]
/*FIXUP push offset public_639b754 @0x6280086*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b754
        push edx
        call esi
        add esp, 8
        test eax, eax
        jne public_628009d
        mov byte ptr ds : [ebx+0x10], al
        jmp public_628018d
        public_628009d : nop
        lea eax, ss:[esp+0x20]
/*FIXUP push offset public_639b74c @0x62800a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b74c
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_62801a7
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push ebp
        lea edx, ss:[esp+0x18]
        push edx
        push 4
        lea edx, ss:[esp+0x48]
        push edx
        push ebp
        push eax
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ss : [esp+0x3C]
        xor edi, edi
        cmp eax, ebp
        jle public_628018d
        lea esi, ds:[ebx+0x30]
        lea ecx, ds:[ecx]
        public_62800e0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        lea edx, ss:[esp+0x18]
        push edx
        push 4
        lea edx, ss:[esp+0x28]
        push edx
        push ebp
        mov dword ptr ss : [esp+0x30], ebp
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_628011b
        mov edx, dword ptr ss : [esp+0x1C]
        lea ebx, ds:[ebx]
        public_6280110 : nop
        cmp dword ptr ds : [eax], edx
        je public_628011d
        add eax, 4
        cmp eax, ecx
        jne public_6280110
        public_628011b : nop
        mov eax, ecx
        public_628011d : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x4C], eax
        jne public_6280162
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        mov ecx, esi
        call public_628e0b0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x1B], 1
        je public_6280150
        mov edx, dword ptr ss : [esp+0x1C]
        public_6280145 : nop
        cmp dword ptr ds : [eax], edx
        je public_6280152
        add eax, 4
        cmp eax, ecx
        jne public_6280145
        public_6280150 : nop
        mov eax, ecx
        public_6280152 : nop
        lea ecx, ss:[esp+0x1B]
        push ecx
        lea edx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x58], eax
        push edx
        jmp public_6280171
        public_6280162 : nop
        lea eax, ss:[esp+0x1A]
        push eax
        lea ecx, ss:[esp+0x50]
        mov byte ptr ss : [esp+0x1E], 0
        push ecx
        public_6280171 : nop
        lea ecx, ss:[esp+0x68]
        call public_62bed70
        mov eax, dword ptr ss : [esp+0x3C]
        inc edi
        cmp edi, eax
        jl public_62800e0
        public_6280187 : nop
        mov esi, dword ptr ds : [public_639902c]
        public_628018d : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x38]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x28], eax
        jl public_627ffc6
        jmp public_627fe30
        public_62801a7 : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x110]
        push edx
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push 0xFE
/*FIXUP push offset public_639b81c @0x62801bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b81c
        mov eax, 0x100001
/*FIXUP push offset public_639b6f8 @0x62801c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b6f8
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x18
        cmp eax, ebp
        mov dword ptr ss : [esp+0x108], 0xFFFFFFFF
        je public_62801ed
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_62801ed : nop
        xor al, al
        jmp public_628020d
        public_62801f1 : nop
        mov bl, 1
        or esi, 0xFFFFFFFF
        public_62801f6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x108], esi
        je public_628020b
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_628020b : nop
        mov al, bl
        public_628020d : nop
        mov ecx, dword ptr ss : [esp+0x100]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xFC
        ret 
        public_6280226 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x108], esi
        je public_628023b
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_628023b : nop
        xor al, al
        jmp public_628020d
        UNREACHABLE_TRAP(0x627fc80)
    }
}

#undef public_627fda5
#undef public_627fdc9
#undef public_627fe30
#undef public_627feea
#undef public_627ff1a
#undef public_627ff7e
#undef public_627ffa0
#undef public_627ffc6
#undef public_628003c
#undef public_6280082
#undef public_628009d
#undef public_62800e0
#undef public_6280110
#undef public_628011b
#undef public_628011d
#undef public_6280145
#undef public_6280150
#undef public_6280152
#undef public_6280162
#undef public_6280171
#undef public_6280187
#undef public_628018d
#undef public_62801a7
#undef public_62801ed
#undef public_62801f1
#undef public_62801f6
#undef public_628020b
#undef public_628020d
#undef public_6280226
#undef public_628023b
