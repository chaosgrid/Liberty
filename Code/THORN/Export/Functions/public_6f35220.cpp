#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f224f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f22a20);

#define public_6f35246 _public_6f35246
#define public_6f35259 _public_6f35259
#define public_6f35261 _public_6f35261

PROC_DECLARE(0x6f35220, internal_6f35220, public_6f35220);
extern "C" NAKED register_t __cdecl internal_6f35220()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        je public_6f35261
        call public_6f224f0
        mov ebx, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        jne public_6f35261
        push esi
        xor esi, esi
        test ebx, ebx
        jbe public_6f35259
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6f35246 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        push edi
        push esi
        call public_6f22a20
        inc esi
        add edi, 0x10
        cmp esi, ebx
        jb public_6f35246
        pop edi
        public_6f35259 : nop
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6f35261 : nop
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f35220)
    }
}

#undef public_6f35246
#undef public_6f35259
#undef public_6f35261
