#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4abdf0);
CLANG_FORWARD_PROC_SYMBOL(public_4ae770);
CLANG_FORWARD_PROC_SYMBOL(public_4b0530);
CLANG_FORWARD_PROC_SYMBOL(public_4b0920);

#define public_4ae796 _public_4ae796
#define public_4ae7c7 _public_4ae7c7
#define public_4ae886 _public_4ae886

PROC_DECLARE(0x4ae770, internal_4ae770, public_4ae770);
extern "C" NAKED register_t __cdecl internal_4ae770()
{
    __asm
    {
        sub esp, 0x80
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x7F4]
        mov eax, 2
        cmp ecx, eax
        jne public_4ae796
        mov cl, byte ptr ds : [esi+0x8A0]
        test cl, cl
        je public_4ae886
        public_4ae796 : nop
        mov cl, byte ptr ds : [esi+0x8A0]
        test cl, cl
        jne public_4ae7c7
        mov dword ptr ds : [esi+0x7F4], eax
        mov eax, dword ptr ds : [esi+0x36C]
        mov byte ptr ds : [esi+0x8A0], 1
        mov ecx, dword ptr ds : [public_679ba4]
        mov dword ptr ds : [eax+0x348], ecx
        pop esi
        add esp, 0x80
        ret 
        public_4ae7c7 : nop
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
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x7A4]
        mov dl, byte ptr ds : [eax+0x6C]
        or dl, cl
        push 0x40
        lea ecx, ss:[esp+8]
        push ecx
        mov byte ptr ds : [eax+0x6C], dl
        mov edx, dword ptr ds : [public_67eca8]
        push 0x68D
        push edx
        call public_4347e0
        mov ecx, dword ptr ds : [esi+0x344]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea edx, ss:[esp+8]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        push 0
        mov ecx, esi
        call public_4abdf0
        public_4ae886 : nop
        pop esi
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x4ae770)
    }
}

#undef public_4ae796
#undef public_4ae7c7
#undef public_4ae886
