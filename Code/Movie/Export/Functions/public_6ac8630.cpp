#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac8630);

#define public_6ac864c _public_6ac864c
#define public_6ac8690 _public_6ac8690

PROC_DECLARE(0x6ac8630, internal_6ac8630, public_6ac8630);
extern "C" NAKED register_t __cdecl internal_6ac8630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        push edi
        xor edi, edi
        test eax, eax
        je public_6ac8690
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], eax
        sub ebx, esi
        public_6ac864c : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x14], eax
        mov ecx, dword ptr ds : [ebx+esi]
        mov dword ptr ss : [esp+0x1C], ecx
        mov eax, dword ptr ss : [esp+0x1C]
        mul dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi]
        mov ebp, eax
        xor eax, eax
        sub ecx, ebp
        sbb eax, edx
        xor edx, edx
        sub ecx, edi
        sbb eax, edx
        mov dword ptr ds : [esi], ecx
        neg eax
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 4
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        jne public_6ac864c
        pop esi
        pop ebp
        mov eax, edi
        pop ebx
        pop edi
        ret 0x10
        public_6ac8690 : nop
        mov eax, edi
        pop edi
        ret 0x10
        UNREACHABLE_TRAP(0x6ac8630)
    }
}

#undef public_6ac864c
#undef public_6ac8690
