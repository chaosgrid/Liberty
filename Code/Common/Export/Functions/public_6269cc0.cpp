#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62695c0);
CLANG_FORWARD_PROC_SYMBOL(public_626a570);
CLANG_FORWARD_PROC_SYMBOL(public_626a5b0);
CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6269cff _public_6269cff
#define public_6269d04 _public_6269d04
#define public_6269d0c _public_6269d0c
#define public_6269d11 _public_6269d11
#define public_6269d1d _public_6269d1d
#define public_6269d36 _public_6269d36
#define public_6269d4a _public_6269d4a
#define public_6269da8 _public_6269da8
#define public_6269de7 _public_6269de7
#define public_6269dfd _public_6269dfd
#define public_6269e12 _public_6269e12
#define public_6269e27 _public_6269e27
#define public_6269e32 _public_6269e32
#define public_6269e44 _public_6269e44
#define public_6269e4a _public_6269e4a

PROC_DECLARE(0x6269cc0, internal_6269cc0, public_6269cc0);
extern "C" NAKED register_t __cdecl internal_6269cc0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, ebp
        sub eax, edx
        sar eax, 5
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ebx+8]
        sub ecx, eax
        sar ecx, 5
        cmp ecx, 1
        push esi
        push edi
        jae public_6269da8
        test edx, edx
        je public_6269cff
        mov ecx, eax
        sub ecx, edx
        sar ecx, 5
        cmp ecx, 1
        ja public_6269d04
        public_6269cff : nop
        mov ecx, 1
        public_6269d04 : nop
        test edx, edx
        jne public_6269d0c
        xor eax, eax
        jmp public_6269d11
        public_6269d0c : nop
        sub eax, edx
        sar eax, 5
        public_6269d11 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6269d1d
        xor eax, eax
        public_6269d1d : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov esi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov edi, eax
        je public_6269d4a
        public_6269d36 : nop
        push esi
        push edi
        call public_626c1e0
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, ebp
        jne public_6269d36
        public_6269d4a : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push edi
        call public_626c1e0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 8
        add edi, 0x20
        push edi
        push eax
        push ebp
        mov ecx, ebx
        call public_626a570
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call public_628f050
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x14]
        shl eax, 5
        add eax, esi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], eax
        call public_62695c0
        inc eax
        shl eax, 5
        add eax, esi
        mov dword ptr ds : [ebx+4], esi
        jmp public_6269e4a
        public_6269da8 : nop
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 5
        cmp ecx, 1
        mov ecx, ebx
        jae public_6269dfd
        lea edx, ss:[ebp+0x20]
        push edx
        push eax
        push ebp
        call public_626a570
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        mov edx, eax
        sub edx, ebp
        sar edx, 5
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, ebx
        call public_626a5b0
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_6269e44
        public_6269de7 : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        rep movsd
        jne public_6269de7
        jmp public_6269e44
        public_6269dfd : nop
        push eax
        push eax
        add eax, 0xFFFFFFE0
        push eax
        call public_626a570
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x20]
        cmp ebp, eax
        je public_6269e27
        public_6269e12 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6269e12
        public_6269e27 : nop
        lea eax, ss:[ebp+0x20]
        cmp ebp, eax
        je public_6269e44
        mov edx, dword ptr ss : [esp+0x20]
        public_6269e32 : nop
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        mov esi, edx
        rep movsd
        jne public_6269e32
        public_6269e44 : nop
        mov eax, dword ptr ds : [ebx+8]
        add eax, 0x20
        public_6269e4a : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        shl eax, 5
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6269cc0)
    }
}

#undef public_6269cff
#undef public_6269d04
#undef public_6269d0c
#undef public_6269d11
#undef public_6269d1d
#undef public_6269d36
#undef public_6269d4a
#undef public_6269da8
#undef public_6269de7
#undef public_6269dfd
#undef public_6269e12
#undef public_6269e27
#undef public_6269e32
#undef public_6269e44
#undef public_6269e4a
