#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6268065 _public_6268065
#define public_626807a _public_626807a
#define public_62680a5 _public_62680a5

PROC_DECLARE(0x6268030, internal_6268030, public_6268030);
extern "C" NAKED register_t __cdecl internal_6268030()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        push edi
        push 0x28
        mov byte ptr ds : [esi], cl
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ebx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        cmp edi, eax
        je public_62680a5
        push ebp
        public_6268065 : nop
        mov ebp, dword ptr ds : [ebx+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_626807a
        mov ebp, eax
        public_626807a : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        push edi
        push eax
        call public_626c1e0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        inc edx
        add edi, 0x20
        cmp edi, eax
        mov dword ptr ds : [esi+8], edx
        jne public_6268065
        pop ebp
        public_62680a5 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6268030)
    }
}

#undef public_6268065
#undef public_626807a
#undef public_62680a5
