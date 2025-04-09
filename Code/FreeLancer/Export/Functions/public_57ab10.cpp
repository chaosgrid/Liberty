#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421ba0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_579e90);
CLANG_FORWARD_PROC_SYMBOL(public_57a680);
CLANG_FORWARD_PROC_SYMBOL(public_57ab10);
CLANG_FORWARD_PROC_SYMBOL(public_595de0);
CLANG_FORWARD_PROC_SYMBOL(public_595e10);
CLANG_FORWARD_PROC_SYMBOL(public_59e5c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a06a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7050);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_57ab40 _public_57ab40
#define public_57abad _public_57abad
#define public_57abf4 _public_57abf4
#define public_57ac1d _public_57ac1d
#define public_57ac33 _public_57ac33
#define public_57ac34 _public_57ac34
#define public_57ac53 _public_57ac53
#define public_57ad40 _public_57ad40
#define public_57ad50 _public_57ad50
#define public_57ad64 _public_57ad64
#define public_57ad6f _public_57ad6f
#define public_57ad82 _public_57ad82
#define public_57adee _public_57adee
#define public_57ae12 _public_57ae12
#define public_57ae1b _public_57ae1b
#define public_57ae1d _public_57ae1d
#define public_57afb7 _public_57afb7
#define public_57afcb _public_57afcb

PROC_DECLARE(0x57ab10, internal_57ab10, public_57ab10);
extern "C" NAKED register_t __cdecl internal_57ab10()
{
    __asm
    {
        sub esp, 0x60
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0x6C], 2
        je public_57afcb
        push ebx
        push ebp
        push edi
        call public_579e90
        mov al, byte ptr ds : [esi+0x401]
        test al, al
        jne public_57ab40
        mov al, byte ptr ds : [esi+0x400]
        test al, al
        je public_57ae1b
        public_57ab40 : nop
        mov eax, dword ptr ds : [esi+0x358]
        xor ebx, ebx
        cmp eax, ebx
        jle public_57ae1d
        cmp dword ptr ds : [esi+0x35C], ebx
        jle public_57ae1d
        mov eax, dword ptr ds : [esi+0x3D4]
        push ebx
        push eax
        call dword ptr ds : [public_5c6e14]
        mov ecx, dword ptr ds : [esi+0x3E4]
        mov edx, dword ptr ds : [esi+0x3E0]
        push ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x20], edx
        call dword ptr ds : [public_5c6e18]
        mov ecx, dword ptr ds : [esi+0x3D4]
        mov edi, eax
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        call dword ptr ds : [public_5c7254]
        cmp edi, ebx
        je public_57abad
        push edi
        call dword ptr ds : [public_5c6e3c]
        public_57abad : nop
        mov ecx, dword ptr ds : [esi+0x3F0]
        cmp ecx, ebx
        je public_57abf4
        fild dword ptr ds : [esi+0x35C]
        push ecx
        fstp dword ptr ss : [esp]
        call public_595de0
        mov ecx, dword ptr ds : [esi+0x35C]
        mov eax, 0x66666667
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        push ecx
        fild dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x3F0]
        fstp dword ptr ss : [esp]
        call public_595e10
        public_57abf4 : nop
        mov ecx, esi
        call public_57a680
        mov eax, dword ptr ds : [esi+0x408]
        cmp eax, ebx
        je public_57ac53
        dec eax
        je public_57ac33
        dec eax
        je public_57ac1d
        dec eax
        jne public_57ac53
        mov ecx, dword ptr ds : [esi+0x35C]
        sub ecx, dword ptr ds : [esi+0x380]
        push ecx
        jmp public_57ac34
        public_57ac1d : nop
        mov edx, dword ptr ds : [esi+0x380]
        mov eax, dword ptr ds : [esi+0x35C]
        sub eax, edx
        cdq 
        sub eax, edx
        sar eax, 1
        push eax
        jmp public_57ac34
        public_57ac33 : nop
        push ebx
        public_57ac34 : nop
        mov edi, dword ptr ds : [esi+0x360]
        lea ebp, ds:[esi+0x384]
        mov ecx, ebp
        neg edi
        call dword ptr ds : [public_5c6c1c]
        mov ecx, ebp
        push edi
        call dword ptr ds : [public_5c6c18]
        public_57ac53 : nop
        lea edi, ds:[esi+0x384]
        mov ecx, edi
        call dword ptr ds : [public_5c6c30]
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c6c2c]
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c6c28]
        push 1
        push edi
        lea ecx, ds:[esi+0x374]
        call dword ptr ds : [public_5c6c34]
        mov ebp, dword ptr ds : [esi+0x3E8]
        imul ebp, dword ptr ds : [esi+0x3E4]
        push ebp
        call public_5b7e84
        mov edx, dword ptr ds : [esi+0x3E0]
        mov ebx, eax
        xor eax, eax
        mov ecx, 0xB
        lea edi, ss:[esp+0x48]
        rep stosd
        mov edi, dword ptr ds : [esi+0x3E4]
        mov ecx, dword ptr ds : [esi+0x3DC]
        add esp, 4
        mov eax, edi
        neg eax
        mov dword ptr ss : [esp+0x48], edx
        mov edx, dword ptr ds : [esi+0x3D4]
        mov dword ptr ss : [esp+0x4C], eax
        xor eax, eax
        push ecx
        mov dword ptr ss : [esp+0x5C], ebp
        mov ebp, dword ptr ds : [public_5c6e0c]
        push edx
        mov dword ptr ss : [esp+0x4C], 0x28
        mov word ptr ss : [esp+0x5A], 0x10
        mov word ptr ss : [esp+0x58], 1
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x6C], eax
        mov dword ptr ss : [esp+0x70], eax
        call ebp
        mov ecx, dword ptr ds : [esi+0x3D8]
        mov edx, dword ptr ds : [esi+0x3D4]
        push 0
        lea eax, ss:[esp+0x48]
        push eax
        push ebx
        push edi
        push 0
        push ecx
        push edx
        call dword ptr ds : [public_5c6e2c]
        mov ecx, dword ptr ds : [esi+0x3D4]
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x3D8]
        push eax
        push ecx
        call ebp
        test edi, edi
        je public_57ad82
        mov eax, dword ptr ds : [esi+0x3E4]
        xor edi, edi
        test eax, eax
        mov edx, ebx
        jle public_57ad82
        public_57ad40 : nop
        mov eax, dword ptr ds : [esi+0x3E0]
        xor ecx, ecx
        test eax, eax
        jle public_57ad6f
        lea esp, ss:[esp]
        public_57ad50 : nop
        xor eax, eax
        mov ax, word ptr ds : [edx+ecx*2]
        test ax, ax
        je public_57ad64
        or eax, 0x8000
        mov word ptr ds : [edx+ecx*2], ax
        public_57ad64 : nop
        mov eax, dword ptr ds : [esi+0x3E0]
        inc ecx
        cmp ecx, eax
        jl public_57ad50
        public_57ad6f : nop
        mov ebp, dword ptr ds : [esi+0x3E8]
        mov eax, dword ptr ds : [esi+0x3E4]
        add edx, ebp
        inc edi
        cmp edi, eax
        jl public_57ad40
        public_57ad82 : nop
        mov al, byte ptr ds : [esi+0x472]
        test al, al
        jne public_57ae12
        mov eax, dword ptr ds : [esi+0x3EC]
        test eax, eax
        je public_57ae12
        push 0
        call public_5b7010
        add esp, 4
        push 1
        push 5
        push 5
        push 5
        push 0x10
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x24], eax
        call public_5b7050
        mov ebp, dword ptr ds : [esi+0x3E8]
        mov ecx, dword ptr ds : [esi+0x3E4]
        mov edx, dword ptr ds : [esi+0x3E0]
        mov eax, dword ptr ds : [esi+0x3EC]
        mov edi, dword ptr ds : [eax]
        push ebp
        push ecx
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push ebx
        push eax
        call dword ptr ds : [edi+0x28]
        test eax, eax
        jne public_57adee
        mov byte ptr ds : [esi+0x401], al
        jmp public_57ae12
/*FIXUP public_57adee : nop
        push offset public_5e4734 @0x57adee*/
  FIXUP public_57adee : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4734
        push 0x5A1
/*FIXUP push offset public_5e46a8 @0x57adf8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e46a8
        mov eax, 0x100001
/*FIXUP push offset public_5c862c @0x57ae02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c862c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_57ae12 : nop
        push ebx
        call public_5b7e1d
        add esp, 4
        public_57ae1b : nop
        xor ebx, ebx
        public_57ae1d : nop
        mov ecx, esi
        call public_5a06a0
        mov eax, dword ptr ds : [esi+0x3EC]
        cmp eax, ebx
        je public_57afb7
        mov edx, dword ptr ds : [esi+0x474]
        push edx
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [esi+0x3EC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0x354]
        mov edx, dword ptr ds : [esi+0x34C]
        mov edi, dword ptr ds : [esi+0x348]
        lea ecx, ds:[eax+1]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ds : [esi+0x350]
        lea ebp, ds:[ecx+1]
        sub eax, edx
        sub ecx, edi
        inc eax
        inc ecx
        mov dword ptr ss : [esp+0x3C], ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [esi+0x3EC]
        lea ecx, ss:[esp+0x38]
        push ecx
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x34], ebp
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x10]
        mov al, byte ptr ds : [esi+0x402]
        test al, al
        je public_57afb7
        push 0xB71
        call public_421ed0
        push 0xB44
        call public_421ed0
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push ebx
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        lea edx, ds:[esi+0x3C]
        push edx
        push ebx
        call public_422690
        lea eax, ds:[esi+0x403]
        push eax
        call public_421ba0
        push 0xDE1
        call public_421ed0
        push 7
        call public_421670
        push ebx
        push ebx
        push ebx
        call public_421cc0
        fld dword ptr ds : [esi+0x330]
        add esp, 0x20
        push ebx
        push ebx
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+0x334]
        add esp, 0xC
        fchs 
        push ebx
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x330]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [esi+0x334]
        add esp, 0xC
        fchs 
        push ebx
        push ecx
        fstp dword ptr ss : [esp]
        push ebx
        call public_421cc0
        call public_421690
        push 0xB71
        call public_421dd0
        push 1
        call public_422190
        add esp, 0x14
        public_57afb7 : nop
        mov ecx, esi
        call public_59e5c0
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x9C]
        pop edi
        pop ebp
        pop ebx
        public_57afcb : nop
        pop esi
        add esp, 0x60
        ret 
        UNREACHABLE_TRAP(0x57ab10)
    }
}

#undef public_57ab40
#undef public_57abad
#undef public_57abf4
#undef public_57ac1d
#undef public_57ac33
#undef public_57ac34
#undef public_57ac53
#undef public_57ad40
#undef public_57ad50
#undef public_57ad64
#undef public_57ad6f
#undef public_57ad82
#undef public_57adee
#undef public_57ae12
#undef public_57ae1b
#undef public_57ae1d
#undef public_57afb7
#undef public_57afcb
