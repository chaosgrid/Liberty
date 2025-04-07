#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_42abc0);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_437de0);
CLANG_FORWARD_PROC_SYMBOL(public_4397a0);
CLANG_FORWARD_PROC_SYMBOL(public_43bc60);
CLANG_FORWARD_PROC_SYMBOL(public_43c0d0);
CLANG_FORWARD_PROC_SYMBOL(public_43c310);
CLANG_FORWARD_PROC_SYMBOL(public_43ce90);
CLANG_FORWARD_PROC_SYMBOL(public_4b9b30);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4e00);
CLANG_FORWARD_PROC_SYMBOL(public_5a89b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b2c50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9347);

#define public_4397f2 _public_4397f2
#define public_439825 _public_439825
#define public_439871 _public_439871
#define public_439873 _public_439873
#define public_439898 _public_439898
#define public_4398a4 _public_4398a4
#define public_4398df _public_4398df
#define public_439925 _public_439925
#define public_439973 _public_439973
#define public_439978 _public_439978
#define public_43998c _public_43998c
#define public_439998 _public_439998
#define public_4399c0 _public_4399c0
#define public_439a18 _public_439a18
#define public_439a45 _public_439a45
#define public_439a50 _public_439a50
#define public_439a5e _public_439a5e
#define public_439a68 _public_439a68
#define public_439ab2 _public_439ab2
#define public_439ad3 _public_439ad3
#define public_439ad8 _public_439ad8
#define public_439ada _public_439ada
#define public_439b11 _public_439b11
#define public_439b16 _public_439b16
#define public_439b31 _public_439b31

PROC_DECLARE(0x4397a0, internal_4397a0, public_4397a0);
extern "C" NAKED register_t __cdecl internal_4397a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9347 @0x4397a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9347
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x134
        mov eax, dword ptr ss : [esp+0x144]
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ds:[ebx+0x20]
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x28], eax
        call public_432240
        mov eax, dword ptr ds : [ebx+0x24]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_4397f2
        mov esi, dword ptr ds : [ecx+0x10]
        jmp public_439825
        public_4397f2 : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x2C]
        call public_411c50
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x100
/*FIXUP push offset public_5caf30 @0x439813*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
/*FIXUP push offset public_5caf78 @0x439818*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push edx
        call dword ptr ds : [eax]
        add esp, 0x14
        xor esi, esi
        public_439825 : nop
        mov ecx, dword ptr ds : [esi]
        push 0x4C
        mov dword ptr ss : [esp+0x28], ecx
        call public_5b7e84
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], edi
        xor ebp, ebp
        cmp edi, ebp
        mov dword ptr ss : [esp+0x14C], ebp
        je public_439871
        mov ecx, edi
        call public_43c0d0
        lea ecx, ds:[edi+0x18]
        mov byte ptr ss : [esp+0x14C], 1
        call public_43c310
        lea ecx, ds:[edi+0x30]
        mov byte ptr ss : [esp+0x14C], 2
        call public_42abc0
        jmp public_439873
        public_439871 : nop
        xor edi, edi
        public_439873 : nop
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [edi+0x44], eax
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+0x48], ebp
        mov dword ptr ss : [esp+0x14C], eax
        mov eax, dword ptr ds : [esi+0x10]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_4398a4
        mov ebp, dword ptr ds : [public_5c6164]
        public_439898 : nop
        mov ecx, dword ptr ds : [edi+8]
        call ebp
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x10]
        jne public_439898
        public_4398a4 : nop
        mov al, byte ptr ds : [ebx+0x5A]
        test al, al
        jne public_439b16
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [public_67ecd0]
        test ecx, ecx
        je public_4398df
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push 1
        push eax
        mov eax, dword ptr ss : [esp+0x15C]
        push eax
        call dword ptr ds : [edx+0x9C]
        public_4398df : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x42700000
        add edi, 0x14
        push 0x40A00000
        push edi
        call public_5a89b0
        add esp, 0xC
        cmp eax, 1
        je public_439925
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cb008 @0x439903*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb008
        push 0x108
/*FIXUP push offset public_5cafd8 @0x43990d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cafd8
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x439917*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov byte ptr ds : [edi], 0
        public_439925 : nop
        cmp byte ptr ds : [edi], 0
        je public_439978
        mov eax, dword ptr ds : [esi+4]
        add eax, 0x18
        push 0x42700000
        lea edi, ds:[eax+0x14]
        push 0x40A00000
        push edi
        call public_5a89b0
        add esp, 0xC
        cmp eax, 1
        je public_439973
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cb008 @0x439951*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb008
        push 0x108
/*FIXUP push offset public_5cafd8 @0x43995b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cafd8
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x439965*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        mov byte ptr ds : [edi], 0
        public_439973 : nop
        cmp byte ptr ds : [edi], 0
        jne public_439998
        public_439978 : nop
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_43998c
        call public_5b2c50
        jmp public_439b16
        public_43998c : nop
        mov byte ptr ds : [public_67ecbe], 1
        jmp public_439b16
        public_439998 : nop
        mov edi, dword ptr ds : [esi+4]
        push 1
        lea eax, ss:[esp+0x14]
        add edi, 0x18
        xor ebp, ebp
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], ebp
        call public_43ce90
        test al, al
        je public_439a5e
        lea ebx, ds:[ebx]
        public_4399c0 : nop
        push 1
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        inc ebp
        call public_43ce90
        test al, al
        jne public_4399c0
        xor ebx, ebx
        cmp ebp, ebx
        jle public_439a5e
        call dword ptr ds : [public_5c71dc]
        imul eax, ebp
        mov edi, dword ptr ds : [esi+4]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        push 1
        lea edx, ss:[esp+0x14]
        mov ebp, eax
        add edi, 0x18
        push edx
        mov ecx, edi
        sar ebp, 0xF
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x18], ebx
        call public_43ce90
        test al, al
        je public_439a50
        public_439a18 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebp
        je public_439a45
        inc eax
        mov dword ptr ss : [esp+0x1C], eax
        push 1
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_43ce90
        test al, al
        jne public_439a18
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x44], edx
        jmp public_439a68
        public_439a45 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], edx
        public_439a50 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x44], edx
        jmp public_439a68
        public_439a5e : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+0x44], 0xFFFFFFFF
        public_439a68 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [ecx+8]
        push 0
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp]
        add ecx, 0x30
        call public_437de0
        mov eax, dword ptr ds : [public_67ecd0]
        test eax, eax
        je public_439ad8
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        add esp, 4
        lea ecx, ss:[esp+0x2C]
        mov esi, eax
        call public_43bc60
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        mov ebp, eax
        xor edi, edi
        test ebp, ebp
        jbe public_439ad8
        public_439ab2 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x40]
        test al, al
        je public_439ad3
        mov edx, dword ptr ss : [esp+0xB4]
        cmp edx, dword ptr ss : [esp+0x154]
        je public_439b31
        public_439ad3 : nop
        inc edi
        cmp edi, ebp
        jb public_439ab2
        public_439ad8 : nop
        xor eax, eax
        public_439ada : nop
        test eax, eax
        mov esi, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+0x54], eax
        je public_439b11
        push 0
        push 0
        lea ecx, ss:[esp+0x20]
        push ecx
        push eax
        mov byte ptr ss : [esp+0x28], 0
        call public_4c4da0
        or byte ptr ss : [esp+0x28], 0x1E
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+0x54]
        push 1
        push edx
        push eax
        call public_4c4e00
        add esp, 0x1C
        public_439b11 : nop
        call public_4b9b30
        public_439b16 : nop
        mov ecx, dword ptr ss : [esp+0x144]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x140
        ret 4
        public_439b31 : nop
        lea eax, ss:[esp+0x30]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        jmp public_439ada
        UNREACHABLE_TRAP(0x4397a0)
    }
}

#undef public_4397f2
#undef public_439825
#undef public_439871
#undef public_439873
#undef public_439898
#undef public_4398a4
#undef public_4398df
#undef public_439925
#undef public_439973
#undef public_439978
#undef public_43998c
#undef public_439998
#undef public_4399c0
#undef public_439a18
#undef public_439a45
#undef public_439a50
#undef public_439a5e
#undef public_439a68
#undef public_439ab2
#undef public_439ad3
#undef public_439ad8
#undef public_439ada
#undef public_439b11
#undef public_439b16
#undef public_439b31
