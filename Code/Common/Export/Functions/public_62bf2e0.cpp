#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b430);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_62b5fe0);

#define public_62bf301 _public_62bf301
#define public_62bf303 _public_62bf303
#define public_62bf32c _public_62bf32c
#define public_62bf32e _public_62bf32e
#define public_62bf358 _public_62bf358
#define public_62bf384 _public_62bf384
#define public_62bf395 _public_62bf395
#define public_62bf3b5 _public_62bf3b5
#define public_62bf3c0 _public_62bf3c0

PROC_DECLARE(0x62bf2e0, internal_62bf2e0, public_62bf2e0);
extern "C" NAKED register_t __cdecl internal_62bf2e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        sub esp, 0x10
        test eax, eax
        push ebx
        push esi
        push edi
        mov edi, 0xFFFFFFFD
        je public_62bf301
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_62bf301
        mov ecx, eax
        jmp public_62bf303
        public_62bf301 : nop
        xor ecx, ecx
        public_62bf303 : nop
        cmp dword ptr ds : [ecx+0xE0], 0x80
        jne public_62bf395
        test eax, eax
        je public_62bf32c
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_62bf32c
        mov esi, eax
        jmp public_62bf32e
        public_62bf32c : nop
        xor esi, esi
        public_62bf32e : nop
        push 0x100
        lea ecx, ss:[esp+0x10]
        call public_629b990
        lea eax, ss:[esp+0xC]
        add esi, 0xE4
        push eax
        mov ecx, esi
        call public_629b430
        test eax, eax
        je public_62bf3c0
        mov edi, dword ptr ss : [esp+0x20]
        xor ebx, ebx
        public_62bf358 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        test al, al
        je public_62bf384
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        mov dword ptr ds : [edi], 0x3F800000
        call public_629b430
        test eax, eax
        jne public_62bf358
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 4
        public_62bf384 : nop
        mov dword ptr ds : [edi], 0
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 4
        public_62bf395 : nop
        call public_62b5fe0
        fld st(0)
        mov ecx, dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62bf3b5
        mov dword ptr ds : [ecx], 0
        public_62bf3b5 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 4
        public_62bf3c0 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62bf2e0)
    }
}

#undef public_62bf301
#undef public_62bf303
#undef public_62bf32c
#undef public_62bf32e
#undef public_62bf358
#undef public_62bf384
#undef public_62bf395
#undef public_62bf3b5
#undef public_62bf3c0
