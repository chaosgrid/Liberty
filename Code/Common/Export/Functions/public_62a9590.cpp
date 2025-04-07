#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a9590);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_62a95d4 _public_62a95d4

PROC_DECLARE(0x62a9590, internal_62a9590, public_62a9590);
extern "C" NAKED register_t __cdecl internal_62a9590()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ds : [ecx+0xC0]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ds:[ecx+0xBC]
        push edi
        mov ecx, esi
        call public_62fcfb0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_62a95d4
        mov ecx, dword ptr ds : [edi]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_62a95d4
        lea eax, ss:[esp+0x14]
        mov eax, dword ptr ds : [eax]
        xor edx, edx
        cmp eax, ebx
        pop edi
        setne dl
        pop esi
        mov al, dl
        pop ebx
        pop ecx
        ret 4
        public_62a95d4 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        mov eax, dword ptr ds : [eax]
        xor edx, edx
        cmp eax, ebx
        pop edi
        setne dl
        pop esi
        mov al, dl
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62a9590)
    }
}

#undef public_62a95d4
