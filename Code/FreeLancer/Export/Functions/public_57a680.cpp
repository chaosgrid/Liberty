#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_579aa0);
CLANG_FORWARD_PROC_SYMBOL(public_57a680);
CLANG_FORWARD_PROC_SYMBOL(public_595d60);
CLANG_FORWARD_PROC_SYMBOL(public_595db0);

#define public_57a6e0 _public_57a6e0
#define public_57a6f5 _public_57a6f5
#define public_57a737 _public_57a737
#define public_57a743 _public_57a743
#define public_57a76d _public_57a76d
#define public_57a796 _public_57a796
#define public_57a79a _public_57a79a
#define public_57a7a4 _public_57a7a4
#define public_57a7e7 _public_57a7e7
#define public_57a7f0 _public_57a7f0
#define public_57a7f7 _public_57a7f7
#define public_57a801 _public_57a801

PROC_DECLARE(0x57a680, internal_57a680, public_57a680);
extern "C" NAKED register_t __cdecl internal_57a680()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3D4]
        test eax, eax
        je public_57a801
        mov al, byte ptr ds : [esi+0x400]
        test al, al
        je public_57a801
        push ebx
        push ebp
        push edi
        lea edi, ds:[esi+0x384]
        mov ecx, edi
        call dword ptr ds : [public_5c6c30]
        push 0
        mov ecx, edi
        call dword ptr ds : [public_5c6c2c]
        push 0
        mov ecx, edi
        call dword ptr ds : [public_5c6c28]
        mov ebp, dword ptr ds : [esi+0x378]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        lea ebx, ds:[esi+0x374]
        je public_57a6f5
        lea ebx, ds:[ebx]
        public_57a6e0 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_46d680
        cmp edi, ebp
        jne public_57a6e0
        public_57a6f5 : nop
        mov ecx, dword ptr ds : [esi+0x35C]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x380], ecx
        mov ecx, esi
        call dword ptr ds : [edx+0xB4]
        mov al, byte ptr ds : [esi+0x407]
        test al, al
        je public_57a76d
        mov ecx, dword ptr ds : [esi+0x3F0]
        test ecx, ecx
        mov eax, dword ptr ds : [esi+0x380]
        je public_57a743
        cmp eax, dword ptr ds : [esi+0x35C]
        jg public_57a76d
        test ecx, ecx
        je public_57a737
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_57a737 : nop
        mov dword ptr ds : [esi+0x3F0], 0
        jmp public_57a76d
        public_57a743 : nop
        cmp eax, dword ptr ds : [esi+0x35C]
        jle public_57a76d
        mov ecx, esi
        call public_579aa0
        test eax, eax
        mov dword ptr ds : [esi+0x3F0], eax
        je public_57a76d
        fild dword ptr ds : [esi+0x364]
        push ecx
        mov ecx, eax
        fstp dword ptr ss : [esp]
        call public_595db0
        public_57a76d : nop
        mov ecx, dword ptr ds : [esi+0x3F0]
        test ecx, ecx
        je public_57a7a4
        mov eax, dword ptr ds : [esi+0x380]
        mov edx, dword ptr ds : [esi+0x35C]
        cmp eax, edx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], edx
        push ecx
        jle public_57a796
        fild dword ptr ss : [esp+0x14]
        jmp public_57a79a
        public_57a796 : nop
        fild dword ptr ss : [esp+0x18]
        public_57a79a : nop
        fstp dword ptr ss : [esp]
        push 0
        call public_595d60
        public_57a7a4 : nop
        mov al, byte ptr ds : [esi+0x478]
        test al, al
        je public_57a7f7
        mov ecx, dword ptr ds : [esi+0x380]
        mov edx, dword ptr ds : [esi+0x35C]
        mov edi, ecx
        sub edi, edx
        mov dword ptr ss : [esp+0x14], edi
        fild dword ptr ss : [esp+0x14]
        fisub dword ptr ds : [esi+0x364]
        fcomp dword ptr ds : [public_5d3e4c]
        fnstsw ax
        test ah, 0x41
        jp public_57a7f7
        cmp ecx, edx
        jle public_57a7e7
        mov ecx, dword ptr ds : [esi+0x360]
        push edi
        push ecx
        jmp public_57a7f0
        public_57a7e7 : nop
        mov edx, dword ptr ds : [esi+0x360]
        push 0
        push edx
        public_57a7f0 : nop
        mov ecx, esi
        call public_5798b0
        public_57a7f7 : nop
        pop edi
        pop ebp
        mov byte ptr ds : [esi+0x400], 0
        pop ebx
        public_57a801 : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x57a680)
    }
}

#undef public_57a6e0
#undef public_57a6f5
#undef public_57a737
#undef public_57a743
#undef public_57a76d
#undef public_57a796
#undef public_57a79a
#undef public_57a7a4
#undef public_57a7e7
#undef public_57a7f0
#undef public_57a7f7
#undef public_57a801
