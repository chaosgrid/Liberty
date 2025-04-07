#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272a40);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62bee20);
CLANG_FORWARD_PROC_SYMBOL(public_6331af0);
CLANG_FORWARD_PROC_SYMBOL(public_6332010);
CLANG_FORWARD_PROC_SYMBOL(public_6332110);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6331b5b _public_6331b5b
#define public_6331b60 _public_6331b60
#define public_6331b68 _public_6331b68
#define public_6331b7b _public_6331b7b
#define public_6331b88 _public_6331b88
#define public_6331ba4 _public_6331ba4
#define public_6331bb8 _public_6331bb8
#define public_6331c1b _public_6331c1b
#define public_6331c76 _public_6331c76
#define public_6331c8c _public_6331c8c
#define public_6331ca3 _public_6331ca3
#define public_6331cb8 _public_6331cb8
#define public_6331cc3 _public_6331cc3
#define public_6331cd5 _public_6331cd5
#define public_6331cd9 _public_6331cd9

PROC_DECLARE(0x6331af0, internal_6331af0, public_6331af0);
extern "C" NAKED register_t __cdecl internal_6331af0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        mov ecx, dword ptr ds : [ebx+8]
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ebx+0xC]
        sub edx, ecx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        push edi
        jae public_6331c1b
        test esi, esi
        je public_6331b5b
        mov edx, ecx
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov edi, edx
        ja public_6331b60
        public_6331b5b : nop
        mov edi, 1
        public_6331b60 : nop
        test esi, esi
        jne public_6331b68
        xor edx, edx
        jmp public_6331b7b
        public_6331b68 : nop
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6331b7b : nop
        lea eax, ds:[edx+edi]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6331b88
        xor eax, eax
        public_6331b88 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 2
        push edx
        call public_6391d9c
        mov esi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov edi, eax
        je public_6331bb8
        public_6331ba4 : nop
        push esi
        push edi
        call public_62bee20
        add esi, 0x14
        add esp, 8
        add edi, 0x14
        cmp esi, ebp
        jne public_6331ba4
        public_6331bb8 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push edi
        call public_62bee20
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 8
        add edi, 0x14
        push edi
        push ecx
        push ebp
        mov ecx, ebx
        call public_6332010
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        push edx
        push eax
        mov ecx, ebx
        call public_628f050
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+eax*4]
        lea eax, ds:[esi+edx*4]
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], eax
        call public_6272a40
        inc eax
        lea ecx, ds:[eax+eax*4]
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+4], esi
        jmp public_6331cd9
        public_6331c1b : nop
        mov edx, ecx
        sub edx, ebp
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6331c8c
        lea edx, ss:[ebp+0x14]
        push edx
        push ecx
        push ebp
        mov ecx, ebx
        call public_6332010
        mov esi, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov ecx, esi
        sub ecx, ebp
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push esi
        mov ecx, ebx
        call public_6332110
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_6331cd5
        public_6331c76 : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, ebp
        add ebp, 0x14
        cmp ebp, eax
        mov ecx, 5
        rep movsd
        jne public_6331c76
        jmp public_6331cd5
        public_6331c8c : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFEC
        push ecx
        mov ecx, ebx
        call public_6332010
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x14]
        cmp ebp, eax
        je public_6331cb8
        public_6331ca3 : nop
        sub eax, 0x14
        sub edx, 0x14
        cmp eax, ebp
        mov ecx, 5
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6331ca3
        public_6331cb8 : nop
        lea eax, ss:[ebp+0x14]
        cmp ebp, eax
        je public_6331cd5
        mov edx, dword ptr ss : [esp+0x20]
        public_6331cc3 : nop
        mov edi, ebp
        add ebp, 0x14
        cmp ebp, eax
        mov ecx, 5
        mov esi, edx
        rep movsd
        jne public_6331cc3
        public_6331cd5 : nop
        add dword ptr ds : [ebx+8], 0x14
        public_6331cd9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        lea ecx, ds:[eax+eax*4]
        pop ebp
        lea eax, ds:[edx+ecx*4]
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6331af0)
    }
}

#undef public_6331b5b
#undef public_6331b60
#undef public_6331b68
#undef public_6331b7b
#undef public_6331b88
#undef public_6331ba4
#undef public_6331bb8
#undef public_6331c1b
#undef public_6331c76
#undef public_6331c8c
#undef public_6331ca3
#undef public_6331cb8
#undef public_6331cc3
#undef public_6331cd5
#undef public_6331cd9
