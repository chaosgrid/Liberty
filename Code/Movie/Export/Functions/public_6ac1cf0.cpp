#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1be0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac1cf0);

#define public_6ac1d22 _public_6ac1d22
#define public_6ac1d5a _public_6ac1d5a
#define public_6ac1d77 _public_6ac1d77
#define public_6ac1da6 _public_6ac1da6
#define public_6ac1dba _public_6ac1dba
#define public_6ac1dde _public_6ac1dde
#define public_6ac1e2f _public_6ac1e2f
#define public_6ac1e3d _public_6ac1e3d
#define public_6ac1e42 _public_6ac1e42

PROC_DECLARE(0x6ac1cf0, internal_6ac1cf0, public_6ac1cf0);
extern "C" NAKED register_t __cdecl internal_6ac1cf0()
{
    __asm
    {
        sub esp, 0x40
        push esi
        mov esi, dword ptr ss : [esp+0x4C]
        cmp esi, 0x86
        ja public_6ac1d5a
        je public_6ac1e42
        cmp esi, 6
        je public_6ac1e42
        cmp esi, 0xF
        je public_6ac1d22
        cmp esi, 0x14
        jne public_6ac1d77
        xor eax, eax
        pop esi
        add esp, 0x40
        ret 0x10
        public_6ac1d22 : nop
        mov esi, dword ptr ss : [esp+0x48]
        push 0
        push 0
        push esi
        call dword ptr ds : [public_6ada168]
        test eax, eax
        je public_6ac1e42
        lea eax, ss:[esp+4]
        push eax
        push esi
        call dword ptr ds : [public_6ada1b4]
        lea ecx, ss:[esp+4]
        push ecx
        push esi
        call dword ptr ds : [public_6ada1a4]
        xor eax, eax
        pop esi
        add esp, 0x40
        ret 0x10
        public_6ac1d5a : nop
        mov eax, esi
        sub eax, 0x100
        je public_6ac1e2f
        sub eax, 0x12
        je public_6ac1e42
        sub eax, 0x7EEF
        je public_6ac1dba
        public_6ac1d77 : nop
        mov eax, dword ptr ds : [public_6ae093c]
        push ebx
        mov ebx, dword ptr ss : [esp+0x54]
        push ebp
        mov ebp, dword ptr ss : [esp+0x50]
        push edi
        mov edi, dword ptr ss : [esp+0x60]
        test eax, eax
        je public_6ac1da6
        mov cl, byte ptr ds : [public_6ae0954]
        test cl, cl
        je public_6ac1da6
        mov edx, dword ptr ds : [eax]
        push edi
        push ebx
        push esi
        push ebp
        push eax
        call dword ptr ds : [edx+0x98]
        public_6ac1da6 : nop
        push edi
        push ebx
        push esi
        push ebp
        call dword ptr ds : [public_6ada170]
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 0x40
        ret 0x10
        public_6ac1dba : nop
        mov eax, dword ptr ds : [public_6ae0934]
        test eax, eax
        je public_6ac1e42
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x50]
        push 0
        push edx
        lea edx, ss:[esp+0x54]
        push edx
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        test eax, eax
        jl public_6ac1e42
        public_6ac1dde : nop
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [public_6ae0934]
        push edx
        mov edx, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ss : [esp+0x48]
        cmp eax, 1
        je public_6ac1e3d
        cmp eax, 2
        je public_6ac1e3d
        mov eax, dword ptr ds : [public_6ae0934]
        lea edx, ss:[esp+0x50]
        push 0
        push edx
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x54]
        push edx
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        test eax, eax
        jge public_6ac1dde
        xor eax, eax
        pop esi
        add esp, 0x40
        ret 0x10
        public_6ac1e2f : nop
        mov eax, dword ptr ss : [esp+0x50]
        cmp eax, 0x10
        je public_6ac1e3d
        cmp eax, 0x1B
        jne public_6ac1e42
        public_6ac1e3d : nop
        call public_6ac1be0
        public_6ac1e42 : nop
        xor eax, eax
        pop esi
        add esp, 0x40
        ret 0x10
        UNREACHABLE_TRAP(0x6ac1cf0)
    }
}

#undef public_6ac1d22
#undef public_6ac1d5a
#undef public_6ac1d77
#undef public_6ac1da6
#undef public_6ac1dba
#undef public_6ac1dde
#undef public_6ac1e2f
#undef public_6ac1e3d
#undef public_6ac1e42
