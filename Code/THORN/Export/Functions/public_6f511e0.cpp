#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f511e0);

#define public_6f511f7 _public_6f511f7

PROC_DECLARE(0x6f511e0, internal_6f511e0, public_6f511e0);
extern "C" NAKED register_t __cdecl internal_6f511e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        cmp ecx, 0xFF
        jge public_6f511f7
        mov eax, dword ptr ss : [esp+8]
        mov byte ptr ds : [eax], cl
        mov byte ptr ds : [eax+1], 0
        ret 
        public_6f511f7 : nop
        push esi
        push edi
        mov edi, dword ptr ds : [ecx*4+public_6f60a50]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, dword ptr ss : [esp+0x10]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f511e0)
    }
}

#undef public_6f511f7
