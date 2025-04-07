#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d570);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f4d592 _public_6f4d592
#define public_6f4d5c5 _public_6f4d5c5
#define public_6f4d5dc _public_6f4d5dc

PROC_DECLARE(0x6f4d570, internal_6f4d570, public_6f4d570);
extern "C" NAKED register_t __cdecl internal_6f4d570()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd0c24]
        mov al, 1
        test al, cl
        jne public_6f4d5dc
        push esi
        or cl, al
        push edi
        mov edi, dword ptr ds : [public_6fd0c2c]
        mov byte ptr ds : [public_6fd0c24], cl
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6f4d5c5
        public_6f4d592 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [public_6fd0c30]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6fd0c30], ecx
        jne public_6f4d592
        mov edi, dword ptr ds : [public_6fd0c2c]
        public_6f4d5c5 : nop
        push edi
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6fd0c2c], eax
        mov dword ptr ds : [public_6fd0c30], eax
        pop esi
        public_6f4d5dc : nop
        ret 
        UNREACHABLE_TRAP(0x6f4d570)
    }
}

#undef public_6f4d592
#undef public_6f4d5c5
#undef public_6f4d5dc
