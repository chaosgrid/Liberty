#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4abdf0);
CLANG_FORWARD_PROC_SYMBOL(public_4ae650);
CLANG_FORWARD_PROC_SYMBOL(public_4b0530);
CLANG_FORWARD_PROC_SYMBOL(public_4b0920);
CLANG_FORWARD_PROC_SYMBOL(public_4b2440);

#define public_4ae677 _public_4ae677
#define public_4ae6a8 _public_4ae6a8
#define public_4ae766 _public_4ae766

PROC_DECLARE(0x4ae650, internal_4ae650, public_4ae650);
extern "C" NAKED register_t __cdecl internal_4ae650()
{
    __asm
    {
        sub esp, 0x80
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x7F4]
        mov ebx, 1
        cmp eax, ebx
        jne public_4ae677
        mov al, byte ptr ds : [esi+0x8A0]
        test al, al
        je public_4ae766
        public_4ae677 : nop
        mov al, byte ptr ds : [esi+0x8A0]
        test al, al
        jne public_4ae6a8
        mov eax, dword ptr ds : [esi+0x368]
        mov dword ptr ds : [esi+0x7F4], ebx
        mov byte ptr ds : [esi+0x8A0], bl
        mov ecx, dword ptr ds : [public_679ba4]
        pop esi
        mov dword ptr ds : [eax+0x348], ecx
        pop ebx
        add esp, 0x80
        ret 
        public_4ae6a8 : nop
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
        mov byte ptr ds : [eax+0x37C], bl
        mov eax, dword ptr ds : [esi+0x7A8]
        and byte ptr ds : [eax+0x388], 0xFB
        mov eax, dword ptr ds : [esi+0x7A8]
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 3
        or dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x7AC]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x7B0]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x7B4]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x344]
        mov dl, byte ptr ds : [eax+0x6C]
        or dl, cl
        push 0x40
        lea ecx, ss:[esp+0xC]
        push ecx
        mov byte ptr ds : [eax+0x6C], dl
        mov edx, dword ptr ds : [public_67eca8]
        push 0x68E
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
        push 0xFFFFFFFF
        mov ecx, esi
        call public_4b2440
        public_4ae766 : nop
        pop esi
        pop ebx
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x4ae650)
    }
}

#undef public_4ae677
#undef public_4ae6a8
#undef public_4ae766
