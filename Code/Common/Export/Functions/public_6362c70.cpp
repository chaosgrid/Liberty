#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634e0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6362c70);

#define public_6362d54 _public_6362d54

PROC_DECLARE(0x6362c70, internal_6362c70, public_6362c70);
extern "C" NAKED register_t __cdecl internal_6362c70()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x44]
        mov edx, dword ptr ds : [esi+0x80]
        mov ebp, dword ptr ds : [esi+0x28]
        lea ebx, ds:[esi+0x80]
        mov ecx, ebx
        mov dword ptr ss : [esp+0xC], eax
        call dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [public_658ab3c]
        jg public_6362d54
        mov edx, dword ptr ds : [esi+0x84]
        xor eax, eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], eax
        push edi
        lea ecx, ds:[edx*8]
        sub ecx, edx
        shl ecx, 2
        mov eax, esi
        sub eax, ecx
        mov eax, dword ptr ds : [eax+0x48]
        and eax, 0xFFFFFFF0
        mov edi, dword ptr ds : [eax]
        shl edx, 2
        and edi, 0xFFF
        inc edi
        shl edi, 4
        sub eax, edi
        lea edi, ss:[esp+0x20]
        sub edi, edx
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [ecx+esi+0x2C]
        and eax, 0xFFFFFFF0
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFF
        inc ecx
        shl ecx, 4
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+edx+0x14], eax
        mov edx, dword ptr ss : [esp+0x18]
        xor edi, edi
        mov di, word ptr ds : [esi+0x8A]
        mov eax, esi
        neg eax
        sbb eax, eax
        and eax, ebx
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        lea eax, ds:[esi+0x88]
        push eax
        push ecx
        push edx
        push ebp
        call public_634e0b0
        mov eax, dword ptr ds : [ebx]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x8A]
        add esp, 0x24
        sub ecx, edi
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+8]
        pop edi
        public_6362d54 : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6362c70)
    }
}

#undef public_6362d54
