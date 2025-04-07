#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7370);
CLANG_FORWARD_PROC_SYMBOL(public_6d0e600);

#define public_6d0e620 _public_6d0e620
#define public_6d0e658 _public_6d0e658
#define public_6d0e665 _public_6d0e665

PROC_DECLARE(0x6d0e600, internal_6d0e600, public_6d0e600);
extern "C" NAKED register_t __cdecl internal_6d0e600()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx+0xC]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6d0e665
        push ebx
        mov bl, byte ptr ss : [esp+0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        nop 
        lea esp, ss:[esp]
        public_6d0e620 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+0x40]
        cmp eax, dword ptr ds : [ecx]
        je public_6d0e658
        mov edx, dword ptr ds : [edi]
        push edx
        lea ecx, ds:[esi+8]
        call public_6cf7370
        test al, al
        je public_6d0e658
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ds : [esi+0x40]
        mov byte ptr ss : [esp+0x18], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xC]
        public_6d0e658 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ecx+0xC]
        jne public_6d0e620
        pop edi
        pop ebx
        public_6d0e665 : nop
        pop esi
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6d0e600)
    }
}

#undef public_6d0e620
#undef public_6d0e658
#undef public_6d0e665
