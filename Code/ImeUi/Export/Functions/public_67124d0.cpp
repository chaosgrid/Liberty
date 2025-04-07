#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67124d0);

#define public_67124fb _public_67124fb

PROC_DECLARE(0x67124d0, internal_67124d0, public_67124d0);
extern "C" NAKED register_t __cdecl internal_67124d0()
{
    __asm
    {
        mov eax, ecx
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        lea edx, ds:[eax+0xC]
        push edi
        mov ecx, 0xF
        mov edi, ebx
        mov esi, edx
        xor ebp, ebp
        repe cmpsd
        je public_67124fb
        mov ecx, 0xF
        mov esi, ebx
        mov edi, edx
        rep movsd
        mov byte ptr ds : [eax+0x48], 1
        public_67124fb : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x67124d0)
    }
}

#undef public_67124fb
