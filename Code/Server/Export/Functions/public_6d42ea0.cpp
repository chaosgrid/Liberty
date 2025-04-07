#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d42eb4 _public_6d42eb4
#define public_6d42ecc _public_6d42ecc
#define public_6d42ee3 _public_6d42ee3
#define public_6d42f00 _public_6d42f00

PROC_DECLARE(0x6d42ea0, internal_6d42ea0, public_6d42ea0);
extern "C" NAKED register_t __cdecl internal_6d42ea0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        cmp ebp, eax
        je public_6d42f00
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        public_6d42eb4 : nop
        mov esi, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6d60012
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6d42ecc
        mov edi, eax
        public_6d42ecc : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d42ee3
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], edx
        public_6d42ee3 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ds : [ebx+8], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_6d42eb4
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        pop ebp
        ret 
        public_6d42f00 : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ecx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d42ea0)
    }
}

#undef public_6d42eb4
#undef public_6d42ecc
#undef public_6d42ee3
#undef public_6d42f00
