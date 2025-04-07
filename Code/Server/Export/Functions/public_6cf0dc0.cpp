#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d50af0);

#define public_6cf0e1e _public_6cf0e1e
#define public_6cf0e25 _public_6cf0e25
#define public_6cf0e39 _public_6cf0e39

PROC_DECLARE(0x6cf0dc0, internal_6cf0dc0, public_6cf0dc0);
extern "C" NAKED register_t __cdecl internal_6cf0dc0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf0e39
        mov ebx, dword ptr ss : [esp+0x14]
        test ebx, ebx
        je public_6cf0e39
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6cf0e39
        mov ecx, dword ptr ds : [public_6d90260]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, edi
        imul eax, 0x418
        lea ecx, ds:[eax+ecx-0x418]
        call public_6d50af0
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        jne public_6cf0e1e
        xor eax, eax
        jmp public_6cf0e25
        public_6cf0e1e : nop
        mov eax, dword ptr ds : [esi+0x18]
        sub eax, ecx
        sar eax, 1
        public_6cf0e25 : nop
        mov edx, dword ptr ds : [ebx+4]
        push edi
        lea edi, ds:[esi+4]
        push edi
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[ebx+4]
        push eax
        call dword ptr ds : [edx+0x34]
        pop edi
        public_6cf0e39 : nop
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6cf0dc0)
    }
}

#undef public_6cf0e1e
#undef public_6cf0e25
#undef public_6cf0e39
