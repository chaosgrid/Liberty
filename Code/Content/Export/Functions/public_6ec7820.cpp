#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7820);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ec7831 _public_6ec7831
#define public_6ec785e _public_6ec785e

PROC_DECLARE(0x6ec7820, internal_6ec7820, public_6ec7820);
extern "C" NAKED register_t __cdecl internal_6ec7820()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0xF0]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6ec785e
        public_6ec7831 : nop
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
        mov ecx, dword ptr ds : [edi+0xF4]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0xF4], ecx
        jne public_6ec7831
        public_6ec785e : nop
        mov eax, dword ptr ds : [edi+0xF0]
        push eax
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+0xF0], eax
        mov dword ptr ds : [edi+0xF4], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ec7820)
    }
}

#undef public_6ec7831
#undef public_6ec785e
