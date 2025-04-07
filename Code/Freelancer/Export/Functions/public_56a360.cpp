#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411d60);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_46b2b0);
CLANG_FORWARD_PROC_SYMBOL(public_564570);
CLANG_FORWARD_PROC_SYMBOL(public_56abb0);
CLANG_FORWARD_PROC_SYMBOL(public_579280);
CLANG_FORWARD_PROC_SYMBOL(public_579290);
CLANG_FORWARD_PROC_SYMBOL(public_579890);
CLANG_FORWARD_PROC_SYMBOL(public_579a90);
CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);
CLANG_FORWARD_PROC_SYMBOL(public_58d540);
CLANG_FORWARD_PROC_SYMBOL(public_5a8260);
CLANG_FORWARD_PROC_SYMBOL(public_5ab0e0);

#define public_56a376 _public_56a376
#define public_56a386 _public_56a386
#define public_56a38b _public_56a38b
#define public_56a391 _public_56a391
#define public_56a3d0 _public_56a3d0
#define public_56a551 _public_56a551
#define public_56a690 _public_56a690
#define public_56a697 _public_56a697
#define public_56a6b0 _public_56a6b0
#define public_56a6b8 _public_56a6b8
#define public_56a6c8 _public_56a6c8
#define public_56a6cc _public_56a6cc
#define public_56a7ca _public_56a7ca
#define public_56a807 _public_56a807
#define public_56a80f _public_56a80f
#define public_56a9df _public_56a9df
#define public_56aa78 _public_56aa78
#define public_56aa89 _public_56aa89
#define public_56aaf4 _public_56aaf4
#define public_56aafb _public_56aafb
#define public_56ab98 _public_56ab98
#define public_56ab9d _public_56ab9d

PROC_DECLARE(0x56a360, internal_56a360, public_56a360);
extern "C" NAKED register_t __cdecl internal_56a360()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push esi
        push edi
        mov esi, ecx
        call public_56abb0
        mov ecx, dword ptr ds : [esi+0xC]
        xor ebx, ebx
        cmp ecx, ebx
        je public_56a391
        public_56a376 : nop
        test byte ptr ds : [ecx+0x6C], 1
        mov edi, dword ptr ds : [ecx+8]
        je public_56a386
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_56a38b
        public_56a386 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_56a38b : nop
        cmp edi, ebx
        mov ecx, edi
        jne public_56a376
        public_56a391 : nop
        fld qword ptr ds : [esi+0x5E8]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        mov al, byte ptr ds : [esi+0x5F0]
        test ah, 5
        jp public_56a807
        cmp al, bl
        jne public_56a80f
        call public_42d680
        fcom qword ptr ds : [public_5c75e8]
        fnstsw ax
        test ah, 0x41
        jne public_56a3d0
        fstp st(0)
        fld qword ptr ds : [public_5c75e8]
        public_56a3d0 : nop
        fmul qword ptr ds : [public_5e2a58]
        fadd qword ptr ds : [esi+0x5E8]
        fcom qword ptr ds : [public_5c8ba8]
        fst qword ptr ds : [esi+0x5E8]
        fnstsw ax
        test ah, 5
        jp public_56a551
        mov ecx, dword ptr ds : [esi+0x2C0]
        fld st(0)
        fst dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x2C], eax
        push ebx
        fchs 
        lea eax, ss:[esp+0x14]
        push eax
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        fstp dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x38], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x2C4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x2C8]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x2CC]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x2D0]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        push 0x3F99999A
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        call public_411d60
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ds:[esi+0x5C0]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        call public_423b30
        mov ecx, dword ptr ds : [esi+0x2D4]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x18
        lea edx, ss:[esp+0x40]
        push edx
        call dword ptr ds : [eax+0x14]
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ds:[esi+0x5CC]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        call public_423b30
        mov ecx, dword ptr ds : [esi+0x2D8]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        lea edx, ss:[esp+0x40]
        push edx
        call dword ptr ds : [eax+0x14]
        push 0x3F99999A
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        call public_411d60
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ds:[esi+0x5D8]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        call public_423b30
        mov ecx, dword ptr ds : [esi+0x2DC]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x18
        lea eax, ss:[esp+0x34]
        push eax
        call dword ptr ds : [edx+0x14]
        jmp public_56a7ca
        public_56a551 : nop
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_56a7ca
        mov ecx, dword ptr ds : [esi+0x2C0]
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x2C4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x2C8]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x2CC]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x2D0]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x2D4]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x5C0]
        push eax
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [esi+0x2D8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x5CC]
        push eax
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [esi+0x2DC]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x5D8]
        push eax
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [esi+0x2C0]
        push ebx
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x2C4]
        push ebx
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x2C8]
        push ebx
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x2CC]
        push ebx
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x2D0]
        push ebx
        call public_579a90
        mov eax, dword ptr ds : [esi+0x2E4]
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 3
        or dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x2E8]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x2E0]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x2B8]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [public_67e970]
        xor edx, edx
        cmp eax, ebx
        je public_56a697
        public_56a690 : nop
        mov eax, dword ptr ds : [eax]
        inc edx
        cmp eax, ebx
        jne public_56a690
        public_56a697 : nop
        mov eax, dword ptr ds : [esi+0x2B8]
        mov edi, dword ptr ds : [eax+0x4A4]
        add eax, 0x4A0
        cmp edi, ebx
        jne public_56a6b0
        xor eax, eax
        jmp public_56a6b8
        public_56a6b0 : nop
        mov eax, dword ptr ds : [eax+8]
        sub eax, edi
        sar eax, 2
        public_56a6b8 : nop
        dec eax
        cmp edx, eax
        mov eax, dword ptr ds : [esi+0x2BC]
        jle public_56a6c8
        or byte ptr ds : [eax+0x6C], cl
        jmp public_56a6cc
        public_56a6c8 : nop
        and byte ptr ds : [eax+0x6C], 0xFC
        public_56a6cc : nop
        mov ecx, dword ptr ds : [esi+0x2C0]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2C0]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB8]
        mov dword ptr ds : [eax+4], 0xAD5
        mov ecx, dword ptr ds : [esi+0x2C4]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2C4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xB8]
        mov dword ptr ds : [eax+4], 0xAD6
        mov ecx, dword ptr ds : [esi+0x2C8]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2C8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB8]
        mov dword ptr ds : [eax+4], 0xAD7
        mov ecx, dword ptr ds : [esi+0x2CC]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2CC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xB8]
        mov dword ptr ds : [eax+4], 0xAD4
        mov ecx, dword ptr ds : [esi+0x2D0]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2D0]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB8]
        mov dword ptr ds : [eax+4], 0xAC6
        mov ecx, dword ptr ds : [esi+0x2E4]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2E4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xB8]
        mov dword ptr ds : [eax+4], 0xAC8
        mov ecx, dword ptr ds : [esi+0x2E8]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2E8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB8]
        mov dword ptr ds : [eax+4], 0xAE4
        mov dword ptr ds : [esi+0x5E8], ebx
        mov dword ptr ds : [esi+0x5EC], 0x40000000
        public_56a7ca : nop
        fld qword ptr ds : [esi+0x5E8]
        fcomp qword ptr ds : [public_5e2a50]
        fnstsw ax
        test ah, 0x41
        jne public_56aafb
        fld qword ptr ds : [esi+0x5E8]
        fcomp qword ptr ds : [public_5d5070]
        fnstsw ax
        test ah, 5
        jp public_56aafb
        push 0x1B
        call public_564570
        add esp, 4
        jmp public_56aafb
        public_56a807 : nop
        cmp al, bl
        je public_56aafb
        public_56a80f : nop
        call public_42d680
        fmul qword ptr ds : [public_5d3c48]
        mov ecx, dword ptr ds : [esi+0x2C0]
        fsubr qword ptr ds : [esi+0x5E8]
        fcom qword ptr ds : [public_5e1b90]
        fst qword ptr ds : [esi+0x5E8]
        fnstsw ax
        test ah, 0x41
        jne public_56a9df
        fld st(0)
        push ebx
        fst dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x3C], eax
        lea eax, ss:[esp+0x14]
        fchs 
        push eax
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov edx, dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0x48]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x2C4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x2C8]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x2CC]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x2D0]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [public_5c9800]
        push ebx
        push ebx
        push ecx
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [esi+0x5C8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [esi+0x5C4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [esi+0x5C0]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ds : [esi+0x2D4]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x40]
        push eax
        call dword ptr ds : [edx+0x14]
        fld dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [esi+0x5D4]
        fadd dword ptr ds : [esi+0x5D0]
        mov edx, dword ptr ds : [esi+0x5CC]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        lea ecx, ss:[esp+0x4C]
        call public_422b80
        mov ecx, dword ptr ds : [esi+0x2D8]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x40]
        push edx
        call dword ptr ds : [eax+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5c9800]
        sub esp, 0xC
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c9800]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c9800]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x30]
        sub esp, 0xC
        fadd dword ptr ds : [esi+0x5E0]
        lea ecx, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [esi+0x5DC]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [esi+0x5D8]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov ecx, dword ptr ds : [esi+0x2DC]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x40]
        push edx
        call dword ptr ds : [eax+0x14]
        jmp public_56aafb
        public_56a9df : nop
        mov dl, byte ptr ds : [ecx+0x6C]
        fstp st(0)
        mov al, 0xFC
        and dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0x2C4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x2C8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x2CC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x2D0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x2E4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x2E8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x2E0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x2D4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x2D8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x2DC]
        and byte ptr ds : [ecx+0x6C], al
        mov eax, dword ptr ds : [esi+0x5F4]
        cmp eax, 1
        mov byte ptr ds : [esi+0x5F0], bl
        je public_56aaf4
        cmp eax, 2
        je public_56aa89
        cmp eax, 0xFFFFFFFE
        je public_56aa78
        call public_5a8260
        mov dword ptr ds : [esi+0x2B4], 4
        jmp public_56aafb
        public_56aa78 : nop
        call public_5a8260
        mov dword ptr ds : [esi+0x2B4], 1
        jmp public_56aafb
        public_56aa89 : nop
        xor eax, eax
        mov ecx, 0x11
        mov edi, offset public_67bcf8
        rep stosd
        mov ecx, offset public_67e7b8
        mov dword ptr ds : [public_67bd38], ebx
        call public_5ab0e0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_67bd38]
        lea ecx, ds:[ecx+ecx*4]
        shl ecx, 4
        mov eax, dword ptr ds : [ecx+edx]
        add ecx, edx
        mov dword ptr ds : [public_67bd28], eax
        mov edx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [public_67bd2c], edx
        mov eax, dword ptr ds : [ecx+0x2C]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [public_67bd30], eax
        mov ecx, dword ptr ds : [ecx+0x40]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [public_67bd34], eax
        mov dword ptr ds : [esi+0x2B4], 0xE
        jmp public_56aafb
        public_56aaf4 : nop
        mov byte ptr ds : [esi+0x5F8], 1
        public_56aafb : nop
        cmp byte ptr ds : [esi+0x5F9], bl
        je public_56ab9d
        cmp byte ptr ds : [esi+0x599], bl
        mov byte ptr ds : [esi+0x5F9], bl
        mov byte ptr ds : [esi+0x5F8], bl
        jne public_56ab9d
        push 1
        call public_579280
        add esp, 4
        call public_579290
        mov ecx, dword ptr ds : [esi+0x2B8]
        lea edx, ss:[esp+0xC]
        push edx
        call public_58d540
        test al, al
        je public_56ab9d
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x2B8]
        push eax
        call public_58d0b0
        mov eax, dword ptr ds : [eax+8]
        cmp eax, ebx
        je public_56ab9d
        mov ebx, dword ptr ds : [public_5c63cc]
        add eax, 8
        lea edi, ds:[esi+0x399]
        push eax
        mov ecx, edi
        mov byte ptr ds : [esi+0x599], 1
        call ebx
        mov dword ptr ds : [esi+0x2B4], 0xC
        add esi, 0x8C
        push esi
        push edi
        call dword ptr ds : [public_5c6bd8]
        add esp, 8
        test al, al
        je public_56ab98
        call public_46b2b0
        public_56ab98 : nop
        push edi
        mov ecx, esi
        call ebx
        public_56ab9d : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x56a360)
    }
}

#undef public_56a376
#undef public_56a386
#undef public_56a38b
#undef public_56a391
#undef public_56a3d0
#undef public_56a551
#undef public_56a690
#undef public_56a697
#undef public_56a6b0
#undef public_56a6b8
#undef public_56a6c8
#undef public_56a6cc
#undef public_56a7ca
#undef public_56a807
#undef public_56a80f
#undef public_56a9df
#undef public_56aa78
#undef public_56aa89
#undef public_56aaf4
#undef public_56aafb
#undef public_56ab98
#undef public_56ab9d
