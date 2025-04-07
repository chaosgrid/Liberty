#include "FLServer-PCH.h"


#define public_40329f _public_40329f
#define public_4032ac _public_4032ac

PROC_DECLARE(0x403290, internal_403290, public_403290);
extern "C" NAKED register_t __cdecl internal_403290()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        ja public_40329f
        xor al, al
        ret 4
        public_40329f : nop
        mov edx, dword ptr ds : [ecx+4]
        dec eax
        cmp eax, edx
        jb public_4032ac
        xor al, al
        ret 4
        public_4032ac : nop
        mov ecx, dword ptr ds : [ecx]
        imul eax, 0x3F8
        mov edx, dword ptr ds : [eax+ecx+0x334]
        test edx, edx
        setne al
        ret 4
        UNREACHABLE_TRAP(0x403290)
    }
}

#undef public_40329f
#undef public_4032ac
