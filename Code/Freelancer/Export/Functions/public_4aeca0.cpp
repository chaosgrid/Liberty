#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4aeca0);
CLANG_FORWARD_PROC_SYMBOL(public_4b2540);

#define public_4aecb2 _public_4aecb2
#define public_4aecc2 _public_4aecc2

PROC_DECLARE(0x4aeca0, internal_4aeca0, public_4aeca0);
extern "C" NAKED register_t __cdecl internal_4aeca0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x848]
        test al, al
        je public_4aecb2
        push 1
        call public_4b2540
        ret 
        public_4aecb2 : nop
        push ebx
        push esi
        push edi
        lea eax, ds:[ecx+0x5AC]
        mov edi, 0xE
        mov dl, 0xFC
        public_4aecc2 : nop
        mov esi, dword ptr ds : [eax-0x38]
        and byte ptr ds : [esi+0x6C], dl
        mov esi, dword ptr ds : [eax]
        and byte ptr ds : [esi+0x6C], dl
        mov esi, dword ptr ds : [eax+0x38]
        and byte ptr ds : [esi+0x6C], dl
        mov esi, dword ptr ds : [eax+0xA8]
        and byte ptr ds : [esi+0x6C], dl
        mov esi, dword ptr ds : [eax+0x150]
        and byte ptr ds : [esi+0x6C], dl
        mov esi, dword ptr ds : [eax+0xE0]
        and byte ptr ds : [esi+0x6C], dl
        mov esi, dword ptr ds : [eax+0x118]
        and byte ptr ds : [esi+0x6C], dl
        mov esi, dword ptr ds : [eax+0x188]
        and byte ptr ds : [esi+0x6C], dl
        mov esi, dword ptr ds : [eax+0x1C0]
        and byte ptr ds : [esi+0x6C], dl
        mov esi, dword ptr ds : [eax+0x70]
        mov bl, byte ptr ds : [esi+0x6C]
        and bl, dl
        add eax, 4
        dec edi
        mov byte ptr ds : [esi+0x6C], bl
        jne public_4aecc2
        mov eax, dword ptr ds : [ecx+0x344]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x7A8]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x7AC]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x7B0]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x7B4]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x7A4]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x36C]
        mov ecx, dword ptr ds : [public_679bb0]
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x348], ecx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4aeca0)
    }
}

#undef public_4aecb2
#undef public_4aecc2
