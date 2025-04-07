#include "Common-PCH.h"


#define public_626a452 _public_626a452
#define public_626a469 _public_626a469

PROC_DECLARE(0x626a440, internal_626a440, public_626a440);
extern "C" NAKED register_t __cdecl internal_626a440()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        mov eax, ebx
        cmp eax, ebx
        je public_626a469
        push esi
        push edi
        public_626a452 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x20
        mov ecx, 8
        add edx, 0x20
        cmp eax, ebx
        rep movsd
        jne public_626a452
        pop edi
        pop esi
        public_626a469 : nop
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x626a440)
    }
}

#undef public_626a452
#undef public_626a469
