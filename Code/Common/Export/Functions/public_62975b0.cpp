#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6297c70);
CLANG_FORWARD_PROC_SYMBOL(public_6299080);
CLANG_FORWARD_PROC_SYMBOL(public_62994a0);

#define public_62975f6 _public_62975f6
#define public_6297613 _public_6297613
#define public_629763b _public_629763b
#define public_6297657 _public_6297657
#define public_6297666 _public_6297666

PROC_DECLARE(0x62975b0, internal_62975b0, public_62975b0);
extern "C" NAKED register_t __cdecl internal_62975b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push eax
        mov ebx, ecx
        call public_62994a0
        test al, al
        je public_6297666
        mov edx, dword ptr ds : [ebx]
        push esi
        push edi
        mov ecx, ebx
        call dword ptr ds : [edx+0x84]
        mov edi, eax
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0xC4]
        cmp dword ptr ds : [eax], 2
        jne public_62975f6
        push edi
        push ebx
        lea ecx, ds:[ebx+0x1F4]
        call public_6299080
        public_62975f6 : nop
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
        je public_6297657
        public_6297613 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xC4]
        test eax, eax
        je public_629763b
        cmp dword ptr ds : [eax], 2
        jne public_629763b
        push esi
        push ebx
        lea ecx, ds:[ebx+0x210]
        call public_6299080
        public_629763b : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 1
        push edi
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_6297613
        public_6297657 : nop
        mov ecx, ebx
        call public_6297c70
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_6297666 : nop
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62975b0)
    }
}

#undef public_62975f6
#undef public_6297613
#undef public_629763b
#undef public_6297657
#undef public_6297666
