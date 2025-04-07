#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee7db0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);

#define public_6ee7dc2 _public_6ee7dc2
#define public_6ee7df6 _public_6ee7df6
#define public_6ee7dff _public_6ee7dff
#define public_6ee7e06 _public_6ee7e06

PROC_DECLARE(0x6ee7db0, internal_6ee7db0, public_6ee7db0);
extern "C" NAKED register_t __cdecl internal_6ee7db0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_6ee7e06
        public_6ee7dc2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6ee7db0
        cmp dword ptr ds : [public_6eeaf38], 0x7FFFFFFF
        mov esi, dword ptr ds : [esi]
        jge public_6ee7df6
        mov ecx, dword ptr ds : [public_6eeaf2c]
        mov dword ptr ds : [edi], ecx
        mov eax, dword ptr ds : [public_6eeaf38]
        inc eax
        mov dword ptr ds : [public_6eeaf2c], edi
        mov dword ptr ds : [public_6eeaf38], eax
        jmp public_6ee7dff
        public_6ee7df6 : nop
        push edi
        call public_6ee8ddc
        add esp, 4
        public_6ee7dff : nop
        cmp esi, dword ptr ds : [ebx+8]
        mov edi, esi
        jne public_6ee7dc2
        public_6ee7e06 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ee7db0)
    }
}

#undef public_6ee7dc2
#undef public_6ee7df6
#undef public_6ee7dff
#undef public_6ee7e06
