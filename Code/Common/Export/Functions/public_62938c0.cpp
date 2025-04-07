#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628f700);
CLANG_FORWARD_PROC_SYMBOL(public_62940c0);
CLANG_FORWARD_PROC_SYMBOL(public_62f05d0);

#define public_62939c7 _public_62939c7
#define public_62939f6 _public_62939f6
#define public_6293a05 _public_6293a05
#define public_6293a49 _public_6293a49

PROC_DECLARE(0x62938c0, internal_62938c0, public_62938c0);
extern "C" NAKED register_t __cdecl internal_62938c0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, ecx
        mov ecx, dword ptr ds : [edi+0xC]
        push 0
        xor bl, bl
        call public_62f05d0
        push 0
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push ecx
        call dword ptr ds : [edx+0x6C]
        cmp dword ptr ds : [esi+4], 0xFFFFFFFF
        je public_6293a49
        mov eax, dword ptr ds : [edi+0xC]
        mov ebx, dword ptr ds : [eax+0x80]
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x60]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi]
        push ebx
        push ecx
        push eax
        push 0
        mov ecx, edi
        call dword ptr ds : [edx+0x64]
        push eax
        call public_62940c0
        add esp, 0x10
        test eax, eax
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x1C]
        je public_6293a05
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [public_6399024]
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [eax]
        add esp, 4
        push 0
        mov ecx, edi
        call dword ptr ds : [edx+0x64]
        push eax
        mov eax, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [ebx+0x80]
        mov edx, dword ptr ds : [public_6399040]
        mov ebx, eax
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x7C]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x10], ecx
        push edx
        lea ecx, ds:[ebx+0x64]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        mov byte ptr ss : [esp+0x20], 0
        call public_628f700
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_62939f6
        public_62939c7 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edi
        push eax
        call dword ptr ds : [ecx+0x7C]
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edi
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_62939c7
        public_62939f6 : nop
        pop edi
        mov byte ptr ds : [esi+0xC], 1
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        public_6293a05 : nop
        mov esi, dword ptr ds : [edi+0xC]
        push ebp
        mov ebp, dword ptr ds : [esi+0xC]
        push ecx
        mov ecx, edi
        mov ebx, 0x100001
        call dword ptr ds : [eax+0x60]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x80]
        mov ecx, dword ptr ds : [public_6399028]
        push edx
        push ebp
        push eax
        push 0x1D0
/*FIXUP push offset public_639c81c @0x6293a2d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c81c
/*FIXUP push offset public_639c8c0 @0x6293a32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c8c0
        push ebx
        call dword ptr ds : [ecx]
        add esp, 0x1C
        pop ebp
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0xC
        ret 4
        public_6293a49 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62938c0)
    }
}

#undef public_62939c7
#undef public_62939f6
#undef public_6293a05
#undef public_6293a49
