#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62bee20);
CLANG_FORWARD_PROC_SYMBOL(public_6332010);
CLANG_FORWARD_PROC_SYMBOL(public_6332110);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_632eb41 _public_632eb41
#define public_632eb46 _public_632eb46
#define public_632eb4e _public_632eb4e
#define public_632eb61 _public_632eb61
#define public_632eb6e _public_632eb6e
#define public_632eb90 _public_632eb90
#define public_632eba4 _public_632eba4
#define public_632ec0a _public_632ec0a
#define public_632ec32 _public_632ec32
#define public_632ec90 _public_632ec90
#define public_632eca6 _public_632eca6
#define public_632ecc0 _public_632ecc0
#define public_632ecd5 _public_632ecd5
#define public_632ece2 _public_632ece2
#define public_632ecf4 _public_632ecf4
#define public_632ecf8 _public_632ecf8

PROC_DECLARE(0x632eaf0, internal_632eaf0, public_632eaf0);
extern "C" NAKED register_t __cdecl internal_632eaf0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x10]
        sub esp, 8
        push ebx
        lea ebx, ds:[ecx+4]
        mov ecx, dword ptr ds : [ebx+8]
        sub edx, ecx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        push ebp
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        push esi
        push edi
        mov ebp, ecx
        jae public_632ec32
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        je public_632eb41
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
        ja public_632eb46
        public_632eb41 : nop
        mov edi, 1
        public_632eb46 : nop
        test esi, esi
        jne public_632eb4e
        xor edx, edx
        jmp public_632eb61
        public_632eb4e : nop
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_632eb61 : nop
        lea eax, ds:[edx+edi]
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_632eb6e
        xor eax, eax
        public_632eb6e : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 2
        push edx
        call public_6391d9c
        mov edi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x14], eax
        mov esi, eax
        je public_632eba4
        lea ebx, ds:[ebx]
        public_632eb90 : nop
        push edi
        push esi
        call public_62bee20
        add edi, 0x14
        add esp, 8
        add esi, 0x14
        cmp edi, ebp
        jne public_632eb90
        public_632eba4 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push 1
        push esi
        mov ecx, ebx
        call public_6332110
        mov ecx, dword ptr ds : [ebx+8]
        add esi, 0x14
        push esi
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
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x18]
        lea edx, ds:[eax+eax*4]
        lea eax, ds:[esi+edx*4]
        mov dword ptr ds : [ebx+0xC], eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        test eax, eax
        jne public_632ec0a
        xor edx, edx
        lea edx, ds:[edx+edx*4+5]
        lea eax, ds:[esi+edx*4]
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], esi
        jmp public_632ecf8
        public_632ec0a : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        lea edx, ds:[edx+edx*4+5]
        lea eax, ds:[esi+edx*4]
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], esi
        jmp public_632ecf8
        public_632ec32 : nop
        mov edx, ecx
        sub edx, ebp
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_632eca6
        lea edx, ss:[ebp+0x14]
        push edx
        push ecx
        push ebp
        mov ecx, ebx
        call public_6332010
        mov esi, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x1C]
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
        je public_632ecf4
        lea ecx, ds:[ecx]
        public_632ec90 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov edi, ebp
        add ebp, 0x14
        cmp ebp, eax
        mov ecx, 5
        rep movsd
        jne public_632ec90
        jmp public_632ecf4
        public_632eca6 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFEC
        push ecx
        mov ecx, ebx
        call public_6332010
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x14]
        cmp ebp, eax
        je public_632ecd5
        lea ecx, ds:[ecx]
        public_632ecc0 : nop
        sub eax, 0x14
        sub edx, 0x14
        cmp eax, ebp
        mov ecx, 5
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_632ecc0
        public_632ecd5 : nop
        lea edx, ss:[ebp+0x14]
        cmp ebp, edx
        mov eax, ebp
        je public_632ecf4
        mov ebp, dword ptr ss : [esp+0x1C]
        public_632ece2 : nop
        mov edi, eax
        add eax, 0x14
        cmp eax, edx
        mov ecx, 5
        mov esi, ebp
        rep movsd
        jne public_632ece2
        public_632ecf4 : nop
        add dword ptr ds : [ebx+8], 0x14
        public_632ecf8 : nop
        mov eax, dword ptr ds : [public_640a750]
        pop edi
        pop esi
        inc eax
        pop ebp
        mov dword ptr ds : [public_640a750], eax
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x632eaf0)
    }
}

#undef public_632eb41
#undef public_632eb46
#undef public_632eb4e
#undef public_632eb61
#undef public_632eb6e
#undef public_632eb90
#undef public_632eba4
#undef public_632ec0a
#undef public_632ec32
#undef public_632ec90
#undef public_632eca6
#undef public_632ecc0
#undef public_632ecd5
#undef public_632ece2
#undef public_632ecf4
#undef public_632ecf8
