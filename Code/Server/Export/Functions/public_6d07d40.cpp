#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d07d40);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);

#define public_6d07d93 _public_6d07d93
#define public_6d07def _public_6d07def
#define public_6d07df8 _public_6d07df8
#define public_6d07dfa _public_6d07dfa

PROC_DECLARE(0x6d07d40, internal_6d07d40, public_6d07d40);
extern "C" NAKED register_t __cdecl internal_6d07d40()
{
    __asm
    {
        sub esp, 0x10
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, edi
        call dword ptr ds : [public_6d6419c]
        mov eax, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], 0
        mov ecx, dword ptr ds : [edi+0xB0]
        mov dword ptr ds : [esi], ecx
        lea edx, ds:[edi+0x2C]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[esi+4]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [public_6d8da08]
        test eax, eax
        jne public_6d07d93
        call public_6d5ff70
        mov dword ptr ds : [public_6d8da08], eax
        public_6d07d93 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+8]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [edi+0xE4]
        mov dword ptr ds : [esi+0x30], eax
        mov eax, dword ptr ds : [edi+0xF0]
        test eax, eax
        je public_6d07df8
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_6d07df8
        mov eax, dword ptr ds : [edi+0xF0]
        test eax, eax
        je public_6d07def
        mov edx, dword ptr ds : [eax-8]
        lea ecx, ds:[eax-8]
        call dword ptr ds : [edx+0x20]
        jmp public_6d07dfa
        public_6d07def : nop
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        jmp public_6d07dfa
        public_6d07df8 : nop
        xor eax, eax
        public_6d07dfa : nop
        mov dword ptr ds : [esi+0x20], eax
        mov ax, word ptr ds : [edi+0xF8]
        mov word ptr ds : [esi+0x24], ax
        mov ecx, dword ptr ds : [public_6d6402c]
        mov dx, word ptr ds : [ecx]
        pop edi
        mov word ptr ds : [esi+0x34], dx
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d07d40)
    }
}

#undef public_6d07d93
#undef public_6d07def
#undef public_6d07df8
#undef public_6d07dfa
