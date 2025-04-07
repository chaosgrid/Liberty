#include "Common-PCH.h"


#define public_6327ff2 _public_6327ff2
#define public_6328001 _public_6328001

PROC_DECLARE(0x6327fd0, internal_6327fd0, public_6327fd0);
extern "C" NAKED register_t __cdecl internal_6327fd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        lea esi, ds:[eax*8]
        imul esi, 0x7C
        push edi
        mov edi, dword ptr ds : [public_639907c]
        add esi, offset public_64019a8
        mov ebx, 8
        public_6327ff2 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6328001
        push eax
        call edi
        mov dword ptr ds : [esi], 0
        public_6328001 : nop
        add esi, 0x7C
        dec ebx
        jne public_6327ff2
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6327fd0)
    }
}

#undef public_6327ff2
#undef public_6328001
