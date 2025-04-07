#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f56db0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57370);
CLANG_FORWARD_PROC_SYMBOL(public_6f57660);

#define public_6f57682 _public_6f57682
#define public_6f576b2 _public_6f576b2
#define public_6f576b4 _public_6f576b4

PROC_DECLARE(0x6f57660, internal_6f57660, public_6f57660);
extern "C" NAKED register_t __cdecl internal_6f57660()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push ebx
        lea edi, ss:[ebp+1]
        push edi
        push esi
        call public_6f57370
        add esp, 0xC
        test eax, eax
        jne public_6f576b4
        public_6f57682 : nop
        cmp esi, dword ptr ds : [ebx]
        jae public_6f576b2
        mov eax, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        push ebp
        push eax
        push ecx
        call public_6f56db0
        add esp, 0xC
        test eax, eax
        je public_6f576b2
        push ebx
        inc esi
        push edi
        push esi
        call public_6f57370
        add esp, 0xC
        test eax, eax
        je public_6f57682
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6f576b2 : nop
        xor eax, eax
        public_6f576b4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f57660)
    }
}

#undef public_6f57682
#undef public_6f576b2
#undef public_6f576b4
