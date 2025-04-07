#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62f03c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626e49d _public_626e49d
#define public_626e4a5 _public_626e4a5
#define public_626e4b0 _public_626e4b0
#define public_626e4b8 _public_626e4b8
#define public_626e4c3 _public_626e4c3
#define public_626e4d1 _public_626e4d1
#define public_626e4ec _public_626e4ec
#define public_626e506 _public_626e506
#define public_626e50e _public_626e50e
#define public_626e516 _public_626e516
#define public_626e51e _public_626e51e
#define public_626e526 _public_626e526
#define public_626e532 _public_626e532
#define public_626e53a _public_626e53a
#define public_626e541 _public_626e541
#define public_626e54f _public_626e54f
#define public_626e578 _public_626e578
#define public_626e59d _public_626e59d
#define public_626e5c6 _public_626e5c6

PROC_DECLARE(0x626e3c0, internal_626e3c0, public_626e3c0);
extern "C" NAKED register_t __cdecl internal_626e3c0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push esi
        mov edi, ecx
        call public_62f03c0
        mov eax, dword ptr ds : [esi+0x5C]
        mov dword ptr ds : [edi+0x5C], eax
        mov cl, byte ptr ds : [esi+0x60]
        mov byte ptr ds : [edi+0x60], cl
        mov edx, dword ptr ds : [esi+0x64]
        mov dword ptr ds : [edi+0x64], edx
        mov eax, dword ptr ds : [esi+0x68]
        mov dword ptr ds : [edi+0x68], eax
        mov cl, byte ptr ds : [esi+0x6C]
        mov byte ptr ds : [edi+0x6C], cl
        mov edx, dword ptr ds : [esi+0x70]
        mov dword ptr ds : [edi+0x70], edx
        mov eax, dword ptr ds : [esi+0x74]
        mov dword ptr ds : [edi+0x74], eax
        mov ecx, dword ptr ds : [esi+0x78]
        mov dword ptr ds : [edi+0x78], ecx
        mov edx, dword ptr ds : [esi+0x7C]
        mov dword ptr ds : [edi+0x7C], edx
        mov eax, dword ptr ds : [esi+0x80]
        mov dword ptr ds : [edi+0x80], eax
        mov ecx, dword ptr ds : [esi+0x84]
        mov dword ptr ds : [edi+0x84], ecx
        mov edx, dword ptr ds : [esi+0x88]
        mov dword ptr ds : [edi+0x88], edx
        mov eax, dword ptr ds : [esi+0x8C]
        mov dword ptr ds : [edi+0x8C], eax
        mov ecx, dword ptr ds : [esi+0x90]
        mov dword ptr ds : [edi+0x90], ecx
        mov edx, dword ptr ds : [esi+0x94]
        mov dword ptr ds : [edi+0x94], edx
        mov eax, dword ptr ds : [esi+0x98]
        mov dword ptr ds : [edi+0x98], eax
        mov ecx, dword ptr ds : [esi+0x9C]
        mov dword ptr ds : [edi+0x9C], ecx
        mov edx, dword ptr ds : [esi+0xA0]
        mov dword ptr ds : [edi+0xA0], edx
        mov eax, dword ptr ds : [esi+0xA4]
        lea ebx, ds:[esi+0xA8]
        lea esi, ds:[edi+0xA8]
        cmp esi, ebx
        mov dword ptr ds : [edi+0xA4], eax
        je public_626e5c6
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_626e49d
        xor ebp, ebp
        jmp public_626e4a5
        public_626e49d : nop
        mov ebp, dword ptr ds : [ebx+8]
        sub ebp, eax
        sar ebp, 2
        public_626e4a5 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_626e4b0
        xor edx, edx
        jmp public_626e4b8
        public_626e4b0 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_626e4b8 : nop
        cmp ebp, edx
        ja public_626e506
        mov edx, dword ptr ds : [ebx+8]
        cmp eax, edx
        je public_626e4d1
        public_626e4c3 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebp
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_626e4c3
        public_626e4d1 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_626e4ec
        mov ecx, dword ptr ds : [esi+4]
        xor ebx, ebx
        lea edx, ds:[ecx+ebx*4]
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_626e4ec : nop
        mov ebx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [esi+4]
        sub ebx, eax
        sar ebx, 2
        lea edx, ds:[ecx+ebx*4]
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_626e506 : nop
        test eax, eax
        jne public_626e50e
        xor ebp, ebp
        jmp public_626e516
        public_626e50e : nop
        mov ebp, dword ptr ds : [ebx+8]
        sub ebp, eax
        sar ebp, 2
        public_626e516 : nop
        test ecx, ecx
        jne public_626e51e
        xor edx, edx
        jmp public_626e526
        public_626e51e : nop
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        sar edx, 2
        public_626e526 : nop
        cmp ebp, edx
        ja public_626e578
        test ecx, ecx
        jne public_626e532
        xor edx, edx
        jmp public_626e53a
        public_626e532 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_626e53a : nop
        lea edx, ds:[eax+edx*4]
        cmp eax, edx
        je public_626e54f
        public_626e541 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebp
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_626e541
        public_626e54f : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [ebx+8]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_627f7b0
        mov ecx, ebx
        call public_626a600
        mov edx, dword ptr ds : [esi+4]
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_626e578 : nop
        mov edx, dword ptr ds : [esi+8]
        push edx
        push ecx
        mov ecx, esi
        call public_628f050
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        add esp, 4
        mov ecx, ebx
        call public_626a600
        test eax, eax
        jge public_626e59d
        xor eax, eax
        public_626e59d : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov ebx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        push ebx
        mov ecx, esi
        call public_627f7b0
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+8], eax
        public_626e5c6 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626e3c0)
    }
}

#undef public_626e49d
#undef public_626e4a5
#undef public_626e4b0
#undef public_626e4b8
#undef public_626e4c3
#undef public_626e4d1
#undef public_626e4ec
#undef public_626e506
#undef public_626e50e
#undef public_626e516
#undef public_626e51e
#undef public_626e526
#undef public_626e532
#undef public_626e53a
#undef public_626e541
#undef public_626e54f
#undef public_626e578
#undef public_626e59d
#undef public_626e5c6
