#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1a610);
CLANG_FORWARD_PROC_SYMBOL(public_6f1c990);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);

#define public_6f1c9a6 _public_6f1c9a6
#define public_6f1c9ce _public_6f1c9ce

PROC_DECLARE(0x6f1c990, internal_6f1c990, public_6f1c990);
extern "C" NAKED register_t __cdecl internal_6f1c990()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        xor ebx, ebx
        push edi
        mov byte ptr ds : [esi+0x74], bl
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f1c9ce
        public_6f1c9a6 : nop
        mov eax, dword ptr ds : [edi+8]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov dword ptr ss : [esp+0x10], eax
        call public_6f1a610
        mov edx, dword ptr ds : [esi]
        add esp, 4
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov edi, dword ptr ds : [eax]
        cmp edi, dword ptr ds : [esi+8]
        jne public_6f1c9a6
        public_6f1c9ce : nop
        mov eax, dword ptr ds : [esi+0x60]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x5C]
        push eax
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        call public_6fa8370
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov byte ptr ds : [esi+0x2C], bl
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov byte ptr ds : [esi+0x2C], bl
        mov eax, 1
        mov dword ptr ds : [esi+0x68], eax
        mov dword ptr ds : [esi+0x6C], eax
        lea eax, ds:[esi+0x14]
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov byte ptr ds : [esi+0x84], bl
        mov dword ptr ds : [esi+0x7C], ebx
        mov dword ptr ds : [esi+0x80], ebx
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        pop esi
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f1c990)
    }
}

#undef public_6f1c9a6
#undef public_6f1c9ce
