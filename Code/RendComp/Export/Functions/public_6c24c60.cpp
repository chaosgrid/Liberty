#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c24c60);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c24cb1 _public_6c24cb1
#define public_6c24cb8 _public_6c24cb8
#define public_6c24cf0 _public_6c24cf0

PROC_DECLARE(0x6c24c60, internal_6c24c60, public_6c24c60);
extern "C" NAKED register_t __cdecl internal_6c24c60()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp+0x10], edx
        cmp dword ptr ds : [ebx], 0
        push esi
        push edi
        je public_6c24cb1
        mov eax, dword ptr ds : [ebx+0x10]
        imul eax, dword ptr ds : [ebx+8]
        push eax
        call public_6c34eac
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [ebx+0x10]
        imul ecx, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx]
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        add esp, 4
        and ecx, 3
        rep movsb
        jmp public_6c24cb8
        public_6c24cb1 : nop
        mov dword ptr ss : [ebp], 0
        public_6c24cb8 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        je public_6c24cf0
        mov eax, dword ptr ss : [esp+0x1C]
        lea esi, ds:[eax*4]
        push esi
        call public_6c34eac
        mov ecx, esi
        mov edx, ecx
        mov dword ptr ss : [ebp+0xC], eax
        mov esi, dword ptr ds : [ebx+0xC]
        shr ecx, 2
        mov edi, eax
        rep movsd
        add esp, 4
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6c24cf0 : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xC], 0
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6c24c60)
    }
}

#undef public_6c24cb1
#undef public_6c24cb8
#undef public_6c24cf0
