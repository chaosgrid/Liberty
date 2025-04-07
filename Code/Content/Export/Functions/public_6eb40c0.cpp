#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb40c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);

#define public_6eb40e0 _public_6eb40e0
#define public_6eb4118 _public_6eb4118
#define public_6eb4123 _public_6eb4123
#define public_6eb4125 _public_6eb4125
#define public_6eb4154 _public_6eb4154
#define public_6eb4171 _public_6eb4171
#define public_6eb4195 _public_6eb4195
#define public_6eb41ae _public_6eb41ae
#define public_6eb41be _public_6eb41be
#define public_6eb41c5 _public_6eb41c5
#define public_6eb41e1 _public_6eb41e1
#define public_6eb41fa _public_6eb41fa
#define public_6eb4214 _public_6eb4214
#define public_6eb4225 _public_6eb4225
#define public_6eb4239 _public_6eb4239
#define public_6eb424f _public_6eb424f
#define public_6eb428b _public_6eb428b
#define public_6eb42aa _public_6eb42aa
#define public_6eb42c9 _public_6eb42c9
#define public_6eb42e8 _public_6eb42e8
#define public_6eb4307 _public_6eb4307
#define public_6eb432a _public_6eb432a
#define public_6eb433a _public_6eb433a
#define public_6eb4358 _public_6eb4358
#define public_6eb436a _public_6eb436a
#define public_6eb43a0 _public_6eb43a0
#define public_6eb43c2 _public_6eb43c2
#define public_6eb43d0 _public_6eb43d0
#define public_6eb43f4 _public_6eb43f4
#define public_6eb4416 _public_6eb4416
#define public_6eb4419 _public_6eb4419
#define public_6eb442c _public_6eb442c

PROC_DECLARE(0x6eb40c0, internal_6eb40c0, public_6eb40c0);
extern "C" NAKED register_t __cdecl internal_6eb40c0()
{
    __asm
    {
        sub esp, 0x14
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6eb442c
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        push edi
        nop 
        public_6eb40e0 : nop
        mov edi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb45f8 @0x6eb40e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb45f8
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6eb4171
        call dword ptr ds : [public_6fb3054]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [public_6fb36a8]
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 8
        cmp eax, ecx
        je public_6eb4123
        mov edx, dword ptr ss : [esp+0x10]
        public_6eb4118 : nop
        cmp dword ptr ds : [eax], edx
        je public_6eb4125
        add eax, 4
        cmp eax, ecx
        jne public_6eb4118
        public_6eb4123 : nop
        mov eax, ecx
        public_6eb4125 : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_6eb4154
        lea edx, ss:[esp+0x10]
        push edx
        push ecx
        mov ecx, ebp
        call public_6eb5770
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebp
        call public_6eb5f30
        mov dword ptr ss : [esp+0x1C], eax
        mov byte ptr ss : [esp+0x20], 1
        jmp public_6eb4419
        public_6eb4154 : nop
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x30], 0
        call public_6fa6e80
        jmp public_6eb4419
/*FIXUP public_6eb4171 : nop
        push offset public_6fb45f0 @0x6eb4171*/
  FIXUP public_6eb4171 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb45f0
        call edi
        test al, al
        mov ecx, esi
        je public_6eb4225
        push 0
        call dword ptr ds : [public_6fb3048]
        mov dword ptr ss : [esp+0x28], eax
        mov edi, offset public_6fce5d0
        xor ebx, ebx
        public_6eb4195 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6eb41ae
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6eb41be
        public_6eb41ae : nop
        add ebx, 8
        add edi, 8
        cmp ebx, 0x158
        jb public_6eb4195
        jmp public_6eb41c5
        public_6eb41be : nop
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x14], ecx
        public_6eb41c5 : nop
        mov edx, dword ptr ss : [esp+0x14]
        push 1
        mov ecx, esi
        mov dword ptr ss : [ebp+0x10], edx
        call dword ptr ds : [public_6fb3048]
        mov dword ptr ss : [esp+0x28], eax
        mov edi, offset public_6fce5d0
        xor ebx, ebx
        public_6eb41e1 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6eb41fa
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6eb4214
        public_6eb41fa : nop
        add ebx, 8
        add edi, 8
        cmp ebx, 0x158
        jb public_6eb41e1
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+0x14], edx
        jmp public_6eb4419
        public_6eb4214 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, ecx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [ebp+0x14], edx
        jmp public_6eb4419
/*FIXUP public_6eb4225 : nop
        push offset public_6fb45e4 @0x6eb4225*/
  FIXUP public_6eb4225 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb45e4
        call edi
        test al, al
        je public_6eb4239
        mov byte ptr ss : [ebp+0x24], 1
        jmp public_6eb4419
/*FIXUP public_6eb4239 : nop
        push offset public_6fb45d8 @0x6eb4239*/
  FIXUP public_6eb4239 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb45d8
        mov ecx, esi
        call edi
        test al, al
        je public_6eb424f
        mov byte ptr ss : [ebp+0x25], 1
        jmp public_6eb4419
/*FIXUP public_6eb424f : nop
        push offset public_6fb45d0 @0x6eb424f*/
  FIXUP public_6eb424f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb45d0
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6eb432a
        mov edi, dword ptr ds : [public_6fb3054]
/*FIXUP push offset public_6fb45c4 @0x6eb4268*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb45c4
        call edi
        mov ebx, dword ptr ds : [public_6fb3294]
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6eb428b
        mov dword ptr ss : [ebp+0x28], 1
        jmp public_6eb4419
/*FIXUP public_6eb428b : nop
        push offset public_6fb45bc @0x6eb428b*/
  FIXUP public_6eb428b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb45bc
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6eb42aa
        mov dword ptr ss : [ebp+0x28], 2
        jmp public_6eb4419
/*FIXUP public_6eb42aa : nop
        push offset public_6fb45b4 @0x6eb42aa*/
  FIXUP public_6eb42aa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb45b4
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6eb42c9
        mov dword ptr ss : [ebp+0x28], 3
        jmp public_6eb4419
/*FIXUP public_6eb42c9 : nop
        push offset public_6fb45ac @0x6eb42c9*/
  FIXUP public_6eb42c9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb45ac
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6eb42e8
        mov dword ptr ss : [ebp+0x28], 4
        jmp public_6eb4419
/*FIXUP public_6eb42e8 : nop
        push offset public_6fb44fc @0x6eb42e8*/
  FIXUP public_6eb42e8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44fc
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6eb4307
        mov dword ptr ss : [ebp+0x28], 5
        jmp public_6eb4419
/*FIXUP public_6eb4307 : nop
        push offset public_6fb45a0 @0x6eb4307*/
  FIXUP public_6eb4307 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb45a0
        mov ecx, esi
        call edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_6eb4419
        mov dword ptr ss : [ebp+0x28], 6
        jmp public_6eb4419
/*FIXUP public_6eb432a : nop
        push offset public_6fb4594 @0x6eb432a*/
  FIXUP public_6eb432a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4594
        call edi
        test al, al
        mov ecx, esi
        je public_6eb4358
        lea edi, ss:[ebp+0x2C]
        public_6eb433a : nop
        push 0
        call dword ptr ds : [public_6fb3020]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6fb303c]
        mov ecx, edi
        call dword ptr ds : [public_6fb3038]
        jmp public_6eb4419
/*FIXUP public_6eb4358 : nop
        push offset public_6fb4588 @0x6eb4358*/
  FIXUP public_6eb4358 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4588
        call edi
        test al, al
        mov ecx, esi
        je public_6eb436a
        lea edi, ss:[ebp+0x44]
        jmp public_6eb433a
/*FIXUP public_6eb436a : nop
        push offset public_6fb4580 @0x6eb436a*/
  FIXUP public_6eb436a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4580
        call edi
        test al, al
        mov ecx, esi
        je public_6eb43d0
        push 0
        add ebp, 0x5C
        call dword ptr ds : [public_6fb3020]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_6fb303c]
        mov edi, 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6eb43c2
        lea ecx, ds:[ecx]
        public_6eb43a0 : nop
        mov eax, edi
        push eax
        mov ecx, esi
        inc edi
        call dword ptr ds : [public_6fb3020]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_6fb307c]
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6eb43a0
        public_6eb43c2 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3038]
        mov ebp, dword ptr ss : [esp+0x2C]
        jmp public_6eb4419
/*FIXUP public_6eb43d0 : nop
        push offset public_6fb4578 @0x6eb43d0*/
  FIXUP public_6eb43d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4578
        call edi
        test al, al
        mov ecx, esi
        je public_6eb43f4
        call dword ptr ds : [public_6fb3054]
        push 0
        push eax
        call dword ptr ds : [public_6fb3078]
        mov dword ptr ss : [ebp+0x1C], eax
        mov dword ptr ss : [ebp+0x74], eax
        jmp public_6eb4416
/*FIXUP public_6eb43f4 : nop
        push offset public_6fb4570 @0x6eb43f4*/
  FIXUP public_6eb43f4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4570
        call edi
        test al, al
        je public_6eb4419
        mov ecx, esi
        call dword ptr ds : [public_6fb3054]
        push 0
        push eax
        call dword ptr ds : [public_6fb3078]
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x78], eax
        public_6eb4416 : nop
        add esp, 8
        public_6eb4419 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6eb40e0
        pop edi
        pop ebp
        pop ebx
        public_6eb442c : nop
        pop esi
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6eb40c0)
    }
}

#undef public_6eb40e0
#undef public_6eb4118
#undef public_6eb4123
#undef public_6eb4125
#undef public_6eb4154
#undef public_6eb4171
#undef public_6eb4195
#undef public_6eb41ae
#undef public_6eb41be
#undef public_6eb41c5
#undef public_6eb41e1
#undef public_6eb41fa
#undef public_6eb4214
#undef public_6eb4225
#undef public_6eb4239
#undef public_6eb424f
#undef public_6eb428b
#undef public_6eb42aa
#undef public_6eb42c9
#undef public_6eb42e8
#undef public_6eb4307
#undef public_6eb432a
#undef public_6eb433a
#undef public_6eb4358
#undef public_6eb436a
#undef public_6eb43a0
#undef public_6eb43c2
#undef public_6eb43d0
#undef public_6eb43f4
#undef public_6eb4416
#undef public_6eb4419
#undef public_6eb442c
