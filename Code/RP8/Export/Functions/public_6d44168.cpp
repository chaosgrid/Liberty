#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d44168);

#define public_6d44182 _public_6d44182
#define public_6d441a0 _public_6d441a0
#define public_6d441ad _public_6d441ad

PROC_DECLARE(0x6d44168, internal_6d44168, public_6d44168);
extern "C" NAKED register_t __cdecl internal_6d44168()
{
    __asm
    {
        push ebp
        mov ebp, esp
        cmp dword ptr ss : [ebp+8], 0
        je public_6d441ad
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d441ad
        mov ecx, dword ptr ss : [ebp+0x10]
        test ecx, ecx
        je public_6d44182
        mov dword ptr ds : [eax+0x30], ecx
        public_6d44182 : nop
        push esi
        mov esi, dword ptr ss : [ebp+0x18]
        test esi, esi
        je public_6d441a0
        cmp dword ptr ss : [ebp+0x14], 0
        push edi
        lea edi, ds:[eax+0x34]
        movsd 
        movsd 
        movsw 
        pop edi
        jne public_6d441a0
        mov dword ptr ss : [ebp+0x14], 1
        public_6d441a0 : nop
        mov cx, word ptr ss : [ebp+0x14]
        or dword ptr ds : [eax+8], 0x10
        mov word ptr ds : [eax+0x16], cx
        pop esi
        public_6d441ad : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d44168)
    }
}

#undef public_6d44182
#undef public_6d441a0
#undef public_6d441ad
