#include "Common-PCH.h"


#define public_6299ab8 _public_6299ab8

PROC_DECLARE(0x6299a90, internal_6299a90, public_6299a90);
extern "C" NAKED register_t __cdecl internal_6299a90()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6299ab8
        mov ecx, dword ptr ss : [esp+8]
        imul ecx, 0x34
        lea eax, ds:[ecx+esi+0x54]
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        cmp ecx, 0xFFFFFFFF
        sete dl
        pop esi
        dec edx
        and eax, edx
        ret 4
        public_6299ab8 : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6299a90)
    }
}

#undef public_6299ab8
