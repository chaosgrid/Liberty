#include "Common-PCH.h"


#define public_629c010 _public_629c010

PROC_DECLARE(0x629bfe0, internal_629bfe0, public_629bfe0);
extern "C" NAKED register_t __cdecl internal_629bfe0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        test al, al
        je public_629c010
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        test al, al
        jne public_629c010
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        jne public_629c010
        mov al, byte ptr ds : [esi+0x4C]
        test al, al
        je public_629c010
        mov eax, 1
        pop esi
        ret 
        public_629c010 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x629bfe0)
    }
}

#undef public_629c010
