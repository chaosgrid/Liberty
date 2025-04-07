#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3b20);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5920);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5d80);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5df0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f600);
CLANG_FORWARD_PROC_SYMBOL(public_6d46150);
CLANG_FORWARD_PROC_SYMBOL(public_6d494f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d50e90);
CLANG_FORWARD_PROC_SYMBOL(public_6d510c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d52fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6d56940);
CLANG_FORWARD_PROC_SYMBOL(public_6d56e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d572f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d573b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58a60);
CLANG_FORWARD_PROC_SYMBOL(public_6d59680);
CLANG_FORWARD_PROC_SYMBOL(public_6d59940);
CLANG_FORWARD_PROC_SYMBOL(public_6d59b00);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a8);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6381c);

#define public_6d5113e _public_6d5113e
#define public_6d51140 _public_6d51140
#define public_6d51189 _public_6d51189
#define public_6d51196 _public_6d51196
#define public_6d511cb _public_6d511cb
#define public_6d511d1 _public_6d511d1
#define public_6d512ea _public_6d512ea
#define public_6d5138b _public_6d5138b
#define public_6d51405 _public_6d51405
#define public_6d51487 _public_6d51487
#define public_6d514bb _public_6d514bb
#define public_6d514d2 _public_6d514d2
#define public_6d514f0 _public_6d514f0
#define public_6d5151e _public_6d5151e
#define public_6d515b1 _public_6d515b1
#define public_6d515b3 _public_6d515b3
#define public_6d51680 _public_6d51680
#define public_6d516f5 _public_6d516f5
#define public_6d517e1 _public_6d517e1
#define public_6d51804 _public_6d51804
#define public_6d5184e _public_6d5184e
#define public_6d5185a _public_6d5185a
#define public_6d5186b _public_6d5186b
#define public_6d5186f _public_6d5186f
#define public_6d5188f _public_6d5188f
#define public_6d518b0 _public_6d518b0
#define public_6d518cb _public_6d518cb
#define public_6d518d4 _public_6d518d4

PROC_DECLARE(0x6d510c0, internal_6d510c0, public_6d510c0);
extern "C" NAKED register_t __cdecl internal_6d510c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d6381c @0x6d510c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6381c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3DC
        mov al, byte ptr ss : [esp+0x3F0]
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x3F8]
        mov ecx, edi
        imul ecx, 0x418
        add ecx, 4
        push ecx
        mov dword ptr ss : [esp+0x18], esi
        mov byte ptr ds : [esi+0xC], al
        mov dword ptr ds : [esi+4], edi
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        test eax, eax
        mov dword ptr ss : [esp+0x3F0], 0
        je public_6d5113e
/*FIXUP push offset _public_6d50e90 @0x6d5111f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d50e90
/*FIXUP push offset _public_6d494f0 @0x6d51124*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d494f0
        push edi
        lea ebx, ds:[eax+4]
        push 0x418
        push ebx
        mov dword ptr ds : [eax], edi
        call public_6d601a8
        mov eax, ebx
        jmp public_6d51140
        public_6d5113e : nop
        xor eax, eax
        public_6d51140 : nop
        mov edx, dword ptr ds : [esi+4]
        imul edx, 0x418
        add edx, eax
        mov dword ptr ds : [esi], eax
        lea eax, ss:[esp+0x1CC]
        push eax
        mov dword ptr ss : [esp+0x3F4], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x1C], edx
        call dword ptr ds : [public_6d64874]
        mov esi, dword ptr ds : [public_6d647e8]
        add esp, 4
        call esi
        test al, al
        push 0
        je public_6d51189
/*FIXUP push offset public_6d8d308 @0x6d5117a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d308
        lea ecx, ss:[esp+0x1D4]
        push ecx
        jmp public_6d51196
/*FIXUP public_6d51189 : nop
        push offset public_6d8d200 @0x6d51189*/
  FIXUP public_6d51189 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d200
        lea edx, ss:[esp+0x1D4]
        push edx
        public_6d51196 : nop
        push 0
/*FIXUP push offset public_6d90158 @0x6d51198*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call dword ptr ds : [public_6d64bc0]
        add esp, 0x14
        call esi
        test al, al
        je public_6d518d4
        push ebp
/*FIXUP push offset public_6d90158 @0x6d511b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call dword ptr ds : [public_6d6497c]
        mov edi, dword ptr ds : [public_6d64c7c]
        mov ebx, dword ptr ds : [public_6d64bd0]
        add esp, 4
        public_6d511cb : nop
        mov ebp, dword ptr ds : [public_6d64bd4]
/*FIXUP public_6d511d1 : nop
        push offset public_6d6b898 @0x6d511d1*/
  FIXUP public_6d511d1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b898
/*FIXUP push offset public_6d6b88c @0x6d511d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b88c
/*FIXUP push offset public_6d90158 @0x6d511db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        lea eax, ss:[esp+0xC4]
        push 0
        push eax
        call dword ptr ds : [public_6d64bc0]
        lea ecx, ss:[esp+0xCC]
/*FIXUP push offset public_6d6aea8 @0x6d511f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea8
        push ecx
        call dword ptr ds : [public_6d64bd8]
        mov esi, eax
        add esp, 0x1C
        test esi, esi
        jne public_6d512ea
        lea edx, ss:[esp+0xB8]
/*FIXUP push offset public_6d6b4e4 @0x6d51217*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b4e4
        push edx
        call dword ptr ds : [public_6d64bd8]
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_6d511d1
        call dword ptr ds : [public_6d64cb8]
        push eax
        call dword ptr ds : [public_6d64bc8]
        call edi
        mov ebx, eax
        shl ebx, 0x10
        call edi
        and eax, 0xFFFF
        or ebx, eax
        mov dword ptr ss : [esp+0x20], ebx
        call edi
        mov ebp, eax
        shl ebp, 0x10
        call edi
        and eax, 0xFFFF
        or ebp, eax
        call edi
        shl eax, 0x10
        mov dword ptr ss : [esp+0x18], eax
        call edi
        mov ecx, dword ptr ss : [esp+0x18]
        and eax, 0xFFFF
        or ecx, eax
        mov eax, dword ptr ss : [esp+0x1C]
        xor ecx, ebp
        mov ebp, dword ptr ds : [public_6d64c04]
        push esi
        lea ebx, ds:[eax+8]
        push 1
        mov dword ptr ds : [ebx], ecx
        lea ecx, ss:[esp+0x28]
        push 4
        push ecx
        call ebp
        push esi
        push 1
        push 4
        push ebx
        call ebp
        mov edx, dword ptr ss : [esp+0x3C]
        add esp, 0x24
        lea ebx, ds:[edx+0x10]
/*FIXUP push offset public_6d6b884 @0x6d512a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b884
        mov ecx, ebx
        call dword ptr ds : [public_6d64978]
        mov ecx, ebx
        call dword ptr ds : [public_6d64974]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6d64670]
        push esi
        push 1
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x1C]
        push 0x24
        push eax
        call ebp
        push esi
        push 1
        push 0x24
        push ebx
        call ebp
        mov ebx, dword ptr ds : [public_6d64bd0]
        push esi
        call ebx
        add esp, 0x24
        jmp public_6d511cb
        public_6d512ea : nop
        push esi
        push 1
        lea ecx, ss:[esp+0x58]
        push 4
        push ecx
        call ebp
        push esi
        push 1
        lea edx, ss:[esp+0x54]
        push 4
        push edx
        call ebp
        push esi
        push 1
        lea eax, ss:[esp+0xBC]
        push 0x24
        push eax
        mov byte ptr ss : [esp+0xC4], 0
        mov byte ptr ss : [esp+0xA0], 0
        call ebp
        push esi
        push 1
        lea ecx, ss:[esp+0xA8]
        push 0x24
        push ecx
        call ebp
        add esp, 0x40
        push esi
        call ebx
        mov esi, dword ptr ss : [esp+0x1C]
        lea edx, ds:[esi+8]
        push edx
        lea eax, ss:[esp+0x78]
/*FIXUP push offset public_6d6b880 @0x6d51342*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b880
        push eax
        call dword ptr ds : [public_6d64c24]
        add esp, 0x10
        lea ecx, ss:[esp+0x70]
        push ecx
        lea edx, ss:[esp+0x98]
        add esi, 0x10
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d64970]
        mov ecx, esi
        call dword ptr ds : [public_6d6496c]
        test al, al
        jne public_6d5138b
        lea eax, ss:[esp+0xB8]
        push eax
        call dword ptr ds : [public_6d64cac]
        add esp, 4
        jmp public_6d511d1
        public_6d5138b : nop
        call dword ptr ds : [public_6d64cb8]
        push eax
        call dword ptr ds : [public_6d64bc8]
        mov cl, byte ptr ss : [esp+0x17]
        push 0x18
        mov byte ptr ss : [esp+0x38], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], 0
        push 0
/*FIXUP push offset public_6d6b440 @0x6d513ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b440
/*FIXUP push offset public_6d90158 @0x6d513bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        lea edx, ss:[esp+0x1E4]
        push 0
        push edx
        mov dword ptr ss : [esp+0x410], 1
        call dword ptr ds : [public_6d64bc0]
        lea eax, ss:[esp+0xD4]
        push eax
        lea ecx, ss:[esp+0x1F0]
        push ecx
        call dword ptr ds : [public_6d64bfc]
        mov ebx, eax
        add esp, 0x24
        xor eax, eax
        cmp ebx, 0xFFFFFFFF
        je public_6d514d2
        public_6d51405 : nop
        test eax, eax
        jne public_6d514d2
        cmp byte ptr ss : [esp+0xCC], 0x2E
        je public_6d514bb
        test byte ptr ss : [esp+0xB8], 0x10
        je public_6d514bb
        mov dl, byte ptr ss : [esp+0x13]
        push 0
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], dl
        call dword ptr ds : [public_6d64b74]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0xCC]
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d51487
        mov edi, dword ptr ss : [esp+0x24]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        lea esi, ss:[esp+0xCC]
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6d64b88]
        public_6d51487 : nop
        mov edx, dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x20]
        push ecx
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x400], 2
        call public_6d572f0
        push 1
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x3F8], 1
        call dword ptr ds : [public_6d64b74]
        public_6d514bb : nop
        lea ecx, ss:[esp+0xB8]
        push ecx
        push ebx
        call dword ptr ds : [public_6d64bf8]
        add esp, 8
        jmp public_6d51405
        public_6d514d2 : nop
        push ebx
        call dword ptr ds : [public_6d64bf4]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        cmp ecx, eax
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6d5188f
        mov edi, edi
        public_6d514f0 : nop
        mov esi, dword ptr ds : [public_6d64bc0]
        push 0
        push 0
/*FIXUP push offset public_6d90158 @0x6d514fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        lea edx, ss:[esp+0xC4]
        push 0
        push edx
        call esi
        mov eax, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [eax+0xC]
        add esp, 0x14
        test eax, eax
        jne public_6d5151e
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d5151e : nop
        push 0
        push eax
        lea ecx, ss:[esp+0xC0]
        push ecx
        lea edx, ss:[esp+0x1DC]
        push 0
        push edx
        call esi
        push 0x38
        call public_6d60012
        mov esi, eax
        add esp, 0x18
        mov dword ptr ss : [esp+0x3C], esi
        xor ebx, ebx
        cmp esi, ebx
        mov byte ptr ss : [esp+0x3F4], 3
        je public_6d515b1
        mov al, byte ptr ss : [esp+0x13]
        lea ecx, ds:[esi+4]
        push ebx
        mov byte ptr ds : [ecx], al
        call public_6ce3b20
        mov dl, byte ptr ss : [esp+0x13]
        lea ecx, ds:[esi+0x14]
        push ebx
        mov byte ptr ss : [esp+0x3F8], 4
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_6d64b74]
        mov al, byte ptr ss : [esp+0x13]
        lea edi, ds:[esi+0x24]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x3FC], 5
        mov byte ptr ds : [edi], al
        call public_6d573b0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [esi], offset public_6d64ef8
        mov byte ptr ds : [esi+0x31], 1
        mov byte ptr ds : [esi+0x32], bl
        mov byte ptr ds : [esi+0x30], bl
        mov dword ptr ds : [esi+0x34], ebx
        mov ebp, esi
        jmp public_6d515b3
        public_6d515b1 : nop
        xor ebp, ebp
        public_6d515b3 : nop
        lea ecx, ss:[esp+0x1D0]
        push ecx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x3F8], 1
        call public_6d56940
        lea edx, ss:[ebp+4]
        push edx
        lea ecx, ss:[esp+0x98]
        call public_6d56e50
        mov dword ptr ss : [esp+0xA4], ebx
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x94]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea ecx, ds:[edx+0x44]
        mov byte ptr ss : [esp+0x3FC], 6
        call public_6d59b00
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea ecx, ss:[esp+0x70]
        call public_6d0f600
        mov esi, dword ptr ss : [esp+0x68]
        push 1
        lea ecx, ss:[esp+0x98]
        mov byte ptr ss : [esp+0x3F8], 1
        call public_6ce3b20
/*FIXUP push offset public_6d6aea4 @0x6d5162f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea4
/*FIXUP push offset public_6d6b440 @0x6d51634*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b440
        lea edx, ss:[esp+0x1D8]
        push edx
        lea eax, ss:[esp+0xC4]
        push ebx
        push eax
        mov dword ptr ds : [esi+0x1C], ebp
        call dword ptr ds : [public_6d64bc0]
        lea ecx, ss:[esp+0x2E8]
        push ecx
        lea edx, ss:[esp+0xD0]
        push edx
        call dword ptr ds : [public_6d64bfc]
        add esp, 0x1C
        xor edi, edi
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], eax
        je public_6d5186f
        nop 
        lea esp, ss:[esp]
        public_6d51680 : nop
        test edi, edi
        jne public_6d5186b
        lea eax, ss:[esp+0x2E8]
        push eax
        call dword ptr ds : [public_6d64ca8]
        mov cl, byte ptr ss : [esp+0x17]
        add esp, 4
        mov byte ptr ss : [esp+0x20], cl
        push edi
        lea ecx, ss:[esp+0x24]
        call public_6ce5d80
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x2E8]
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        push 1
        push ebx
        lea ecx, ss:[esp+0x28]
        call public_6ce5df0
        test al, al
        je public_6d516f5
        mov edi, dword ptr ss : [esp+0x24]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        lea esi, ss:[esp+0x2E8]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ds : [eax+ebx], 0
        public_6d516f5 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0x3F8], 7
        call public_6d59940
        xor esi, esi
        mov dword ptr ss : [esp+0x80], esi
        mov ebx, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x70]
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ds:[ebx+0x30]
        mov byte ptr ss : [esp+0x3FC], 8
        call public_6d59680
        lea ecx, ss:[esp+0x54]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        lea ecx, ss:[esp+0x68]
        call public_6d0f600
        mov edi, dword ptr ss : [esp+0x60]
        push 1
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0x3F8], 7
        call public_6ce5d80
        push 1
        lea ecx, ss:[esp+0x24]
        mov dword ptr ds : [edi+0x1C], ebp
        mov byte ptr ss : [esp+0x3F8], 1
        call public_6ce5d80
        mov al, byte ptr ss : [esp+0x13]
        push esi
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x44], al
        call public_6ce3b20
        push esi
        lea ecx, ss:[esp+0x2EC]
        push ecx
        lea edx, ss:[esp+0x1D8]
        push edx
        lea eax, ss:[esp+0xC4]
        push esi
        push eax
        mov byte ptr ss : [esp+0x408], 9
        call dword ptr ds : [public_6d64bc0]
        add esp, 0x14
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0xBC]
        push edx
        mov ecx, ebx
        call public_6d52fe0
        cmp dword ptr ss : [esp+0x48], esi
        je public_6d51804
        mov edi, dword ptr ss : [ebp+0x28]
        mov ebx, dword ptr ds : [edi+4]
        push 0x18
        call public_6d60012
        add esp, 4
        cmp ebx, esi
        mov dword ptr ds : [eax], edi
        jne public_6d517e1
        mov ebx, eax
        public_6d517e1 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x40]
        push ecx
        add eax, 8
        push eax
        call public_6ce5920
        mov eax, dword ptr ss : [ebp+0x2C]
        add esp, 8
        inc eax
        mov dword ptr ss : [ebp+0x2C], eax
        public_6d51804 : nop
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x2D4]
        push edx
        push eax
        call dword ptr ds : [public_6d64bf8]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x4C]
        add esp, 8
        cmp eax, esi
        mov byte ptr ss : [esp+0x3F4], 1
        je public_6d5185a
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6d5184e
        cmp cl, 0xFF
        je public_6d5184e
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x4C], esi
        jmp public_6d51680
        public_6d5184e : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d5185a : nop
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x4C], esi
        jmp public_6d51680
        public_6d5186b : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_6d5186f : nop
        push eax
        call dword ptr ds : [public_6d64bf4]
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6d514f0
        public_6d5188f : nop
        call public_6d46150
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x3F4], 0xFFFFFFFF
        mov edi, eax
        pop ebp
        je public_6d518cb
        lea esp, ss:[esp]
        public_6d518b0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x58]
        push edx
        lea ecx, ss:[esp+0x34]
        call public_6d58a60
        cmp esi, edi
        jne public_6d518b0
        mov eax, dword ptr ss : [esp+0x30]
        public_6d518cb : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d518d4 : nop
        mov ecx, dword ptr ss : [esp+0x3E8]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3E8
        ret 8
        UNREACHABLE_TRAP(0x6d510c0)
    }
}

#undef public_6d5113e
#undef public_6d51140
#undef public_6d51189
#undef public_6d51196
#undef public_6d511cb
#undef public_6d511d1
#undef public_6d512ea
#undef public_6d5138b
#undef public_6d51405
#undef public_6d51487
#undef public_6d514bb
#undef public_6d514d2
#undef public_6d514f0
#undef public_6d5151e
#undef public_6d515b1
#undef public_6d515b3
#undef public_6d51680
#undef public_6d516f5
#undef public_6d517e1
#undef public_6d51804
#undef public_6d5184e
#undef public_6d5185a
#undef public_6d5186b
#undef public_6d5186f
#undef public_6d5188f
#undef public_6d518b0
#undef public_6d518cb
#undef public_6d518d4
