#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d58d90);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ab40);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d58dc6 _public_6d58dc6
#define public_6d58ddb _public_6d58ddb
#define public_6d58e08 _public_6d58e08

PROC_DECLARE(0x6d58d90, internal_6d58d90, public_6d58d90);
extern "C" NAKED register_t __cdecl internal_6d58d90()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, ecx
        push 0x20
        mov byte ptr ds : [edi], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [eax]
        add esp, 4
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d58e08
        push ebp
        public_6d58dc6 : nop
        mov ebp, dword ptr ds : [ebx+4]
        push 0x20
        call public_6d60012
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_6d58ddb
        mov ebp, eax
        public_6d58ddb : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[esi+8]
        push ecx
        add eax, 8
        push eax
        call public_6d5ab40
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6d58dc6
        pop ebp
        public_6d58e08 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d58d90)
    }
}

#undef public_6d58dc6
#undef public_6d58ddb
#undef public_6d58e08
