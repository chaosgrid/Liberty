#include "Freelancer-PCH.h"


#define public_562173 _public_562173

PROC_DECLARE(0x562100, internal_562100, public_562100);
extern "C" NAKED register_t __cdecl internal_562100()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        xor ecx, ecx
        mov edx, 1
        mov dword ptr ds : [public_679bd0], eax
        mov dword ptr ds : [public_679bd4], eax
        mov dword ptr ds : [public_679bdc], edx
        mov byte ptr ds : [public_679be4], dl
        mov dword ptr ds : [public_679bc0], eax
        mov dword ptr ds : [public_679bd8], ecx
        mov dword ptr ds : [public_679be0], 2
        mov byte ptr ds : [public_679be5], cl
        mov dword ptr ds : [public_679bc4], 0x3C
        mov dword ptr ds : [public_679bcc], ecx
        mov dword ptr ds : [public_679bc8], ecx
        mov dword ptr ds : [public_679d00], ecx
        mov byte ptr ds : [public_679d04], cl
        mov dword ptr ds : [public_679e08], ecx
        mov byte ptr ds : [public_679e0c], cl
        mov eax, offset public_679f10
        mov edx, 3
        public_562173 : nop
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], cl
        add eax, 0x108
        dec edx
        jne public_562173
        mov dword ptr ds : [public_67a228], ecx
        mov byte ptr ds : [public_67a22c], cl
        mov dword ptr ds : [public_67a330], ecx
        mov byte ptr ds : [public_67a334], cl
        ret 
        UNREACHABLE_TRAP(0x562100)
    }
}

#undef public_562173
