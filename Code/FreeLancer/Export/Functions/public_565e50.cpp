#include "Freelancer-PCH.h"


#define public_565e63 _public_565e63
#define public_565e70 _public_565e70

PROC_DECLARE(0x565e50, internal_565e50, public_565e50);
extern "C" NAKED register_t __cdecl internal_565e50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+0x48]
        test eax, eax
        mov edx, dword ptr ds : [public_5c700c]
        jne public_565e63
        mov eax, edx
        public_565e63 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+0x48]
        test ecx, ecx
        jne public_565e70
        mov ecx, edx
        public_565e70 : nop
        push eax
        push ecx
        call dword ptr ds : [public_5c7138]
        xor edx, edx
        add esp, 8
        test eax, eax
        setl dl
        mov al, dl
        ret 
        UNREACHABLE_TRAP(0x565e50)
    }
}

#undef public_565e63
#undef public_565e70
