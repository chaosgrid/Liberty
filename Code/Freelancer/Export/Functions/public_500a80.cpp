#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_500a80);
CLANG_FORWARD_PROC_SYMBOL(public_5012e0);
CLANG_FORWARD_PROC_SYMBOL(public_501530);
CLANG_FORWARD_PROC_SYMBOL(public_501750);
CLANG_FORWARD_PROC_SYMBOL(public_5018a0);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_5995c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a6900);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf730);

#define public_500ab8 _public_500ab8
#define public_500ac3 _public_500ac3
#define public_500ae0 _public_500ae0
#define public_500af4 _public_500af4
#define public_500af8 _public_500af8
#define public_500b37 _public_500b37
#define public_500b4f _public_500b4f
#define public_500b5d _public_500b5d
#define public_500b68 _public_500b68
#define public_500b87 _public_500b87
#define public_500b9b _public_500b9b
#define public_500ba0 _public_500ba0
#define public_500bd7 _public_500bd7
#define public_500bf4 _public_500bf4
#define public_500c50 _public_500c50
#define public_500c84 _public_500c84
#define public_500c86 _public_500c86
#define public_500d40 _public_500d40
#define public_500d5f _public_500d5f
#define public_500d70 _public_500d70
#define public_500d9e _public_500d9e
#define public_500dc5 _public_500dc5

PROC_DECLARE(0x500a80, internal_500a80, public_500a80);
extern "C" NAKED register_t __cdecl internal_500a80()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bf730 @0x500a88*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf730
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        test ebp, ebp
        push esi
        push edi
        mov esi, ecx
        jle public_500bf4
        mov eax, dword ptr ds : [esi+0xCC]
        test eax, eax
        jne public_500ab8
        xor edi, edi
        jmp public_500ac3
        public_500ab8 : nop
        mov edi, dword ptr ds : [esi+0xD0]
        sub edi, eax
        sar edi, 2
        public_500ac3 : nop
        cmp ebp, 8
        jl public_500b4f
        cmp edi, 8
        jl public_500b4f
        xor ebx, ebx
        test ebp, ebp
        jle public_500af4
        mov ecx, edi
        sub ecx, ebp
        shl ecx, 2
        mov edi, edi
        public_500ae0 : nop
        mov eax, dword ptr ds : [esi+0xCC]
        mov edx, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax+ebx*4], edx
        inc ebx
        add ecx, 4
        cmp ebx, ebp
        jl public_500ae0
        public_500af4 : nop
        cmp ebx, edi
        jge public_500b37
        public_500af8 : nop
        mov eax, dword ptr ds : [esi+0xCC]
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [public_5c71dc]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x50], eax
        fild dword ptr ss : [esp+0x50]
        inc ebx
        cmp ebx, edi
        fmul dword ptr ds : [public_5da778]
        fld dword ptr ds : [esi+0xEC]
        fsub dword ptr ds : [esi+0xE8]
        fmulp 
        fadd dword ptr ds : [esi+0xE8]
        fstp dword ptr ds : [ecx+ebx*4-4]
        jl public_500af8
        public_500b37 : nop
        mov eax, dword ptr ds : [esi+0xCC]
        lea edx, ds:[esi+0xD8]
        push edx
        dec edi
        push edi
        push eax
        call public_5018a0
        add esp, 0xC
        public_500b4f : nop
        mov eax, dword ptr ds : [esi+0xF4]
        test eax, eax
        jne public_500b5d
        xor ebx, ebx
        jmp public_500b68
        public_500b5d : nop
        mov ebx, dword ptr ds : [esi+0xF8]
        sub ebx, eax
        sar ebx, 2
        public_500b68 : nop
        cmp ebp, 8
        jl public_500dc5
        cmp ebx, 8
        jl public_500dc5
        xor edi, edi
        test ebp, ebp
        jle public_500b9b
        mov ecx, ebx
        sub ecx, ebp
        shl ecx, 2
        public_500b87 : nop
        mov eax, dword ptr ds : [esi+0xF4]
        mov edx, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax+edi*4], edx
        inc edi
        add ecx, 4
        cmp edi, ebp
        jl public_500b87
        public_500b9b : nop
        cmp edi, ebx
        jge public_500bd7
        nop 
        public_500ba0 : nop
        mov ebp, dword ptr ds : [esi+0xF4]
        call dword ptr ds : [public_5c71dc]
        mov dword ptr ss : [esp+0x50], eax
        fild dword ptr ss : [esp+0x50]
        inc edi
        cmp edi, ebx
        fmul dword ptr ds : [public_5da778]
        fld dword ptr ds : [esi+0x114]
        fsub dword ptr ds : [esi+0x110]
        fmulp 
        fadd dword ptr ds : [esi+0x110]
        fstp dword ptr ss : [ebp+edi*4-4]
        jl public_500ba0
        public_500bd7 : nop
        mov ecx, dword ptr ds : [esi+0xF4]
        lea eax, ds:[esi+0x100]
        push eax
        dec ebx
        push ebx
        push ecx
        call public_5018a0
        add esp, 0xC
        jmp public_500dc5
        public_500bf4 : nop
        fld dword ptr ds : [esi+0x7C]
        mov edi, dword ptr ds : [esi+0x78]
        fmul dword ptr ds : [public_5c75e0]
        lea edx, ss:[esp+0x50]
        push edx
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+0x1C]
        lea ebx, ds:[esi+0xC8]
        fld dword ptr ds : [esi+0x7C]
        fmul dword ptr ds : [public_5cef60]
        fstp dword ptr ss : [esp+0x18]
        call public_5a6900
        lea eax, ss:[esp+0x10]
        push eax
        xor ebp, ebp
        push edi
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x18], ebp
        call public_501530
        test edi, edi
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ebx+0x20], ecx
        mov dword ptr ds : [ebx+0x24], edx
        jle public_500c84
        public_500c50 : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_5c71dc]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        inc ebp
        cmp ebp, edi
        fmul dword ptr ds : [public_5da778]
        fld dword ptr ds : [ebx+0x24]
        fsub dword ptr ds : [ebx+0x20]
        fmulp 
        fadd dword ptr ds : [ebx+0x20]
        fstp dword ptr ds : [ecx+ebp*4-4]
        jl public_500c50
        public_500c84 : nop
        xor eax, eax
        public_500c86 : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+edx], 0
        add eax, 4
        cmp eax, 0xC
        jl public_500c86
        mov eax, dword ptr ss : [esp+0x34]
        push 1
        push eax
        push edi
        mov ecx, ebx
        call public_501750
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call public_4de730
        fld dword ptr ds : [esi+0x80]
        fmul dword ptr ds : [public_5c75e0]
        mov ecx, dword ptr ds : [esi+0x78]
        xor ebx, ebx
        push ebx
        push 3
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x80]
        fmul dword ptr ds : [public_5cef60]
        fstp dword ptr ss : [esp]
        push ecx
        lea ecx, ds:[esi+0xF0]
        call public_5012e0
        mov dl, byte ptr ss : [esp+0x50]
        mov byte ptr ss : [esp+0x20], dl
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov edi, dword ptr ds : [esi+0x78]
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x48], 1
        mov dword ptr ss : [esp+0x1C], ebx
        call public_5ad970
        cmp eax, edi
        lea ecx, ss:[esp+0x20]
        jae public_500d40
        mov ebp, dword ptr ss : [esp+0x28]
        lea eax, ss:[esp+0x1C]
        push eax
        call public_5ad970
        sub edi, eax
        push edi
        push ebp
        lea ecx, ss:[esp+0x2C]
        call public_537260
        jmp public_500d5f
        public_500d40 : nop
        call public_5ad970
        cmp edi, eax
        jae public_500d5f
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        push ecx
        lea eax, ds:[edx+edi*4]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_5995c0
        public_500d5f : nop
        mov ecx, dword ptr ds : [esi+0x78]
        xor eax, eax
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x10], ecx
        jle public_500d9e
        public_500d70 : nop
        fild dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x24]
        inc eax
        mov dword ptr ss : [esp+0x50], eax
        fmul dword ptr ds : [esi+0x84]
        fidiv dword ptr ss : [esp+0x10]
        fchs 
        fsub dword ptr ds : [public_5d8464]
        fstp dword ptr ds : [ecx+eax*4-4]
        mov ecx, dword ptr ds : [esi+0x78]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], ecx
        jl public_500d70
        public_500d9e : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+0x78]
        push 1
        push edx
        push eax
        lea ecx, ds:[esi+0x118]
        call public_501750
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call public_4de730
        public_500dc5 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x500a80)
    }
}

#undef public_500ab8
#undef public_500ac3
#undef public_500ae0
#undef public_500af4
#undef public_500af8
#undef public_500b37
#undef public_500b4f
#undef public_500b5d
#undef public_500b68
#undef public_500b87
#undef public_500b9b
#undef public_500ba0
#undef public_500bd7
#undef public_500bf4
#undef public_500c50
#undef public_500c84
#undef public_500c86
#undef public_500d40
#undef public_500d5f
#undef public_500d70
#undef public_500d9e
#undef public_500dc5
