#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec69f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb170);
CLANG_FORWARD_PROC_SYMBOL(public_6ecdf00);
CLANG_FORWARD_PROC_SYMBOL(public_6ece150);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf670);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ecdadc _public_6ecdadc
#define public_6ecdae7 _public_6ecdae7
#define public_6ecdaef _public_6ecdaef
#define public_6ecdaff _public_6ecdaff
#define public_6ecdb20 _public_6ecdb20
#define public_6ecdb34 _public_6ecdb34
#define public_6ecdb6c _public_6ecdb6c
#define public_6ecdb74 _public_6ecdb74
#define public_6ecdb81 _public_6ecdb81
#define public_6ecdb9c _public_6ecdb9c
#define public_6ecdba4 _public_6ecdba4
#define public_6ecdbb0 _public_6ecdbb0
#define public_6ecdbb8 _public_6ecdbb8
#define public_6ecdbcd _public_6ecdbcd
#define public_6ecdbeb _public_6ecdbeb

PROC_DECLARE(0x6ecdaa0, internal_6ecdaa0, public_6ecdaa0);
extern "C" NAKED register_t __cdecl internal_6ecdaa0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        call public_6ecf670
        mov ebx, dword ptr ss : [esp+0x1C]
        mov esi, eax
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ecdadc
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, ebx
        ja public_6ecdbeb
        test eax, eax
        je public_6ecdadc
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, ebx
        ja public_6ecdb81
        public_6ecdadc : nop
        test eax, eax
        lea edx, ds:[ebx+6]
        jne public_6ecdae7
        xor ecx, ecx
        jmp public_6ecdaef
        public_6ecdae7 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 3
        public_6ecdaef : nop
        cmp ecx, edx
        jae public_6ecdb81
        test edx, edx
        mov eax, edx
        jge public_6ecdaff
        xor eax, eax
        public_6ecdaff : nop
        shl eax, 3
        push ebp
        push eax
        call public_6ed0c5c
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, eax
        je public_6ecdb34
        lea esp, ss:[esp]
        public_6ecdb20 : nop
        push edi
        push ebx
        call public_6ec69f0
        add edi, 8
        add esp, 8
        add ebx, 8
        cmp edi, ebp
        jne public_6ecdb20
        public_6ecdb34 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ecb170
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6ed0c50
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ds:[ecx+6]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        lea eax, ds:[edx+eax*8]
        mov dword ptr ds : [esi+0xC], eax
        pop ebp
        jne public_6ecdb6c
        xor eax, eax
        jmp public_6ecdb74
        public_6ecdb6c : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        public_6ecdb74 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[edx+eax*8]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], edx
        public_6ecdb81 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov byte ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        lea edx, ds:[ebx+1]
        jne public_6ecdb9c
        xor ecx, ecx
        jmp public_6ecdba4
        public_6ecdb9c : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 3
        public_6ecdba4 : nop
        cmp ecx, edx
        jae public_6ecdbcd
        test eax, eax
        jne public_6ecdbb0
        xor ecx, ecx
        jmp public_6ecdbb8
        public_6ecdbb0 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 3
        public_6ecdbb8 : nop
        lea eax, ss:[esp+0xC]
        sub edx, ecx
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push edx
        push ecx
        mov ecx, esi
        call public_6ecdf00
        jmp public_6ecdbeb
        public_6ecdbcd : nop
        test eax, eax
        je public_6ecdbeb
        mov edi, dword ptr ds : [esi+8]
        mov ecx, edi
        sub ecx, eax
        sar ecx, 3
        cmp edx, ecx
        jae public_6ecdbeb
        push edi
        lea edx, ds:[eax+edx*8]
        push edx
        mov ecx, esi
        call public_6ece150
        public_6ecdbeb : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[eax+ebx*8]
        pop edi
        pop esi
        mov dword ptr ds : [eax+4], edx
        mov byte ptr ds : [eax], 1
        xor eax, eax
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6ecdaa0)
    }
}

#undef public_6ecdadc
#undef public_6ecdae7
#undef public_6ecdaef
#undef public_6ecdaff
#undef public_6ecdb20
#undef public_6ecdb34
#undef public_6ecdb6c
#undef public_6ecdb74
#undef public_6ecdb81
#undef public_6ecdb9c
#undef public_6ecdba4
#undef public_6ecdbb0
#undef public_6ecdbb8
#undef public_6ecdbcd
#undef public_6ecdbeb
