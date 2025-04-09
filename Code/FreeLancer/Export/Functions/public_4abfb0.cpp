#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4abdf0);
CLANG_FORWARD_PROC_SYMBOL(public_4abfb0);

#define public_4ac078 _public_4ac078
#define public_4ac08a _public_4ac08a

PROC_DECLARE(0x4abfb0, internal_4abfb0, public_4abfb0);
extern "C" NAKED register_t __cdecl internal_4abfb0()
{
    __asm
    {
        sub esp, 0x80
        push ebx
        push esi
        push 0x40
        lea eax, ss:[esp+0xC]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x5E8
        push ecx
        call public_4347e0
        mov ecx, dword ptr ds : [esi+0x4FC]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ds : [public_67eca8]
        push 0x40
        lea ecx, ss:[esp+0xC]
        push ecx
        push 0x2148
        push edx
        call public_4347e0
        mov ecx, dword ptr ds : [esi+0x500]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [esi+0x4E4]
        mov cl, byte ptr ds : [eax+0x6C]
        mov bl, 3
        or cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        push 1
        mov ecx, esi
        call public_4abdf0
        mov eax, dword ptr ds : [esi+0x4F4]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x4F8]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x4FC]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x500]
        or byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x4E8]
        or byte ptr ds : [eax+0x6C], bl
        mov al, byte ptr ds : [esi+0x84D]
        test al, al
        jne public_4ac078
        mov al, byte ptr ds : [esi+0x84C]
        test al, al
        je public_4ac08a
        public_4ac078 : nop
        mov eax, dword ptr ds : [esi+0x4EC]
        or byte ptr ds : [eax+0x6C], bl
        mov esi, dword ptr ds : [esi+0x4F0]
        or byte ptr ds : [esi+0x6C], bl
        public_4ac08a : nop
        pop esi
        pop ebx
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x4abfb0)
    }
}

#undef public_4ac078
#undef public_4ac08a
