#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ba670);
CLANG_FORWARD_PROC_SYMBOL(public_62bb390);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62ba6ca _public_62ba6ca
#define public_62ba6e8 _public_62ba6e8

PROC_DECLARE(0x62ba670, internal_62ba670, public_62ba670);
extern "C" NAKED register_t __cdecl internal_62ba670()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov al, byte ptr ss : [ebp+0x51]
        test al, al
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        jne public_62ba6e8
        mov al, byte ptr ss : [ebp+0x50]
        push esi
        push 0x54
        mov byte ptr ss : [esp+0x18], al
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [esi+4], ecx
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        mov byte ptr ds : [esi+0x50], dl
        mov byte ptr ds : [esi+0x51], 0
        call public_62bb390
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_62ba6ca
        mov ebx, esi
        public_62ba6ca : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ecx
        mov ecx, edi
        call public_62ba670
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        mov ecx, edi
        call public_62ba670
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_62ba6e8 : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62ba670)
    }
}

#undef public_62ba6ca
#undef public_62ba6e8
