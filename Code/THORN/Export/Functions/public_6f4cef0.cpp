#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4cef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fc10);

#define public_6f4cf60 _public_6f4cf60

PROC_DECLARE(0x6f4cef0, internal_6f4cef0, public_6f4cef0);
extern "C" NAKED register_t __cdecl internal_6f4cef0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jle public_6f4cf60
        push ebx
        mov ebx, dword ptr ds : [public_6f61e28]
        push ebp
        push edi
        push esi
        call public_6f4fc10
        mov ecx, dword ptr ds : [ebx]
        sub ecx, 0x10
        mov edi, dword ptr ds : [ecx]
        lea edx, ds:[eax+0x10]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], edi
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx+0xC], ecx
        mov edx, esi
        add esp, 4
        shl edx, 4
        inc esi
        shl esi, 4
        mov edi, esi
        mov esi, dword ptr ds : [ebx]
        mov ecx, edx
        mov ebp, ecx
        sub esi, edi
        shr ecx, 2
        lea edi, ds:[eax+0x20]
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx]
        sub ecx, edx
        mov dword ptr ds : [ebx], ecx
        pop edi
        mov dword ptr ds : [ecx-0x10], 0xFFFFFFF9
        mov edx, dword ptr ds : [ebx]
        pop ebp
        mov dword ptr ds : [edx-8], eax
        pop ebx
        public_6f4cf60 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4cef0)
    }
}

#undef public_6f4cf60
