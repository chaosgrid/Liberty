#include "FLServer-PCH.h"


#define public_40e5e9 _public_40e5e9
#define public_40e660 _public_40e660
#define public_40e6b6 _public_40e6b6

PROC_DECLARE(0x40e5a0, internal_40e5a0, public_40e5a0);
extern "C" NAKED register_t __cdecl internal_40e5a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x41C
        push esi
        mov esi, dword ptr ss : [esp+0x428]
        push edi
        mov edi, dword ptr ss : [esp+0x430]
        push 0x2050
        push 0
        push 0
        push 0
        push eax
        mov dword ptr ds : [esi], 0
        push 0
        mov dword ptr ds : [edi], 0
        call dword ptr ds : [public_41bbdc]
        test eax, eax
        mov dword ptr ds : [esi], eax
        jne public_40e5e9
        pop edi
        pop esi
        add esp, 0x41C
        ret 
        public_40e5e9 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        push 0x18
        push eax
        call dword ptr ds : [public_41b0f0]
        movzx edx, word ptr ss : [esp+0x1C]
        movzx eax, word ptr ss : [esp+0x1E]
        imul edx, eax
        cmp edx, 8
        jg public_40e6b6
        push ebx
        push ebp
        push 0
        call dword ptr ds : [public_41b120]
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [public_41b10c]
        mov edi, eax
        push ecx
        push edi
        call ebx
        lea edx, ss:[esp+0x2C]
        push edx
        mov ebp, 0x100
        push ebp
        push 0
        push edi
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_41b110]
        push 0x408
        call dword ptr ds : [public_41b944]
        mov esi, eax
        add esp, 4
        mov word ptr ds : [esi], 0x300
        mov word ptr ds : [esi+2], bp
        lea ecx, ss:[esp+0x2D]
        lea eax, ds:[esi+5]
        lea ecx, ds:[ecx]
        public_40e660 : nop
        mov dl, byte ptr ds : [ecx+1]
        mov byte ptr ds : [eax-1], dl
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        mov dl, byte ptr ds : [ecx-1]
        mov byte ptr ds : [eax+1], dl
        mov byte ptr ds : [eax+2], 0
        add ecx, 4
        add eax, 4
        dec ebp
        jne public_40e660
        push esi
        call dword ptr ds : [public_41b114]
        mov ecx, dword ptr ss : [esp+0x438]
        push esi
        mov dword ptr ds : [ecx], eax
        call dword ptr ds : [public_41b9a4]
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        push edx
        push edi
        call ebx
        push edi
        call dword ptr ds : [public_41b118]
        pop ebp
        pop ebx
        pop edi
        mov eax, 1
        pop esi
        add esp, 0x41C
        ret 
        public_40e6b6 : nop
        push 0
        call dword ptr ds : [public_41bbe0]
        mov esi, eax
        push esi
        call dword ptr ds : [public_41b11c]
        push esi
        push 0
        mov dword ptr ds : [edi], eax
        call dword ptr ds : [public_41bbe4]
        pop edi
        mov eax, 1
        pop esi
        add esp, 0x41C
        ret 
        UNREACHABLE_TRAP(0x40e5a0)
    }
}

#undef public_40e5e9
#undef public_40e660
#undef public_40e6b6
