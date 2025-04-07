#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);

#define public_6ea9f64 _public_6ea9f64
#define public_6ea9f80 _public_6ea9f80

PROC_DECLARE(0x6ea9f40, internal_6ea9f40, public_6ea9f40);
extern "C" NAKED register_t __cdecl internal_6ea9f40()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        xor eax, eax
        test esi, esi
        je public_6ea9f80
        or ecx, 0xFFFFFFFF
        push ebx
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        jb public_6ea9f64
        lea eax, ds:[ecx-1]
        public_6ea9f64 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+edx], 0
        pop ebx
        public_6ea9f80 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ea9f40)
    }
}

#undef public_6ea9f64
#undef public_6ea9f80
