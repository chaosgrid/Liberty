#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5cca0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f5ccc2 _public_6f5ccc2
#define public_6f5ccf5 _public_6f5ccf5
#define public_6f5cd0c _public_6f5cd0c

PROC_DECLARE(0x6f5cca0, internal_6f5cca0, public_6f5cca0);
extern "C" NAKED register_t __cdecl internal_6f5cca0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd1bc4]
        mov al, 8
        test al, cl
        jne public_6f5cd0c
        push esi
        or cl, al
        push edi
        mov edi, dword ptr ds : [public_6fd1ba0]
        mov byte ptr ds : [public_6fd1bc4], cl
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6f5ccf5
        public_6f5ccc2 : nop
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
        mov ecx, dword ptr ds : [public_6fd1ba4]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6fd1ba4], ecx
        jne public_6f5ccc2
        mov edi, dword ptr ds : [public_6fd1ba0]
        public_6f5ccf5 : nop
        push edi
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6fd1ba0], eax
        mov dword ptr ds : [public_6fd1ba4], eax
        pop esi
        public_6f5cd0c : nop
        ret 
        UNREACHABLE_TRAP(0x6f5cca0)
    }
}

#undef public_6f5ccc2
#undef public_6f5ccf5
#undef public_6f5cd0c
