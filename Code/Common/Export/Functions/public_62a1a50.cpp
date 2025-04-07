#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0450);
CLANG_FORWARD_PROC_SYMBOL(public_62a1a50);
CLANG_FORWARD_PROC_SYMBOL(public_62a1ac0);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);

#define public_62a1a63 _public_62a1a63
#define public_62a1a7a _public_62a1a7a
#define public_62a1a9a _public_62a1a9a
#define public_62a1aac _public_62a1aac

PROC_DECLARE(0x62a1a50, internal_62a1a50, public_62a1a50);
extern "C" NAKED register_t __cdecl internal_62a1a50()
{
    __asm
    {
        push ecx
        push ebx
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        mov dword ptr ss : [esp+8], eax
        je public_62a1aac
        push esi
        public_62a1a63 : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax+0x14]
        cmp ecx, 3
        je public_62a1a9a
        mov eax, ecx
        cmp eax, 2
        je public_62a1a7a
        cmp eax, 3
        jne public_62a1a9a
        public_62a1a7a : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xCC]
        mov ecx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [ecx+0x10]
        push esi
        mov ecx, edi
        call public_62a1ac0
        mov ecx, esi
        call public_62a0450
        public_62a1a9a : nop
        lea ecx, ss:[esp+0xC]
        call public_63429f0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        jne public_62a1a63
        pop esi
        public_62a1aac : nop
        pop edi
        mov al, 1
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62a1a50)
    }
}

#undef public_62a1a63
#undef public_62a1a7a
#undef public_62a1a9a
#undef public_62a1aac
