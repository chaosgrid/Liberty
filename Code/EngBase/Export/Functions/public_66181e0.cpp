#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66181e0);
CLANG_FORWARD_PROC_SYMBOL(public_66186e0);
CLANG_FORWARD_PROC_SYMBOL(public_6618740);
CLANG_FORWARD_PROC_SYMBOL(public_6618ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6619c20);
CLANG_FORWARD_PROC_SYMBOL(public_6619c30);
CLANG_FORWARD_PROC_SYMBOL(public_6619d80);
CLANG_FORWARD_PROC_SYMBOL(public_661a0b0);
CLANG_FORWARD_PROC_SYMBOL(public_661a130);
CLANG_FORWARD_PROC_SYMBOL(public_661a190);
CLANG_FORWARD_PROC_SYMBOL(public_6627050);
CLANG_FORWARD_PROC_SYMBOL(public_66276c0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6618206 _public_6618206
#define public_6618224 _public_6618224
#define public_661822f _public_661822f
#define public_6618238 _public_6618238
#define public_6618243 _public_6618243
#define public_6618261 _public_6618261
#define public_6618278 _public_6618278
#define public_6618285 _public_6618285
#define public_6618290 _public_6618290
#define public_6618293 _public_6618293
#define public_66182ab _public_66182ab
#define public_66182b6 _public_66182b6
#define public_66182b9 _public_66182b9
#define public_66182d0 _public_66182d0
#define public_66182db _public_66182db
#define public_66182e6 _public_66182e6
#define public_66182e9 _public_66182e9
#define public_66182ff _public_66182ff
#define public_661830b _public_661830b
#define public_6618317 _public_6618317
#define public_661831a _public_661831a
#define public_6618335 _public_6618335
#define public_6618374 _public_6618374
#define public_6618387 _public_6618387
#define public_6618392 _public_6618392
#define public_6618395 _public_6618395
#define public_66183a0 _public_66183a0
#define public_66183b3 _public_66183b3
#define public_66183da _public_66183da
#define public_66183f4 _public_66183f4
#define public_661841a _public_661841a
#define public_661842d _public_661842d
#define public_661843a _public_661843a
#define public_661843c _public_661843c
#define public_6618447 _public_6618447
#define public_661845e _public_661845e
#define public_6618476 _public_6618476
#define public_6618483 _public_6618483
#define public_6618485 _public_6618485
#define public_6618491 _public_6618491
#define public_66184bb _public_66184bb
#define public_66184d3 _public_66184d3
#define public_66184e3 _public_66184e3
#define public_66184ed _public_66184ed
#define public_6618510 _public_6618510
#define public_6618523 _public_6618523
#define public_661852e _public_661852e
#define public_6618531 _public_6618531
#define public_661853b _public_661853b
#define public_6618564 _public_6618564
#define public_6618577 _public_6618577
#define public_6618584 _public_6618584
#define public_6618586 _public_6618586
#define public_6618589 _public_6618589
#define public_661858c _public_661858c
#define public_661858f _public_661858f
#define public_6618651 _public_6618651
#define public_6618663 _public_6618663
#define public_6618693 _public_6618693

PROC_DECLARE(0x66181e0, internal_66181e0, public_66181e0);
extern "C" NAKED register_t __cdecl internal_66181e0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x30]
        call public_661a190
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6618224
        mov eax, dword ptr ds : [esi+8]
        public_6618206 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_66182ab
        mov dword ptr ds : [ecx+4], eax
        jmp public_66182b9
        public_6618224 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_661822f
        mov eax, edx
        jmp public_6618206
        public_661822f : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6618243
        public_6618238 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6618238
        public_6618243 : nop
        mov eax, dword ptr ds : [ecx+8]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6618206
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+8]
        cmp ecx, edx
        jne public_6618261
        mov dword ptr ds : [eax+4], ecx
        jmp public_6618278
        public_6618261 : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6618278 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6618285
        mov dword ptr ds : [edx+4], ecx
        jmp public_6618293
        public_6618285 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6618290
        mov dword ptr ds : [edx], ecx
        jmp public_6618293
        public_6618290 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6618293 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x24]
        mov dl, byte ptr ds : [ecx+0x24]
        mov byte ptr ds : [ecx+0x24], bl
        mov byte ptr ds : [esi+0x24], dl
        jmp public_661831a
        public_66182ab : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_66182b6
        mov dword ptr ds : [ecx], eax
        jmp public_66182b9
        public_66182b6 : nop
        mov dword ptr ds : [ecx+8], eax
        public_66182b9 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_66182e9
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_66182d0
        mov edx, dword ptr ds : [esi+4]
        jmp public_66182e6
        public_66182d0 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        jne public_66182e6
        public_66182db : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_66182db
        public_66182e6 : nop
        mov dword ptr ss : [ebp], edx
        public_66182e9 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_661831a
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_66182ff
        mov edx, dword ptr ds : [esi+4]
        jmp public_6618317
        public_66182ff : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        jne public_6618317
        public_661830b : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_661830b
        public_6618317 : nop
        mov dword ptr ss : [ebp+8], edx
        public_661831a : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov bl, 1
        cmp byte ptr ds : [ecx+0x24], bl
        jne public_661858f
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_661858c
        public_6618335 : nop
        cmp byte ptr ds : [eax+0x24], bl
        jne public_661858c
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_66183f4
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_66183a0
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6618374
        mov dword ptr ds : [esi+4], ecx
        public_6618374 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6618387
        mov dword ptr ds : [esi+4], edx
        jmp public_6618395
        public_6618387 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6618392
        mov dword ptr ds : [esi], edx
        jmp public_6618395
        public_6618392 : nop
        mov dword ptr ds : [esi+8], edx
        public_6618395 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_66183a0 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_66183b3
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        je public_661845e
        public_66183b3 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6618491
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_66183da
        mov dword ptr ds : [esi+4], ecx
        public_66183da : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6618476
        mov dword ptr ds : [esi+4], edx
        jmp public_6618485
        public_66183f4 : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6618447
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_661841a
        mov dword ptr ds : [esi+4], ecx
        public_661841a : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_661842d
        mov dword ptr ds : [esi+4], edx
        jmp public_661843c
        public_661842d : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_661843a
        mov dword ptr ds : [esi+8], edx
        jmp public_661843c
        public_661843a : nop
        mov dword ptr ds : [esi], edx
        public_661843c : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6618447 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_66184ed
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_66184ed
        public_661845e : nop
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6618335
        jmp public_661858c
        public_6618476 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6618483
        mov dword ptr ds : [esi+8], edx
        jmp public_6618485
        public_6618483 : nop
        mov dword ptr ds : [esi], edx
        public_6618485 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6618491 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_66184bb
        mov dword ptr ds : [esi+4], ecx
        public_66184bb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_66184d3
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6618589
        public_66184d3 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_66184e3
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6618589
        public_66184e3 : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6618589
        public_66184ed : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_661853b
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6618510
        mov dword ptr ds : [esi+4], ecx
        public_6618510 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6618523
        mov dword ptr ds : [esi+4], edx
        jmp public_6618531
        public_6618523 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_661852e
        mov dword ptr ds : [esi], edx
        jmp public_6618531
        public_661852e : nop
        mov dword ptr ds : [esi+8], edx
        public_6618531 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_661853b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6618564
        mov dword ptr ds : [esi+4], ecx
        public_6618564 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6618577
        mov dword ptr ds : [esi+4], edx
        jmp public_6618586
        public_6618577 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6618584
        mov dword ptr ds : [esi+8], edx
        jmp public_6618586
        public_6618584 : nop
        mov dword ptr ds : [esi], edx
        public_6618586 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6618589 : nop
        mov dword ptr ds : [ecx+4], edx
        public_661858c : nop
        mov byte ptr ds : [eax+0x24], bl
        public_661858f : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0x14]
        lea esi, ds:[edx+0x10]
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        call public_66276c0
        mov eax, dword ptr ds : [eax]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+0x10]
        add esp, 4
        cmp eax, ebx
        je public_6618651
        mov ecx, esi
        call public_661a0b0
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_661a130
        lea edx, ss:[esp+0x1C]
        lea ecx, ss:[esp+0x14]
        push edx
        call public_6618740
        test al, al
        je public_6618651
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x1C]
        push eax
        call public_661a130
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6618740
        test al, al
        je public_6618651
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6619c20
        mov eax, dword ptr ds : [eax]
        add esp, 4
        mov ecx, esi
        push eax
        call public_6619d80
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6619c20
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [esi+4]
        push eax
        mov dword ptr ds : [esi+0x10], ebx
        call public_66276c0
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6619c30
        mov ecx, dword ptr ds : [esi+4]
        add esp, 0xC
        lea edx, ss:[esp+0x20]
        mov dword ptr ds : [eax], ecx
        push edx
        mov ecx, esi
        call public_6627050
        jmp public_6618693
        public_6618651 : nop
        lea eax, ss:[esp+0x18]
        lea ecx, ss:[esp+0x14]
        push eax
        call public_6618740
        test al, al
        jne public_6618693
        public_6618663 : nop
        lea ecx, ss:[esp+0x1C]
        push ebx
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_66186e0
        mov edx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x24]
        push edx
        push eax
        mov ecx, esi
        call public_6618ad0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6618740
        test al, al
        je public_6618663
        public_6618693 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_66281d0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebx
        push eax
        mov dword ptr ds : [esi+0x10], ebx
        call public_66281d0
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+8], ebx
        push ecx
        call public_66281d0
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x3C]
        add esp, 0xC
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x2C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x66181e0)
    }
}

#undef public_6618206
#undef public_6618224
#undef public_661822f
#undef public_6618238
#undef public_6618243
#undef public_6618261
#undef public_6618278
#undef public_6618285
#undef public_6618290
#undef public_6618293
#undef public_66182ab
#undef public_66182b6
#undef public_66182b9
#undef public_66182d0
#undef public_66182db
#undef public_66182e6
#undef public_66182e9
#undef public_66182ff
#undef public_661830b
#undef public_6618317
#undef public_661831a
#undef public_6618335
#undef public_6618374
#undef public_6618387
#undef public_6618392
#undef public_6618395
#undef public_66183a0
#undef public_66183b3
#undef public_66183da
#undef public_66183f4
#undef public_661841a
#undef public_661842d
#undef public_661843a
#undef public_661843c
#undef public_6618447
#undef public_661845e
#undef public_6618476
#undef public_6618483
#undef public_6618485
#undef public_6618491
#undef public_66184bb
#undef public_66184d3
#undef public_66184e3
#undef public_66184ed
#undef public_6618510
#undef public_6618523
#undef public_661852e
#undef public_6618531
#undef public_661853b
#undef public_6618564
#undef public_6618577
#undef public_6618584
#undef public_6618586
#undef public_6618589
#undef public_661858c
#undef public_661858f
#undef public_6618651
#undef public_6618663
#undef public_6618693
