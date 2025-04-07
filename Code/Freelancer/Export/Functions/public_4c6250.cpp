#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c6250);
CLANG_FORWARD_PROC_SYMBOL(public_585bd0);
CLANG_FORWARD_PROC_SYMBOL(public_585d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4c6260 _public_4c6260
#define public_4c6287 _public_4c6287
#define public_4c62a7 _public_4c62a7

PROC_DECLARE(0x4c6250, internal_4c6250, public_4c6250);
extern "C" NAKED register_t __cdecl internal_4c6250()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x20]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_4c6287
        mov edi, edi
        public_4c6260 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [edi+0x24]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x24], ecx
        jne public_4c6260
        public_4c6287 : nop
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        mov byte ptr ds : [edi+0x28], 0
        je public_4c62a7
        push 0
        push 0
        call public_585d90
        mov ecx, dword ptr ds : [edi]
        push 0
        push 0
        push 0xFFFFFFFF
        call public_585bd0
        public_4c62a7 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4c6250)
    }
}

#undef public_4c6260
#undef public_4c6287
#undef public_4c62a7
