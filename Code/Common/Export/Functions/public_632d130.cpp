#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632d130);

#define public_632d159 _public_632d159
#define public_632d165 _public_632d165
#define public_632d17d _public_632d17d

PROC_DECLARE(0x632d130, internal_632d130, public_632d130);
extern "C" NAKED register_t __cdecl internal_632d130()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx+8]
        push ebx
        mov ebx, dword ptr ds : [ecx+4]
        neg eax
        push esi
        mov esi, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ecx+0xC]
        push edi
        lea edi, ds:[edx+eax*8]
        mov eax, edi
        sub eax, esi
        sar eax, 3
        test eax, eax
        jl public_632d159
        mov edx, eax
        shr edx, 9
        jmp public_632d165
        public_632d159 : nop
        mov edx, 0x1FF
        sub edx, eax
        shr edx, 9
        neg edx
        public_632d165 : nop
        test edx, edx
        je public_632d17d
        mov esi, dword ptr ds : [ecx+edx*4]
        lea ecx, ds:[ecx+edx*4]
        shl edx, 9
        sub eax, edx
        lea ebx, ds:[esi+0x1000]
        lea edi, ds:[esi+eax*8]
        public_632d17d : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [edx+4], ebx
        mov dword ptr ds : [edx+8], edi
        pop edi
        pop esi
        mov dword ptr ds : [edx+0xC], ecx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x632d130)
    }
}

#undef public_632d159
#undef public_632d165
#undef public_632d17d
