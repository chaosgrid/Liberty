#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4aed70);
CLANG_FORWARD_PROC_SYMBOL(public_4b2540);

#define public_4aed82 _public_4aed82
#define public_4aed92 _public_4aed92

PROC_DECLARE(0x4aed70, internal_4aed70, public_4aed70);
extern "C" NAKED register_t __cdecl internal_4aed70()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x848]
        test al, al
        je public_4aed82
        push 1
        call public_4b2540
        ret 
        public_4aed82 : nop
        push ebx
        push esi
        push edi
        lea eax, ds:[ecx+0x5AC]
        mov edi, 0xE
        mov dl, 0xFC
        public_4aed92 : nop
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
        jne public_4aed92
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
        mov eax, dword ptr ds : [ecx+0x370]
        mov ecx, dword ptr ds : [public_679bb0]
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x348], ecx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4aed70)
    }
}

#undef public_4aed82
#undef public_4aed92
