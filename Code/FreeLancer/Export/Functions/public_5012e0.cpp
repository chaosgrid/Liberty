#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5012e0);
CLANG_FORWARD_PROC_SYMBOL(public_5018a0);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_5995c0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf748);

#define public_501336 _public_501336
#define public_501359 _public_501359
#define public_501370 _public_501370
#define public_50139e _public_50139e
#define public_5013a8 _public_5013a8
#define public_5013b4 _public_5013b4
#define public_5013c0 _public_5013c0
#define public_5013cc _public_5013cc
#define public_5013e3 _public_5013e3
#define public_5013eb _public_5013eb
#define public_50140f _public_50140f
#define public_50142a _public_50142a
#define public_501430 _public_501430
#define public_50143e _public_50143e

PROC_DECLARE(0x5012e0, internal_5012e0, public_5012e0);
extern "C" NAKED register_t __cdecl internal_5012e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf748 @0x5012e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf748
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov al, byte ptr ss : [esp+0x24]
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        push edi
        mov esi, ecx
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov edi, dword ptr ss : [esp+0x34]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x10], ebp
        jbe public_501336
        lea ecx, ss:[esp+0x10]
        push ecx
        push edi
        push ebp
        lea ecx, ss:[esp+0x20]
        call public_537260
        jmp public_501359
        public_501336 : nop
        lea ecx, ss:[esp+0x14]
        call public_5ad970
        cmp edi, eax
        jae public_501359
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax+edi*4]
        push edx
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_5995c0
        public_501359 : nop
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x3C]
        xor ebx, ebx
        cmp edi, ebp
        mov dword ptr ds : [esi+0x20], edx
        mov dword ptr ds : [esi+0x24], eax
        jle public_50139e
        lea ecx, ds:[ecx]
        public_501370 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        call dword ptr ds : [public_5c71dc]
        mov dword ptr ss : [esp+0x34], eax
        fild dword ptr ss : [esp+0x34]
        inc ebx
        cmp ebx, edi
        fmul dword ptr ds : [public_5da778]
        fld dword ptr ds : [esi+0x24]
        fsub dword ptr ds : [esi+0x20]
        fmulp 
        fadd dword ptr ds : [esi+0x20]
        fstp dword ptr ss : [ebp+ebx*4-4]
        jl public_501370
        xor ebp, ebp
        public_50139e : nop
        mov ecx, dword ptr ss : [esp+0x40]
        xor eax, eax
        cmp ecx, ebp
        jle public_5013b4
        public_5013a8 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+eax*4], ebp
        inc eax
        cmp eax, ecx
        jl public_5013a8
        public_5013b4 : nop
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, edi
        sub eax, edx
        cmp eax, edi
        jge public_5013cc
        public_5013c0 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+eax*4], ebp
        inc eax
        cmp eax, edi
        jl public_5013c0
        public_5013cc : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        mov ebx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x34], 0
        jne public_5013e3
        xor eax, eax
        jmp public_5013eb
        public_5013e3 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_5013eb : nop
        cmp eax, edi
        mov ecx, esi
        jae public_50140f
        mov ebp, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x34]
        push edx
        call public_5ad970
        mov ecx, edi
        sub ecx, eax
        push ecx
        push ebp
        mov ecx, esi
        call public_537260
        xor ebp, ebp
        jmp public_50142a
        public_50140f : nop
        call public_5ad970
        cmp edi, eax
        jae public_50142a
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[eax+edi*4]
        push edx
        push ecx
        mov ecx, esi
        call public_5995c0
        public_50142a : nop
        xor eax, eax
        cmp edi, ebp
        jle public_50143e
        public_501430 : nop
        mov ecx, dword ptr ds : [ebx+eax*4]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+eax*4], ecx
        inc eax
        cmp eax, edi
        jl public_501430
        public_50143e : nop
        mov eax, dword ptr ds : [esi+4]
        lea edx, ds:[esi+0x10]
        push edx
        dec edi
        push edi
        push eax
        call public_5018a0
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 0x14
        UNREACHABLE_TRAP(0x5012e0)
    }
}

#undef public_501336
#undef public_501359
#undef public_501370
#undef public_50139e
#undef public_5013a8
#undef public_5013b4
#undef public_5013c0
#undef public_5013cc
#undef public_5013e3
#undef public_5013eb
#undef public_50140f
#undef public_50142a
#undef public_501430
#undef public_50143e
