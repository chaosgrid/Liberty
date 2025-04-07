#include "FLServer-PCH.h"


#define public_401c81 _public_401c81
#define public_401c99 _public_401c99

PROC_DECLARE(0x401c70, internal_401c70, public_401c70);
extern "C" NAKED register_t __cdecl internal_401c70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x9AC]
        test al, al
        jne public_401c81
        xor al, al
        pop esi
        ret 
        public_401c81 : nop
        mov eax, dword ptr ds : [esi+0x76C]
        test eax, eax
        je public_401c99
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+4]
        lea ecx, ds:[edx+eax]
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_401c99 : nop
        mov dword ptr ds : [esi+0x76C], 0
        mov byte ptr ds : [esi+0x9AC], 0
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x401c70)
    }
}

#undef public_401c81
#undef public_401c99
