#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6297c70);
CLANG_FORWARD_PROC_SYMBOL(public_6299080);

#define public_6298103 _public_6298103
#define public_6298120 _public_6298120
#define public_6298148 _public_6298148
#define public_6298164 _public_6298164

PROC_DECLARE(0x62980d0, internal_62980d0, public_62980d0);
extern "C" NAKED register_t __cdecl internal_62980d0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        push edi
        call dword ptr ds : [eax+0x84]
        mov ecx, dword ptr ds : [public_6399040]
        mov edi, eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [edx+0xC4]
        cmp dword ptr ds : [eax], 2
        jne public_6298103
        push edi
        push ebx
        lea ecx, ds:[ebx+0x1F4]
        call public_6299080
        public_6298103 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push edi
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_6298164
        nop 
        public_6298120 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xC4]
        test eax, eax
        je public_6298148
        cmp dword ptr ds : [eax], 2
        jne public_6298148
        push esi
        push ebx
        lea ecx, ds:[ebx+0x210]
        call public_6299080
        public_6298148 : nop
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
        jne public_6298120
        public_6298164 : nop
        pop edi
        pop esi
        mov ecx, ebx
        pop ebx
        jmp public_6297c70
        UNREACHABLE_TRAP(0x62980d0)
    }
}

#undef public_6298103
#undef public_6298120
#undef public_6298148
#undef public_6298164
