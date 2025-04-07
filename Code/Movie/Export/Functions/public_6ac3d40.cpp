#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3d40);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4db0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4e20);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4f80);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac5090);
CLANG_FORWARD_PROC_SYMBOL(public_6ac54d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8490);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8500);
CLANG_FORWARD_PROC_SYMBOL(public_6ac86a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac89d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6aca860);
CLANG_FORWARD_PROC_SYMBOL(public_6acb290);

#define public_6ac3d63 _public_6ac3d63
#define public_6ac3e4a _public_6ac3e4a
#define public_6ac3e58 _public_6ac3e58
#define public_6ac3e74 _public_6ac3e74
#define public_6ac3e9a _public_6ac3e9a
#define public_6ac3ed5 _public_6ac3ed5
#define public_6ac3f17 _public_6ac3f17
#define public_6ac3f4f _public_6ac3f4f
#define public_6ac3f53 _public_6ac3f53
#define public_6ac3f71 _public_6ac3f71
#define public_6ac3ff2 _public_6ac3ff2
#define public_6ac4001 _public_6ac4001
#define public_6ac404e _public_6ac404e
#define public_6ac405a _public_6ac405a
#define public_6ac4064 _public_6ac4064

PROC_DECLARE(0x6ac3d40, internal_6ac3d40, public_6ac3d40);
extern "C" NAKED register_t __cdecl internal_6ac3d40()
{
    __asm
    {
        sub esp, 0x10
        push 0x304
        mov dword ptr ss : [esp+0x10], 0
        call public_6ac4f80
        test eax, eax
        mov dword ptr ss : [esp+4], eax
        jne public_6ac3d63
        add esp, 0x10
        ret 0x10
        public_6ac3d63 : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebp
        push esi
        test ebx, ebx
        push edi
        je public_6ac405a
        mov eax, dword ptr ss : [esp+0x24]
        lea esi, ds:[ebx*4]
        mov ecx, dword ptr ds : [esi+eax-4]
        test ecx, ecx
        je public_6ac405a
        push ebx
        call public_6aca860
        mov edi, eax
        lea eax, ds:[ebx+1]
        shr eax, 1
        push eax
        call public_6aca860
        test edi, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_6ac404e
        test eax, eax
        je public_6ac404e
        cmp ebx, 0x40
        ja public_6ac404e
        mov ecx, dword ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x28], ecx
        add ecx, ecx
        mov dword ptr ss : [ebp+0x110], edx
        mov dword ptr ss : [ebp+0x104], ecx
        mov ecx, esi
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ecx
        mov dword ptr ss : [ebp+0x108], edi
        mov edi, ebp
        shr ecx, 2
        mov dword ptr ss : [ebp+0x100], ebx
        mov dword ptr ss : [ebp+0x10C], eax
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [esp+0x24]
        and ecx, 3
        rep movsb
        lea ecx, ds:[ebx*4]
        mov esi, edx
        mov eax, ecx
        lea edi, ss:[ebp+0x1040]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        lea eax, ss:[ebp+0x114]
        and ecx, 3
        push eax
        push ebx
        push edx
        rep movsb
        mov dword ptr ss : [ebp+0x1140], ebx
        call public_6ac54d0
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ecx]
        mov edx, eax
        not edx
        test dl, 1
        je public_6ac3e4a
        xor eax, eax
        mov dword ptr ss : [esp+0x30], eax
        jmp public_6ac3e74
        public_6ac3e4a : nop
        lea ecx, ds:[eax+1]
        mov edx, 5
        shr ecx, 2
        lea ecx, ds:[eax+ecx*8]
        public_6ac3e58 : nop
        mov esi, ecx
        mov edi, 2
        imul esi, eax
        sub edi, esi
        add edx, edx
        imul ecx, edi
        cmp edx, 0x20
        jl public_6ac3e58
        mov dword ptr ss : [esp+0x30], ecx
        mov eax, ecx
        public_6ac3e74 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [ebp+0x11C], eax
        cmp ecx, 1
        jne public_6ac3f4f
        test eax, eax
        jne public_6ac3e9a
        mov dword ptr ds : [public_6ae097c], 2
        jmp public_6ac4064
        public_6ac3e9a : nop
        mov esi, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        push eax
        push ebp
        mov dword ptr ss : [ebp+0xDFC], eax
        call public_6ac86a0
        mov dword ptr ds : [esi+ebx*4], eax
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, 1
        je public_6ac3f17
        lea ecx, ds:[ebx+1]
        dec eax
        lea edi, ds:[esi+4]
        mov dword ptr ss : [esp+0x1C], eax
        lea edx, ds:[esi+ecx*4]
        lea ecx, ss:[ebp+0xE00]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x2C], ecx
        public_6ac3ed5 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ss : [esp+0x2C]
        imul eax, dword ptr ss : [esp+0x30]
        neg eax
        push ebx
        push edi
        push eax
        push ebp
        mov dword ptr ds : [edx], eax
        call public_6ac8490
        add edi, 4
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x2C]
        add edx, 4
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        add ecx, 4
        dec eax
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6ac3ed5
        mov eax, dword ptr ss : [esp+0x28]
        public_6ac3f17 : nop
        mov edi, dword ptr ss : [esp+0x10]
        lea ecx, ss:[ebp+0x1030]
        push edi
        lea edx, ss:[ebp+0xE7C]
        push ecx
        push edx
        push eax
        lea eax, ss:[ebp+0xDFC]
        push eax
        call public_6acb290
        lea eax, ss:[ebp+0xA74]
        push edi
        mov ecx, dword ptr ss : [esp+0x2C]
        push eax
        push ebx
        lea edx, ds:[esi+ecx*4]
        push edx
        call public_6ac4db0
        jmp public_6ac3f53
        public_6ac3f4f : nop
        mov esi, dword ptr ss : [esp+0x14]
        public_6ac3f53 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [ebp+0x118]
        mov dword ptr ss : [esp+0x2C], ecx
        lea edx, ds:[eax+ebx]
        test edx, edx
        je public_6ac3f71
        mov ecx, edx
        or eax, 0xFFFFFFFF
        mov edi, esi
        rep stosd
        public_6ac3f71 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        or eax, 0xFFFFFFFF
        shr eax, cl
        mov ecx, dword ptr ss : [esp+0x24]
        lea edi, ds:[esi+0x204]
        push edi
        mov dword ptr ds : [esi+edx*4-4], eax
        lea eax, ds:[esi+0x180]
        mov dword ptr ss : [esp+0x30], eax
        push eax
        lea eax, ss:[ebp+0x114]
        push eax
        push ebx
        push ecx
        push edx
        push esi
        call public_6ac5090
        lea eax, ss:[ebp+0x9E4]
        lea ecx, ss:[ebp+0x830]
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x2C]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        push edx
        push esi
        call public_6acb290
        lea ecx, ss:[ebp+0x9F4]
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        push ecx
        push 0xFFFFFFFF
        push esi
        call public_6ac8bd0
        cmp edi, edi
        mov dword ptr ss : [esp+0x24], 1
        jne public_6ac3ff2
        mov eax, dword ptr ds : [edi]
        cmp eax, 0xFFFFFFFE
        ja public_6ac3ff2
        inc eax
        mov dword ptr ds : [edi], eax
        jmp public_6ac4001
        public_6ac3ff2 : nop
        push edi
        lea edx, ss:[esp+0x28]
        push 1
        push edx
        push ebx
        push edi
        call public_6ac8500
        public_6ac4001 : nop
        push ebx
        push edi
        push edi
        push ebp
        call public_6ac89d0
        lea eax, ss:[ebp+0x4A8]
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        push eax
        push ebx
        push edi
        call public_6ac4db0
        lea ecx, ss:[ebp+0x120]
        push esi
        push ecx
        push ebx
        push ebp
        call public_6ac4db0
        push ebp
        add ebp, 0x1144
        mov esi, 1
        push ebp
        lea edx, ss:[esp+0x2C]
        push esi
        push edx
        mov dword ptr ss : [esp+0x34], esi
        call public_6ac4e20
        mov dword ptr ss : [esp+0x1C], esi
        jmp public_6ac4064
        public_6ac404e : nop
        mov dword ptr ds : [public_6ae097c], 3
        jmp public_6ac4064
        public_6ac405a : nop
        mov dword ptr ds : [public_6ae097c], 1
        public_6ac4064 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        call public_6ac4fb0
        pop edi
        pop esi
        mov eax, dword ptr ss : [esp+0x14]
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x6ac3d40)
    }
}

#undef public_6ac3d63
#undef public_6ac3e4a
#undef public_6ac3e58
#undef public_6ac3e74
#undef public_6ac3e9a
#undef public_6ac3ed5
#undef public_6ac3f17
#undef public_6ac3f4f
#undef public_6ac3f53
#undef public_6ac3f71
#undef public_6ac3ff2
#undef public_6ac4001
#undef public_6ac404e
#undef public_6ac405a
#undef public_6ac4064
