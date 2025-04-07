#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4aebb0);
CLANG_FORWARD_PROC_SYMBOL(public_4b2540);

#define public_4aebc2 _public_4aebc2
#define public_4aebd1 _public_4aebd1

PROC_DECLARE(0x4aebb0, internal_4aebb0, public_4aebb0);
extern "C" NAKED register_t __cdecl internal_4aebb0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x848]
        test al, al
        je public_4aebc2
        push 1
        call public_4b2540
        ret 
        public_4aebc2 : nop
        push esi
        push edi
        lea eax, ds:[ecx+0x5AC]
        mov edi, 0xE
        mov dl, 0xFC
        public_4aebd1 : nop
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
        and byte ptr ds : [esi+0x6C], dl
        mov esi, dword ptr ds : [eax+0x38]
        or byte ptr ds : [esi+0x331], 2
        add eax, 4
        dec edi
        jne public_4aebd1
        mov eax, dword ptr ds : [ecx+0x564]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x568]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x56C]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx+0x570]
        and byte ptr ds : [eax+0x6C], dl
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
        mov eax, dword ptr ds : [ecx+0x368]
        mov ecx, dword ptr ds : [public_679bb0]
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x348], ecx
        ret 
        UNREACHABLE_TRAP(0x4aebb0)
    }
}

#undef public_4aebc2
#undef public_4aebd1
