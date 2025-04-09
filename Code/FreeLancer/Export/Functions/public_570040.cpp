#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_46bb00);
CLANG_FORWARD_PROC_SYMBOL(public_46bb50);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_56f180);
CLANG_FORWARD_PROC_SYMBOL(public_570040);
CLANG_FORWARD_PROC_SYMBOL(public_571220);
CLANG_FORWARD_PROC_SYMBOL(public_571280);
CLANG_FORWARD_PROC_SYMBOL(public_5754b0);
CLANG_FORWARD_PROC_SYMBOL(public_575520);
CLANG_FORWARD_PROC_SYMBOL(public_58cd00);
CLANG_FORWARD_PROC_SYMBOL(public_58cdb0);
CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);
CLANG_FORWARD_PROC_SYMBOL(public_599980);
CLANG_FORWARD_PROC_SYMBOL(public_5a9950);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c34c1);

#define public_5700a1 _public_5700a1
#define public_570226 _public_570226
#define public_570300 _public_570300
#define public_57041f _public_57041f
#define public_570477 _public_570477
#define public_5704b9 _public_5704b9
#define public_5704f2 _public_5704f2
#define public_57051b _public_57051b
#define public_570542 _public_570542
#define public_5705b0 _public_5705b0
#define public_570653 _public_570653
#define public_570695 _public_570695
#define public_5706af _public_5706af
#define public_5706b6 _public_5706b6
#define public_5707d1 _public_5707d1
#define public_570827 _public_570827
#define public_570869 _public_570869
#define public_5708a2 _public_5708a2
#define public_5708cb _public_5708cb
#define public_5708f2 _public_5708f2
#define public_570963 _public_570963
#define public_570a06 _public_570a06
#define public_570a48 _public_570a48
#define public_570a62 _public_570a62
#define public_570a63 _public_570a63
#define public_570a6f _public_570a6f
#define public_570a83 _public_570a83
#define public_570a9e _public_570a9e
#define public_570ac0 _public_570ac0
#define public_570c4f _public_570c4f
#define public_570c53 _public_570c53
#define public_570e71 _public_570e71
#define public_570e97 _public_570e97
#define public_570f55 _public_570f55
#define public_570fd7 _public_570fd7
#define public_57101f _public_57101f
#define public_57105d _public_57105d
#define public_571078 _public_571078
#define public_5710b9 _public_5710b9
#define public_5710ea _public_5710ea
#define public_57110e _public_57110e
#define public_571159 _public_571159
#define public_571167 _public_571167
#define public_5711d3 _public_5711d3
#define public_5711d5 _public_5711d5

PROC_DECLARE(0x570040, internal_570040, public_570040);
extern "C" NAKED register_t __cdecl internal_570040()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c34c1 @0x570042*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c34c1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x198
        push ebx
        push ebp
        push esi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x44], ebp
        mov ebx, dword ptr ds : [public_67ecb8]
        push edi
        mov edi, dword ptr ss : [esp+0x1BC]
        mov eax, dword ptr ds : [edi+0x8C]
        cmp eax, ebx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, ecx
        mov ecx, dword ptr ds : [edi+0x90]
        mov edx, dword ptr ds : [esi+0x2C8]
        sete byte ptr ss : [esp+0x2B]
        cmp ecx, edx
        sete byte ptr ss : [esp+0x30]
        cmp ebx, ebp
        jne public_5700a1
        mov ebx, dword ptr ds : [public_5c700c]
        public_5700a1 : nop
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c62dc]
        push 0xFFFFFFFF
        push ebx
        mov ebx, dword ptr ds : [public_5c62b0]
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0x1B8], ebp
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x1B4], 2
        call public_46bb00
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x1B0], 1
        call public_45eeb0
        lea ecx, ss:[esp+0x7C]
        mov byte ptr ss : [esp+0x1B0], 0
        call dword ptr ds : [public_5c62ac]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2B]
        mov ebp, dword ptr ss : [esp+0x1B8]
        push ecx
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        push 1
        push ebp
        mov ecx, esi
        call public_56f180
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x1B0], 0xFFFFFFFF
        call public_46ba90
        mov eax, dword ptr ds : [edi+0x2C]
        cmp eax, 0xFFFFFFFE
        je public_5706b6
        cmp eax, 0xFFFFFFFF
        je public_570300
        mov ecx, dword ptr ds : [public_5c7020]
        mov edx, dword ptr ds : [public_5c7024]
        mov dword ptr ss : [esp+0x90], ecx
        lea ecx, ss:[esp+0xE8]
        mov dword ptr ss : [esp+0x98], edx
        call dword ptr ds : [public_5c7034]
        mov dword ptr ss : [esp+0x48], 1
        push 0
        lea eax, ss:[esp+0xA0]
        push eax
        lea ecx, ss:[esp+0x98]
        mov dword ptr ss : [esp+0x1B8], 0x31
        call dword ptr ds : [public_5c7014]
        push 3
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0x1B4], 0x32
        call dword ptr ds : [public_5c7010]
        mov ecx, dword ptr ss : [esp+0x90]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_5c7094]
        mov dword ptr ss : [esp+edx+0x90], eax
        mov ecx, dword ptr ds : [edi+0x2C]
        push ecx
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0x1B4], 0x33
        call dword ptr ds : [public_5c7008]
        push eax
        call dword ptr ds : [public_5c7004]
        add esp, 4
        lea edx, ss:[esp+0x7C]
        push edx
        lea ecx, ss:[esp+0x94]
        call dword ptr ds : [public_5c7000]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov byte ptr ss : [esp+0x1B0], 0x34
        jne public_570226
        mov eax, dword ptr ds : [public_5c700c]
        public_570226 : nop
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_5c62dc]
        mov ecx, dword ptr ss : [esp+0x14]
        push 0xFFFFFFFF
        push ecx
        lea ecx, ss:[esp+0x70]
        mov byte ptr ss : [esp+0x1B8], 0x35
        call ebx
        mov edx, dword ptr ds : [eax]
        mov bl, 0x36
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x1B4], 0x37
        call public_46bb00
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x1B0], bl
        call public_45eeb0
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x1B0], 0x35
        call dword ptr ds : [public_5c62ac]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2B]
        push ecx
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        push 3
        push ebp
        mov ecx, esi
        call public_56f180
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x1B0], 0x34
        call public_46ba90
        push 1
        lea ecx, ss:[esp+0x80]
        mov byte ptr ss : [esp+0x1B4], 0x33
        call dword ptr ds : [public_5c6fb8]
        lea ecx, ss:[esp+0xE8]
        mov dword ptr ss : [esp+0x1B0], 0xFFFFFFFF
        call dword ptr ds : [public_5c6ffc]
        lea ecx, ss:[esp+0xE8]
        call dword ptr ds : [public_5c6ff4]
        jmp public_570a83
        public_570300 : nop
        lea ecx, ss:[esp+0x2F]
        push ecx
        lea ecx, ss:[esp+0x38]
        call public_46ba60
        mov eax, dword ptr ds : [public_5c62cc]
        mov ebx, 0x1A
        lea edx, ds:[esi+0x1AC]
        mov dword ptr ss : [esp+0x1B0], ebx
        mov dword ptr ss : [esp+0x64], edx
        mov dword ptr ss : [esp+0x60], eax
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0x1B0], 0x1B
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x50], eax
        mov ecx, dword ptr ss : [esp+0x38]
        lea eax, ss:[esp+0x50]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x1BC], 0x1C
        call public_46c800
        lea ecx, ss:[esp+0x50]
        mov byte ptr ss : [esp+0x1B0], 0x1B
        call public_45eeb0
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [public_5c62c8]
        mov ecx, dword ptr ds : [esi+0xC4]
        lea eax, ss:[esp+0x14]
        push eax
        push 3
        push ebp
        call public_58cd00
        test al, al
        je public_570a6f
        mov ecx, dword ptr ss : [esp+0x14]
        call public_46bb50
        test ebp, ebp
        mov byte ptr ss : [esp+0x1F], 0
        lea ecx, ss:[esp+0x20]
        jne public_5704b9
        cmp dword ptr ds : [esi+0x298], 3
        jne public_57041f
        push 0xD190
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov bl, 0x1D
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        mov byte ptr ss : [esp+0x1B4], 0x1E
        call public_46bb00
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x1B0], bl
        call public_45eeb0
        mov bl, 0x1A
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [public_5c62b4]
        mov byte ptr ss : [esp+0x1F], 1
        jmp public_570477
        public_57041f : nop
        push 0xD824
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov bl, 0x1F
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        mov byte ptr ss : [esp+0x1B4], 0x20
        call public_46bb00
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x1B0], bl
        call public_45eeb0
        mov bl, 0x1A
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [public_5c62b4]
        public_570477 : nop
        push 1
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 0x21
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        mov byte ptr ss : [esp+0x1B4], 0x22
        call public_46bb00
        mov byte ptr ss : [esp+0x1B0], 0x21
        jmp public_5705b0
        public_5704b9 : nop
        mov al, byte ptr ss : [esp+0x2B]
        test al, al
        je public_57051b
        mov al, byte ptr ss : [esp+0x30]
        test al, al
        je public_5704f2
        push 0x3343
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov bl, 0x23
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x1B0], 0x24
        jmp public_570542
        public_5704f2 : nop
        push 0x69F5
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov bl, 0x25
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x1B0], 0x26
        jmp public_570542
        public_57051b : nop
        push 0xBB80
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov bl, 0x27
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x1B0], 0x28
        public_570542 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        call public_46bb00
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x1B0], bl
        call public_45eeb0
        mov bl, 0x1A
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [public_5c62b4]
        push 1
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 0x2B
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        mov byte ptr ss : [esp+0x1B4], 0x2C
        call public_46bb00
        mov byte ptr ss : [esp+0x1B0], 0x2B
        public_5705b0 : nop
        lea ecx, ss:[esp+0x10]
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [public_5c62bc]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x14], edx
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call public_5754b0
        mov al, byte ptr ss : [esp+0x1F]
        test al, al
        je public_5706af
        mov al, byte ptr ds : [esi+0x29F]
        test al, al
        je public_570653
        mov ecx, dword ptr ds : [esi+0x270]
        push ecx
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62f0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 0x2D
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        mov byte ptr ss : [esp+0x1B4], 0x2E
        call public_46bb00
        mov byte ptr ss : [esp+0x1B0], 0x2D
        jmp public_570695
        public_570653 : nop
        mov ecx, dword ptr ds : [esi+0x26C]
        push ecx
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62f0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 0x2F
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        mov byte ptr ss : [esp+0x1B4], 0x30
        call public_46bb00
        mov byte ptr ss : [esp+0x1B0], 0x2F
        public_570695 : nop
        lea ecx, ss:[esp+0x10]
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [public_5c62ec]
        public_5706af : nop
        push 3
        jmp public_570a63
        public_5706b6 : nop
        lea ecx, ss:[esp+0x2F]
        push ecx
        lea ecx, ss:[esp+0x38]
        call public_46ba60
        mov eax, dword ptr ds : [public_5c62cc]
        mov ebx, 3
        lea edx, ds:[esi+0x1A0]
        mov dword ptr ss : [esp+0x1B0], ebx
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x40], eax
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x1B0], 4
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ss : [esp+0x38]
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x1BC], 5
        call public_46c800
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x1B0], 4
        call public_45eeb0
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [public_5c62c8]
        mov ecx, dword ptr ds : [esi+0xC4]
        lea eax, ss:[esp+0x14]
        push eax
        push ebx
        push ebp
        call public_58cd00
        test al, al
        je public_570a6f
        mov ecx, dword ptr ss : [esp+0x14]
        call public_46bb50
        test ebp, ebp
        mov byte ptr ss : [esp+0x1F], 0
        lea ecx, ss:[esp+0x20]
        jne public_570869
        cmp dword ptr ds : [esi+0x298], ebx
        jne public_5707d1
        push 0xD190
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 6
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        mov byte ptr ss : [esp+0x1B4], 7
        call public_46bb00
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x1B0], 6
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [public_5c62b4]
        mov byte ptr ss : [esp+0x1F], 1
        jmp public_570827
        public_5707d1 : nop
        push 0xD824
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 8
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        mov byte ptr ss : [esp+0x1B4], 9
        call public_46bb00
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x1B0], 8
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [public_5c62b4]
        public_570827 : nop
        push 1
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 0xA
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        mov byte ptr ss : [esp+0x1B4], 0xB
        call public_46bb00
        mov byte ptr ss : [esp+0x1B0], 0xA
        jmp public_570963
        public_570869 : nop
        mov al, byte ptr ss : [esp+0x2B]
        test al, al
        je public_5708cb
        mov al, byte ptr ss : [esp+0x30]
        test al, al
        je public_5708a2
        push 0x3343
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov bl, 0xC
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x1B0], 0xD
        jmp public_5708f2
        public_5708a2 : nop
        push 0x69F5
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov bl, 0xE
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x1B0], 0xF
        jmp public_5708f2
        public_5708cb : nop
        push 0xBB80
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov bl, 0x10
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x1B0], 0x11
        public_5708f2 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        call public_46bb00
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x1B0], bl
        call public_45eeb0
        mov ebx, 3
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [public_5c62b4]
        push 1
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 0x14
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        mov byte ptr ss : [esp+0x1B4], 0x15
        call public_46bb00
        mov byte ptr ss : [esp+0x1B0], 0x14
        public_570963 : nop
        lea ecx, ss:[esp+0x10]
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [public_5c62bc]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+4]
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x14], edx
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call public_5754b0
        mov al, byte ptr ss : [esp+0x1F]
        test al, al
        je public_570a62
        mov al, byte ptr ds : [esi+0x29F]
        test al, al
        je public_570a06
        mov ecx, dword ptr ds : [esi+0x270]
        push ecx
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62f0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 0x16
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        mov byte ptr ss : [esp+0x1B4], 0x17
        call public_46bb00
        mov byte ptr ss : [esp+0x1B0], 0x16
        jmp public_570a48
        public_570a06 : nop
        mov ecx, dword ptr ds : [esi+0x26C]
        push ecx
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62f0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 0x18
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x10]
        push eax
        mov byte ptr ss : [esp+0x1B4], 0x19
        call public_46bb00
        mov byte ptr ss : [esp+0x1B0], 0x18
        public_570a48 : nop
        lea ecx, ss:[esp+0x10]
        call public_45eeb0
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [public_5c62ec]
        public_570a62 : nop
        push ebx
        public_570a63 : nop
        mov ecx, dword ptr ds : [esi+0xC4]
        push ebp
        call public_58cdb0
        public_570a6f : nop
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x1B0], 0xFFFFFFFF
        call public_46ba90
        public_570a83 : nop
        push edi
        mov ecx, offset public_67e7b8
        call public_5a9950
        test al, al
        lea eax, ds:[esi+0x1B8]
        jne public_570a9e
        lea eax, ds:[esi+0x1C4]
        public_570a9e : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2B]
        push ecx
        push edx
        push eax
        push 2
        push ebp
        mov ecx, esi
        call public_56f180
        mov ebx, dword ptr ds : [edi+0x48]
        test ebx, ebx
        jne public_570ac0
        mov ebx, dword ptr ds : [public_5c700c]
        public_570ac0 : nop
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c62dc]
        push 0xFFFFFFFF
        push ebx
        mov ebx, dword ptr ds : [public_5c62b0]
        lea ecx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x1B8], 0x38
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 0x39
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x1B4], 0x3A
        call public_46bb00
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x1B0], 0x39
        call public_45eeb0
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x1B0], 0x38
        call dword ptr ds : [public_5c62ac]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2B]
        push ecx
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        push 0
        push ebp
        mov ecx, esi
        call public_56f180
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x1B0], 0xFFFFFFFF
        call public_46ba90
        mov ecx, dword ptr ds : [public_5c7020]
        mov edx, dword ptr ds : [public_5c7024]
        mov dword ptr ss : [esp+0x11C], ecx
        lea ecx, ss:[esp+0x174]
        mov dword ptr ss : [esp+0x124], edx
        call dword ptr ds : [public_5c7034]
        or dword ptr ss : [esp+0x48], 2
        push 0
        lea eax, ss:[esp+0x12C]
        push eax
        lea ecx, ss:[esp+0x124]
        mov dword ptr ss : [esp+0x1B8], 0x3B
        call dword ptr ds : [public_5c7014]
        push 3
        lea ecx, ss:[esp+0x12C]
        mov dword ptr ss : [esp+0x1B4], 0x3C
        call dword ptr ds : [public_5c7010]
        mov ecx, dword ptr ss : [esp+0x11C]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_5c7094]
        mov dword ptr ss : [esp+edx+0x11C], eax
        mov ecx, dword ptr ds : [edi+0x88]
        mov edx, dword ptr ds : [edi+0x84]
        push ecx
/*FIXUP push offset public_5e2e5c @0x570be8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2e5c
        push edx
        lea ecx, ss:[esp+0x130]
        mov dword ptr ss : [esp+0x1BC], 0x3D
        call dword ptr ds : [public_5c7008]
        push eax
        call dword ptr ds : [public_5c703c]
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_5c7008]
        push eax
        call dword ptr ds : [public_5c7004]
        add esp, 4
        lea eax, ss:[esp+0x7C]
        push eax
        lea ecx, ss:[esp+0x120]
        call dword ptr ds : [public_5c7000]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov byte ptr ss : [esp+0x1B0], 0x3E
        jne public_570c4f
        mov ecx, dword ptr ds : [public_5c700c]
        mov dword ptr ss : [esp+0x18], ecx
        jmp public_570c53
        public_570c4f : nop
        mov dword ptr ss : [esp+0x18], eax
        public_570c53 : nop
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c62dc]
        mov edx, dword ptr ss : [esp+0x18]
        push 0xFFFFFFFF
        push edx
        lea ecx, ss:[esp+0x70]
        mov byte ptr ss : [esp+0x1B8], 0x3F
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 0x40
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x1B4], 0x41
        call public_46bb00
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x1B0], 0x40
        call public_45eeb0
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x1B0], 0x3F
        call dword ptr ds : [public_5c62ac]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2B]
        push ecx
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        push 4
        push ebp
        mov ecx, esi
        call public_56f180
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x1B0], 0x3E
        call public_46ba90
        push 1
        lea ecx, ss:[esp+0x80]
        mov byte ptr ss : [esp+0x1B4], 0x3D
        call dword ptr ds : [public_5c6fb8]
        mov ecx, dword ptr ds : [public_5c7020]
        mov edx, dword ptr ds : [public_5c7024]
        mov dword ptr ss : [esp+0x90], ecx
        lea ecx, ss:[esp+0xE8]
        mov dword ptr ss : [esp+0x98], edx
        call dword ptr ds : [public_5c7034]
        or dword ptr ss : [esp+0x48], 4
        push 0
        lea eax, ss:[esp+0xA0]
        push eax
        lea ecx, ss:[esp+0x98]
        mov byte ptr ss : [esp+0x1B8], 0x42
        call dword ptr ds : [public_5c7014]
        push 3
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0x1B4], 0x43
        call dword ptr ds : [public_5c7010]
        mov ecx, dword ptr ss : [esp+0x90]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_5c7094]
        mov dword ptr ss : [esp+edx+0x90], eax
        movzx edx, byte ptr ds : [edi+0x8F]
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+0x8E]
        mov byte ptr ss : [esp+0x1B0], 0x44
        and ecx, 0xFF
        push ecx
/*FIXUP push offset public_5e2e58 @0x570d98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2e58
        push edx
        lea ecx, ss:[esp+0xA4]
        call dword ptr ds : [public_5c7038]
        push eax
        call dword ptr ds : [public_5c703c]
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_5c7038]
        push eax
        call dword ptr ds : [public_5c7004]
        add esp, 4
        lea eax, ss:[esp+0x2F]
        push eax
        lea ecx, ss:[esp+0x38]
        call public_46ba60
        mov ecx, dword ptr ds : [edi+0x8C]
        cmp ecx, dword ptr ds : [public_67ecb8]
        mov byte ptr ss : [esp+0x1B0], 0x45
        je public_570e71
        push 0x1D1DBF
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x54]
        call public_571220
        push 0
        push 0xFFFFFF00
        lea edx, ss:[esp+0x48]
        push edx
        lea ecx, ss:[esp+0x74]
        call dword ptr ds : [public_5c630c]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 0x46
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ss : [esp+0x38]
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x1BC], 0x47
        call public_46c800
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x1B0], 0x46
        call public_45eeb0
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x1B0], 0x45
        call dword ptr ds : [public_5c6308]
        public_570e71 : nop
        lea eax, ss:[esp+0x7C]
        push eax
        lea ecx, ss:[esp+0x94]
        call dword ptr ds : [public_5c7000]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov byte ptr ss : [esp+0x1B0], 0x48
        jne public_570e97
        mov eax, dword ptr ds : [public_5c700c]
        public_570e97 : nop
        push 0xFFFFFFFF
        push eax
        lea ecx, ss:[esp+0x70]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov bl, 0x49
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x1B4], 0x4A
        call public_46bb00
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x1B0], bl
        call public_45eeb0
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x1B0], 0x48
        call dword ptr ds : [public_5c62ac]
        push 1
        lea ecx, ss:[esp+0x80]
        mov byte ptr ss : [esp+0x1B4], 0x45
        call dword ptr ds : [public_5c6fb8]
        mov ebx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2B]
        push ebx
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        push 5
        push ebp
        mov ecx, esi
        call public_56f180
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x1B0], 0x44
        call public_46ba90
        lea ecx, ss:[esp+0x90]
        mov byte ptr ss : [esp+0x1B0], 0x3D
        call dword ptr ds : [public_5c6fec]
        mov al, byte ptr ds : [edi+0x3E]
        test al, al
        lea eax, ds:[esi+0x1B8]
        jne public_570f55
        lea eax, ds:[esi+0x1C4]
        public_570f55 : nop
        mov ecx, dword ptr ss : [esp+0x2B]
        push ebx
        push ecx
        push eax
        push 6
        push ebp
        mov ecx, esi
        call public_56f180
        lea ecx, ss:[esp+0x54]
        call dword ptr ds : [public_5c62dc]
        mov al, byte ptr ds : [edi+0x94]
        test al, al
        mov ebx, dword ptr ds : [public_5c62f0]
        mov byte ptr ss : [esp+0x1B0], 0x4B
        je public_571078
        mov al, byte ptr ss : [esp+0x30]
        test al, al
        je public_570fd7
        mov edx, dword ptr ds : [esi+0x274]
        push edx
        lea ecx, ss:[esp+0x44]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 0x4C
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x1B4], 0x4D
        call public_46bb00
        mov byte ptr ss : [esp+0x1B0], 0x4C
        jmp public_57105d
        public_570fd7 : nop
        mov al, byte ptr ss : [esp+0x2B]
        test al, al
        je public_57101f
        mov ecx, dword ptr ds : [esi+0x284]
        push ecx
        lea ecx, ss:[esp+0x44]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 0x4E
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x1B4], 0x4F
        call public_46bb00
        mov byte ptr ss : [esp+0x1B0], 0x4E
        jmp public_57105d
        public_57101f : nop
        mov ecx, dword ptr ds : [esi+0x27C]
        push ecx
        lea ecx, ss:[esp+0x44]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], 0x50
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x1B4], 0x51
        call public_46bb00
        mov byte ptr ss : [esp+0x1B0], 0x50
        public_57105d : nop
        lea ecx, ss:[esp+0x18]
        call public_45eeb0
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x1B0], 0x4B
        call dword ptr ds : [public_5c62ec]
        public_571078 : nop
        mov al, byte ptr ds : [edi+0x96]
        test al, al
        je public_571167
        mov al, byte ptr ss : [esp+0x30]
        test al, al
        je public_5710b9
        mov ecx, dword ptr ds : [esi+0x278]
        push ecx
        lea ecx, ss:[esp+0x44]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov bl, 0x52
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov byte ptr ss : [esp+0x1B0], 0x53
        jmp public_5710ea
        public_5710b9 : nop
        mov al, byte ptr ss : [esp+0x2B]
        test al, al
        je public_57110e
        mov ecx, dword ptr ds : [esi+0x288]
        push ecx
        lea ecx, ss:[esp+0x44]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov bl, 0x54
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov byte ptr ss : [esp+0x1B0], 0x55
        public_5710ea : nop
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x58]
        call public_46bb00
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x1B0], bl
        call public_45eeb0
        lea ecx, ss:[esp+0x40]
        jmp public_571159
        public_57110e : nop
        mov ecx, dword ptr ds : [esi+0x280]
        push ecx
        lea ecx, ss:[esp+0x4C]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov bl, 0x56
        mov ecx, eax
        mov byte ptr ss : [esp+0x1B0], bl
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x1B4], 0x57
        call public_46bb00
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x1B0], bl
        call public_45eeb0
        lea ecx, ss:[esp+0x48]
        public_571159 : nop
        mov byte ptr ss : [esp+0x1B0], 0x4B
        call dword ptr ds : [public_5c62ec]
        public_571167 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2B]
        push ecx
        push edx
        lea eax, ss:[esp+0x5C]
        push eax
        push 7
        push ebp
        mov ecx, esi
        call public_56f180
        lea ecx, ss:[esp+0x54]
        mov byte ptr ss : [esp+0x1B0], 0x3D
        call public_46ba90
        mov esi, dword ptr ds : [esi+0xC4]
        push ebp
        mov ecx, esi
        call public_58d0b0
        mov esi, eax
        mov al, byte ptr ss : [esp+0x2B]
        push 0xA4
        mov byte ptr ds : [esi+1], al
        mov byte ptr ds : [esi], al
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        test eax, eax
        mov byte ptr ss : [esp+0x1B0], 0x58
        je public_5711d3
        push edi
        mov ecx, eax
        call public_571280
        mov edi, eax
        jmp public_5711d5
        public_5711d3 : nop
        xor edi, edi
        public_5711d5 : nop
        push edi
        lea ecx, ds:[esi+8]
        mov byte ptr ss : [esp+0x1B4], 0x3D
        call public_575520
        mov ecx, edi
        call public_599980
        lea ecx, ss:[esp+0x11C]
        mov dword ptr ss : [esp+0x1B0], 0xFFFFFFFF
        call dword ptr ds : [public_5c6fec]
        mov ecx, dword ptr ss : [esp+0x1A8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1A4
        ret 8
        UNREACHABLE_TRAP(0x570040)
    }
}

#undef public_5700a1
#undef public_570226
#undef public_570300
#undef public_57041f
#undef public_570477
#undef public_5704b9
#undef public_5704f2
#undef public_57051b
#undef public_570542
#undef public_5705b0
#undef public_570653
#undef public_570695
#undef public_5706af
#undef public_5706b6
#undef public_5707d1
#undef public_570827
#undef public_570869
#undef public_5708a2
#undef public_5708cb
#undef public_5708f2
#undef public_570963
#undef public_570a06
#undef public_570a48
#undef public_570a62
#undef public_570a63
#undef public_570a6f
#undef public_570a83
#undef public_570a9e
#undef public_570ac0
#undef public_570c4f
#undef public_570c53
#undef public_570e71
#undef public_570e97
#undef public_570f55
#undef public_570fd7
#undef public_57101f
#undef public_57105d
#undef public_571078
#undef public_5710b9
#undef public_5710ea
#undef public_57110e
#undef public_571159
#undef public_571167
#undef public_5711d3
#undef public_5711d5
