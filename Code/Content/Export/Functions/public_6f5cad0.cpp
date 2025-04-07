#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5cad0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f5caf2 _public_6f5caf2
#define public_6f5cb25 _public_6f5cb25
#define public_6f5cb3c _public_6f5cb3c

PROC_DECLARE(0x6f5cad0, internal_6f5cad0, public_6f5cad0);
extern "C" NAKED register_t __cdecl internal_6f5cad0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd1bc4]
        mov al, 1
        test al, cl
        jne public_6f5cb3c
        push esi
        or cl, al
        push edi
        mov edi, dword ptr ds : [public_6fd1bcc]
        mov byte ptr ds : [public_6fd1bc4], cl
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6f5cb25
        public_6f5caf2 : nop
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
        mov ecx, dword ptr ds : [public_6fd1bd0]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_6fd1bd0], ecx
        jne public_6f5caf2
        mov edi, dword ptr ds : [public_6fd1bcc]
        public_6f5cb25 : nop
        push edi
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_6fd1bcc], eax
        mov dword ptr ds : [public_6fd1bd0], eax
        pop esi
        public_6f5cb3c : nop
        ret 
        UNREACHABLE_TRAP(0x6f5cad0)
    }
}

#undef public_6f5caf2
#undef public_6f5cb25
#undef public_6f5cb3c
