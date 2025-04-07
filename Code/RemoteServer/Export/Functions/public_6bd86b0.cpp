#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bd86f3 _public_6bd86f3
#define public_6bd8728 _public_6bd8728

PROC_DECLARE(0x6bd86b0, internal_6bd86b0, public_6bd86b0);
extern "C" NAKED register_t __cdecl internal_6bd86b0()
{
    __asm
    {
        push ecx
        push ebp
        lea eax, ss:[esp+4]
        push eax
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        push 0x1A
        push 1
        call public_6be1750
        test eax, eax
        jne public_6bd8728
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        jne public_6bd86f3
        push ebx
        call public_6c09d26
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x20], eax
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        mov byte ptr ds : [eax+0x28], 1
        public_6bd86f3 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [edx+0x20]
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x24], ebx
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x170]
        pop edi
        pop esi
        pop ebx
        public_6bd8728 : nop
        pop ebp
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6bd86b0)
    }
}

#undef public_6bd86f3
#undef public_6bd8728
