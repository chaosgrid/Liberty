#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6d989b0);

#define public_6d8aa98 _public_6d8aa98
#define public_6d8aaa5 _public_6d8aaa5
#define public_6d8aad1 _public_6d8aad1

PROC_DECLARE(0x6d8aa40, internal_6d8aa40, public_6d8aa40);
extern "C" NAKED register_t __cdecl internal_6d8aa40()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x32
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8aad1
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov edx, dword ptr ss : [esp+4]
        lea ecx, ds:[eax+0x108]
        push edi
        mov edi, dword ptr ds : [ecx]
        add edx, 0x28
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [eax+0x114]
        cmp ecx, 1
        jne public_6d8aa98
        mov edx, dword ptr ss : [esp+8]
        mov byte ptr ds : [edx+0x34], cl
        jmp public_6d8aaa5
        public_6d8aa98 : nop
        cmp ecx, 2
        jne public_6d8aaa5
        mov ecx, dword ptr ss : [esp+8]
        mov byte ptr ds : [ecx+0x34], 0
        public_6d8aaa5 : nop
        lea edx, ds:[eax+4]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push edx
        call public_6d989b0
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        pop edi
        public_6d8aad1 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8aa40)
    }
}

#undef public_6d8aa98
#undef public_6d8aaa5
#undef public_6d8aad1
