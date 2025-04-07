#include "Common-PCH.h"


#define public_626c080 _public_626c080
#define public_626c08c _public_626c08c
#define public_626c090 _public_626c090
#define public_626c0a8 _public_626c0a8

PROC_DECLARE(0x626c060, internal_626c060, public_626c060);
extern "C" NAKED register_t __cdecl internal_626c060()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x18]
        test edi, edi
        mov esi, 4
        je public_626c08c
        mov eax, dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [ecx+0x1C]
        cmp eax, edx
        jae public_626c08c
        sub edx, eax
        cmp edx, esi
        jae public_626c080
        mov esi, edx
        public_626c080 : nop
        lea edx, ds:[eax+edi]
        add eax, esi
        mov dword ptr ds : [ecx+0x20], eax
        mov eax, edx
        jmp public_626c090
        public_626c08c : nop
        xor esi, esi
        xor eax, eax
        public_626c090 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        cmp esi, 4
        mov dword ptr ds : [ecx], eax
        pop esi
        je public_626c0a8
        mov dword ptr ds : [ecx], 0
        xor al, al
        ret 4
        public_626c0a8 : nop
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x626c060)
    }
}

#undef public_626c080
#undef public_626c08c
#undef public_626c090
#undef public_626c0a8
