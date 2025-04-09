#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4abdf0);
CLANG_FORWARD_PROC_SYMBOL(public_4ae890);
CLANG_FORWARD_PROC_SYMBOL(public_4b0530);
CLANG_FORWARD_PROC_SYMBOL(public_4b0920);

#define public_4ae8b7 _public_4ae8b7
#define public_4ae8e9 _public_4ae8e9
#define public_4ae993 _public_4ae993

PROC_DECLARE(0x4ae890, internal_4ae890, public_4ae890);
extern "C" NAKED register_t __cdecl internal_4ae890()
{
    __asm
    {
        sub esp, 0x80
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x7F4]
        mov ebx, 3
        cmp eax, ebx
        jne public_4ae8b7
        mov al, byte ptr ds : [esi+0x8A0]
        test al, al
        je public_4ae993
        public_4ae8b7 : nop
        mov al, byte ptr ds : [esi+0x8A0]
        test al, al
        jne public_4ae8e9
        mov eax, dword ptr ds : [esi+0x370]
        mov dword ptr ds : [esi+0x7F4], ebx
        mov byte ptr ds : [esi+0x8A0], 1
        mov ecx, dword ptr ds : [public_679ba4]
        pop esi
        mov dword ptr ds : [eax+0x348], ecx
        pop ebx
        add esp, 0x80
        ret 
        public_4ae8e9 : nop
        push 0xFFFFFFFF
        mov ecx, esi
        call public_4b0920
        mov ecx, esi
        call public_4b0530
        mov edx, dword ptr ds : [esi+0x7AC]
        mov byte ptr ds : [esi+0x848], 0
        mov eax, dword ptr ds : [public_679b94]
        mov dword ptr ds : [edx+0x348], eax
        mov eax, dword ptr ds : [esi+0x7A8]
        mov byte ptr ds : [eax+0x37C], 1
        mov eax, dword ptr ds : [esi+0x7A8]
        and byte ptr ds : [eax+0x388], 0xFB
        mov eax, dword ptr ds : [esi+0x7A8]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x7AC]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x7B0]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x7B4]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x344]
        or byte ptr ds : [eax+0x6C], bl
        mov edx, dword ptr ds : [public_67eca8]
        push 0x40
        lea ecx, ss:[esp+0xC]
        push ecx
        push 0x68F
        push edx
        call public_4347e0
        mov ecx, dword ptr ds : [esi+0x344]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        push 0
        mov ecx, esi
        call public_4abdf0
        public_4ae993 : nop
        pop esi
        pop ebx
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x4ae890)
    }
}

#undef public_4ae8b7
#undef public_4ae8e9
#undef public_4ae993
