#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66276c0);
CLANG_FORWARD_PROC_SYMBOL(public_66276d0);
CLANG_FORWARD_PROC_SYMBOL(public_6627770);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_66276ea _public_66276ea
#define public_66276f2 _public_66276f2
#define public_662770a _public_662770a
#define public_662772e _public_662772e
#define public_662775b _public_662775b

PROC_DECLARE(0x66276d0, internal_66276d0, public_66276d0);
extern "C" NAKED register_t __cdecl internal_66276d0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx+8]
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        cmp edi, eax
        mov dword ptr ss : [esp+8], ecx
        mov ebp, edi
        je public_662775b
        push ebx
        push esi
        jmp public_66276f2
        public_66276ea : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_66276f2 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_66276d0
        mov ebx, dword ptr ds : [edi+0x14]
        add edi, 0x10
        mov ebp, dword ptr ss : [ebp]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_662772e
        public_662770a : nop
        push esi
        mov dword ptr ss : [esp+0x18], esi
        call public_66276c0
        mov ecx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        lea edx, ss:[esp+0x18]
        push ecx
        push edx
        mov ecx, edi
        call public_6627770
        cmp esi, ebx
        jne public_662770a
        public_662772e : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_66281d0
        mov ecx, dword ptr ss : [esp+0x24]
        xor eax, eax
        push ecx
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        call public_66281d0
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 8
        mov dword ptr ss : [esp+0x20], ebp
        cmp ebp, dword ptr ds : [edx+8]
        jne public_66276ea
        pop esi
        pop ebx
        public_662775b : nop
        pop edi
        pop ebp
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x66276d0)
    }
}

#undef public_66276ea
#undef public_66276f2
#undef public_662770a
#undef public_662772e
#undef public_662775b
