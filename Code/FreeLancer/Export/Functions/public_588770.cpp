#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fa10);
CLANG_FORWARD_PROC_SYMBOL(public_40fb60);
CLANG_FORWARD_PROC_SYMBOL(public_40fb80);
CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_420fb0);
CLANG_FORWARD_PROC_SYMBOL(public_420fd0);
CLANG_FORWARD_PROC_SYMBOL(public_421620);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422390);
CLANG_FORWARD_PROC_SYMBOL(public_422610);
CLANG_FORWARD_PROC_SYMBOL(public_422910);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_434630);
CLANG_FORWARD_PROC_SYMBOL(public_434670);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_59e5c0);
CLANG_FORWARD_PROC_SYMBOL(public_59efa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_5887e7 _public_5887e7
#define public_5887f0 _public_5887f0
#define public_588803 _public_588803
#define public_588827 _public_588827
#define public_588870 _public_588870
#define public_588997 _public_588997
#define public_58899f _public_58899f
#define public_588a99 _public_588a99
#define public_588bd6 _public_588bd6
#define public_588c0d _public_588c0d
#define public_588c14 _public_588c14
#define public_588c21 _public_588c21
#define public_588c29 _public_588c29
#define public_588c68 _public_588c68
#define public_588c7f _public_588c7f
#define public_588cd5 _public_588cd5
#define public_588ce2 _public_588ce2
#define public_588cec _public_588cec

PROC_DECLARE(0x588770, internal_588770, public_588770);
extern "C" NAKED register_t __cdecl internal_588770()
{
    __asm
    {
        sub esp, 0x90
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call public_59e5c0
        push 9
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_588cec
        push 6
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_588cec
        push 0x15
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_588cec
        call public_4101e0
        mov ecx, dword ptr ds : [esi+0x84]
        cmp ecx, 0xFFFFFFFF
        je public_588ce2
        mov al, byte ptr ds : [esi+0x348]
        test al, al
        je public_5887e7
        mov edx, dword ptr ds : [esi+0x414]
        mov eax, dword ptr ds : [esi+0x410]
        mov dword ptr ss : [esp+0x18], edx
        jmp public_5887f0
        public_5887e7 : nop
        mov eax, dword ptr ds : [public_679bb0]
        mov dword ptr ss : [esp+0x18], eax
        public_5887f0 : nop
        mov dword ptr ss : [esp+0x14], eax
        test byte ptr ds : [esi+0x6C], 1
        jne public_588803
        mov eax, dword ptr ds : [public_679b94]
        mov dword ptr ss : [esp+0x18], eax
        public_588803 : nop
        mov al, byte ptr ds : [esi+0x346]
        test al, al
        je public_588827
        mov al, 0xFF
        mov byte ptr ss : [esp+0x14], al
        mov byte ptr ss : [esp+0x15], al
        mov byte ptr ss : [esp+0x16], al
        mov byte ptr ss : [esp+0x17], al
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], edx
        public_588827 : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea edi, ss:[esp+0x94]
        push edi
        lea edi, ss:[esp+0x54]
        push edi
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x88]
        fld dword ptr ds : [esi+0x418]
        fcomp dword ptr ds : [public_5c7474]
        mov dword ptr ss : [esp+0x10], 0x3F800000
        fnstsw ax
        test ah, 0x44
        jnp public_588870
        fld dword ptr ds : [esi+0x418]
        fdiv dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x10]
        public_588870 : nop
        mov al, byte ptr ds : [esi+0x34B]
        test al, al
        mov edi, offset public_67dbf8
        je public_588a99
        lea eax, ss:[esp+0x84]
        push eax
        push 0xBA2
        call public_422390
        lea ebx, ds:[esi+0x80]
        add esp, 8
        mov ecx, ebx
        call public_420fb0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], ecx
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [esi+0xB4]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x2C], edx
        mov eax, dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x1C]
        fsub dword ptr ds : [esi+0xB8]
        push ecx
        mov dword ptr ss : [esp+0x34], eax
        lea edx, ss:[esp+0x40]
        push edx
        mov edx, dword ptr ds : [public_67dbf8]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x38]
        lea eax, ss:[esp+0x40]
        fsub dword ptr ds : [esi+0xBC]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        fstp dword ptr ss : [esp+0x34]
/*FIXUP push offset public_67dbf8 @0x5888fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [edx+0x34]
        fld dword ptr ss : [esp+0x34]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x40], eax
        call public_5b7ec0
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [esi+0xB4]
        mov dword ptr ss : [esp+0x4C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x40]
        fadd dword ptr ds : [esi+0xB8]
        push ecx
        mov ecx, dword ptr ds : [public_67dbf8]
        lea edx, ss:[esp+0x40]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x38]
        push edx
        fadd dword ptr ds : [esi+0xBC]
        lea eax, ss:[esp+0x40]
        push eax
/*FIXUP push offset public_67dbf8 @0x58895f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        fstp dword ptr ss : [esp+0x38]
        call dword ptr ds : [ecx+0x34]
        fld dword ptr ss : [esp+0x34]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x38]
        mov edi, eax
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+0x40]
        test ecx, ecx
        jl public_588997
        test eax, eax
        jl public_588997
        test edi, edi
        jl public_588997
        mov edx, dword ptr ss : [esp+0x4C]
        test edx, edx
        jge public_58899f
        public_588997 : nop
        xor edx, edx
        xor edi, edi
        xor eax, eax
        xor ecx, ecx
        public_58899f : nop
        mov ebp, dword ptr ds : [public_610854]
        add eax, 2
        add ecx, 2
        sub edi, 2
        sub edx, 2
        cmp eax, ebp
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x48], edi
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x4C], edx
        jge public_588cec
        cmp edx, ebp
        jge public_588cec
        mov ebp, dword ptr ds : [public_610850]
        cmp ecx, ebp
        jge public_588cec
        cmp edi, ebp
        jge public_588cec
        test ecx, ecx
        jl public_588cec
        test edi, edi
        jl public_588cec
        test eax, eax
        jl public_588cec
        test edx, edx
        jl public_588cec
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0xC2AE0000
        call public_420fd0
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        push 1
        lea eax, ss:[esp+0x44]
        lea edi, ds:[esi+0x350]
        push eax
        mov ecx, edi
        call public_40fb80
        fld dword ptr ds : [public_67dca0]
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [public_67dc9c]
        mov ecx, edi
        fstp dword ptr ss : [esp]
        call public_40fb60
        push 0x420C0000
        mov ecx, edi
        call public_40fa10
        push 0x13D
/*FIXUP push offset public_5e4ec0 @0x588a85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4ec0
        push edi
        call public_422610
        push edi
        call public_422910
        add esp, 0x10
        public_588a99 : nop
        mov al, byte ptr ds : [esi+0x344]
        test al, al
        mov ebx, dword ptr ss : [esp+0x10]
        jne public_588c29
        mov eax, dword ptr ss : [esp+0x14]
        xor ecx, ecx
        mov cl, al
        xor edx, edx
        mov dl, ah
        mov ax, word ptr ss : [esp+0x16]
        lea ebp, ds:[esi+0x80]
        push 0xB71
        mov dword ptr ss : [esp+0x14], ecx
        fild dword ptr ss : [esp+0x14]
        xor ecx, ecx
        mov dword ptr ss : [esp+0x14], edx
        mov cl, al
        fmul dword ptr ds : [public_5c7f68]
        xor edx, edx
        mov dl, ah
        fstp dword ptr ss : [ebp+0x14]
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], ecx
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [ebp+0x18]
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], edx
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [ebp+0x1C]
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [ebp+0x24]
        mov al, byte ptr ds : [esi+0x2D1]
        test al, al
        je public_588c14
        call public_421dd0
        mov al, byte ptr ds : [esi+0x34C]
        add esp, 4
        test al, al
        je public_588c0d
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 8
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_67c53c]
        test eax, eax
        mov dword ptr ss : [esp+0x74], 0x3F800000
        mov dword ptr ss : [esp+0x64], 0x3F800000
        mov dword ptr ss : [esp+0x54], 0x3F800000
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x80], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x78], 0
        jne public_588bd6
        call public_5b73e0
        mov dword ptr ds : [public_67c53c], eax
        public_588bd6 : nop
        mov edx, dword ptr ds : [eax]
        push ebx
        lea ecx, ss:[esp+0x58]
        push ecx
        lea ecx, ss:[esp+0x5C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        lea edx, ss:[esp+0x58]
        push edx
        mov edx, dword ptr ds : [esi+0x84]
        push 0x30
        push 0x3F800000
        push edx
        push edi
        push eax
        call dword ptr ds : [ecx+0x1C]
        jmp public_588c29
        public_588c0d : nop
        push 0
        push ebx
        push 1
        jmp public_588c21
        public_588c14 : nop
        call public_421ed0
        add esp, 4
        push 0
        push ebx
        push 0
        public_588c21 : nop
        mov ecx, ebp
        push edi
        call public_59efa0
        public_588c29 : nop
        push 0xB71
        call public_421ed0
        mov al, byte ptr ds : [esi+0x345]
        add esp, 4
        test al, al
        jne public_588c7f
        mov al, byte ptr ds : [esi+0x2D1]
        test al, al
        push 0
        push ebx
        je public_588c68
        mov ecx, dword ptr ds : [esi+0x84]
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        push 1
        push ecx
        push edi
        call public_434630
        add esp, 0x1C
        jmp public_588c7f
        public_588c68 : nop
        mov eax, dword ptr ds : [esi+0x84]
        lea edx, ss:[esp+0x20]
        push edx
        push 1
        push eax
        push edi
        call public_434670
        add esp, 0x18
        public_588c7f : nop
        mov al, byte ptr ds : [esi+0x34B]
        test al, al
        je public_588cd5
/*FIXUP push offset public_67dbf8 @0x588c89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422950
        mov ecx, dword ptr ss : [esp+0x94]
        mov edx, dword ptr ss : [esp+0x90]
        mov eax, dword ptr ss : [esp+0x8C]
        push 0x185
/*FIXUP push offset public_5e4ec0 @0x588cad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4ec0
        push ecx
        mov ecx, dword ptr ss : [esp+0x94]
        push edx
        push eax
        push ecx
        call public_421620
        add esp, 0x1C
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ds:[esi+0x80]
        call public_420fd0
        public_588cd5 : nop
        push 0xB71
        call public_421ed0
        add esp, 4
        public_588ce2 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x9C]
        public_588cec : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x90
        ret 
        UNREACHABLE_TRAP(0x588770)
    }
}

#undef public_5887e7
#undef public_5887f0
#undef public_588803
#undef public_588827
#undef public_588870
#undef public_588997
#undef public_58899f
#undef public_588a99
#undef public_588bd6
#undef public_588c0d
#undef public_588c14
#undef public_588c21
#undef public_588c29
#undef public_588c68
#undef public_588c7f
#undef public_588cd5
#undef public_588ce2
#undef public_588cec
