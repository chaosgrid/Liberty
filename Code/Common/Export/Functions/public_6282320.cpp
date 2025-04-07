#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bbb50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6282330 _public_6282330
#define public_6282366 _public_6282366
#define public_6282368 _public_6282368
#define public_628236c _public_628236c

PROC_DECLARE(0x6282320, internal_6282320, public_6282320);
extern "C" NAKED register_t __cdecl internal_6282320()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_628236c
        mov edi, edi
        public_6282330 : nop
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ds:[esi+8]
        call public_62bbb50
        test al, al
        je public_6282366
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+8], eax
        jmp public_6282368
        public_6282366 : nop
        mov esi, dword ptr ds : [esi]
        public_6282368 : nop
        cmp esi, ebx
        jne public_6282330
        public_628236c : nop
        pop edi
        pop esi
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6282320)
    }
}

#undef public_6282330
#undef public_6282366
#undef public_6282368
#undef public_628236c
