#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3b70);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5920);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6ce3b90 _public_6ce3b90
#define public_6ce3ba8 _public_6ce3ba8
#define public_6ce3bd6 _public_6ce3bd6

PROC_DECLARE(0x6ce3b70, internal_6ce3b70, public_6ce3b70);
extern "C" NAKED register_t __cdecl internal_6ce3b70()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6ce3bd6
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6ce3b90 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x18
        lea ebp, ds:[esi+8]
        call public_6d60012
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6ce3ba8
        mov ebx, eax
        public_6ce3ba8 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_6ce5920
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x20]
        jne public_6ce3b90
        pop edi
        pop ebp
        pop ebx
        public_6ce3bd6 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ce3b70)
    }
}

#undef public_6ce3b90
#undef public_6ce3ba8
#undef public_6ce3bd6
