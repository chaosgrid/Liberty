#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628a8b0);
CLANG_FORWARD_PROC_SYMBOL(public_628a990);
CLANG_FORWARD_PROC_SYMBOL(public_6345450);

#define public_628a9e0 _public_628a9e0
#define public_628aa04 _public_628aa04
#define public_628aa21 _public_628aa21
#define public_628aa47 _public_628aa47
#define public_628aa6b _public_628aa6b

PROC_DECLARE(0x628a990, internal_628a990, public_628a990);
extern "C" NAKED register_t __cdecl internal_628a990()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ebx+0x54]
        push edi
        mov dword ptr ds : [ebx+0x54], 0
        mov dword ptr ds : [ebx+0x50], 0
        call public_6345450
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, 0xFFFFFFFF
        je public_628aa6b
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_628aa6b
        push esi
        lea esp, ss:[esp]
        public_628a9e0 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x80]
        test eax, eax
        je public_628aa04
        cmp eax, ebx
        je public_628aa04
        push eax
        call public_628a990
        add esp, 4
        jmp public_628aa47
        public_628aa04 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push edi
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_628aa47
        public_628aa21 : nop
        push esi
        push ebx
        call public_628a8b0
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push esi
        push 1
        push edi
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_628aa21
        public_628aa47 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push edi
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_628a9e0
        pop esi
        public_628aa6b : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x628a990)
    }
}

#undef public_628a9e0
#undef public_628aa04
#undef public_628aa21
#undef public_628aa47
#undef public_628aa6b
