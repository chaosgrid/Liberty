#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_4ec400);

#define public_4ec444 _public_4ec444

PROC_DECLARE(0x4ec400, internal_4ec400, public_4ec400);
extern "C" NAKED register_t __cdecl internal_4ec400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_674b70]
        test eax, eax
        je public_4ec444
        call public_41a3e0
        test al, al
        je public_4ec444
        mov eax, dword ptr ds : [public_674b70]
        mov ecx, dword ptr ds : [eax+0x410]
        push ebx
        mov bl, byte ptr ds : [ecx+0x6C]
        mov dl, 0xFC
        and bl, dl
        mov byte ptr ds : [ecx+0x6C], bl
        mov ecx, dword ptr ds : [eax+0x414]
        and byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [eax+0x418]
        and byte ptr ds : [ecx+0x6C], dl
        mov eax, dword ptr ds : [eax+0x41C]
        and byte ptr ds : [eax+0x6C], dl
        pop ebx
        public_4ec444 : nop
        ret 
        UNREACHABLE_TRAP(0x4ec400)
    }
}

#undef public_4ec444
