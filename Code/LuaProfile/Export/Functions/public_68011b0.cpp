#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6801f70);
CLANG_FORWARD_PROC_SYMBOL(public_6802040);
CLANG_FORWARD_PROC_SYMBOL(public_6802610);
CLANG_FORWARD_PROC_SYMBOL(public_68026d0);

#define public_68011bc _public_68011bc
#define public_68011c5 _public_68011c5
#define public_68011f0 _public_68011f0
#define public_680121c _public_680121c
#define public_680122b _public_680122b

PROC_DECLARE(0x68011b0, internal_68011b0, public_68011b0);
extern "C" NAKED register_t __cdecl internal_68011b0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        test ebp, ebp
        push esi
        push edi
        jne public_68011c5
        public_68011bc : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_68011c5 : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_68026d0
        push 0
        mov dword ptr ss : [esp+0x20], eax
        call public_6802610
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_680122b
        mov ebx, dword ptr ss : [esp+0x1C]
        lea ebx, ds:[ebx]
        public_68011f0 : nop
        push 1
        call public_6801cf0
        push esi
        call public_6801f70
        push eax
        call public_6802040
        add esp, 0xC
        test eax, eax
        je public_680121c
        lea eax, ds:[edi-4]
        neg eax
        push ebx
        sbb eax, eax
        and eax, edi
        push esi
        push eax
        call ebp
        test eax, eax
        je public_68011bc
        public_680121c : nop
        push esi
        call public_6802610
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_68011f0
        public_680122b : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        call public_68026d0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x68011b0)
    }
}

#undef public_68011bc
#undef public_68011c5
#undef public_68011f0
#undef public_680121c
#undef public_680122b
