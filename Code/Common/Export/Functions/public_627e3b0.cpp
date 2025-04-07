#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627e3b0);
CLANG_FORWARD_PROC_SYMBOL(public_628e250);

#define public_627e3e0 _public_627e3e0
#define public_627e408 _public_627e408
#define public_627e413 _public_627e413
#define public_627e415 _public_627e415
#define public_627e436 _public_627e436
#define public_627e441 _public_627e441
#define public_627e446 _public_627e446
#define public_627e449 _public_627e449
#define public_627e473 _public_627e473

PROC_DECLARE(0x627e3b0, internal_627e3b0, public_627e3b0);
extern "C" NAKED register_t __cdecl internal_627e3b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push 0xFFFFFFFF
        push 1
        push ebx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_627e473
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        public_627e3e0 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x80]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_627e446
        cmp eax, ebp
        je public_627e446
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        je public_627e413
        public_627e408 : nop
        cmp dword ptr ds : [ecx], eax
        je public_627e415
        add ecx, 4
        cmp ecx, edx
        jne public_627e408
        public_627e413 : nop
        mov ecx, edx
        public_627e415 : nop
        cmp ecx, edx
        jne public_627e441
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        push edx
        mov ecx, edi
        call public_628e250
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0x18]
        je public_627e441
        public_627e436 : nop
        cmp dword ptr ds : [ecx], eax
        je public_627e441
        add ecx, 4
        cmp ecx, edx
        jne public_627e436
        public_627e441 : nop
        push edi
        push esi
        push eax
        jmp public_627e449
        public_627e446 : nop
        push edi
        push esi
        push ebp
        public_627e449 : nop
        call public_627e3b0
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add esp, 0xC
        push esi
        push 1
        push ebx
        push eax
        call dword ptr ds : [edx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_627e3e0
        pop edi
        pop ebp
        public_627e473 : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x627e3b0)
    }
}

#undef public_627e3e0
#undef public_627e408
#undef public_627e413
#undef public_627e415
#undef public_627e436
#undef public_627e441
#undef public_627e446
#undef public_627e449
#undef public_627e473
