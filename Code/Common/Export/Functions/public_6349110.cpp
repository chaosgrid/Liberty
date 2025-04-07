#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6349110);
CLANG_FORWARD_PROC_SYMBOL(public_6349210);

#define public_6349132 _public_6349132
#define public_634913e _public_634913e
#define public_6349152 _public_6349152
#define public_634916d _public_634916d

PROC_DECLARE(0x6349110, internal_6349110, public_6349110);
extern "C" NAKED register_t __cdecl internal_6349110()
{
    __asm
    {
        push esi
        xor esi, esi
        mov si, word ptr ds : [ecx+0x152]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, esi
        and eax, 0xFFFF
        dec eax
        js public_634913e
        mov edx, dword ptr ds : [ecx+0x154]
        lea edx, ds:[edx+eax*4]
        public_6349132 : nop
        cmp dword ptr ds : [edx], edi
        je public_634913e
        dec eax
        sub edx, 4
        test eax, eax
        jge public_6349132
        public_634913e : nop
        lea edx, ds:[esi-1]
        mov word ptr ds : [ecx+0x152], dx
        and edx, 0xFFFF
        cmp eax, edx
        jge public_634916d
        public_6349152 : nop
        mov edx, dword ptr ds : [ecx+0x154]
        mov esi, dword ptr ds : [edx+eax*4+4]
        mov dword ptr ds : [edx+eax*4], esi
        xor edx, edx
        mov dx, word ptr ds : [ecx+0x152]
        inc eax
        cmp eax, edx
        jl public_6349152
        public_634916d : nop
        push edi
        push ecx
        mov ecx, dword ptr ds : [ecx+0x15C]
        call public_6349210
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6349110)
    }
}

#undef public_6349132
#undef public_634913e
#undef public_6349152
#undef public_634916d
