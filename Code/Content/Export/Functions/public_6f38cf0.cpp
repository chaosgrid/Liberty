#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f38d10 _public_6f38d10
#define public_6f38d4c _public_6f38d4c
#define public_6f38d54 _public_6f38d54
#define public_6f38d5f _public_6f38d5f
#define public_6f38d67 _public_6f38d67
#define public_6f38d72 _public_6f38d72
#define public_6f38d80 _public_6f38d80
#define public_6f38d93 _public_6f38d93
#define public_6f38da6 _public_6f38da6
#define public_6f38dae _public_6f38dae
#define public_6f38db6 _public_6f38db6
#define public_6f38dbe _public_6f38dbe
#define public_6f38dc6 _public_6f38dc6
#define public_6f38dd6 _public_6f38dd6
#define public_6f38dde _public_6f38dde
#define public_6f38de5 _public_6f38de5
#define public_6f38df3 _public_6f38df3
#define public_6f38e02 _public_6f38e02
#define public_6f38e16 _public_6f38e16
#define public_6f38e32 _public_6f38e32
#define public_6f38e46 _public_6f38e46
#define public_6f38e5d _public_6f38e5d
#define public_6f38e82 _public_6f38e82
#define public_6f38e85 _public_6f38e85
#define public_6f38e97 _public_6f38e97

PROC_DECLARE(0x6f38cf0, internal_6f38cf0, public_6f38cf0);
extern "C" NAKED register_t __cdecl internal_6f38cf0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        cmp dword ptr ss : [esp+8], eax
        je public_6f38e97
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        push edi
        lea edi, ds:[eax+8]
        lea ebp, ds:[ecx+8]
        lea ecx, ds:[ecx]
        public_6f38d10 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax-0x14]
        sub eax, 0x14
        sub ecx, 0x14
        sub edi, 0x14
        sub ebp, 0x14
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ds : [ecx], edx
        lea eax, ss:[ebp-4]
        lea ecx, ds:[edi-4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], edi
        lea ebx, ss:[ebp-4]
        je public_6f38e85
        mov eax, dword ptr ds : [edi]
        test eax, eax
        jne public_6f38d4c
        xor esi, esi
        jmp public_6f38d54
        public_6f38d4c : nop
        mov esi, dword ptr ds : [edi+4]
        sub esi, eax
        sar esi, 2
        public_6f38d54 : nop
        mov edx, dword ptr ss : [ebp]
        test edx, edx
        jne public_6f38d5f
        xor ecx, ecx
        jmp public_6f38d67
        public_6f38d5f : nop
        mov ecx, dword ptr ss : [ebp+4]
        sub ecx, edx
        sar ecx, 2
        public_6f38d67 : nop
        cmp esi, ecx
        ja public_6f38da6
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, ecx
        je public_6f38d80
        public_6f38d72 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6f38d72
        public_6f38d80 : nop
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        jne public_6f38d93
        mov edx, dword ptr ss : [ebp]
        xor eax, eax
        lea eax, ds:[edx+eax*4]
        jmp public_6f38e82
        public_6f38d93 : nop
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [ebp]
        sub eax, ecx
        sar eax, 2
        lea eax, ds:[edx+eax*4]
        jmp public_6f38e82
        public_6f38da6 : nop
        test eax, eax
        jne public_6f38dae
        xor esi, esi
        jmp public_6f38db6
        public_6f38dae : nop
        mov esi, dword ptr ds : [edi+4]
        sub esi, eax
        sar esi, 2
        public_6f38db6 : nop
        test edx, edx
        jne public_6f38dbe
        xor ecx, ecx
        jmp public_6f38dc6
        public_6f38dbe : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6f38dc6 : nop
        cmp esi, ecx
        ja public_6f38e46
        test edx, edx
        jne public_6f38dd6
        xor ecx, ecx
        jmp public_6f38dde
        public_6f38dd6 : nop
        mov ecx, dword ptr ss : [ebp+4]
        sub ecx, edx
        sar ecx, 2
        public_6f38dde : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6f38df3
        public_6f38de5 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6f38de5
        public_6f38df3 : nop
        mov ebx, dword ptr ds : [edi+4]
        cmp ecx, ebx
        lea eax, ds:[edi-4]
        mov edi, dword ptr ss : [ebp+4]
        mov esi, ecx
        je public_6f38e16
        public_6f38e02 : nop
        push esi
        push edi
        call public_6eb6740
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, ebx
        jne public_6f38e02
        public_6f38e16 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[ecx-4]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_6f38e32
        mov edx, dword ptr ss : [ebp]
        mov edi, dword ptr ss : [esp+0x10]
        xor eax, eax
        lea eax, ds:[edx+eax*4]
        jmp public_6f38e82
        public_6f38e32 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [ebp]
        mov edi, dword ptr ss : [esp+0x10]
        sub eax, ecx
        sar eax, 2
        lea eax, ds:[edx+eax*4]
        jmp public_6f38e82
        public_6f38e46 : nop
        push edx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ds:[edi-4]
        call public_6fa3db0
        test eax, eax
        jge public_6f38e5d
        xor eax, eax
        public_6f38e5d : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_6eed270
        mov dword ptr ss : [ebp+8], eax
        public_6f38e82 : nop
        mov dword ptr ss : [ebp+4], eax
        public_6f38e85 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ss : [esp+0x18]
        jne public_6f38d10
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6f38e97 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f38cf0)
    }
}

#undef public_6f38d10
#undef public_6f38d4c
#undef public_6f38d54
#undef public_6f38d5f
#undef public_6f38d67
#undef public_6f38d72
#undef public_6f38d80
#undef public_6f38d93
#undef public_6f38da6
#undef public_6f38dae
#undef public_6f38db6
#undef public_6f38dbe
#undef public_6f38dc6
#undef public_6f38dd6
#undef public_6f38dde
#undef public_6f38de5
#undef public_6f38df3
#undef public_6f38e02
#undef public_6f38e16
#undef public_6f38e32
#undef public_6f38e46
#undef public_6f38e5d
#undef public_6f38e82
#undef public_6f38e85
#undef public_6f38e97
