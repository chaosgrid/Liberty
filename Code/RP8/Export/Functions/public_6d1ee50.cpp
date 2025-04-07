#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1ee50);

#define public_6d1ee79 _public_6d1ee79
#define public_6d1ee80 _public_6d1ee80

PROC_DECLARE(0x6d1ee50, internal_6d1ee50, public_6d1ee50);
extern "C" NAKED register_t __cdecl internal_6d1ee50()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        je public_6d1ee79
        mov esi, dword ptr ss : [ebp+0xC]
        mov ecx, 0xA
        mov edi, dword ptr ss : [ebp-4]
        rep movsd
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-8], ecx
        jmp public_6d1ee80
        public_6d1ee79 : nop
        mov dword ptr ss : [ebp-8], 0
        public_6d1ee80 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d1ee50)
    }
}

#undef public_6d1ee79
#undef public_6d1ee80
