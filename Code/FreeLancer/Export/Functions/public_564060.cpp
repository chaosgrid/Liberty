#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417620);
CLANG_FORWARD_PROC_SYMBOL(public_4177b0);
CLANG_FORWARD_PROC_SYMBOL(public_564060);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1e84);

#define public_5640e2 _public_5640e2
#define public_5640f9 _public_5640f9
#define public_5640fb _public_5640fb
#define public_56412e _public_56412e
#define public_564133 _public_564133

PROC_DECLARE(0x564060, internal_564060, public_564060);
extern "C" NAKED register_t __cdecl internal_564060()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1e84 @0x564062*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1e84
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
/*FIXUP push offset public_5e2240 @0x564076*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2240
        call dword ptr ds : [public_5c6f00]
        test eax, eax
        je public_56412e
        push esi
        push 0x1C
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_5640f9
        mov eax, dword ptr ds : [public_67eca0]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6ec4]
        mov byte ptr ss : [esp+0x10], 1
        mov dword ptr ds : [esi], offset public_5e2210
        call public_417620
        mov dword ptr ds : [esi+0x18], eax
        mov eax, dword ptr ds : [public_67a4a0]
        test eax, eax
        jne public_5640e2
/*FIXUP push offset public_5e21f8 @0x5640d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e21f8
        call public_4177b0
        add esp, 4
        mov dword ptr ds : [public_67a4a0], eax
        public_5640e2 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0x20]
        mov ecx, esi
        jmp public_5640fb
        public_5640f9 : nop
        xor ecx, ecx
        public_5640fb : nop
        mov eax, ecx
        mov dword ptr ds : [public_67a4a4], eax
        mov dl, byte ptr ds : [ecx+0x17]
        test dl, dl
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        pop esi
        jne public_564133
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        xor eax, eax
        mov dword ptr ds : [public_67a4a4], eax
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_56412e : nop
        mov eax, dword ptr ds : [public_67a4a4]
        public_564133 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x564060)
    }
}

#undef public_5640e2
#undef public_5640f9
#undef public_5640fb
#undef public_56412e
#undef public_564133
