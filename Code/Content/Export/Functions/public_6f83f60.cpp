#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f83f60);

#define public_6f83f77 _public_6f83f77
#define public_6f83fa0 _public_6f83fa0

PROC_DECLARE(0x6f83f60, internal_6f83f60, public_6f83f60);
extern "C" NAKED register_t __cdecl internal_6f83f60()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        push ebp
        mov ebp, dword ptr ds : [eax+8]
        lea edx, ds:[ecx+0x44]
        cmp edx, ebp
        je public_6f83fa0
        push ebx
        push esi
        push edi
        lea ebx, ds:[edx-0x44]
        public_6f83f77 : nop
        mov esi, edx
        mov edi, ebx
        add edx, 0x44
        mov ecx, 0x11
        add ebx, 0x44
        cmp edx, ebp
        rep movsd
        jne public_6f83f77
        mov ecx, dword ptr ds : [eax+8]
        pop edi
        pop esi
        add ecx, 0xFFFFFFBC
        pop ebx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+8]
        pop ebp
        ret 4
        public_6f83fa0 : nop
        add dword ptr ds : [eax+8], 0xFFFFFFBC
        mov eax, ecx
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6f83f60)
    }
}

#undef public_6f83f77
#undef public_6f83fa0
