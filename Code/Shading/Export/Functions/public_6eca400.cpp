#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca400);
CLANG_FORWARD_PROC_SYMBOL(public_6eca620);

#define public_6eca452 _public_6eca452
#define public_6eca459 _public_6eca459
#define public_6eca491 _public_6eca491

PROC_DECLARE(0x6eca400, internal_6eca400, public_6eca400);
extern "C" NAKED register_t __cdecl internal_6eca400()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp+8], edx
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp+0x10], eax
        cmp dword ptr ds : [ebx], 0
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6eca452
        mov esi, dword ptr ds : [ebx+0x10]
        imul esi, dword ptr ds : [ebx+8]
        push esi
        call public_6eca620
        mov ecx, esi
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [ebp], eax
        mov esi, dword ptr ds : [ebx]
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x10]
        jmp public_6eca459
        public_6eca452 : nop
        mov dword ptr ss : [ebp], 0
        public_6eca459 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_6eca491
        mov eax, dword ptr ss : [esp+0x20]
        lea esi, ds:[eax*4]
        push esi
        call public_6eca620
        mov ecx, esi
        mov edx, ecx
        mov dword ptr ss : [ebp+0xC], eax
        mov esi, dword ptr ds : [ebx+0xC]
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6eca491 : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xC], 0
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6eca400)
    }
}

#undef public_6eca452
#undef public_6eca459
#undef public_6eca491
