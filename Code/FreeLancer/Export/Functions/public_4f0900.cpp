#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421a70);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_4cc880);
CLANG_FORWARD_PROC_SYMBOL(public_4d4220);
CLANG_FORWARD_PROC_SYMBOL(public_4d4b50);
CLANG_FORWARD_PROC_SYMBOL(public_4eeea0);
CLANG_FORWARD_PROC_SYMBOL(public_4f0900);
CLANG_FORWARD_PROC_SYMBOL(public_53eb10);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_559900);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4f0970 _public_4f0970
#define public_4f09cf _public_4f09cf
#define public_4f09d4 _public_4f09d4
#define public_4f0a09 _public_4f0a09
#define public_4f0a39 _public_4f0a39
#define public_4f0a78 _public_4f0a78
#define public_4f0a91 _public_4f0a91
#define public_4f0a9b _public_4f0a9b
#define public_4f0ad1 _public_4f0ad1
#define public_4f0ae9 _public_4f0ae9
#define public_4f0af5 _public_4f0af5
#define public_4f0b0a _public_4f0b0a
#define public_4f0b1f _public_4f0b1f
#define public_4f0b72 _public_4f0b72
#define public_4f0b80 _public_4f0b80
#define public_4f0b98 _public_4f0b98
#define public_4f0bcf _public_4f0bcf
#define public_4f0c4c _public_4f0c4c
#define public_4f0cbc _public_4f0cbc
#define public_4f0ccc _public_4f0ccc
#define public_4f0cff _public_4f0cff
#define public_4f0d0f _public_4f0d0f
#define public_4f0d6a _public_4f0d6a
#define public_4f0df0 _public_4f0df0
#define public_4f0df8 _public_4f0df8
#define public_4f0e63 _public_4f0e63
#define public_4f0e77 _public_4f0e77
#define public_4f0ed7 _public_4f0ed7
#define public_4f0f67 _public_4f0f67
#define public_4f0fae _public_4f0fae
#define public_4f0fc4 _public_4f0fc4
#define public_4f10a1 _public_4f10a1
#define public_4f10a9 _public_4f10a9
#define public_4f119b _public_4f119b
#define public_4f121c _public_4f121c
#define public_4f1265 _public_4f1265
#define public_4f1277 _public_4f1277
#define public_4f1295 _public_4f1295
#define public_4f12d9 _public_4f12d9
#define public_4f12e6 _public_4f12e6
#define public_4f12e8 _public_4f12e8
#define public_4f130a _public_4f130a
#define public_4f130c _public_4f130c
#define public_4f1372 _public_4f1372
#define public_4f1385 _public_4f1385
#define public_4f1449 _public_4f1449
#define public_4f14c0 _public_4f14c0
#define public_4f156d _public_4f156d
#define public_4f161d _public_4f161d
#define public_4f16e6 _public_4f16e6
#define public_4f17ae _public_4f17ae

PROC_DECLARE(0x4f0900, internal_4f0900, public_4f0900);
extern "C" NAKED register_t __cdecl internal_4f0900()
{
    __asm
    {
        sub esp, 0x114
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x124]
        push edi
        mov edi, dword ptr ss : [esp+0x12C]
        test dword ptr ds : [edi], 0x7F0000
        mov ebp, ecx
        je public_4f0970
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_4f17ae
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4f17ae
        mov edx, dword ptr ds : [eax+0x104]
        push 0
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        mov dword ptr ss : [esp+0x48], edx
        call dword ptr ds : [public_5c6320]
        add esp, 0xC
        test eax, eax
        jne public_4f17ae
        public_4f0970 : nop
        mov eax, dword ptr ds : [edi]
        mov dl, byte ptr ds : [edi+0x2E]
        mov ecx, eax
        shr ecx, 0x1C
        and cl, 1
        mov byte ptr ss : [esp+0x23], cl
        mov ecx, eax
        mov ebx, eax
        shr ecx, 5
        shr eax, 6
        and cl, 1
        and al, 1
        mov byte ptr ss : [esp+0x42], cl
        mov byte ptr ss : [esp+0x43], al
        mov eax, dword ptr ds : [esi]
        shr ebx, 1
        mov ecx, esi
        mov byte ptr ss : [esp+0x1B], dl
        and bl, 1
        call dword ptr ds : [eax+0x20]
        push eax
        call public_4cc880
        mov edi, dword ptr ss : [esp+0x130]
        mov byte ptr ss : [esp+0x3F], al
        mov al, byte ptr ds : [edi+0x2C]
        add esp, 4
        test al, al
        jne public_4f09cf
        mov al, byte ptr ds : [edi+0x30]
        test al, al
        mov byte ptr ss : [esp+0x12], 0
        je public_4f09d4
        public_4f09cf : nop
        mov byte ptr ss : [esp+0x12], 1
        public_4f09d4 : nop
        mov eax, dword ptr ds : [edi]
        shr eax, 9
        and al, 1
        mov byte ptr ss : [esp+0x13], al
        mov dword ptr ss : [esp+0x54], 0
        call public_54baf0
        test eax, eax
        je public_4f0a09
        mov edi, dword ptr ds : [esi]
        call public_54baf0
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edi+0x68]
        mov edi, dword ptr ss : [esp+0x12C]
        public_4f0a09 : nop
        mov al, byte ptr ss : [esp+0x130]
        test al, al
        jne public_4f0a78
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_4f0a39
        mov al, byte ptr ss : [esp+0x1B]
        test al, al
        jne public_4f0a39
        fld dword ptr ss : [esp+0x54]
        fcomp dword ptr ds : [public_5d8ed8]
        fnstsw ax
        test ah, 0x41
        jp public_4f17ae
        public_4f0a39 : nop
        test bl, bl
        jne public_4f17ae
        mov al, byte ptr ss : [esp+0x42]
        test al, al
        jne public_4f17ae
        mov al, byte ptr ss : [esp+0x43]
        test al, al
        jne public_4f17ae
        mov al, byte ptr ds : [edi+0x30]
        test al, al
        jne public_4f17ae
        mov al, byte ptr ds : [edi+0x31]
        test al, al
        je public_4f0a9b
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x114
        ret 0xC
        public_4f0a78 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        push eax
        call public_4d4220
        add esp, 4
        test al, al
        je public_4f0a91
        mov byte ptr ss : [esp+0x13], 1
        public_4f0a91 : nop
        mov dword ptr ss : [ebp+0x934], 0
        public_4f0a9b : nop
        mov al, byte ptr ss : [esp+0x130]
        fld dword ptr ds : [public_5c75dc]
        test al, al
        jne public_4f0af5
        mov al, byte ptr ss : [esp+0x23]
        fld dword ptr ds : [edi+0x28]
        test al, al
        je public_4f0ad1
        fcomp dword ptr ds : [public_5d9668]
        fnstsw ax
        test ah, 0x41
        jne public_4f0af5
        fstp st(0)
        fld dword ptr ds : [edi+0x28]
        fsub dword ptr ds : [public_5d9668]
        jmp public_4f0ae9
        public_4f0ad1 : nop
        fcomp dword ptr ds : [public_5d8d08]
        fnstsw ax
        test ah, 0x41
        jne public_4f0af5
        fstp st(0)
        fld dword ptr ds : [edi+0x28]
        fsub dword ptr ds : [public_5d8d08]
        public_4f0ae9 : nop
        fmul qword ptr ds : [public_5c75f8]
        fsubr qword ptr ds : [public_5c89b8]
        public_4f0af5 : nop
        fcom qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 5
        jp public_4f0b0a
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        public_4f0b0a : nop
        fcom qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_4f0b1f
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_4f0b1f : nop
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        mov ebx, eax
        push 0xBE2
        mov dword ptr ss : [esp+0x40], ebx
        mov byte ptr ss : [esp+0x2C], 0xC
        mov byte ptr ss : [esp+0x2D], 0x3E
        mov byte ptr ss : [esp+0x2E], 0x7A
        mov byte ptr ss : [esp+0x2F], bl
        call public_421dd0
        push 6
        push 5
        call public_4220c0
        add esp, 0xC
        call public_4101e0
        call public_54baf0
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_4f0b72
        mov eax, offset public_679b80
        jmp public_4f0b80
        public_4f0b72 : nop
        lea eax, ss:[esp+0x50]
        push esi
        push eax
        call public_4eeea0
        add esp, 8
        public_4f0b80 : nop
        mov ecx, dword ptr ds : [eax]
        mov al, byte ptr ss : [esp+0x3B]
        test al, al
        mov dword ptr ss : [esp+0x24], ecx
        je public_4f0b98
        mov edx, dword ptr ds : [public_679ba4]
        mov dword ptr ss : [esp+0x24], edx
        public_4f0b98 : nop
        mov byte ptr ss : [esp+0x27], bl
        call public_40f130
        lea ecx, ss:[esp+0x94]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [edi]
        push edi
        mov esi, eax
        call dword ptr ds : [edx+0x10]
        mov edi, eax
        mov eax, dword ptr ds : [public_674b6c]
        test eax, eax
        jne public_4f0bcf
        call public_5b73e0
        mov dword ptr ds : [public_674b6c], eax
        public_4f0bcf : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        fld dword ptr ss : [esp+0x2C]
        lea eax, ss:[esp+0x44]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x30]
        push eax
        lea ecx, ss:[esp+0xF8]
        fstp dword ptr ss : [esp+0x60]
        push ecx
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0x43340000
        call dword ptr ds : [public_5c63fc]
        lea edx, ss:[esp+0x60]
        mov esi, eax
        push edx
        lea eax, ss:[esp+0xD0]
        push eax
        call dword ptr ds : [public_5c65b0]
        mov edi, eax
        mov eax, dword ptr ds : [public_674b6c]
        add esp, 0x10
        test eax, eax
        jne public_4f0c4c
        call public_5b73e0
        mov dword ptr ds : [public_674b6c], eax
        public_4f0c4c : nop
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ss:[esp+0xA8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        fld dword ptr ss : [esp+0x2C]
        fabs 
        mov ecx, 9
        fld dword ptr ss : [esp+0x30]
        lea esi, ss:[esp+0xA0]
        fabs 
        lea edi, ss:[esp+0x64]
        fmul dword ptr ds : [public_67dc98]
        rep movsd
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_4f0ccc
        fld dword ptr ds : [public_67dc90]
        fmul dword ptr ds : [public_5c77f4]
        fptan 
        fstp st(0)
        fld dword ptr ds : [public_5d8f10]
        fchs 
        fmulp 
        fmul dword ptr ds : [public_5d9664]
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        je public_4f0cbc
        fchs 
        public_4f0cbc : nop
        fld dword ptr ss : [esp+0x30]
        fdiv dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        jmp public_4f0d0f
        public_4f0ccc : nop
        fld dword ptr ds : [public_67dc94]
        fmul dword ptr ds : [public_5c77f4]
        fptan 
        fstp st(0)
        fld dword ptr ds : [public_5d8f10]
        fchs 
        fmulp 
        fmul dword ptr ds : [public_5d9660]
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        je public_4f0cff
        fchs 
        public_4f0cff : nop
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x30]
        fdiv dword ptr ss : [esp+0x2C]
        fdivr dword ptr ss : [esp+0x48]
        public_4f0d0f : nop
        mov eax, dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x88]
        mov ecx, dword ptr ds : [public_5d8f10]
        mov dword ptr ss : [esp+0x8C], eax
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov dword ptr ss : [esp+0x90], ecx
        mov dword ptr ss : [esp+0x1C], 0
        jne public_4f0d6a
        fld dword ptr ss : [esp+0xA8]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0xB4]
        mov eax, dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        push eax
        call public_53eb10
        fstp dword ptr ss : [esp+0x24]
        add esp, 8
        public_4f0d6a : nop
        mov bl, byte ptr ss : [esp+0x130]
        test bl, bl
        jne public_4f0e63
        mov al, byte ptr ss : [esp+0x23]
        test al, al
        je public_4f0ed7
        mov eax, dword ptr ss : [ebp+0x7BC]
        test eax, eax
        je public_4f0df0
        mov eax, dword ptr ss : [ebp+0x7D0]
        test eax, eax
        je public_4f0df0
        fld dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x28]
        fadd dword ptr ds : [public_5c8a5c]
        lea edx, ss:[esp+0x88]
        fsub qword ptr ds : [public_5d9658]
        fstp dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x14]
        push esi
        push 0
        push 0x3D4CCCCD
        push ecx
        push edx
        push eax
        call public_559900
        mov edx, dword ptr ss : [ebp+0x7BC]
        push esi
        push 0
        push 0x3D4CCCCD
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0xB0]
        push ecx
        push edx
        call public_559900
        add esp, 0x30
        public_4f0df0 : nop
        mov al, byte ptr ss : [esp+0x1B]
        test al, al
        je public_4f0e63
        public_4f0df8 : nop
        mov eax, dword ptr ss : [ebp+0x7C8]
        test eax, eax
        je public_4f0e63
        mov eax, dword ptr ss : [ebp+0x7D8]
        test eax, eax
        je public_4f0e63
        fld dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x28]
        fadd dword ptr ds : [public_5c8a5c]
        lea edx, ss:[esp+0x88]
        fsub qword ptr ds : [public_5d9658]
        fstp dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x14]
        push esi
        push 0
        push 0x3D4CCCCD
        push ecx
        push edx
        push eax
        call public_559900
        mov edx, dword ptr ss : [ebp+0x7C8]
        push esi
        push 0
        push 0x3D4CCCCD
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0xB0]
        push ecx
        push edx
        call public_559900
        add esp, 0x30
        public_4f0e63 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_4f0f67
        test bl, bl
        jne public_4f119b
        public_4f0e77 : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_4f10a9
        mov ebp, dword ptr ss : [ebp+0x7C4]
        test ebp, ebp
        je public_4f10a9
        mov cl, byte ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [public_5c8a5c]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], eax
        lea edx, ss:[esp+0x14]
        fsub qword ptr ds : [public_5d9658]
        lea eax, ss:[esp+0x88]
        mov byte ptr ss : [esp+0x17], cl
        push ecx
        fstp dword ptr ss : [esp]
        push 0
        push 0x3D4CCCCD
        push edx
        push eax
        push ebp
        call public_559900
        add esp, 0x18
        jmp public_4f10a9
        public_4f0ed7 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_4f0df0
        mov al, byte ptr ss : [esp+0x1B]
        test al, al
        jne public_4f0df8
        mov eax, dword ptr ss : [ebp+0x7C0]
        test eax, eax
        je public_4f0e77
        mov eax, dword ptr ss : [ebp+0x7CC]
        test eax, eax
        je public_4f0e77
        fld dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x28]
        fadd dword ptr ds : [public_5c8a5c]
        lea edx, ss:[esp+0x88]
        fsub qword ptr ds : [public_5d9658]
        fstp dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x14]
        push esi
        push 0
        push 0x3D4CCCCD
        push ecx
        push edx
        push eax
        call public_559900
        mov edx, dword ptr ss : [ebp+0x7C0]
        push esi
        push 0
        push 0x3D4CCCCD
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0xB0]
        push ecx
        push edx
        call public_559900
        add esp, 0x30
        jmp public_4f0e77
        public_4f0f67 : nop
        mov eax, dword ptr ss : [ebp+0x7B8]
        test eax, eax
        je public_4f10a1
        mov eax, dword ptr ss : [ebp+0x7D4]
        test eax, eax
        je public_4f10a1
        test bl, bl
        push 0
        lea edx, ss:[esp+0x8C]
        lea ecx, ss:[esp+0x2C]
        push 0
        je public_4f0fae
        push 0x3DCCCCCD
        push ecx
        push edx
        push eax
        call public_559900
        push 0
        push 0
        push 0x3DCCCCCD
        jmp public_4f0fc4
        public_4f0fae : nop
        push 0x3D4CCCCD
        push ecx
        push edx
        push eax
        call public_559900
        push 0
        push 0
        push 0x3D4CCCCD
        public_4f0fc4 : nop
        mov edx, dword ptr ss : [ebp+0x7B8]
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0xB0]
        push ecx
        push edx
        call public_559900
        add esp, 0x30
        lea eax, ss:[esp+0x88]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, dword ptr ds : [public_67dbf8]
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
/*FIXUP push offset public_67dbf8 @0x4f0ffd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [ecx+0x34]
        test al, al
        je public_4f10a1
        fild dword ptr ds : [public_616840]
        fild dword ptr ds : [public_616844]
        fld dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x9C]
        fld dword ptr ss : [esp+0x2C]
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x30]
        fsub st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x9C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fsqrt 
        fstp st(2)
        fstp st(0)
        fld dword ptr ds : [public_5c7500]
        fdiv dword ptr ds : [public_5d8f10]
        fmul dword ptr ds : [public_5d9650]
        fdiv dword ptr ds : [public_67dc9c]
        fmul dword ptr ds : [public_67dc9c]
        fmul dword ptr ds : [public_67dc70]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_4f10a1
        mov edx, dword ptr ss : [esp+0x12C]
        mov dword ptr ds : [public_674b78], edx
        mov dword ptr ds : [public_674b74], 0
        public_4f10a1 : nop
        test bl, bl
        jne public_4f17ae
        public_4f10a9 : nop
        mov eax, dword ptr ss : [esp+0x88]
        mov ecx, dword ptr ss : [esp+0x8C]
        mov edx, dword ptr ss : [esp+0x90]
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ecx
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, dword ptr ds : [public_67dbf8]
        mov dword ptr ss : [esp+0x54], edx
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
/*FIXUP push offset public_67dbf8 @0x4f10e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [ecx+0x34]
        test al, al
        je public_4f17ae
        fild dword ptr ds : [public_616840]
        fild dword ptr ds : [public_616844]
        fld dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x9C]
        fld dword ptr ss : [esp+0x2C]
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x30]
        fsub st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x9C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x58]
        faddp 
        fsqrt 
        fstp st(2)
        fstp st(0)
        fld dword ptr ds : [public_5c7500]
        fdiv dword ptr ds : [public_5d8f10]
        fmul dword ptr ds : [public_5d011c]
        fdiv dword ptr ds : [public_67dc9c]
        fmul dword ptr ds : [public_67dc9c]
        fmul dword ptr ds : [public_67dc70]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_4f17ae
        mov edx, dword ptr ss : [esp+0x12C]
        mov eax, dword ptr ds : [edx+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [public_674b74], eax
        mov dword ptr ds : [public_674b78], 0
        pop ebx
        add esp, 0x114
        ret 0xC
        public_4f119b : nop
        mov eax, dword ptr ss : [ebp+0x7A4]
        test eax, eax
        je public_4f1295
        mov eax, dword ptr ss : [ebp+0x7A8]
        test eax, eax
        je public_4f1295
        mov eax, dword ptr ss : [ebp+0x7C8]
        test eax, eax
        je public_4f1295
        mov eax, dword ptr ss : [ebp+0x7AC]
        test eax, eax
        je public_4f1295
        mov cl, byte ptr ss : [esp+0x12]
        test cl, cl
        je public_4f121c
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [public_5c8a5c]
        mov dl, byte ptr ss : [esp+0x3C]
        push ecx
        mov dword ptr ss : [esp+0x18], ecx
        fsub qword ptr ds : [public_5d9658]
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x1B], dl
        lea edx, ss:[esp+0x8C]
        fstp dword ptr ss : [esp]
        push 0
        push 0x3DCCCCCD
        push ecx
        push edx
        push eax
        call public_559900
        add esp, 0x18
        public_4f121c : nop
        fld dword ptr ss : [esp+0x1C]
        mov al, byte ptr ss : [esp+0x1B]
        fadd dword ptr ds : [public_5c8a5c]
        test al, al
        lea eax, ss:[esp+0x28]
        lea ecx, ss:[esp+0x88]
        fsub qword ptr ds : [public_5d9658]
        fstp dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x14]
        push esi
        push 0
        push 0x3DCCCCCD
        push eax
        push ecx
        je public_4f1265
        mov edx, dword ptr ss : [ebp+0x7C8]
        push edx
        call public_559900
        mov edx, dword ptr ss : [ebp+0x7C8]
        jmp public_4f1277
        public_4f1265 : nop
        mov edx, dword ptr ss : [ebp+0x7A4]
        push edx
        call public_559900
        mov edx, dword ptr ss : [ebp+0x7A8]
        public_4f1277 : nop
        push esi
        push 0
        push 0x3DCCCCCD
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0xB0]
        push ecx
        push edx
        call public_559900
        add esp, 0x30
        public_4f1295 : nop
        mov esi, dword ptr ss : [esp+0x128]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_4f12e6
        mov ecx, dword ptr ds : [eax+0x4C]
        mov edx, ecx
        and edx, 3
        cmp dl, 3
        jne public_4f12e6
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_4f12d9
        mov ecx, dword ptr ds : [eax+0x88]
        test ecx, ecx
        je public_4f12d9
        mov dl, byte ptr ds : [ecx+0x94]
        test dl, dl
        je public_4f12e6
        public_4f12d9 : nop
        test byte ptr ds : [eax+0xE0], 3
        jne public_4f12e6
        mov bl, 1
        jmp public_4f12e8
        public_4f12e6 : nop
        xor bl, bl
        public_4f12e8 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ss : [esp+0x12], 0
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_4f130a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_4f130a
        mov esi, eax
        jmp public_4f130c
        public_4f130a : nop
        xor esi, esi
        public_4f130c : nop
        test esi, esi
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x14], 0
        je public_4f1372
        mov ecx, esi
        call dword ptr ds : [public_5c6504]
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_4f1372
        lea eax, ss:[esp+0x12]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        push esi
        call public_4d4b50
        fld dword ptr ss : [esp+0x4C]
        fcomp dword ptr ds : [public_5c7474]
        add esp, 0x10
        fnstsw ax
        test ah, 0x41
        jne public_4f1372
        fld dword ptr ss : [esp+0x50]
        fdiv dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x14]
        public_4f1372 : nop
        mov eax, dword ptr ds : [public_674b6c]
        test eax, eax
        jne public_4f1385
        call public_5b73e0
        mov dword ptr ds : [public_674b6c], eax
        public_4f1385 : nop
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_67dbfc @0x4f1387*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbfc
        lea edx, ss:[esp+0x68]
        push edx
        lea edx, ss:[esp+0xCC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0xF4]
        push eax
        mov ecx, 0xC
        lea esi, ss:[esp+0xC8]
        lea edi, ss:[esp+0xF8]
        push 0
        rep movsd
        call public_422690
        push 8
        call public_421670
        push 0
        push 0
        push 0
        call public_421a70
        add esp, 0x18
        test bl, bl
        je public_4f1449
        mov ecx, dword ptr ss : [ebp+0x60C]
        mov edx, dword ptr ss : [ebp+0x608]
        push ecx
        push 0
        push edx
        call public_421cc0
        fld dword ptr ss : [ebp+0x608]
        mov eax, dword ptr ss : [ebp+0x60C]
        fadd dword ptr ss : [ebp+0x610]
        add esp, 0xC
        push eax
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov ecx, dword ptr ss : [ebp+0x614]
        fld dword ptr ss : [ebp+0x608]
        fadd dword ptr ss : [ebp+0x610]
        add esp, 0xC
        push ecx
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov edx, dword ptr ss : [ebp+0x614]
        mov eax, dword ptr ss : [ebp+0x608]
        push edx
        push 0
        push eax
        call public_421cc0
        add esp, 0x18
        public_4f1449 : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_4f14c0
        mov ecx, dword ptr ss : [ebp+0x61C]
        mov edx, dword ptr ss : [ebp+0x618]
        push ecx
        push 0
        push edx
        call public_421cc0
        fld dword ptr ss : [ebp+0x618]
        mov eax, dword ptr ss : [ebp+0x61C]
        fadd dword ptr ss : [ebp+0x620]
        add esp, 0xC
        push eax
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov ecx, dword ptr ss : [ebp+0x624]
        fld dword ptr ss : [ebp+0x618]
        fadd dword ptr ss : [ebp+0x620]
        add esp, 0xC
        push ecx
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov edx, dword ptr ss : [ebp+0x624]
        mov eax, dword ptr ss : [ebp+0x618]
        push edx
        push 0
        push eax
        call public_421cc0
        add esp, 0x18
        public_4f14c0 : nop
        test bl, bl
        je public_4f156d
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4f156d
        mov eax, dword ptr ds : [public_679ba8]
        xor ecx, ecx
        mov cl, byte ptr ds : [public_679baa]
        xor edx, edx
        mov dl, ah
        push ecx
        push edx
        push eax
        call public_421a70
        mov eax, dword ptr ss : [ebp+0x60C]
        mov ecx, dword ptr ss : [ebp+0x608]
        push eax
        push 0
        push ecx
        call public_421cc0
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [ebp+0x610]
        mov edx, dword ptr ss : [ebp+0x60C]
        add esp, 0x18
        push edx
        fadd dword ptr ss : [ebp+0x608]
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [ebp+0x614]
        fmul dword ptr ss : [ebp+0x610]
        add esp, 0xC
        push eax
        push 0
        fadd dword ptr ss : [ebp+0x608]
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov ecx, dword ptr ss : [ebp+0x614]
        mov edx, dword ptr ss : [ebp+0x608]
        push ecx
        push 0
        push edx
        call public_421cc0
        add esp, 0x18
        public_4f156d : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_4f161d
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4f161d
        xor eax, eax
        mov al, byte ptr ds : [public_679b9a]
        xor ecx, ecx
        push eax
        mov eax, dword ptr ds : [public_679b98]
        mov cl, ah
        push ecx
        push eax
        call public_421a70
        mov edx, dword ptr ss : [ebp+0x61C]
        mov eax, dword ptr ss : [ebp+0x618]
        push edx
        push 0
        push eax
        call public_421cc0
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [ebp+0x620]
        mov ecx, dword ptr ss : [ebp+0x61C]
        add esp, 0x18
        push ecx
        fadd dword ptr ss : [ebp+0x618]
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [ebp+0x624]
        fmul dword ptr ss : [ebp+0x620]
        add esp, 0xC
        push edx
        push 0
        fadd dword ptr ss : [ebp+0x618]
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov eax, dword ptr ss : [ebp+0x624]
        mov ecx, dword ptr ss : [ebp+0x618]
        push eax
        push 0
        push ecx
        call public_421cc0
        add esp, 0x18
        public_4f161d : nop
        call public_421690
        test bl, bl
        je public_4f16e6
        push 7
        call public_421670
        movzx eax, byte ptr ds : [public_679baa]
        mov ecx, dword ptr ds : [public_679ba8]
        lea eax, ds:[eax+eax*2]
        cdq 
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        xor eax, eax
        mov al, ch
        lea eax, ds:[eax+eax*2]
        cdq 
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        xor eax, eax
        mov al, cl
        lea eax, ds:[eax+eax*2]
        cdq 
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        call public_421a70
        mov edx, dword ptr ss : [ebp+0x60C]
        mov eax, dword ptr ss : [ebp+0x608]
        push edx
        push 0
        push eax
        call public_421cc0
        fld dword ptr ss : [ebp+0x608]
        mov ecx, dword ptr ss : [ebp+0x60C]
        fadd dword ptr ss : [ebp+0x610]
        add esp, 0x1C
        push ecx
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov edx, dword ptr ss : [ebp+0x614]
        fld dword ptr ss : [ebp+0x608]
        fadd dword ptr ss : [ebp+0x610]
        add esp, 0xC
        push edx
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov eax, dword ptr ss : [ebp+0x614]
        mov ecx, dword ptr ss : [ebp+0x608]
        push eax
        push 0
        push ecx
        call public_421cc0
        add esp, 0x18
        call public_421690
        public_4f16e6 : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_4f17ae
        push 7
        call public_421670
        movzx eax, byte ptr ds : [public_679b9a]
        mov ecx, dword ptr ds : [public_679b98]
        lea eax, ds:[eax+eax*2]
        cdq 
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        xor eax, eax
        mov al, ch
        lea eax, ds:[eax+eax*2]
        cdq 
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        xor eax, eax
        mov al, cl
        lea eax, ds:[eax+eax*2]
        cdq 
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        call public_421a70
        mov edx, dword ptr ss : [ebp+0x61C]
        mov eax, dword ptr ss : [ebp+0x618]
        push edx
        push 0
        push eax
        call public_421cc0
        fld dword ptr ss : [ebp+0x618]
        mov ecx, dword ptr ss : [ebp+0x61C]
        fadd dword ptr ss : [ebp+0x620]
        add esp, 0x1C
        push ecx
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov edx, dword ptr ss : [ebp+0x624]
        fld dword ptr ss : [ebp+0x618]
        fadd dword ptr ss : [ebp+0x620]
        add esp, 0xC
        push edx
        push 0
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        mov eax, dword ptr ss : [ebp+0x624]
        mov ecx, dword ptr ss : [ebp+0x618]
        push eax
        push 0
        push ecx
        call public_421cc0
        add esp, 0x18
        call public_421690
        public_4f17ae : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x114
        ret 0xC
        UNREACHABLE_TRAP(0x4f0900)
    }
}

#undef public_4f0970
#undef public_4f09cf
#undef public_4f09d4
#undef public_4f0a09
#undef public_4f0a39
#undef public_4f0a78
#undef public_4f0a91
#undef public_4f0a9b
#undef public_4f0ad1
#undef public_4f0ae9
#undef public_4f0af5
#undef public_4f0b0a
#undef public_4f0b1f
#undef public_4f0b72
#undef public_4f0b80
#undef public_4f0b98
#undef public_4f0bcf
#undef public_4f0c4c
#undef public_4f0cbc
#undef public_4f0ccc
#undef public_4f0cff
#undef public_4f0d0f
#undef public_4f0d6a
#undef public_4f0df0
#undef public_4f0df8
#undef public_4f0e63
#undef public_4f0e77
#undef public_4f0ed7
#undef public_4f0f67
#undef public_4f0fae
#undef public_4f0fc4
#undef public_4f10a1
#undef public_4f10a9
#undef public_4f119b
#undef public_4f121c
#undef public_4f1265
#undef public_4f1277
#undef public_4f1295
#undef public_4f12d9
#undef public_4f12e6
#undef public_4f12e8
#undef public_4f130a
#undef public_4f130c
#undef public_4f1372
#undef public_4f1385
#undef public_4f1449
#undef public_4f14c0
#undef public_4f156d
#undef public_4f161d
#undef public_4f16e6
#undef public_4f17ae
