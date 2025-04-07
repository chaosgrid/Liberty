#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef7bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f6a300 _public_6f6a300
#define public_6f6a31b _public_6f6a31b
#define public_6f6a349 _public_6f6a349

PROC_DECLARE(0x6f6a2e0, internal_6f6a2e0, public_6f6a2e0);
extern "C" NAKED register_t __cdecl internal_6f6a2e0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6f6a349
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6f6a300 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x50C
        lea ebp, ds:[esi+8]
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6f6a31b
        mov ebx, eax
        public_6f6a31b : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_6ef7bd0
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x20]
        jne public_6f6a300
        pop edi
        pop ebp
        pop ebx
        public_6f6a349 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6f6a2e0)
    }
}

#undef public_6f6a300
#undef public_6f6a31b
#undef public_6f6a349
