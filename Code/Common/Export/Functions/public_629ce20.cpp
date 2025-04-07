#include "Common-PCH.h"


#define public_629ce50 _public_629ce50

PROC_DECLARE(0x629ce20, internal_629ce20, public_629ce20);
extern "C" NAKED register_t __cdecl internal_629ce20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        test al, al
        je public_629ce50
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        test al, al
        jne public_629ce50
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        jne public_629ce50
        mov eax, dword ptr ds : [esi+0x4C]
        test eax, eax
        je public_629ce50
        mov eax, 1
        pop esi
        ret 
        public_629ce50 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x629ce20)
    }
}

#undef public_629ce50
