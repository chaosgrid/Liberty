#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b500);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b520);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55450);
CLANG_FORWARD_PROC_SYMBOL(public_6f55490);
CLANG_FORWARD_PROC_SYMBOL(public_6f56b70);
CLANG_FORWARD_PROC_SYMBOL(public_6f56c30);
CLANG_FORWARD_PROC_SYMBOL(public_6f57370);
CLANG_FORWARD_PROC_SYMBOL(public_6f57930);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f57854 _public_6f57854
#define public_6f5785c _public_6f5785c
#define public_6f5788d _public_6f5788d
#define public_6f578a1 _public_6f578a1
#define public_6f578d8 _public_6f578d8
#define public_6f578ed _public_6f578ed
#define public_6f578ff _public_6f578ff
#define public_6f57903 _public_6f57903

PROC_DECLARE(0x6f577f0, internal_6f577f0, public_6f577f0);
extern "C" NAKED register_t __cdecl internal_6f577f0()
{
    __asm
    {
        sub esp, 0x118
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        call public_6f4f5e0
        push 0
        push 2
        mov esi, eax
        call public_6f4f5e0
        push 3
        mov ebx, eax
        call public_6f4b090
        mov ecx, dword ptr ss : [esp+0x2C]
        inc ecx
        mov dword ptr ss : [esp+0x24], ecx
        fild dword ptr ss : [esp+0x24]
        add esp, 0xC
        mov ebp, eax
        fstp qword ptr ss : [esp]
        push 4
        call public_6f4f6a0
        add esp, 0xC
        call public_6f57f16
        mov edi, eax
        cmp byte ptr ds : [ebx], 0x5E
        mov dword ptr ss : [esp+0x1C], edi
        jne public_6f57854
        inc ebx
        mov dword ptr ss : [esp+0x10], 1
        jmp public_6f5785c
        public_6f57854 : nop
        mov dword ptr ss : [esp+0x10], 0
        public_6f5785c : nop
        push ebp
        mov dword ptr ss : [esp+0x18], 0
        call public_6f4b500
        add esp, 4
        test eax, eax
        jne public_6f5788d
        push ebp
        call public_6f4b520
        add esp, 4
        test eax, eax
        jne public_6f5788d
/*FIXUP push offset public_6f61d2c @0x6f5787e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61d2c
        push 3
        call public_6f4f570
        add esp, 8
        public_6f5788d : nop
        call public_6f55490
        test edi, edi
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[edx+esi]
        mov dword ptr ss : [esp+0x20], eax
        jle public_6f57903
        public_6f578a1 : nop
        lea eax, ss:[esp+0x20]
        push eax
        push ebx
        push esi
        mov dword ptr ss : [esp+0x30], 0
        call public_6f57370
        mov edi, eax
        add esp, 0xC
        test edi, edi
        je public_6f578d8
        inc dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x20]
        push ecx
        push ebp
        call public_6f57930
        add esp, 8
        cmp edi, esi
        jbe public_6f578d8
        mov esi, edi
        jmp public_6f578ed
        public_6f578d8 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp esi, eax
        jae public_6f57903
        movsx eax, byte ptr ds : [esi]
        push eax
        inc esi
        call public_6f55450
        add esp, 4
        public_6f578ed : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_6f578ff
        mov edx, dword ptr ss : [esp+0x1C]
        cmp dword ptr ss : [esp+0x14], edx
        jl public_6f578a1
        public_6f578ff : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6f57903 : nop
        sub eax, esi
        push eax
        push esi
        call public_6f56c30
        call public_6f56b70
        fild dword ptr ss : [esp+0x1C]
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x118
        ret 
        UNREACHABLE_TRAP(0x6f577f0)
    }
}

#undef public_6f57854
#undef public_6f5785c
#undef public_6f5788d
#undef public_6f578a1
#undef public_6f578d8
#undef public_6f578ed
#undef public_6f578ff
#undef public_6f57903
