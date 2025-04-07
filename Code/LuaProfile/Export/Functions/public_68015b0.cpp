#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6801f70);
CLANG_FORWARD_PROC_SYMBOL(public_6802140);
CLANG_FORWARD_PROC_SYMBOL(public_68022b0);
CLANG_FORWARD_PROC_SYMBOL(public_6802420);
CLANG_FORWARD_PROC_SYMBOL(public_68026d0);
CLANG_FORWARD_PROC_SYMBOL(public_6802810);

#define public_68015eb _public_68015eb
#define public_680160c _public_680160c
#define public_6801624 _public_6801624
#define public_6801645 _public_6801645
#define public_680166a _public_680166a
#define public_680166c _public_680166c
#define public_6801686 _public_6801686

PROC_DECLARE(0x68015b0, internal_68015b0, public_68015b0);
extern "C" NAKED register_t __cdecl internal_68015b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        xor eax, eax
        test esi, esi
        je public_6801686
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+8]
        push ebx
        push ebp
        push edi
        push ecx
        call public_68026d0
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, 0xFFFFFFFF
        jne public_68015eb
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call public_6801f70
        add esp, 4
        jmp public_6801624
        public_68015eb : nop
        push eax
        call public_6802810
        add esp, 4
        test eax, eax
        jne public_680160c
        push ebp
        xor esi, esi
        call public_68026d0
        add esp, 4
        pop edi
        pop ebp
        pop ebx
        mov eax, esi
        pop esi
        ret 0x14
        public_680160c : nop
        push eax
        call public_6802420
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call public_68022b0
        add esp, 8
        call public_6801eb0
        public_6801624 : nop
        push eax
        call public_6802140
        add esp, 4
        test eax, eax
        jne public_6801645
        push ebp
        xor esi, esi
        call public_68026d0
        add esp, 4
        pop edi
        pop ebp
        pop ebx
        mov eax, esi
        pop esi
        ret 0x14
        public_6801645 : nop
        mov esi, dword ptr ss : [esp+0x20]
        test esi, esi
        je public_680166a
        mov ebx, dword ptr ss : [esp+0x24]
        test ebx, ebx
        je public_680166a
        push ebx
        push eax
        push esi
        call dword ptr ds : [public_680c020]
        add esp, 0xC
        mov byte ptr ds : [esi+ebx-1], 0
        mov edi, esi
        jmp public_680166c
        public_680166a : nop
        mov edi, eax
        public_680166c : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ebp
        mov esi, ecx
        call public_68026d0
        add esp, 4
        pop edi
        pop ebp
        mov eax, esi
        pop ebx
        public_6801686 : nop
        pop esi
        ret 0x14
        UNREACHABLE_TRAP(0x68015b0)
    }
}

#undef public_68015eb
#undef public_680160c
#undef public_6801624
#undef public_6801645
#undef public_680166a
#undef public_680166c
#undef public_6801686
