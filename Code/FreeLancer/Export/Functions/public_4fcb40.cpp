#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fcb40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4fcb91 _public_4fcb91
#define public_4fcba8 _public_4fcba8

PROC_DECLARE(0x4fcb40, internal_4fcb40, public_4fcb40);
extern "C" NAKED register_t __cdecl internal_4fcb40()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [ebx+0x24]
        push esi
        add eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        push edi
        jbe public_4fcba8
        mov eax, dword ptr ds : [ebx+0x1C]
        lea edi, ds:[eax+eax*2]
        add ecx, edi
        shl ecx, 1
        push ecx
        mov dword ptr ss : [esp+0x18], edi
        call public_5b7e84
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_4fcba8
        mov esi, dword ptr ds : [ebx+0x10]
        test esi, esi
        je public_4fcb91
        mov ecx, dword ptr ds : [ebx+0x24]
        shl ecx, 1
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x14]
        public_4fcb91 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+0x24]
        add esp, 4
        add eax, edi
        mov dword ptr ds : [ebx+0x10], ebp
        mov dword ptr ds : [ebx+0x24], eax
        public_4fcba8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4fcb40)
    }
}

#undef public_4fcb91
#undef public_4fcba8
