#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_43aff0);
CLANG_FORWARD_PROC_SYMBOL(public_43ce90);
CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_4489f0);
CLANG_FORWARD_PROC_SYMBOL(public_448a20);
CLANG_FORWARD_PROC_SYMBOL(public_449f40);
CLANG_FORWARD_PROC_SYMBOL(public_44a540);
CLANG_FORWARD_PROC_SYMBOL(public_453a40);
CLANG_FORWARD_PROC_SYMBOL(public_454eb0);
CLANG_FORWARD_PROC_SYMBOL(public_454f80);
CLANG_FORWARD_PROC_SYMBOL(public_456540);

#define public_44a54d _public_44a54d
#define public_44a562 _public_44a562
#define public_44a56d _public_44a56d
#define public_44a5da _public_44a5da
#define public_44a61f _public_44a61f
#define public_44a65a _public_44a65a
#define public_44a664 _public_44a664
#define public_44a692 _public_44a692
#define public_44a6ad _public_44a6ad
#define public_44a6bd _public_44a6bd
#define public_44a6c1 _public_44a6c1
#define public_44a6e0 _public_44a6e0
#define public_44a705 _public_44a705
#define public_44a70c _public_44a70c
#define public_44a751 _public_44a751
#define public_44a790 _public_44a790
#define public_44a7cd _public_44a7cd
#define public_44a7e2 _public_44a7e2
#define public_44a800 _public_44a800
#define public_44a87a _public_44a87a
#define public_44a890 _public_44a890
#define public_44a8ff _public_44a8ff
#define public_44a920 _public_44a920
#define public_44a998 _public_44a998
#define public_44a9c7 _public_44a9c7
#define public_44aa3f _public_44aa3f
#define public_44aa51 _public_44aa51
#define public_44ab25 _public_44ab25
#define public_44ab2c _public_44ab2c
#define public_44ab46 _public_44ab46

PROC_DECLARE(0x44a540, internal_44a540, public_44a540);
extern "C" NAKED register_t __cdecl internal_44a540()
{
    __asm
    {
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        mov esi, ecx
        xor edi, edi
        public_44a54d : nop
        mov ecx, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ds : [ecx+0x1B8]
        cmp edx, ebx
        mov dword ptr ss : [esp+0x10], edi
        jne public_44a562
        xor eax, eax
        jmp public_44a56d
        public_44a562 : nop
        mov eax, dword ptr ds : [ecx+0x1BC]
        sub eax, edx
        sar eax, 2
        public_44a56d : nop
        cmp edi, eax
        jge public_44a664
        mov eax, dword ptr ds : [ecx+0x1B8]
        mov edi, dword ptr ds : [eax+edi*4]
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        call dword ptr ds : [public_5c6234]
        add esp, 4
        test al, al
        je public_44a65a
        mov eax, dword ptr ds : [edi]
        cmp eax, 1
        jne public_44a5da
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi+0x1088]
        push edx
        lea ecx, ds:[esi+eax*4+0x1038]
        push ecx
        call dword ptr ds : [public_5c60cc]
        mov edx, dword ptr ds : [esi+0x1088]
        mov edi, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [edx+esi+0x1078], 1
        mov eax, dword ptr ds : [esi+0x1088]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+0x1088], eax
        inc edi
        jmp public_44a54d
        public_44a5da : nop
        cmp eax, 2
        jne public_44a61f
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [esi+0x10DC]
        push eax
        lea edx, ds:[esi+ecx*4+0x108C]
        push edx
        call dword ptr ds : [public_5c60cc]
        mov eax, dword ptr ds : [esi+0x10DC]
        mov edi, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [eax+esi+0x10CC], 1
        mov eax, dword ptr ds : [esi+0x10DC]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+0x10DC], eax
        inc edi
        jmp public_44a54d
        public_44a61f : nop
        cmp eax, 3
        jne public_44a65a
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi+0x1130]
        push ecx
        lea eax, ds:[esi+edx*4+0x10E0]
        push eax
        call dword ptr ds : [public_5c60cc]
        mov ecx, dword ptr ds : [esi+0x1130]
        mov byte ptr ds : [ecx+esi+0x1120], 1
        mov eax, dword ptr ds : [esi+0x1130]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+0x1130], eax
        public_44a65a : nop
        mov edi, dword ptr ss : [esp+0x10]
        inc edi
        jmp public_44a54d
        public_44a664 : nop
        mov edx, dword ptr ds : [esi+0x38]
        push edx
        mov ecx, offset public_668708
        call public_43aff0
        mov ebp, eax
        push 1
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x24], ebx
        call public_43ce90
        test al, al
        je public_44a6ad
        public_44a692 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push 1
        lea ecx, ss:[esp+0x20]
        inc eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_43ce90
        test al, al
        jne public_44a692
        public_44a6ad : nop
        cmp dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], ebx
        jle public_44a7e2
        jmp public_44a6c1
        public_44a6bd : nop
        mov ebp, dword ptr ss : [esp+0x20]
        public_44a6c1 : nop
        push 1
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebp
        xor edi, edi
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        call public_43ce90
        test al, al
        je public_44a70c
        lea ecx, ds:[ecx]
        public_44a6e0 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ss : [esp+0x10]
        je public_44a705
        push 1
        lea ecx, ss:[esp+0x20]
        inc eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x20], eax
        call public_43ce90
        test al, al
        jne public_44a6e0
        jmp public_44a70c
        public_44a705 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [edx+8]
        public_44a70c : nop
        mov eax, dword ptr ds : [edi+8]
        cmp eax, 1
        jne public_44a751
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [esi+0x1088]
        push eax
        lea edx, ds:[esi+ecx*4+0x1038]
        push edx
        call dword ptr ds : [public_5c60cc]
        mov eax, dword ptr ds : [esi+0x1088]
        mov cl, byte ptr ds : [edi+0xC]
        mov byte ptr ds : [eax+esi+0x1078], cl
        mov eax, dword ptr ds : [esi+0x1088]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+0x1088], eax
        jmp public_44a7cd
        public_44a751 : nop
        cmp eax, 2
        jne public_44a790
        mov edx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [esi+0x10DC]
        push edx
        lea ecx, ds:[esi+eax*4+0x108C]
        push ecx
        call dword ptr ds : [public_5c60cc]
        mov al, byte ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [esi+0x10DC]
        mov byte ptr ds : [edx+esi+0x10CC], al
        mov eax, dword ptr ds : [esi+0x10DC]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+0x10DC], eax
        jmp public_44a7cd
        public_44a790 : nop
        cmp eax, 3
        jne public_44a7cd
        mov ecx, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [esi+0x1130]
        push ecx
        lea eax, ds:[esi+edx*4+0x10E0]
        push eax
        call dword ptr ds : [public_5c60cc]
        mov ecx, dword ptr ds : [esi+0x1130]
        mov dl, byte ptr ds : [edi+0xC]
        mov byte ptr ds : [ecx+esi+0x1120], dl
        mov eax, dword ptr ds : [esi+0x1130]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+0x1130], eax
        public_44a7cd : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_44a6bd
        public_44a7e2 : nop
        mov eax, dword ptr ds : [esi+0x1088]
        xor ebp, ebp
        cmp eax, ebx
        jle public_44a87a
        lea eax, ds:[esi+0x1038]
        mov dword ptr ss : [esp+0x1C], eax
        lea esp, ss:[esp]
        public_44a800 : nop
        push 1
        push esi
        mov ecx, offset public_66d2d0
        call public_456540
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x30]
        mov edi, eax
        mov dword ptr ss : [esp+0x20], edx
        call dword ptr ds : [public_5c6218]
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c6184]
        mov ecx, dword ptr ss : [esp+0x20]
        push ebx
        lea eax, ss:[esp+0x34]
        push eax
        push ebx
        push ecx
        mov ecx, edi
        call public_454eb0
        mov dword ptr ds : [edi], ebx
        mov byte ptr ds : [edi+4], 1
        mov byte ptr ds : [edi+6], bl
        mov byte ptr ds : [edi+8], 1
        mov byte ptr ds : [edi+9], bl
        mov dword ptr ds : [edi+0x10], ebx
        mov dl, byte ptr ds : [esi+ebp+0x1078]
        mov ecx, edi
        mov byte ptr ds : [edi+0xD], dl
        call public_454f80
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+0x1088]
        inc ebp
        add ecx, 4
        cmp ebp, eax
        mov dword ptr ss : [esp+0x1C], ecx
        jl public_44a800
        public_44a87a : nop
        mov eax, dword ptr ds : [esi+0x10DC]
        xor ebp, ebp
        cmp eax, ebx
        jle public_44a8ff
        lea eax, ds:[esi+0x108C]
        mov dword ptr ss : [esp+0x1C], eax
        public_44a890 : nop
        push ebx
        push esi
        mov ecx, offset public_66d2d0
        call public_456540
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x30]
        mov edi, eax
        mov dword ptr ss : [esp+0x20], edx
        call dword ptr ds : [public_5c6184]
        mov ecx, dword ptr ss : [esp+0x20]
        push ebx
        lea eax, ss:[esp+0x34]
        push eax
        push 5
        push ecx
        mov ecx, edi
        call public_454eb0
        mov dword ptr ds : [edi], ebx
        mov byte ptr ds : [edi+4], bl
        mov byte ptr ds : [edi+6], bl
        mov byte ptr ds : [edi+8], 1
        mov byte ptr ds : [edi+9], bl
        mov dword ptr ds : [edi+0x10], ebx
        mov dl, byte ptr ds : [esi+ebp+0x10CC]
        mov ecx, edi
        mov byte ptr ds : [edi+0xD], dl
        call public_454f80
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+0x10DC]
        inc ebp
        add ecx, 4
        cmp ebp, eax
        mov dword ptr ss : [esp+0x1C], ecx
        jl public_44a890
        public_44a8ff : nop
        mov eax, dword ptr ds : [esi+0x1130]
        xor ebp, ebp
        cmp eax, ebx
        jle public_44a998
        lea eax, ds:[esi+0x10E0]
        mov dword ptr ss : [esp+0x1C], eax
        lea esp, ss:[esp]
        public_44a920 : nop
        push ebx
        push esi
        mov ecx, offset public_66d2d0
        call public_456540
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x30]
        mov edi, eax
        mov dword ptr ss : [esp+0x20], edx
        call dword ptr ds : [public_5c6218]
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c6184]
        mov ecx, dword ptr ss : [esp+0x20]
        push ebx
        lea eax, ss:[esp+0x34]
        push eax
        push ebx
        push ecx
        mov ecx, edi
        call public_454eb0
        mov dword ptr ds : [edi], ebx
        mov byte ptr ds : [edi+4], bl
        mov byte ptr ds : [edi+6], bl
        mov byte ptr ds : [edi+8], 1
        mov byte ptr ds : [edi+9], bl
        mov dword ptr ds : [edi+0x10], ebx
        mov dl, byte ptr ds : [esi+ebp+0x1120]
        mov ecx, edi
        mov byte ptr ds : [edi+0xD], dl
        call public_454f80
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+0x1130]
        inc ebp
        add ecx, 4
        cmp ebp, eax
        mov dword ptr ss : [esp+0x1C], ecx
        jl public_44a920
        public_44a998 : nop
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_449f40
        test al, al
        jne public_44ab46
        lea ecx, ds:[esi+0x1020]
        call public_448a20
        test al, al
        je public_44a9c7
        mov byte ptr ds : [esi+0x515], 1
        public_44a9c7 : nop
        call public_446be0
        test eax, eax
        je public_44aa3f
        mov eax, dword ptr ds : [esi+0x40]
        mov ebp, dword ptr ds : [eax+0xB8]
        cmp ebp, ebx
        mov eax, dword ptr ds : [eax+0xBC]
        je public_44aa3f
        push eax
        call dword ptr ds : [public_5c6234]
        add esp, 4
        test al, al
        je public_44aa3f
        push ebx
        push esi
        mov ecx, offset public_66d2d0
        call public_456540
        lea ecx, ss:[esp+0x30]
        mov edi, eax
        call dword ptr ds : [public_5c6184]
        push ebx
        lea edx, ss:[esp+0x34]
        push edx
        push ebx
        push ebp
        mov ecx, edi
        call public_454eb0
        mov ecx, edi
        mov byte ptr ds : [edi+0x14], 1
        mov dword ptr ds : [edi], ebx
        mov byte ptr ds : [edi+6], 1
        mov byte ptr ds : [edi+8], 1
        mov byte ptr ds : [edi+9], 1
        mov dword ptr ds : [edi+0x10], ebx
        mov byte ptr ds : [edi+0x16], 1
        call public_454f80
        mov byte ptr ds : [esi+0x515], 1
        public_44aa3f : nop
        lea eax, ds:[esi+0x518]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x20], 0x40
        public_44aa51 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ebx
        je public_44ab2c
        mov eax, dword ptr ds : [eax+0x1BC]
        cmp eax, 0xFFFFFFFF
        je public_44ab2c
        mov edx, dword ptr ds : [esi+0x508]
        mov eax, dword ptr ds : [edx+eax*8]
        mov ebp, dword ptr ds : [eax+0x40]
        cmp ebp, ebx
        je public_44ab2c
        cmp byte ptr ss : [ebp], bl
        je public_44ab2c
        push ebx
        push esi
        mov ecx, offset public_66d2d0
        call public_456540
        mov edi, eax
        cmp edi, ebx
        je public_44ab25
        mov dword ptr ss : [esp+0x24], 0
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], 0
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], 0
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x30], ecx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x38], eax
        call public_4215b0
        push ebx
        lea ecx, ss:[esp+0x34]
        push ecx
        push ebx
        push ebp
        mov ecx, edi
        call public_454eb0
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx]
        push ebx
        push eax
        lea ecx, ds:[edi+0x114]
        call public_453a40
        mov ecx, edi
        mov dword ptr ds : [edi], 1
        mov byte ptr ds : [edi+6], 1
        mov byte ptr ds : [edi+8], 1
        mov byte ptr ds : [edi+0xE], bl
        mov byte ptr ds : [edi+9], 1
        mov dword ptr ds : [edi+0x10], ebx
        mov byte ptr ds : [edi+0xA], bl
        mov byte ptr ds : [edi+0xB], bl
        mov byte ptr ds : [edi+0x16], 1
        call public_454f80
        public_44ab25 : nop
        mov byte ptr ds : [esi+0x515], 1
        public_44ab2c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x20]
        add ecx, 4
        dec eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x20], eax
        jne public_44aa51
        public_44ab46 : nop
        push ebx
        call public_4489f0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x44a540)
    }
}

#undef public_44a54d
#undef public_44a562
#undef public_44a56d
#undef public_44a5da
#undef public_44a61f
#undef public_44a65a
#undef public_44a664
#undef public_44a692
#undef public_44a6ad
#undef public_44a6bd
#undef public_44a6c1
#undef public_44a6e0
#undef public_44a705
#undef public_44a70c
#undef public_44a751
#undef public_44a790
#undef public_44a7cd
#undef public_44a7e2
#undef public_44a800
#undef public_44a87a
#undef public_44a890
#undef public_44a8ff
#undef public_44a920
#undef public_44a998
#undef public_44a9c7
#undef public_44aa3f
#undef public_44aa51
#undef public_44ab25
#undef public_44ab2c
#undef public_44ab46
