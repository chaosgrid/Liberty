#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ec60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ed70);

#define public_6f4ed91 _public_6f4ed91
#define public_6f4edb0 _public_6f4edb0
#define public_6f4edbd _public_6f4edbd

PROC_DECLARE(0x6f4ed70, internal_6f4ed70, public_6f4ed70);
extern "C" NAKED register_t __cdecl internal_6f4ed70()
{
    __asm
    {
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f4edbd
        mov eax, dword ptr ds : [edi+0xC]
        xor ebp, ebp
        test eax, eax
        mov dword ptr ds : [edi+4], 1
        jle public_6f4edbd
        push ebx
        push esi
        xor ebx, ebx
        public_6f4ed91 : nop
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi+ebx]
        add esi, ebx
        cmp eax, 0xFFFFFFFA
        je public_6f4edb0
        push esi
        call public_6f4ec60
        add esi, 0x10
        push esi
        call public_6f4ec60
        add esp, 8
        public_6f4edb0 : nop
        mov eax, dword ptr ds : [edi+0xC]
        inc ebp
        add ebx, 0x20
        cmp ebp, eax
        jl public_6f4ed91
        pop esi
        pop ebx
        public_6f4edbd : nop
        pop edi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f4ed70)
    }
}

#undef public_6f4ed91
#undef public_6f4edb0
#undef public_6f4edbd
