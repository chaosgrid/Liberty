#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c27910);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c27992 _public_6c27992
#define public_6c27996 _public_6c27996

PROC_DECLARE(0x6c27910, internal_6c27910, public_6c27910);
extern "C" NAKED register_t __cdecl internal_6c27910()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x20]
        push esi
        push eax
        call public_6c34ea0
        mov ecx, dword ptr ss : [ebp+0x24]
        xor esi, esi
        push ecx
        mov dword ptr ss : [ebp+0x20], esi
        call public_6c34ea0
        mov ebx, dword ptr ss : [esp+0x18]
        add esp, 8
        cmp ebx, esi
        mov dword ptr ss : [ebp+0x24], esi
        mov dword ptr ss : [ebp+0x28], esi
        je public_6c27996
        push edi
        lea esi, ds:[ebx+ebx]
        push esi
        call public_6c34eac
        mov ecx, esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [ebp+0x20], eax
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [esp+0x20]
        add esp, 4
        test esi, esi
        je public_6c27992
        shr ebx, 1
        shl ebx, 2
        push ebx
        call public_6c34eac
        mov dword ptr ss : [ebp+0x24], eax
        mov ecx, ebx
        mov ebx, dword ptr ss : [esp+0x18]
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        add esp, 4
        and ecx, 3
        rep movsb
        public_6c27992 : nop
        mov dword ptr ss : [ebp+0x28], ebx
        pop edi
        public_6c27996 : nop
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6c27910)
    }
}

#undef public_6c27992
#undef public_6c27996
