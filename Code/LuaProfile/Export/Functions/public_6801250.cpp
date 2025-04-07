#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801f70);
CLANG_FORWARD_PROC_SYMBOL(public_6802040);
CLANG_FORWARD_PROC_SYMBOL(public_6802420);
CLANG_FORWARD_PROC_SYMBOL(public_68026d0);
CLANG_FORWARD_PROC_SYMBOL(public_68027e0);
CLANG_FORWARD_PROC_SYMBOL(public_68035f0);

#define public_68012a6 _public_68012a6
#define public_68012ac _public_68012ac
#define public_68012fa _public_68012fa
#define public_68012fc _public_68012fc
#define public_680130d _public_680130d
#define public_6801311 _public_6801311
#define public_680131f _public_680131f
#define public_680132e _public_680132e

PROC_DECLARE(0x6801250, internal_6801250, public_6801250);
extern "C" NAKED register_t __cdecl internal_6801250()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        xor ebp, ebp
        cmp eax, 3
        jne public_680132e
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx+8]
        push esi
        push eax
        call public_68026d0
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov cl, byte ptr ds : [eax]
        add esp, 4
        cmp cl, 0x24
        jne public_68012ac
        mov cl, byte ptr ds : [eax+1]
        test cl, cl
        jne public_68012ac
        push 1
        push 8
        call dword ptr ds : [public_680c01c]
        add esp, 8
        test eax, eax
        je public_68012a6
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov esi, eax
        jmp public_6801311
        public_68012a6 : nop
        xor eax, eax
        mov esi, eax
        jmp public_6801311
        public_68012ac : nop
        push eax
        call public_6801f70
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_680131f
        push esi
        call public_6802040
        add esp, 4
        test eax, eax
        je public_680131f
        push edi
        push esi
        call public_6802420
        push 0
        call public_68027e0
        push 1
        push 8
        mov edi, eax
        call dword ptr ds : [public_680c01c]
        add esp, 0x10
        test eax, eax
        je public_68012fa
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov esi, eax
        jmp public_68012fc
        public_68012fa : nop
        xor esi, esi
        public_68012fc : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0xFFFFFFFF
        je public_680130d
        push eax
        call public_68035f0
        add esp, 4
        public_680130d : nop
        mov dword ptr ds : [esi+4], edi
        pop edi
        public_6801311 : nop
        test esi, esi
        je public_680131f
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [ebx+0xC], esi
        mov ebp, esi
        public_680131f : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_68026d0
        add esp, 4
        pop esi
        pop ebx
        public_680132e : nop
        mov eax, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6801250)
    }
}

#undef public_68012a6
#undef public_68012ac
#undef public_68012fa
#undef public_68012fc
#undef public_680130d
#undef public_6801311
#undef public_680131f
#undef public_680132e
