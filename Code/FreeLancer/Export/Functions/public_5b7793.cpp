#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b764b);
CLANG_FORWARD_PROC_SYMBOL(public_5b76c6);
CLANG_FORWARD_PROC_SYMBOL(public_5b7793);

#define public_5b77ef _public_5b77ef
#define public_5b77f1 _public_5b77f1

PROC_DECLARE(0x5b7793, internal_5b7793, public_5b7793);
extern "C" NAKED register_t __cdecl internal_5b7793()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        test edi, edi
        je public_5b77ef
        cmp dword ptr ss : [ebp+0xC], 0
        je public_5b77ef
        lea eax, ss:[ebp+8]
        push eax
        push 0
        push edi
        call public_5b76c6
        mov esi, eax
        test esi, esi
        je public_5b77ef
        mov eax, dword ptr ds : [esi+0x24]
        add eax, edi
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        add eax, edi
        push eax
        push edi
        push dword ptr ds : [esi+0x18]
        push dword ptr ss : [ebp+0xC]
        call public_5b764b
        movzx eax, ax
        cmp eax, dword ptr ds : [esi+0x14]
        jae public_5b77ef
        mov ecx, dword ptr ds : [esi+0x1C]
        lea eax, ds:[ecx+eax*4]
        mov eax, dword ptr ds : [eax+edi]
        add eax, edi
        cmp eax, esi
        jbe public_5b77f1
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, esi
        cmp eax, ecx
        jae public_5b77f1
        public_5b77ef : nop
        xor eax, eax
        public_5b77f1 : nop
        pop edi
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x5b7793)
    }
}

#undef public_5b77ef
#undef public_5b77f1
