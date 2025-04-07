#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62695c0);
CLANG_FORWARD_PROC_SYMBOL(public_626a570);
CLANG_FORWARD_PROC_SYMBOL(public_626a5b0);
CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6269aa5 _public_6269aa5
#define public_6269aba _public_6269aba
#define public_6269ae3 _public_6269ae3
#define public_6269ae5 _public_6269ae5
#define public_6269aed _public_6269aed
#define public_6269af2 _public_6269af2
#define public_6269afe _public_6269afe
#define public_6269b20 _public_6269b20
#define public_6269b40 _public_6269b40
#define public_6269b50 _public_6269b50
#define public_6269b6c _public_6269b6c
#define public_6269b87 _public_6269b87
#define public_6269b90 _public_6269b90
#define public_6269ba3 _public_6269ba3
#define public_6269bdd _public_6269bdd
#define public_6269c20 _public_6269c20
#define public_6269c38 _public_6269c38
#define public_6269c4a _public_6269c4a
#define public_6269c70 _public_6269c70
#define public_6269c89 _public_6269c89
#define public_6269c94 _public_6269c94
#define public_6269caa _public_6269caa
#define public_6269cad _public_6269cad

PROC_DECLARE(0x6269a90, internal_6269a90, public_6269a90);
extern "C" NAKED register_t __cdecl internal_6269a90()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        mov edx, ebx
        cmp edx, ebx
        push esi
        push edi
        je public_6269aba
        public_6269aa5 : nop
        mov esi, edx
        mov edi, eax
        add edx, 0x20
        mov ecx, 8
        add eax, 0x20
        cmp edx, ebx
        rep movsd
        jne public_6269aa5
        public_6269aba : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [ebp+4]
        sub ecx, eax
        sar ecx, 5
        cmp ecx, esi
        mov dword ptr ss : [ebp+8], eax
        jae public_6269bdd
        test ebx, ebx
        je public_6269ae3
        mov ecx, eax
        sub ecx, ebx
        sar ecx, 5
        cmp esi, ecx
        jb public_6269ae5
        public_6269ae3 : nop
        mov ecx, esi
        public_6269ae5 : nop
        test ebx, ebx
        jne public_6269aed
        xor eax, eax
        jmp public_6269af2
        public_6269aed : nop
        sub eax, ebx
        sar eax, 5
        public_6269af2 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6269afe
        xor eax, eax
        public_6269afe : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov edi, dword ptr ss : [ebp+4]
        add esp, 4
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6269b40
        lea esp, ss:[esp]
        public_6269b20 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edi
        push edx
        call public_626c1e0
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x20
        add edi, 0x20
        add esp, 8
        cmp edi, ebx
        mov dword ptr ss : [esp+0x20], edx
        jne public_6269b20
        public_6269b40 : nop
        test esi, esi
        mov edi, dword ptr ss : [esp+0x20]
        jbe public_6269b6c
        mov dword ptr ss : [esp+0x10], esi
        lea esp, ss:[esp]
        public_6269b50 : nop
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        push edi
        call public_626c1e0
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        add edi, 0x20
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6269b50
        public_6269b6c : nop
        mov edi, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, esi
        shl ecx, 5
        cmp ebx, edi
        lea eax, ds:[ecx+edx]
        je public_6269ba3
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6269b90
        public_6269b87 : nop
        mov eax, dword ptr ss : [esp+0x24]
        nop 
        lea esp, ss:[esp]
        public_6269b90 : nop
        add eax, ebx
        push ebx
        push eax
        call public_626c1e0
        add ebx, 0x20
        add esp, 8
        cmp ebx, edi
        jne public_6269b87
        public_6269ba3 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x1C]
        shl eax, 5
        add eax, edi
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], eax
        call public_62695c0
        add eax, esi
        shl eax, 5
        add eax, edi
        mov dword ptr ss : [ebp+4], edi
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        public_6269bdd : nop
        mov ecx, eax
        sub ecx, ebx
        sar ecx, 5
        cmp ecx, esi
        jae public_6269c4a
        mov edi, esi
        shl edi, 5
        lea edx, ds:[edi+ebx]
        push edx
        push eax
        push ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], edi
        call public_626a570
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, eax
        sub edx, ebx
        push ecx
        sar edx, 5
        sub esi, edx
        push esi
        push eax
        mov ecx, ebp
        call public_626a5b0
        mov eax, dword ptr ss : [ebp+8]
        cmp ebx, eax
        je public_6269c38
        nop 
        public_6269c20 : nop
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, ebx
        add ebx, 0x20
        cmp ebx, eax
        mov ecx, 8
        rep movsd
        jne public_6269c20
        mov edi, dword ptr ss : [esp+0x20]
        public_6269c38 : nop
        mov eax, dword ptr ss : [ebp+8]
        add eax, edi
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        public_6269c4a : nop
        test esi, esi
        jbe public_6269cad
        push eax
        shl esi, 5
        push eax
        sub eax, esi
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], esi
        call public_626a570
        mov edx, dword ptr ss : [ebp+8]
        mov eax, edx
        sub eax, esi
        cmp ebx, eax
        je public_6269c89
        lea esp, ss:[esp]
        public_6269c70 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebx
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6269c70
        mov esi, dword ptr ss : [esp+0x20]
        public_6269c89 : nop
        lea eax, ds:[esi+ebx]
        cmp ebx, eax
        je public_6269caa
        mov edx, dword ptr ss : [esp+0x24]
        public_6269c94 : nop
        mov edi, ebx
        add ebx, 0x20
        cmp ebx, eax
        mov ecx, 8
        mov esi, edx
        rep movsd
        jne public_6269c94
        mov esi, dword ptr ss : [esp+0x20]
        public_6269caa : nop
        add dword ptr ss : [ebp+8], esi
        public_6269cad : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6269a90)
    }
}

#undef public_6269aa5
#undef public_6269aba
#undef public_6269ae3
#undef public_6269ae5
#undef public_6269aed
#undef public_6269af2
#undef public_6269afe
#undef public_6269b20
#undef public_6269b40
#undef public_6269b50
#undef public_6269b6c
#undef public_6269b87
#undef public_6269b90
#undef public_6269ba3
#undef public_6269bdd
#undef public_6269c20
#undef public_6269c38
#undef public_6269c4a
#undef public_6269c70
#undef public_6269c89
#undef public_6269c94
#undef public_6269caa
#undef public_6269cad
