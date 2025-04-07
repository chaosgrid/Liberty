#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f309a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f36d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f720);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ee40);
CLANG_FORWARD_PROC_SYMBOL(public_6f7f350);
CLANG_FORWARD_PROC_SYMBOL(public_6f7f720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7d2c3 _public_6f7d2c3
#define public_6f7d2d0 _public_6f7d2d0
#define public_6f7d2f7 _public_6f7d2f7
#define public_6f7d310 _public_6f7d310
#define public_6f7d31a _public_6f7d31a
#define public_6f7d32f _public_6f7d32f
#define public_6f7d345 _public_6f7d345
#define public_6f7d367 _public_6f7d367
#define public_6f7d37d _public_6f7d37d
#define public_6f7d39f _public_6f7d39f
#define public_6f7d3f7 _public_6f7d3f7
#define public_6f7d41d _public_6f7d41d
#define public_6f7d441 _public_6f7d441
#define public_6f7d444 _public_6f7d444
#define public_6f7d477 _public_6f7d477
#define public_6f7d4ad _public_6f7d4ad

PROC_DECLARE(0x6f7d2a0, internal_6f7d2a0, public_6f7d2a0);
extern "C" NAKED register_t __cdecl internal_6f7d2a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        sub esp, 8
        cmp ecx, eax
        je public_6f7d4ad
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        push edi
        lea edi, ds:[ebx+0x14]
        lea esi, ds:[ecx+0x18]
        jmp public_6f7d2d0
        public_6f7d2c3 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x24]
        nop 
        lea esp, ss:[esp]
        public_6f7d2d0 : nop
        push ebx
        call public_6f7ee40
        mov eax, dword ptr ds : [ebx+0x10]
        lea ecx, ds:[esi-4]
        cmp ecx, edi
        mov dword ptr ds : [esi-8], eax
        lea ebp, ds:[esi-4]
        je public_6f7d444
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f7d2f7
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6f7d310
        public_6f7d2f7 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        public_6f7d310 : nop
        mov ebx, dword ptr ds : [esi]
        test ebx, ebx
        jne public_6f7d31a
        xor edx, edx
        jmp public_6f7d32f
        public_6f7d31a : nop
        mov ecx, dword ptr ds : [esi+4]
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f7d32f : nop
        cmp dword ptr ss : [esp+0x10], edx
        ja public_6f7d39f
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+4]
        cmp eax, edx
        mov dword ptr ss : [esp+0x10], edx
        mov ecx, ebx
        je public_6f7d367
        public_6f7d345 : nop
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], edx
        mov edx, dword ptr ss : [esp+0x10]
        add eax, 0xC
        add ecx, 0xC
        cmp eax, edx
        jne public_6f7d345
        public_6f7d367 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f7d37d
        xor edx, edx
        lea ecx, ds:[edx+edx*2]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[edx+ecx*4]
        jmp public_6f7d441
        public_6f7d37d : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        lea ecx, ds:[edx+edx*2]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[edx+ecx*4]
        jmp public_6f7d441
        public_6f7d39f : nop
        mov ecx, edi
        call public_6f36d10
        mov ecx, ebp
        mov ebx, eax
        call public_6f7f350
        cmp ebx, eax
        ja public_6f7d3f7
        mov ebx, dword ptr ds : [edi+4]
        mov ecx, ebp
        call public_6f36d10
        mov edx, dword ptr ds : [esi]
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ds : [edi+4]
        push edx
        lea ebx, ds:[ebx+ecx*4]
        push ebx
        push eax
        call public_6f7f720
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi+8]
        add esp, 0xC
        push ecx
        push edx
        push ebx
        mov ecx, ebp
        call public_6f6f720
        mov ecx, edi
        call public_6f36d10
        mov ecx, dword ptr ds : [esi]
        lea eax, ds:[eax+eax*2]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+4], edx
        jmp public_6f7d444
        public_6f7d3f7 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, ebp
        call public_6ea1490
        mov edx, dword ptr ds : [esi]
        push edx
        call public_6fa8fe0
        add esp, 4
        mov ecx, edi
        call public_6f36d10
        test eax, eax
        jge public_6f7d41d
        xor eax, eax
        public_6f7d41d : nop
        lea eax, ds:[eax+eax*2]
        shl eax, 2
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edx
        mov ecx, ebp
        call public_6f6f720
        mov dword ptr ds : [esi+8], eax
        public_6f7d441 : nop
        mov dword ptr ds : [esi+4], eax
        public_6f7d444 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea ebx, ds:[esi+0xC]
        lea ebp, ds:[eax+0x24]
        cmp ebx, ebp
        je public_6f7d477
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_6f309a0
        mov dl, byte ptr ss : [ebp+1]
        push ebp
        mov ecx, ebx
        mov byte ptr ds : [esi+0xD], dl
        call public_6f30a60
        mov eax, dword ptr ss : [esp+0x24]
        public_6f7d477 : nop
        mov ecx, dword ptr ds : [eax+0x38]
        mov dword ptr ds : [esi+0x20], ecx
        mov dl, byte ptr ds : [eax+0x3C]
        mov byte ptr ds : [esi+0x24], dl
        mov cl, byte ptr ds : [eax+0x3D]
        mov byte ptr ds : [esi+0x25], cl
        mov edx, dword ptr ds : [eax+0x40]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        add eax, 0x44
        mov dword ptr ds : [esi+0x28], edx
        add esi, 0x44
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6f7d2c3
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6f7d4ad : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f7d2a0)
    }
}

#undef public_6f7d2c3
#undef public_6f7d2d0
#undef public_6f7d2f7
#undef public_6f7d310
#undef public_6f7d31a
#undef public_6f7d32f
#undef public_6f7d345
#undef public_6f7d367
#undef public_6f7d37d
#undef public_6f7d39f
#undef public_6f7d3f7
#undef public_6f7d41d
#undef public_6f7d441
#undef public_6f7d444
#undef public_6f7d477
#undef public_6f7d4ad
