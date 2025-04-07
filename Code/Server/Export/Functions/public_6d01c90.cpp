#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce8510);
CLANG_FORWARD_PROC_SYMBOL(public_6ced210);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d01cc0 _public_6d01cc0
#define public_6d01cf0 _public_6d01cf0
#define public_6d01cf5 _public_6d01cf5
#define public_6d01cfd _public_6d01cfd
#define public_6d01d02 _public_6d01d02
#define public_6d01d0e _public_6d01d0e
#define public_6d01d27 _public_6d01d27
#define public_6d01d3b _public_6d01d3b
#define public_6d01da1 _public_6d01da1
#define public_6d01de0 _public_6d01de0
#define public_6d01df9 _public_6d01df9
#define public_6d01e10 _public_6d01e10
#define public_6d01e25 _public_6d01e25
#define public_6d01e30 _public_6d01e30
#define public_6d01e47 _public_6d01e47
#define public_6d01e4d _public_6d01e4d
#define public_6d01e6c _public_6d01e6c

PROC_DECLARE(0x6d01c90, internal_6d01c90, public_6d01c90);
extern "C" NAKED register_t __cdecl internal_6d01c90()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, ecx
        push ebx
        mov dword ptr ss : [esp+0x14], esi
        call public_6ce8510
        mov eax, dword ptr ds : [esi+0xA4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        je public_6d01e6c
        push ebp
        push edi
        nop 
        lea esp, ss:[esp]
        public_6d01cc0 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ebx+0xC]
        lea esi, ds:[eax+8]
        mov eax, dword ptr ds : [ebx+8]
        sub ecx, eax
        sar ecx, 5
        cmp ecx, 1
        mov ebp, eax
        jae public_6d01da1
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        je public_6d01cf0
        mov ecx, eax
        sub ecx, edx
        sar ecx, 5
        cmp ecx, 1
        ja public_6d01cf5
        public_6d01cf0 : nop
        mov ecx, 1
        public_6d01cf5 : nop
        test edx, edx
        jne public_6d01cfd
        xor eax, eax
        jmp public_6d01d02
        public_6d01cfd : nop
        sub eax, edx
        sar eax, 5
        public_6d01d02 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6d01d0e
        xor eax, eax
        public_6d01d0e : nop
        shl eax, 5
        push eax
        call public_6d60012
        mov edi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x14], eax
        mov esi, eax
        je public_6d01d3b
        public_6d01d27 : nop
        push edi
        push esi
        call public_6ced210
        add edi, 0x20
        add esp, 8
        add esi, 0x20
        cmp edi, ebp
        jne public_6d01d27
        public_6d01d3b : nop
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ds:[edx+8]
        push eax
        push 1
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_6d64240]
        mov eax, dword ptr ds : [ebx+8]
        add esi, 0x20
        push esi
        push eax
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d6423c]
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call dword ptr ds : [public_6d64238]
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x18]
        shl eax, 5
        add eax, esi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], eax
        call dword ptr ds : [public_6d645c0]
        inc eax
        shl eax, 5
        add eax, esi
        mov dword ptr ds : [ebx+4], esi
        jmp public_6d01e4d
        public_6d01da1 : nop
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 5
        cmp ecx, 1
        mov ecx, ebx
        jae public_6d01df9
        lea edx, ss:[ebp+0x20]
        push edx
        push eax
        push ebp
        call dword ptr ds : [public_6d6423c]
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 5
        push esi
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6d64240]
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_6d01e47
        mov edi, edi
        public_6d01de0 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        lea esi, ds:[edx+8]
        rep movsd
        jne public_6d01de0
        jmp public_6d01e47
        public_6d01df9 : nop
        push eax
        push eax
        add eax, 0xFFFFFFE0
        push eax
        call dword ptr ds : [public_6d6423c]
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x20]
        cmp ebp, eax
        je public_6d01e25
        nop 
        public_6d01e10 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6d01e10
        public_6d01e25 : nop
        lea eax, ss:[ebp+0x20]
        cmp ebp, eax
        je public_6d01e47
        lea esp, ss:[esp]
        public_6d01e30 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        lea esi, ds:[edx+8]
        rep movsd
        jne public_6d01e30
        public_6d01e47 : nop
        mov eax, dword ptr ds : [ebx+8]
        add eax, 0x20
        public_6d01e4d : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+0xA4]
        mov dword ptr ss : [esp+0x20], eax
        jne public_6d01cc0
        pop edi
        pop ebp
        public_6d01e6c : nop
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6d01c90)
    }
}

#undef public_6d01cc0
#undef public_6d01cf0
#undef public_6d01cf5
#undef public_6d01cfd
#undef public_6d01d02
#undef public_6d01d0e
#undef public_6d01d27
#undef public_6d01d3b
#undef public_6d01da1
#undef public_6d01de0
#undef public_6d01df9
#undef public_6d01e10
#undef public_6d01e25
#undef public_6d01e30
#undef public_6d01e47
#undef public_6d01e4d
#undef public_6d01e6c
