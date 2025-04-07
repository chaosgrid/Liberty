#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269e70);
CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6269ea4 _public_6269ea4
#define public_6269ea6 _public_6269ea6
#define public_6269eae _public_6269eae
#define public_6269eb3 _public_6269eb3
#define public_6269ebf _public_6269ebf
#define public_6269ee0 _public_6269ee0
#define public_6269ef4 _public_6269ef4
#define public_6269f00 _public_6269f00
#define public_6269f1c _public_6269f1c
#define public_6269f38 _public_6269f38
#define public_6269f40 _public_6269f40
#define public_6269f53 _public_6269f53
#define public_6269f97 _public_6269f97
#define public_6269fb6 _public_6269fb6
#define public_6269fe3 _public_6269fe3
#define public_6269fe7 _public_6269fe7
#define public_626a002 _public_626a002
#define public_626a014 _public_626a014
#define public_626a02c _public_626a02c
#define public_626a037 _public_626a037
#define public_626a04e _public_626a04e
#define public_626a070 _public_626a070
#define public_626a08c _public_626a08c
#define public_626a097 _public_626a097
#define public_626a0b0 _public_626a0b0
#define public_626a0c0 _public_626a0c0
#define public_626a0d2 _public_626a0d2
#define public_626a0d6 _public_626a0d6
#define public_626a0d9 _public_626a0d9

PROC_DECLARE(0x6269e70, internal_6269e70, public_6269e70);
extern "C" NAKED register_t __cdecl internal_6269e70()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub eax, esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        sar eax, 5
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6269fb6
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6269ea4
        mov eax, esi
        sub eax, ecx
        sar eax, 5
        cmp edi, eax
        jb public_6269ea6
        public_6269ea4 : nop
        mov eax, edi
        public_6269ea6 : nop
        test ecx, ecx
        jne public_6269eae
        xor esi, esi
        jmp public_6269eb3
        public_6269eae : nop
        sub esi, ecx
        sar esi, 5
        public_6269eb3 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6269ebf
        xor eax, eax
        public_6269ebf : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ss : [esp+0x20]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_6269ef4
        public_6269ee0 : nop
        push esi
        push ebx
        call public_626c1e0
        add esi, 0x20
        add esp, 8
        add ebx, 0x20
        cmp esi, ebp
        jne public_6269ee0
        public_6269ef4 : nop
        test edi, edi
        mov esi, ebx
        jbe public_6269f1c
        mov dword ptr ss : [esp+0x1C], edi
        mov edi, edi
        public_6269f00 : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        push esi
        call public_626c1e0
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        add esi, 0x20
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6269f00
        public_6269f1c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, edi
        shl eax, 5
        add eax, ebx
        mov ebx, dword ptr ds : [ecx+8]
        cmp ebp, ebx
        mov esi, ebp
        je public_6269f53
        sub eax, ebp
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6269f40
        public_6269f38 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6269f40 : nop
        add eax, esi
        push esi
        push eax
        call public_626c1e0
        add esi, 0x20
        add esp, 8
        cmp esi, ebx
        jne public_6269f38
        public_6269f53 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 5
        add eax, esi
        add esp, 4
        test edx, edx
        mov dword ptr ds : [ecx+0xC], eax
        jne public_6269f97
        xor eax, eax
        mov eax, edi
        pop edi
        shl eax, 5
        add eax, esi
        mov dword ptr ds : [ecx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6269f97 : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 5
        add eax, edi
        pop edi
        shl eax, 5
        add eax, esi
        mov dword ptr ds : [ecx+4], esi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 8
        ret 0xC
        public_6269fb6 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov edx, esi
        sub edx, ebx
        sar edx, 5
        cmp edx, edi
        jae public_626a04e
        mov edx, edi
        shl edx, 5
        cmp ebx, esi
        mov dword ptr ss : [esp+0x1C], edx
        lea eax, ds:[edx+ebx]
        mov ebp, ebx
        je public_626a002
        sub eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6269fe7
        public_6269fe3 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6269fe7 : nop
        add eax, ebp
        push ebp
        push eax
        call public_626c1e0
        add ebp, 0x20
        add esp, 8
        cmp ebp, esi
        jne public_6269fe3
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        public_626a002 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x24]
        mov eax, esi
        sub eax, ebx
        sar eax, 5
        sub edi, eax
        je public_626a02c
        public_626a014 : nop
        push ebp
        push esi
        call public_626c1e0
        add esp, 8
        add esi, 0x20
        dec edi
        jne public_626a014
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        public_626a02c : nop
        mov eax, dword ptr ds : [ecx+8]
        cmp ebx, eax
        je public_626a0d6
        public_626a037 : nop
        mov edi, ebx
        add ebx, 0x20
        cmp ebx, eax
        mov ecx, 8
        mov esi, ebp
        rep movsd
        jne public_626a037
        jmp public_626a0d2
        public_626a04e : nop
        test edi, edi
        jbe public_626a0d9
        shl edi, 5
        mov edx, edi
        mov edi, esi
        sub edi, edx
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x1C], edx
        je public_626a08c
        lea esp, ss:[esp]
        public_626a070 : nop
        push edi
        push ebp
        call public_626c1e0
        add edi, 0x20
        add esp, 8
        add ebp, 0x20
        cmp edi, esi
        jne public_626a070
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        public_626a08c : nop
        mov ebp, dword ptr ds : [ecx+8]
        mov eax, ebp
        sub eax, edx
        cmp ebx, eax
        je public_626a0b0
        public_626a097 : nop
        sub eax, 0x20
        sub ebp, 0x20
        cmp eax, ebx
        mov ecx, 8
        mov esi, eax
        mov edi, ebp
        rep movsd
        jne public_626a097
        mov ecx, dword ptr ss : [esp+0x10]
        public_626a0b0 : nop
        lea eax, ds:[edx+ebx]
        cmp ebx, eax
        je public_626a0d6
        mov ebp, dword ptr ss : [esp+0x24]
        nop 
        lea esp, ss:[esp]
        public_626a0c0 : nop
        mov edi, ebx
        add ebx, 0x20
        cmp ebx, eax
        mov ecx, 8
        mov esi, ebp
        rep movsd
        jne public_626a0c0
        public_626a0d2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_626a0d6 : nop
        add dword ptr ds : [ecx+8], edx
        public_626a0d9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6269e70)
    }
}

#undef public_6269ea4
#undef public_6269ea6
#undef public_6269eae
#undef public_6269eb3
#undef public_6269ebf
#undef public_6269ee0
#undef public_6269ef4
#undef public_6269f00
#undef public_6269f1c
#undef public_6269f38
#undef public_6269f40
#undef public_6269f53
#undef public_6269f97
#undef public_6269fb6
#undef public_6269fe3
#undef public_6269fe7
#undef public_626a002
#undef public_626a014
#undef public_626a02c
#undef public_626a037
#undef public_626a04e
#undef public_626a070
#undef public_626a08c
#undef public_626a097
#undef public_626a0b0
#undef public_626a0c0
#undef public_626a0d2
#undef public_626a0d6
#undef public_626a0d9
