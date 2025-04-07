#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b370bf _public_6b370bf

PROC_DECLARE(0x6b37050, internal_6b37050, public_6b37050);
extern "C" NAKED register_t __cdecl internal_6b37050()
{
    __asm
    {
        push ecx
        push ebp
        lea eax, ss:[esp+4]
        push eax
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        push 0x16
        push 1
        call public_6b3b480
        test eax, eax
        jne public_6b370bf
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        push ebx
        call public_6b6a134
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+0x20], eax
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [edx+0x20]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x24], ebx
        mov edx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [edx+0x28], 1
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp]
        add esp, 4
        push ecx
        push edx
        mov ecx, ebp
        call dword ptr ds : [eax+0x24]
        pop edi
        pop esi
        pop ebx
        public_6b370bf : nop
        pop ebp
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6b37050)
    }
}

#undef public_6b370bf
