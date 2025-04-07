#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2a240);

#define public_6f2a260 _public_6f2a260
#define public_6f2a2a3 _public_6f2a2a3
#define public_6f2a2ae _public_6f2a2ae
#define public_6f2a2bb _public_6f2a2bb

PROC_DECLARE(0x6f2a240, internal_6f2a240, public_6f2a240);
extern "C" NAKED register_t __cdecl internal_6f2a240()
{
    __asm
    {
        sub esp, 0xF4
        push ebx
        mov ebx, dword ptr ds : [public_6fb3030]
        push ebp
        push esi
        push edi
        mov ebp, 0xFFFFFFFE
        lea esi, ss:[esp+0x38]
        mov edi, 0xA
        mov edi, edi
        public_6f2a260 : nop
        mov ecx, esi
        call ebx
        add esi, 4
        dec edi
        jne public_6f2a260
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x110]
        push ecx
        mov dword ptr ss : [esp+0x10C], 0
        call dword ptr ds : [public_6fb34f4]
        add esp, 0xC
        test eax, eax
        jne public_6f2a2ae
        mov ecx, dword ptr ss : [esp+0x100]
        test ecx, ecx
        jle public_6f2a2ae
        mov edx, dword ptr ss : [esp+0x10C]
        public_6f2a2a3 : nop
        cmp dword ptr ss : [esp+eax*4+0x60], edx
        je public_6f2a2bb
        inc eax
        cmp eax, ecx
        jl public_6f2a2a3
        public_6f2a2ae : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0xF4
        ret 
        public_6f2a2bb : nop
        mov edx, dword ptr ss : [esp+eax*4+0x10]
        mov eax, dword ptr ss : [esp+0x110]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop ebx
        add esp, 0xF4
        ret 
        UNREACHABLE_TRAP(0x6f2a240)
    }
}

#undef public_6f2a260
#undef public_6f2a2a3
#undef public_6f2a2ae
#undef public_6f2a2bb
