#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c6430);
CLANG_FORWARD_PROC_SYMBOL(public_5850f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4c6444 _public_4c6444
#define public_4c6450 _public_4c6450
#define public_4c645d _public_4c645d
#define public_4c6465 _public_4c6465
#define public_4c648d _public_4c648d
#define public_4c6496 _public_4c6496
#define public_4c64a5 _public_4c64a5

PROC_DECLARE(0x4c6430, internal_4c6430, public_4c6430);
extern "C" NAKED register_t __cdecl internal_4c6430()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        jne public_4c6444
        mov edi, dword ptr ds : [ecx+0x14]
        public_4c6444 : nop
        mov edx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_4c645d
        lea ecx, ds:[ecx]
        public_4c6450 : nop
        lea ebx, ds:[eax+8]
        cmp ebx, ecx
        je public_4c6465
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_4c6450
        public_4c645d : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_4c6465 : nop
        mov edx, dword ptr ds : [ecx+0x14]
        cmp edi, edx
        jb public_4c648d
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+0x24]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+0x24], eax
        jmp public_4c6496
        public_4c648d : nop
        sub edx, edi
        push edx
        call dword ptr ds : [public_5c6428]
        public_4c6496 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_4c64a5
        add esi, 0x1C
        push esi
        call public_5850f0
        public_4c64a5 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4c6430)
    }
}

#undef public_4c6444
#undef public_4c6450
#undef public_4c645d
#undef public_4c6465
#undef public_4c648d
#undef public_4c6496
#undef public_4c64a5
