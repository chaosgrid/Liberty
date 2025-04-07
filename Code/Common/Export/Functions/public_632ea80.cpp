#include "Common-PCH.h"


#define public_632eab4 _public_632eab4
#define public_632eaca _public_632eaca
#define public_632eacd _public_632eacd

PROC_DECLARE(0x632ea80, internal_632ea80, public_632ea80);
extern "C" NAKED register_t __cdecl internal_632ea80()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        test esi, esi
        je public_632eacd
        mov ebx, dword ptr ss : [ebp+0xC]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0xC], edx
        je public_632eacd
        mov eax, ebx
        cmp eax, ebx
        mov edx, esi
        je public_632eaca
        push edi
        public_632eab4 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x14
        mov ecx, 5
        add edx, 0x14
        cmp eax, ebx
        rep movsd
        jne public_632eab4
        pop edi
        public_632eaca : nop
        mov dword ptr ss : [ebp+0xC], edx
        public_632eacd : nop
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x632ea80)
    }
}

#undef public_632eab4
#undef public_632eaca
#undef public_632eacd
