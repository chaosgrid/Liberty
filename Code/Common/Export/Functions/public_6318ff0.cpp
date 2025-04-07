#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6318ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6319035 _public_6319035
#define public_6319047 _public_6319047
#define public_6319065 _public_6319065

PROC_DECLARE(0x6318ff0, internal_6318ff0, public_6318ff0);
extern "C" NAKED register_t __cdecl internal_6318ff0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov al, byte ptr ss : [ebp+0x11]
        test al, al
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        jne public_6319065
        mov al, byte ptr ss : [ebp+0x10]
        push esi
        push 0x14
        mov byte ptr ss : [esp+0x18], al
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ds:[esi+0xC]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        mov byte ptr ds : [esi+0x10], dl
        mov byte ptr ds : [esi+0x11], 0
        je public_6319035
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        public_6319035 : nop
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        cmp ebx, dword ptr ds : [edi+8]
        jne public_6319047
        mov ebx, esi
        public_6319047 : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ecx
        mov ecx, edi
        call public_6318ff0
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        mov ecx, edi
        call public_6318ff0
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_6319065 : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6318ff0)
    }
}

#undef public_6319035
#undef public_6319047
#undef public_6319065
