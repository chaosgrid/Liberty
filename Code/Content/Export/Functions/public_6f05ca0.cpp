#include "Content-PCH.h"


#define public_6f05cc0 _public_6f05cc0
#define public_6f05cd0 _public_6f05cd0
#define public_6f05cd9 _public_6f05cd9

PROC_DECLARE(0x6f05ca0, internal_6f05ca0, public_6f05ca0);
extern "C" NAKED register_t __cdecl internal_6f05ca0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x1C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f05cd0
        mov ebx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [public_6fb3130]
        lea esp, ss:[esp]
        public_6f05cc0 : nop
        mov ecx, dword ptr ds : [esi+8]
        call ebp
        cmp eax, ebx
        je public_6f05cd9
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x1C]
        jne public_6f05cc0
        public_6f05cd0 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
        public_6f05cd9 : nop
        mov eax, dword ptr ds : [esi+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f05ca0)
    }
}

#undef public_6f05cc0
#undef public_6f05cd0
#undef public_6f05cd9
