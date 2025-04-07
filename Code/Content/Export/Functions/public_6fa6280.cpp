#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6280);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6510);
CLANG_FORWARD_PROC_SYMBOL(public_6fa66c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa62a2 _public_6fa62a2
#define public_6fa62ba _public_6fa62ba
#define public_6fa62c5 _public_6fa62c5
#define public_6fa62db _public_6fa62db
#define public_6fa62f0 _public_6fa62f0
#define public_6fa6302 _public_6fa6302
#define public_6fa6310 _public_6fa6310
#define public_6fa6324 _public_6fa6324
#define public_6fa633f _public_6fa633f
#define public_6fa636d _public_6fa636d
#define public_6fa6375 _public_6fa6375
#define public_6fa638d _public_6fa638d
#define public_6fa6395 _public_6fa6395
#define public_6fa63ab _public_6fa63ab
#define public_6fa63bb _public_6fa63bb
#define public_6fa63d1 _public_6fa63d1
#define public_6fa63e0 _public_6fa63e0
#define public_6fa63f2 _public_6fa63f2
#define public_6fa6406 _public_6fa6406
#define public_6fa6422 _public_6fa6422
#define public_6fa643d _public_6fa643d
#define public_6fa646b _public_6fa646b
#define public_6fa6474 _public_6fa6474
#define public_6fa6482 _public_6fa6482
#define public_6fa6499 _public_6fa6499
#define public_6fa64af _public_6fa64af
#define public_6fa64b7 _public_6fa64b7
#define public_6fa64d5 _public_6fa64d5
#define public_6fa64e9 _public_6fa64e9
#define public_6fa64fb _public_6fa64fb

PROC_DECLARE(0x6fa6280, internal_6fa6280, public_6fa6280);
extern "C" NAKED register_t __cdecl internal_6fa6280()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov ebx, ecx
        cmp ebx, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_6fa64fb
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        jne public_6fa62a2
        xor edi, edi
        jmp public_6fa62ba
        public_6fa62a2 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_6fa62ba : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_6fa62c5
        xor edx, edx
        jmp public_6fa62db
        public_6fa62c5 : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa62db : nop
        cmp edi, edx
        ja public_6fa636d
        mov ebx, dword ptr ss : [ebp+8]
        cmp esi, ebx
        mov edi, ecx
        je public_6fa6302
        lea esp, ss:[esp]
        public_6fa62f0 : nop
        push esi
        mov ecx, edi
        call public_6fa6510
        add esi, 0x18
        add edi, 0x18
        cmp esi, ebx
        jne public_6fa62f0
        public_6fa6302 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        cmp edi, ebx
        mov esi, edi
        je public_6fa6324
        nop 
        public_6fa6310 : nop
        push 0
        mov ecx, esi
        call public_6fa66c0
        add esi, 0x18
        cmp esi, ebx
        jne public_6fa6310
        mov eax, dword ptr ss : [esp+0x10]
        public_6fa6324 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6fa633f
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        pop esi
        lea edx, ds:[edx+edx*2]
        lea edx, ds:[ecx+edx*8]
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        pop ecx
        ret 4
        public_6fa633f : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        mov eax, 0x2AAAAAAB
        imul ecx
        mov eax, dword ptr ss : [esp+0x10]
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov ecx, dword ptr ds : [eax+4]
        pop edi
        pop esi
        lea edx, ds:[edx+edx*2]
        lea edx, ds:[ecx+edx*8]
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        pop ecx
        ret 4
        public_6fa636d : nop
        test esi, esi
        jne public_6fa6375
        xor edi, edi
        jmp public_6fa638d
        public_6fa6375 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, esi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_6fa638d : nop
        test ecx, ecx
        jne public_6fa6395
        xor edx, edx
        jmp public_6fa63ab
        public_6fa6395 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa63ab : nop
        cmp edi, edx
        ja public_6fa646b
        test ecx, ecx
        jne public_6fa63bb
        xor edx, edx
        jmp public_6fa63d1
        public_6fa63bb : nop
        mov edx, dword ptr ds : [ebx+8]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa63d1 : nop
        lea edx, ds:[edx+edx*2]
        lea edi, ds:[esi+edx*8]
        cmp esi, edi
        mov ebx, ecx
        je public_6fa63f2
        lea ecx, ds:[ecx]
        public_6fa63e0 : nop
        push esi
        mov ecx, ebx
        call public_6fa6510
        add esi, 0x18
        add ebx, 0x18
        cmp esi, edi
        jne public_6fa63e0
        public_6fa63f2 : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp edi, ecx
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov esi, edi
        je public_6fa6422
        public_6fa6406 : nop
        push esi
        push ebx
        call public_6fa4ed0
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 0x18
        add esp, 8
        add ebx, 0x18
        cmp esi, eax
        jne public_6fa6406
        mov eax, dword ptr ss : [esp+0x10]
        public_6fa6422 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6fa643d
        pop edi
        lea ecx, ds:[edx+edx*2]
        mov edx, dword ptr ds : [eax+4]
        pop esi
        lea ecx, ds:[edx+ecx*8]
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        pop ecx
        ret 4
        public_6fa643d : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        lea ecx, ds:[edx+edx*2]
        mov edx, dword ptr ds : [eax+4]
        pop esi
        lea ecx, ds:[edx+ecx*8]
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        pop ecx
        ret 4
        public_6fa646b : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, ecx
        cmp esi, edi
        je public_6fa6482
        public_6fa6474 : nop
        mov ecx, esi
        call public_6eb7d10
        add esi, 0x18
        cmp esi, edi
        jne public_6fa6474
        public_6fa6482 : nop
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        test eax, eax
        jne public_6fa6499
        xor edx, edx
        jmp public_6fa64af
        public_6fa6499 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa64af : nop
        test edx, edx
        mov eax, edx
        jge public_6fa64b7
        xor eax, eax
        public_6fa64b7 : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 3
        push ecx
        call public_6fa912a
        mov dword ptr ds : [ebx+4], eax
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_6fa64e9
        public_6fa64d5 : nop
        push esi
        push edi
        call public_6fa4ed0
        add esi, 0x18
        add esp, 8
        add edi, 0x18
        cmp esi, ebx
        jne public_6fa64d5
        public_6fa64e9 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6fa64fb : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6fa6280)
    }
}

#undef public_6fa62a2
#undef public_6fa62ba
#undef public_6fa62c5
#undef public_6fa62db
#undef public_6fa62f0
#undef public_6fa6302
#undef public_6fa6310
#undef public_6fa6324
#undef public_6fa633f
#undef public_6fa636d
#undef public_6fa6375
#undef public_6fa638d
#undef public_6fa6395
#undef public_6fa63ab
#undef public_6fa63bb
#undef public_6fa63d1
#undef public_6fa63e0
#undef public_6fa63f2
#undef public_6fa6406
#undef public_6fa6422
#undef public_6fa643d
#undef public_6fa646b
#undef public_6fa6474
#undef public_6fa6482
#undef public_6fa6499
#undef public_6fa64af
#undef public_6fa64b7
#undef public_6fa64d5
#undef public_6fa64e9
#undef public_6fa64fb
