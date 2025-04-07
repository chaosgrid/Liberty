#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ffd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7fff0 _public_6f7fff0
#define public_6f8002f _public_6f8002f
#define public_6f80037 _public_6f80037
#define public_6f80041 _public_6f80041
#define public_6f80049 _public_6f80049
#define public_6f80054 _public_6f80054
#define public_6f80062 _public_6f80062
#define public_6f80078 _public_6f80078
#define public_6f8008d _public_6f8008d
#define public_6f80095 _public_6f80095
#define public_6f8009d _public_6f8009d
#define public_6f800a5 _public_6f800a5
#define public_6f800ad _public_6f800ad
#define public_6f800b9 _public_6f800b9
#define public_6f800c1 _public_6f800c1
#define public_6f800c8 _public_6f800c8
#define public_6f800d6 _public_6f800d6
#define public_6f800e6 _public_6f800e6
#define public_6f800fe _public_6f800fe
#define public_6f80110 _public_6f80110
#define public_6f80127 _public_6f80127
#define public_6f8014b _public_6f8014b
#define public_6f80176 _public_6f80176

PROC_DECLARE(0x6f7ffd0, internal_6f7ffd0, public_6f7ffd0);
extern "C" NAKED register_t __cdecl internal_6f7ffd0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        cmp dword ptr ss : [esp+8], eax
        je public_6f80176
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        push edi
        lea ebp, ds:[eax+0xC]
        lea ebx, ds:[ecx+0xC]
        lea ecx, ds:[ecx]
        public_6f7fff0 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax-0x38]
        sub eax, 0x38
        sub ecx, 0x38
        sub ebx, 0x38
        sub ebp, 0x38
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [ebp-8]
        lea ecx, ds:[ebx-4]
        lea edx, ss:[ebp-4]
        cmp ecx, edx
        mov dword ptr ds : [ebx-8], eax
        lea edi, ds:[ebx-4]
        je public_6f8014b
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        jne public_6f8002f
        xor edx, edx
        jmp public_6f80037
        public_6f8002f : nop
        mov edx, dword ptr ss : [ebp+4]
        sub edx, eax
        sar edx, 2
        public_6f80037 : nop
        mov esi, dword ptr ds : [ebx]
        test esi, esi
        jne public_6f80041
        xor ecx, ecx
        jmp public_6f80049
        public_6f80041 : nop
        mov ecx, dword ptr ds : [ebx+4]
        sub ecx, esi
        sar ecx, 2
        public_6f80049 : nop
        cmp edx, ecx
        ja public_6f8008d
        mov ecx, dword ptr ss : [ebp+4]
        cmp eax, ecx
        je public_6f80062
        public_6f80054 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], edx
        add eax, 4
        add esi, 4
        cmp eax, ecx
        jne public_6f80054
        public_6f80062 : nop
        mov ecx, dword ptr ss : [ebp]
        test ecx, ecx
        jne public_6f80078
        mov ecx, dword ptr ds : [ebx]
        xor eax, eax
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [ebx+4], edx
        jmp public_6f8014b
        public_6f80078 : nop
        mov eax, dword ptr ss : [ebp+4]
        sub eax, ecx
        mov ecx, dword ptr ds : [ebx]
        sar eax, 2
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [ebx+4], edx
        jmp public_6f8014b
        public_6f8008d : nop
        test eax, eax
        jne public_6f80095
        xor edx, edx
        jmp public_6f8009d
        public_6f80095 : nop
        mov edx, dword ptr ss : [ebp+4]
        sub edx, eax
        sar edx, 2
        public_6f8009d : nop
        test esi, esi
        jne public_6f800a5
        xor ecx, ecx
        jmp public_6f800ad
        public_6f800a5 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, esi
        sar ecx, 2
        public_6f800ad : nop
        cmp edx, ecx
        ja public_6f80110
        test esi, esi
        jne public_6f800b9
        xor ecx, ecx
        jmp public_6f800c1
        public_6f800b9 : nop
        mov ecx, dword ptr ds : [ebx+4]
        sub ecx, esi
        sar ecx, 2
        public_6f800c1 : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6f800d6
        public_6f800c8 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], edx
        add eax, 4
        add esi, 4
        cmp eax, ecx
        jne public_6f800c8
        public_6f800d6 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp ecx, eax
        mov edi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x10], eax
        mov esi, ecx
        je public_6f800fe
        public_6f800e6 : nop
        push esi
        push edi
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, eax
        jne public_6f800e6
        public_6f800fe : nop
        lea ecx, ss:[ebp-4]
        call public_6fa3db0
        mov ecx, dword ptr ds : [ebx]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [ebx+4], edx
        jmp public_6f8014b
        public_6f80110 : nop
        push esi
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[ebp-4]
        call public_6fa3db0
        test eax, eax
        jge public_6f80127
        xor eax, eax
        public_6f80127 : nop
        shl eax, 2
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [ebp]
        push eax
        push ecx
        push edx
        mov ecx, edi
        call public_6eed270
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        public_6f8014b : nop
        mov eax, dword ptr ss : [esp+0x1C]
        lea esi, ss:[ebp+0xC]
        lea edi, ds:[ebx+0xC]
        mov ecx, 6
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [ebx+0x24], ecx
        cmp eax, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ss : [ebp+0x28]
        mov byte ptr ds : [ebx+0x28], dl
        jne public_6f7fff0
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6f80176 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f7ffd0)
    }
}

#undef public_6f7fff0
#undef public_6f8002f
#undef public_6f80037
#undef public_6f80041
#undef public_6f80049
#undef public_6f80054
#undef public_6f80062
#undef public_6f80078
#undef public_6f8008d
#undef public_6f80095
#undef public_6f8009d
#undef public_6f800a5
#undef public_6f800ad
#undef public_6f800b9
#undef public_6f800c1
#undef public_6f800c8
#undef public_6f800d6
#undef public_6f800e6
#undef public_6f800fe
#undef public_6f80110
#undef public_6f80127
#undef public_6f8014b
#undef public_6f80176
