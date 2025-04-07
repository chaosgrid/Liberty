#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_454eb0);

#define public_454f03 _public_454f03

PROC_DECLARE(0x454eb0, internal_454eb0, public_454eb0);
extern "C" NAKED register_t __cdecl internal_454eb0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+0xBC]
        mov eax, dword ptr ss : [ebp+0xB4]
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        shl ebx, 6
        push edi
        add ebx, eax
        lea eax, ds:[ebx+8]
        push ecx
        push eax
        call dword ptr ds : [public_5c60cc]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ss : [esp+0x24]
        add esp, 8
        test eax, eax
        lea edi, ds:[ebx+0xC]
        mov ecx, 0xC
        mov dword ptr ds : [ebx+0x3C], edx
        rep movsd
        jne public_454f03
        mov eax, dword ptr ds : [ebx+8]
        push eax
        call dword ptr ds : [public_5c61e0]
        add esp, 4
        public_454f03 : nop
        mov dword ptr ds : [ebx+4], eax
        mov ebx, eax
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+0x44]
        mov dword ptr ds : [public_6799e4], eax
        mov eax, dword ptr ss : [ebp+0xBC]
        pop edi
        inc eax
        pop esi
        mov dword ptr ss : [ebp+0xBC], eax
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x454eb0)
    }
}

#undef public_454f03
