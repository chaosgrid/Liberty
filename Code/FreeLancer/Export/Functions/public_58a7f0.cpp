#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_4143c0);
CLANG_FORWARD_PROC_SYMBOL(public_414570);
CLANG_FORWARD_PROC_SYMBOL(public_4145a0);
CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_415860);
CLANG_FORWARD_PROC_SYMBOL(public_4176c0);
CLANG_FORWARD_PROC_SYMBOL(public_417730);
CLANG_FORWARD_PROC_SYMBOL(public_417780);
CLANG_FORWARD_PROC_SYMBOL(public_4177b0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_423b90);
CLANG_FORWARD_PROC_SYMBOL(public_561da0);
CLANG_FORWARD_PROC_SYMBOL(public_5646e0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5995f0);
CLANG_FORWARD_PROC_SYMBOL(public_59e5c0);

#define public_58a85d _public_58a85d
#define public_58a86f _public_58a86f
#define public_58a8c9 _public_58a8c9
#define public_58a906 _public_58a906
#define public_58a984 _public_58a984
#define public_58aa20 _public_58aa20
#define public_58aa3b _public_58aa3b
#define public_58aa42 _public_58aa42
#define public_58aa8a _public_58aa8a
#define public_58aaa6 _public_58aaa6
#define public_58aad0 _public_58aad0
#define public_58abfa _public_58abfa
#define public_58ac89 _public_58ac89
#define public_58acf2 _public_58acf2
#define public_58ad0c _public_58ad0c
#define public_58ad39 _public_58ad39
#define public_58ad57 _public_58ad57
#define public_58ad64 _public_58ad64

PROC_DECLARE(0x58a7f0, internal_58a7f0, public_58a7f0);
extern "C" NAKED register_t __cdecl internal_58a7f0()
{
    __asm
    {
        sub esp, 0x86C
        push ebx
        push ebp
        push esi
        push edi
        push 6
        mov ebp, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_58ad64
        push 9
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_58ad64
        push 0x13
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_58ad64
        mov ecx, ebp
        call public_59e5c0
        mov al, byte ptr ss : [ebp+0x362]
        test al, al
        je public_58a984
        mov eax, dword ptr ss : [ebp+0x370]
        test eax, eax
        lea esi, ss:[ebp+0x370]
        je public_58a85d
        cmp word ptr ds : [eax], 0
        jne public_58a86f
        public_58a85d : nop
        mov eax, dword ptr ss : [ebp+0x334]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push ecx
        mov ecx, esi
        call public_413df0
        public_58a86f : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_58a984
        cmp word ptr ds : [eax], 0
        je public_58a984
        mov ecx, dword ptr ss : [ebp+0x364]
        mov eax, 0x3FF
        cmp ecx, eax
        jbe public_58a906
        mov dword ptr ss : [ebp+0x364], eax
        mov al, byte ptr ss : [ebp+0x389]
        test al, al
        mov byte ptr ss : [ebp+0x362], 0
        je public_58a906
        mov byte ptr ss : [ebp+0x389], 0
        mov eax, dword ptr ds : [public_67d8c8]
        dec eax
        test eax, eax
        mov dword ptr ds : [public_67d8c8], eax
        jg public_58a8c9
        push 0xB
        call public_5646e0
        add esp, 4
        public_58a8c9 : nop
        mov edi, dword ptr ds : [esi]
        lea edx, ss:[ebp+0xA8]
        push edx
        lea eax, ss:[ebp+0x60]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        call public_423b30
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [ebp+0x32C]
        mov ecx, dword ptr ss : [ebp+0x334]
        add esp, 0xC
        push edx
        push eax
        call public_4145d0
        mov ecx, dword ptr ss : [ebp+0x334]
        push edi
        call public_415860
        public_58a906 : nop
        mov ecx, dword ptr ss : [ebp+0x364]
        mov edx, dword ptr ds : [esi]
        push ecx
        push edx
        lea eax, ss:[esp+0x84]
        push eax
        call dword ptr ds : [public_5c71c0]
        fld dword ptr ss : [ebp+0x68]
        fadd dword ptr ss : [ebp+0xB0]
        mov ecx, dword ptr ss : [ebp+0x364]
        mov word ptr ss : [esp+ecx*2+0x88], 0
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+0x64]
        fadd dword ptr ss : [ebp+0xAC]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0x60]
        fadd dword ptr ss : [ebp+0xA8]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp+0x32C]
        mov ecx, dword ptr ss : [ebp+0x334]
        push edx
        push eax
        call public_4145d0
        lea ecx, ss:[esp+0x7C]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x334]
        call public_415860
        public_58a984 : nop
        fld dword ptr ss : [ebp+0x68]
        sub esp, 0xC
        fadd dword ptr ss : [ebp+0xB0]
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+0x64]
        fadd dword ptr ss : [ebp+0xAC]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0x60]
        fadd dword ptr ss : [ebp+0xA8]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [ebp+0x32C]
        mov ecx, dword ptr ss : [ebp+0x334]
        push edx
        push eax
        call public_4145d0
        mov ecx, dword ptr ss : [ebp+0x334]
        call public_4145a0
        test eax, eax
        je public_58ad64
        mov ecx, dword ptr ss : [ebp+0x334]
        mov eax, dword ptr ds : [ecx+0x1C]
        test eax, eax
        jne public_58aa42
/*FIXUP push offset public_5d0608 @0x58a9ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0608
        call public_4177b0
        mov esi, dword ptr ss : [ebp+0x334]
        mov ecx, dword ptr ds : [esi+0x1C]
        add esp, 4
        cmp ecx, eax
        je public_58aa42
        lea ebx, ds:[esi+0xC]
        mov ecx, ebx
        mov dword ptr ds : [esi+0x1C], eax
        xor edi, edi
        call public_5995f0
        test eax, eax
        jbe public_58aa3b
        lea ebx, ds:[ebx]
        public_58aa20 : nop
        mov edx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [edx+edi*8]
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+8]
        mov ecx, ebx
        inc edi
        call public_5995f0
        cmp edi, eax
        jb public_58aa20
        public_58aa3b : nop
        mov dword ptr ds : [esi+0x28], 0
        public_58aa42 : nop
        mov eax, dword ptr ss : [ebp+0x334]
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_58ad57
        fld dword ptr ss : [esp+0x54]
        fchs 
        fcomp qword ptr ds : [public_5c75f8]
        fnstsw ax
        test ah, 5
        jnp public_58ad64
        mov al, byte ptr ss : [ebp+0x35D]
        test al, al
        mov bl, 1
        je public_58aa8a
        lea ecx, ss:[ebp+0x35E]
        push ecx
        call public_417780
        add esp, 4
        jmp public_58abfa
        public_58aa8a : nop
        mov al, byte ptr ss : [ebp+0x354]
        test al, al
        je public_58aaa6
/*FIXUP push offset public_679ba4 @0x58aa94*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679ba4
        call public_417780
        add esp, 4
        jmp public_58abfa
        public_58aaa6 : nop
        test byte ptr ss : [ebp+0x6C], bl
        jne public_58aad0
        mov al, 0x80
        lea edx, ss:[esp+0x10]
        push edx
        mov byte ptr ss : [esp+0x14], al
        mov byte ptr ss : [esp+0x15], al
        mov byte ptr ss : [esp+0x16], al
        mov byte ptr ss : [esp+0x17], 0xFF
        call public_417780
        add esp, 4
        jmp public_58abfa
        public_58aad0 : nop
        lea eax, ss:[ebp+0x348]
        push eax
        call public_417780
        mov al, byte ptr ss : [ebp+0x35C]
        add esp, 4
        test al, al
        je public_58abfa
        fild dword ptr ds : [public_616840]
        mov esi, offset public_67dbfc
        lea edi, ss:[esp+0x58]
        fsub dword ptr ds : [public_67dc60]
        fdiv dword ptr ds : [public_67dc70]
        fmul dword ptr ds : [public_67dc9c]
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        fild dword ptr ds : [public_616844]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, 9
        rep movsd
        lea ecx, ss:[esp+0x10]
        fsub dword ptr ds : [public_67dc64]
        push ecx
        fdiv dword ptr ds : [public_67dc74]
        fmul dword ptr ds : [public_67dc9c]
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [public_67dc9c]
        mov dword ptr ss : [esp+0x18], edx
        fchs 
        lea edx, ss:[esp+0x5C]
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x1C], eax
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        call public_423b90
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        faddp 
        mov edx, dword ptr ss : [ebp]
        fld dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x30], eax
        fmul dword ptr ss : [esp+0x3C]
        add esp, 0xC
        lea eax, ss:[esp+0x1C]
        push eax
        faddp 
        mov ecx, ebp
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        call dword ptr ds : [edx+0x10]
        test al, al
        je public_58abfa
        mov al, byte ptr ss : [ebp+0x380]
        test al, al
        je public_58abfa
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_561da0
        push eax
        call public_417780
        add esp, 8
        public_58abfa : nop
        mov ecx, dword ptr ss : [ebp+0x334]
        call public_4145a0
        mov edx, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [ebp+0x32C]
        mov dword ptr ss : [ebp+0x340], eax
        mov eax, dword ptr ss : [ebp+0x330]
        push edx
        push eax
        xor esi, esi
        push ecx
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], esi
        mov dword ptr ss : [esp+0x54], esi
        call public_4176c0
        mov dword ptr ss : [esp+0x20], edx
        mov edx, eax
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x4C], eax
        mov al, byte ptr ss : [ebp+0x395]
        add esp, 0xC
        test al, al
        mov dword ptr ss : [esp+0x3C], edx
        je public_58ad0c
        mov ecx, dword ptr ss : [ebp+0x398]
        cmp ecx, dword ptr ds : [public_610850]
        je public_58ac89
        mov byte ptr ss : [ebp+0x394], 0
        public_58ac89 : nop
        mov al, byte ptr ss : [ebp+0x394]
        test al, al
        jne public_58acf2
        lea edx, ss:[esp+0x4C]
        push edx
        mov byte ptr ss : [ebp+0x394], bl
        call public_417730
        mov ecx, dword ptr ss : [ebp+0x334]
        mov dword ptr ss : [ebp+0x38C], eax
        add esp, 4
        lea eax, ss:[esp+0x28]
        push eax
        mov dword ptr ss : [ebp+0x390], edx
        call public_414570
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], esi
        fild qword ptr ss : [esp+0x28]
        fsubr dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c75e0]
        fadd dword ptr ss : [ebp+0x38C]
        fstp dword ptr ss : [ebp+0x38C]
        mov edx, dword ptr ds : [public_610850]
        mov dword ptr ss : [ebp+0x398], edx
        public_58acf2 : nop
        fld dword ptr ss : [ebp+0x38C]
        mov dword ptr ss : [esp+0x44], esi
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [ebp+0x390]
        fstp dword ptr ss : [esp+0x38]
        jmp public_58ad39
        public_58ad0c : nop
        mov eax, dword ptr ss : [ebp+0x358]
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov dword ptr ss : [esp+0x48], eax
        call public_417730
        mov dword ptr ss : [esp+0x18], edx
        mov edx, eax
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x38], eax
        public_58ad39 : nop
        mov ecx, dword ptr ss : [ebp+0x350]
        mov edx, dword ptr ss : [ebp+0x34C]
        mov eax, dword ptr ss : [ebp+0x334]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x40]
        call public_4143c0
        public_58ad57 : nop
        push 0xB71
        call public_421ed0
        add esp, 4
        public_58ad64 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x86C
        ret 
        UNREACHABLE_TRAP(0x58a7f0)
    }
}

#undef public_58a85d
#undef public_58a86f
#undef public_58a8c9
#undef public_58a906
#undef public_58a984
#undef public_58aa20
#undef public_58aa3b
#undef public_58aa42
#undef public_58aa8a
#undef public_58aaa6
#undef public_58aad0
#undef public_58abfa
#undef public_58ac89
#undef public_58acf2
#undef public_58ad0c
#undef public_58ad39
#undef public_58ad57
#undef public_58ad64
