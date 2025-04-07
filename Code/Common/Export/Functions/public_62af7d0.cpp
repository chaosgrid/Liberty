#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62af7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62af7f4 _public_62af7f4
#define public_62af7fe _public_62af7fe
#define public_62af808 _public_62af808
#define public_62af822 _public_62af822

PROC_DECLARE(0x62af7d0, internal_62af7d0, public_62af7d0);
extern "C" NAKED register_t __cdecl internal_62af7d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc420]
        test eax, eax
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ds : [esi+4]
        je public_62af7f4
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc420], ecx
        dec dword ptr ds : [public_63fc42c]
        jmp public_62af7fe
        public_62af7f4 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_62af7fe : nop
        test edi, edi
        mov dword ptr ds : [eax], esi
        mov ecx, edi
        jne public_62af808
        mov ecx, eax
        public_62af808 : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_62af822
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_62af822 : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62af7d0)
    }
}

#undef public_62af7f4
#undef public_62af7fe
#undef public_62af808
#undef public_62af822
