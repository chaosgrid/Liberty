#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d28880);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b270);
CLANG_FORWARD_PROC_SYMBOL(public_6d59db0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59de0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c880);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d4b2b4 _public_6d4b2b4
#define public_6d4b2b9 _public_6d4b2b9
#define public_6d4b2c1 _public_6d4b2c1
#define public_6d4b2c6 _public_6d4b2c6
#define public_6d4b2d2 _public_6d4b2d2
#define public_6d4b2f1 _public_6d4b2f1
#define public_6d4b305 _public_6d4b305
#define public_6d4b36a _public_6d4b36a
#define public_6d4b384 _public_6d4b384
#define public_6d4b3c3 _public_6d4b3c3
#define public_6d4b3e8 _public_6d4b3e8
#define public_6d4b400 _public_6d4b400
#define public_6d4b415 _public_6d4b415
#define public_6d4b420 _public_6d4b420
#define public_6d4b434 _public_6d4b434

PROC_DECLARE(0x6d4b270, internal_6d4b270, public_6d4b270);
extern "C" NAKED register_t __cdecl internal_6d4b270()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        mov dl, byte ptr ss : [esp+0x10]
        push esi
        lea esi, ds:[ecx+0x3B4]
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, 1
        push edi
        mov byte ptr ss : [esp+0xC], dl
        mov edi, eax
        jae public_6d4b384
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6d4b2b4
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ecx, 1
        ja public_6d4b2b9
        public_6d4b2b4 : nop
        mov ecx, 1
        public_6d4b2b9 : nop
        test edx, edx
        jne public_6d4b2c1
        xor eax, eax
        jmp public_6d4b2c6
        public_6d4b2c1 : nop
        sub eax, edx
        sar eax, 3
        public_6d4b2c6 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6d4b2d2
        xor eax, eax
        public_6d4b2d2 : nop
        push ebx
        lea edx, ds:[eax*8]
        push ebp
        push edx
        call public_6d60012
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x20], eax
        mov ebx, eax
        je public_6d4b305
        public_6d4b2f1 : nop
        push ebp
        push ebx
        call public_6d5c880
        add ebp, 8
        add esp, 8
        add ebx, 8
        cmp ebp, edi
        jne public_6d4b2f1
        public_6d4b305 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_6d59de0
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 8
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_6d59db0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6d28880
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 4
        lea ecx, ds:[edx+eax*8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        pop ebp
        mov dword ptr ds : [esi+0xC], ecx
        pop ebx
        jne public_6d4b36a
        xor ecx, ecx
        lea eax, ds:[edx+ecx*8+8]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 8
        public_6d4b36a : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 3
        lea eax, ds:[edx+ecx*8+8]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 8
        public_6d4b384 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 3
        cmp ecx, 1
        mov ecx, esi
        jae public_6d4b3e8
        lea edx, ds:[edi+8]
        push edx
        push eax
        push edi
        call public_6d59db0
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+8]
        push ecx
        sub edx, edi
        sar edx, 3
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6d59de0
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6d4b434
        public_6d4b3c3 : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edi], edx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+4], ecx
        add edi, 8
        cmp edi, eax
        jne public_6d4b3c3
        mov eax, dword ptr ds : [esi+8]
        add eax, 8
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 8
        public_6d4b3e8 : nop
        push eax
        push eax
        add eax, 0xFFFFFFF8
        push eax
        call public_6d59db0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-8]
        cmp edi, eax
        je public_6d4b415
        lea ecx, ds:[ecx]
        public_6d4b400 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_6d4b400
        public_6d4b415 : nop
        lea ecx, ds:[edi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6d4b434
        mov edi, edi
        public_6d4b420 : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        add eax, 8
        cmp eax, ecx
        jne public_6d4b420
        public_6d4b434 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 8
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d4b270)
    }
}

#undef public_6d4b2b4
#undef public_6d4b2b9
#undef public_6d4b2c1
#undef public_6d4b2c6
#undef public_6d4b2d2
#undef public_6d4b2f1
#undef public_6d4b305
#undef public_6d4b36a
#undef public_6d4b384
#undef public_6d4b3c3
#undef public_6d4b3e8
#undef public_6d4b400
#undef public_6d4b415
#undef public_6d4b420
#undef public_6d4b434
