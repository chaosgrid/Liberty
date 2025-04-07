#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5cb80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f5cba2 _public_6f5cba2
#define public_6f5cbd5 _public_6f5cbd5
#define public_6f5cbec _public_6f5cbec

PROC_DECLARE(0x6f5cb80, internal_6f5cb80, public_6f5cb80);
extern "C" NAKED register_t __cdecl internal_6f5cb80()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd1bc4]
        mov al, 2
        test al, cl
        jne public_6f5cbec
        push esi
        or cl, al
        push edi
        mov edi, dword ptr ds : [public_6fd1bbc]
        mov byte ptr ds : [public_6fd1bc4], cl
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6f5cbd5
        public_6f5cba2 : nop
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
        mov ecx, dword ptr ds : [public_6fd1bc0]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6fd1bc0], ecx
        jne public_6f5cba2
        mov edi, dword ptr ds : [public_6fd1bbc]
        public_6f5cbd5 : nop
        push edi
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6fd1bbc], eax
        mov dword ptr ds : [public_6fd1bc0], eax
        pop esi
        public_6f5cbec : nop
        ret 
        UNREACHABLE_TRAP(0x6f5cb80)
    }
}

#undef public_6f5cba2
#undef public_6f5cbd5
#undef public_6f5cbec
