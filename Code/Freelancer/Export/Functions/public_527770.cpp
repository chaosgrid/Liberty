#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_527770);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5277bb _public_5277bb
#define public_5277cd _public_5277cd
#define public_5277eb _public_5277eb

PROC_DECLARE(0x527770, internal_527770, public_527770);
extern "C" NAKED register_t __cdecl internal_527770()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov al, byte ptr ss : [ebp+0x15]
        test al, al
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        jne public_5277eb
        mov al, byte ptr ss : [ebp+0x14]
        push esi
        push 0x18
        mov byte ptr ss : [esp+0x18], al
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ds:[esi+0xC]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        mov byte ptr ds : [esi+0x14], dl
        mov byte ptr ds : [esi+0x15], 0
        je public_5277bb
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax+4], edx
        public_5277bb : nop
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        cmp ebx, dword ptr ds : [edi+8]
        jne public_5277cd
        mov ebx, esi
        public_5277cd : nop
        mov edx, dword ptr ss : [ebp]
        push esi
        push edx
        mov ecx, edi
        call public_527770
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push eax
        mov ecx, edi
        call public_527770
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_5277eb : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x527770)
    }
}

#undef public_5277bb
#undef public_5277cd
#undef public_5277eb
