#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bdc830);
CLANG_FORWARD_PROC_SYMBOL(public_6bed6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c08640);
CLANG_FORWARD_PROC_SYMBOL(public_6c09ee8);

#define public_6c08667 _public_6c08667
#define public_6c0867a _public_6c0867a
#define public_6c086aa _public_6c086aa
#define public_6c086bd _public_6c086bd
#define public_6c086dd _public_6c086dd
#define public_6c086f0 _public_6c086f0
#define public_6c08712 _public_6c08712
#define public_6c08725 _public_6c08725
#define public_6c08747 _public_6c08747
#define public_6c0875a _public_6c0875a
#define public_6c0877c _public_6c0877c
#define public_6c0878f _public_6c0878f
#define public_6c087b3 _public_6c087b3
#define public_6c087c6 _public_6c087c6
#define public_6c087e9 _public_6c087e9
#define public_6c087fc _public_6c087fc
#define public_6c08838 _public_6c08838
#define public_6c0884e _public_6c0884e
#define public_6c08875 _public_6c08875
#define public_6c0888b _public_6c0888b
#define public_6c0890f _public_6c0890f
#define public_6c08922 _public_6c08922
#define public_6c0893e _public_6c0893e
#define public_6c08951 _public_6c08951
#define public_6c08971 _public_6c08971
#define public_6c08984 _public_6c08984
#define public_6c089a4 _public_6c089a4
#define public_6c089b7 _public_6c089b7
#define public_6c089fe _public_6c089fe
#define public_6c08a11 _public_6c08a11
#define public_6c08a39 _public_6c08a39
#define public_6c08a4c _public_6c08a4c
#define public_6c08a5a _public_6c08a5a
#define public_6c08a87 _public_6c08a87
#define public_6c08a9a _public_6c08a9a
#define public_6c08ac0 _public_6c08ac0
#define public_6c08ad2 _public_6c08ad2
#define public_6c08adc _public_6c08adc
#define public_6c08aeb _public_6c08aeb
#define public_6c08af4 _public_6c08af4
#define public_6c08b00 _public_6c08b00
#define public_6c08b14 _public_6c08b14
#define public_6c08b1d _public_6c08b1d
#define public_6c08b30 _public_6c08b30
#define public_6c08b48 _public_6c08b48
#define public_6c08b78 _public_6c08b78
#define public_6c08b90 _public_6c08b90
#define public_6c08b9f _public_6c08b9f
#define public_6c08bb0 _public_6c08bb0
#define public_6c08bb3 _public_6c08bb3
#define public_6c08bdd _public_6c08bdd
#define public_6c08bf5 _public_6c08bf5
#define public_6c08c19 _public_6c08c19
#define public_6c08c48 _public_6c08c48
#define public_6c08c62 _public_6c08c62
#define public_6c08c71 _public_6c08c71
#define public_6c08c82 _public_6c08c82
#define public_6c08cad _public_6c08cad
#define public_6c08cdd _public_6c08cdd
#define public_6c08d0f _public_6c08d0f
#define public_6c08d26 _public_6c08d26
#define public_6c08d3e _public_6c08d3e
#define public_6c08d53 _public_6c08d53
#define public_6c08d5f _public_6c08d5f
#define public_6c08d74 _public_6c08d74
#define public_6c08d87 _public_6c08d87
#define public_6c08d95 _public_6c08d95
#define public_6c08daf _public_6c08daf
#define public_6c08db6 _public_6c08db6
#define public_6c08dc5 _public_6c08dc5
#define public_6c08dd7 _public_6c08dd7
#define public_6c08df1 _public_6c08df1
#define public_6c08e26 _public_6c08e26
#define public_6c08e3c _public_6c08e3c
#define public_6c08e68 _public_6c08e68
#define public_6c08e6f _public_6c08e6f
#define public_6c08e7b _public_6c08e7b
#define public_6c08ea1 _public_6c08ea1
#define public_6c08eb3 _public_6c08eb3
#define public_6c08edc _public_6c08edc
#define public_6c08f03 _public_6c08f03
#define public_6c08f2a _public_6c08f2a

PROC_DECLARE(0x6c08640, internal_6c08640, public_6c08640);
extern "C" NAKED register_t __cdecl internal_6c08640()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        push esi
        mov esi, 4
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        push edi
        mov dword ptr ss : [ebp+0x10], edx
        mov edi, 0x16
        jbe public_6c08667
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c08667 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c0867a
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c0867a : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0x24]
        add eax, 4
        push edx
        mov dword ptr ss : [ebp+0x18], eax
        call dword ptr ds : [public_6c0b00c]
        mov ebx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        add ebx, 2
        mov ecx, ebx
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], ebx
        jbe public_6c086aa
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c086aa : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6c086bd
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c086bd : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov word ptr ds : [ecx], ax
        add ecx, 2
        mov dword ptr ss : [ebp+0x18], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c086dd
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c086dd : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c086f0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c086f0 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c08712
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c08712 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c08725
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c08725 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c08747
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c08747 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c0875a
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c0875a : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c0877c
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c0877c : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c0878f
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c0878f : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [eax], edx
        mov cl, byte ptr ss : [ebp+0x40]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc esi
        mov eax, esi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], esi
        jbe public_6c087b3
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c087b3 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c087c6
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c087c6 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x40]
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        shl eax, 2
        add edx, eax
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c087e9
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c087e9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c087fc
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c087fc : nop
        mov eax, dword ptr ss : [ebp+0x40]
        mov edx, dword ptr ss : [ebp+0x18]
        mov esi, dword ptr ss : [ebp+0x44]
        shl eax, 2
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        add edx, eax
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov dword ptr ss : [ebp+0x18], edx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c08838
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6c08838 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c0884e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c0884e : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x48]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c08875
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6c08875 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c0888b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c0888b : nop
        mov edx, dword ptr ss : [ebp+0x4C]
        mov ecx, dword ptr ss : [ebp+0x54]
        mov esi, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp+0x50]
        mov dword ptr ss : [esp+0x1C], edx
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x24], ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_6bda4c0
        fld dword ptr ss : [ebp+0x5C]
        fmul qword ptr ds : [public_6c0df40]
        add esi, 0xC
        mov dword ptr ss : [ebp+0x18], esi
        call public_6c09ee8
        fld dword ptr ss : [ebp+0x60]
        fmul qword ptr ds : [public_6c0df40]
        mov bl, al
        call public_6c09ee8
        fld dword ptr ss : [ebp+0x64]
        fmul qword ptr ds : [public_6c0df40]
        mov byte ptr ss : [esp+0x12], al
        call public_6c09ee8
        fld dword ptr ss : [ebp+0x58]
        fmul qword ptr ds : [public_6c0df40]
        mov byte ptr ss : [esp+0x13], al
        call public_6c09ee8
        mov esi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc esi
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], esi
        mov esi, 0x16
        jbe public_6c0890f
        mov dword ptr ss : [ebp+0x1C], esi
        public_6c0890f : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6c08922
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c08922 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [ecx], bl
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6c0893e
        mov dword ptr ss : [ebp+0x1C], esi
        public_6c0893e : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6c08951
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c08951 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dl, byte ptr ss : [esp+0x12]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6c08971
        mov dword ptr ss : [ebp+0x1C], esi
        public_6c08971 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6c08984
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c08984 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6c089a4
        mov dword ptr ss : [ebp+0x1C], esi
        public_6c089a4 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6c089b7
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c089b7 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [ecx], al
        fild dword ptr ss : [ebp+0x68]
        mov eax, dword ptr ss : [ebp+0x24]
        inc ecx
        push eax
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+0x18], ecx
        call dword ptr ds : [public_6c0b024]
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        add esp, 4
        fdivr dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_6c0e270]
        call public_6c09ee8
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6c089fe
        mov dword ptr ss : [ebp+0x1C], esi
        public_6c089fe : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6c08a11
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c08a11 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [ecx], al
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        call dword ptr ds : [public_6c0b080]
        test al, al
        je public_6c08a5a
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c08a39
        mov dword ptr ss : [ebp+0x1C], esi
        public_6c08a39 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c08a4c
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c08a4c : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        public_6c08a5a : nop
        lea ecx, ss:[ebp+0x70]
        call public_6bdc830
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6c08d5f
        mov edi, dword ptr ss : [ebp+0x10]
        mov cx, word ptr ds : [eax+8]
        mov edx, dword ptr ss : [ebp+0x14]
        add edi, 2
        mov eax, edi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6c08a87
        mov dword ptr ss : [ebp+0x1C], esi
        public_6c08a87 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c08a9a
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c08a9a : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], edi
        je public_6c08d95
        nop 
        lea esp, ss:[esp]
        public_6c08ac0 : nop
        mov esi, dword ptr ds : [edi+8]
        mov al, byte ptr ds : [esi+0xE]
        xor bl, bl
        test al, al
        mov byte ptr ss : [esp+0x12], bl
        je public_6c08ad2
        mov bl, 1
        public_6c08ad2 : nop
        mov al, byte ptr ds : [esi+0xF]
        test al, al
        je public_6c08adc
        or bl, 2
        public_6c08adc : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, 0xFF
        cmp ecx, eax
        jle public_6c08aeb
        or bl, 4
        public_6c08aeb : nop
        cmp word ptr ds : [esi+0xC], ax
        jbe public_6c08af4
        or bl, 8
        public_6c08af4 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        jne public_6c08b00
        or bl, 0x20
        jmp public_6c08b14
        public_6c08b00 : nop
        push eax
        call public_6bed6f0
        add esp, 4
        test al, al
        mov byte ptr ss : [esp+0x12], al
        jne public_6c08b14
        or bl, 0x10
        public_6c08b14 : nop
        cmp dword ptr ds : [esi+4], 1
        jne public_6c08b1d
        or bl, 0x80
        public_6c08b1d : nop
        fld dword ptr ds : [esi+8]
        fcomp qword ptr ds : [public_6c0bab0]
        fnstsw ax
        test ah, 0x44
        jp public_6c08b30
        or bl, 0x40
        public_6c08b30 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        mov edx, 0x16
        jbe public_6c08b48
        mov dword ptr ss : [ebp+0x1C], edx
        public_6c08b48 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c08d53
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], bl
        inc eax
        test bl, bl
        mov dword ptr ss : [ebp+0x18], eax
        js public_6c08bb3
        test bl, 4
        mov eax, dword ptr ss : [ebp+0x10]
        je public_6c08b90
        mov ecx, dword ptr ss : [ebp+0x14]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6c08b78
        mov dword ptr ss : [ebp+0x1C], edx
        public_6c08b78 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c08d53
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        jmp public_6c08bb0
        public_6c08b90 : nop
        mov cl, byte ptr ds : [esi+4]
        inc eax
        cmp eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6c08b9f
        mov dword ptr ss : [ebp+0x1C], edx
        public_6c08b9f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c08d53
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        public_6c08bb0 : nop
        mov dword ptr ss : [ebp+0x18], eax
        public_6c08bb3 : nop
        test bl, 0x40
        jne public_6c08bf5
        fld dword ptr ds : [esi+8]
        fmul qword ptr ds : [public_6c0e270]
        call public_6c09ee8
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6c08bdd
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6c08bdd : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6c08db6
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [ecx], al
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        public_6c08bf5 : nop
        mov edx, dword ptr ds : [esi]
        push edx
        call dword ptr ds : [public_6c0b00c]
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        add ecx, 2
        add esp, 4
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], ecx
        mov edx, 0x16
        jbe public_6c08c19
        mov dword ptr ss : [ebp+0x1C], edx
        public_6c08c19 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6c08d53
        mov ecx, dword ptr ss : [ebp+0x18]
        mov word ptr ds : [ecx], ax
        add ecx, 2
        test bl, 8
        mov dword ptr ss : [ebp+0x18], ecx
        mov eax, dword ptr ss : [ebp+0x10]
        je public_6c08c62
        mov ecx, dword ptr ss : [ebp+0x14]
        add eax, 2
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6c08c48
        mov dword ptr ss : [ebp+0x1C], edx
        public_6c08c48 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c08d53
        mov eax, dword ptr ss : [ebp+0x18]
        mov cx, word ptr ds : [esi+0xC]
        mov word ptr ds : [eax], cx
        add eax, 2
        jmp public_6c08c82
        public_6c08c62 : nop
        mov cl, byte ptr ds : [esi+0xC]
        inc eax
        cmp eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6c08c71
        mov dword ptr ss : [ebp+0x1C], edx
        public_6c08c71 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c08d53
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        public_6c08c82 : nop
        test bl, 0x20
        mov dword ptr ss : [ebp+0x18], eax
        jne public_6c08d3e
        test bl, 0x10
        je public_6c08d0f
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        mov cl, byte ptr ds : [esi+0x10]
        inc edi
        mov eax, edi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6c08cad
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6c08cad : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c08db6
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        movzx edx, word ptr ds : [esi+0x10]
        mov edi, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edi, edx
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6c08cdd
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6c08cdd : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c08db6
        movzx eax, word ptr ds : [esi+0x10]
        mov edx, dword ptr ss : [ebp+0x18]
        mov esi, dword ptr ds : [esi+0x14]
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x14]
        add edx, eax
        mov dword ptr ss : [ebp+0x18], edx
        jmp public_6c08d3e
        public_6c08d0f : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c08d26
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6c08d26 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c08db6
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ss : [esp+0x12]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        public_6c08d3e : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x14], edi
        jne public_6c08ac0
        jmp public_6c08d95
        public_6c08d53 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c08d5f : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c08d74
        mov dword ptr ss : [ebp+0x1C], esi
        public_6c08d74 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c08d87
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c08d87 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov word ptr ds : [eax], 0
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        public_6c08d95 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        mov cl, byte ptr ss : [ebp+0x7C]
        inc esi
        mov eax, esi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], esi
        jbe public_6c08daf
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6c08daf : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c08dc5
        public_6c08db6 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c08dc5 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        mov ebx, dword ptr ss : [ebp+0x78]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6c08e3c
        public_6c08dd7 : nop
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        mov cl, byte ptr ds : [esi+8]
        inc edi
        mov eax, edi
        cmp eax, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6c08df1
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6c08df1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c08db6
        mov eax, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        fld dword ptr ds : [esi+0xC]
        fmul qword ptr ds : [public_6c0e270]
        call public_6c09ee8
        mov edi, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x14]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6c08e26
        mov dword ptr ss : [ebp+0x1C], 0x16
        public_6c08e26 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6c08db6
        mov ecx, dword ptr ss : [ebp+0x18]
        mov byte ptr ds : [ecx], al
        inc ecx
        mov dword ptr ss : [ebp+0x18], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6c08dd7
        public_6c08e3c : nop
        call dword ptr ds : [public_6c0b080]
        test al, al
        je public_6c08f2a
        mov esi, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edx, 4
        add esi, edx
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], esi
        mov esi, 0x16
        jbe public_6c08e68
        mov dword ptr ss : [ebp+0x1C], esi
        public_6c08e68 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6c08e7b
        public_6c08e6f : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c08e7b : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x88]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [ebp+0x84]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6c08f2a
        mov edi, 2
        public_6c08ea1 : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+0x14]
        add ecx, edi
        cmp ecx, ebx
        mov dword ptr ss : [ebp+0x10], ecx
        jbe public_6c08eb3
        mov dword ptr ss : [ebp+0x1C], esi
        public_6c08eb3 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6c08e6f
        mov ecx, dword ptr ss : [ebp+0x18]
        mov bx, word ptr ds : [eax+8]
        mov word ptr ds : [ecx], bx
        add ecx, 2
        mov dword ptr ss : [ebp+0x18], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+0x14]
        add ecx, edx
        cmp ecx, ebx
        mov dword ptr ss : [ebp+0x10], ecx
        jbe public_6c08edc
        mov dword ptr ss : [ebp+0x1C], esi
        public_6c08edc : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6c08e6f
        mov ecx, dword ptr ss : [ebp+0x18]
        mov ebx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [ecx], ebx
        add ecx, 4
        mov dword ptr ss : [ebp+0x18], ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+0x14]
        add ecx, edx
        cmp ecx, ebx
        mov dword ptr ss : [ebp+0x10], ecx
        jbe public_6c08f03
        mov dword ptr ss : [ebp+0x1C], esi
        public_6c08f03 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6c08e6f
        fld dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [ebp+0x18]
        fstp dword ptr ds : [ecx]
        add ecx, 4
        mov dword ptr ss : [ebp+0x18], ecx
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ss : [ebp+0x84]
        jne public_6c08ea1
        public_6c08f2a : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x6c08640)
    }
}

#undef public_6c08667
#undef public_6c0867a
#undef public_6c086aa
#undef public_6c086bd
#undef public_6c086dd
#undef public_6c086f0
#undef public_6c08712
#undef public_6c08725
#undef public_6c08747
#undef public_6c0875a
#undef public_6c0877c
#undef public_6c0878f
#undef public_6c087b3
#undef public_6c087c6
#undef public_6c087e9
#undef public_6c087fc
#undef public_6c08838
#undef public_6c0884e
#undef public_6c08875
#undef public_6c0888b
#undef public_6c0890f
#undef public_6c08922
#undef public_6c0893e
#undef public_6c08951
#undef public_6c08971
#undef public_6c08984
#undef public_6c089a4
#undef public_6c089b7
#undef public_6c089fe
#undef public_6c08a11
#undef public_6c08a39
#undef public_6c08a4c
#undef public_6c08a5a
#undef public_6c08a87
#undef public_6c08a9a
#undef public_6c08ac0
#undef public_6c08ad2
#undef public_6c08adc
#undef public_6c08aeb
#undef public_6c08af4
#undef public_6c08b00
#undef public_6c08b14
#undef public_6c08b1d
#undef public_6c08b30
#undef public_6c08b48
#undef public_6c08b78
#undef public_6c08b90
#undef public_6c08b9f
#undef public_6c08bb0
#undef public_6c08bb3
#undef public_6c08bdd
#undef public_6c08bf5
#undef public_6c08c19
#undef public_6c08c48
#undef public_6c08c62
#undef public_6c08c71
#undef public_6c08c82
#undef public_6c08cad
#undef public_6c08cdd
#undef public_6c08d0f
#undef public_6c08d26
#undef public_6c08d3e
#undef public_6c08d53
#undef public_6c08d5f
#undef public_6c08d74
#undef public_6c08d87
#undef public_6c08d95
#undef public_6c08daf
#undef public_6c08db6
#undef public_6c08dc5
#undef public_6c08dd7
#undef public_6c08df1
#undef public_6c08e26
#undef public_6c08e3c
#undef public_6c08e68
#undef public_6c08e6f
#undef public_6c08e7b
#undef public_6c08ea1
#undef public_6c08eb3
#undef public_6c08edc
#undef public_6c08f03
#undef public_6c08f2a
