#include "Common-PCH.h"


#define public_631e3bb _public_631e3bb
#define public_631e3bd _public_631e3bd
#define public_631e3cb _public_631e3cb
#define public_631e3d9 _public_631e3d9
#define public_631e3dd _public_631e3dd
#define public_631e3df _public_631e3df
#define public_631e3ee _public_631e3ee

PROC_DECLARE(0x631e390, internal_631e390, public_631e390);
extern "C" NAKED register_t __cdecl internal_631e390()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push esi
        cmp edx, dword ptr ds : [ecx]
        jne public_631e3bb
        mov edx, dword ptr ds : [eax+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_631e3bb
        mov edx, dword ptr ds : [eax+8]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_631e3bb
        mov edx, dword ptr ds : [eax+0xC]
        cmp edx, dword ptr ds : [ecx+0xC]
        jne public_631e3bb
        xor dl, dl
        jmp public_631e3bd
        public_631e3bb : nop
        mov dl, 1
        public_631e3bd : nop
        mov esi, dword ptr ds : [eax+8]
        test esi, esi
        jle public_631e3cb
        mov esi, dword ptr ds : [eax+0xC]
        test esi, esi
        jg public_631e3dd
        public_631e3cb : nop
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        jle public_631e3d9
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jg public_631e3dd
        public_631e3d9 : nop
        xor al, al
        jmp public_631e3df
        public_631e3dd : nop
        mov al, 1
        public_631e3df : nop
        test dl, dl
        pop esi
        je public_631e3ee
        test al, al
        je public_631e3ee
        mov eax, 1
        ret 
        public_631e3ee : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x631e390)
    }
}

#undef public_631e3bb
#undef public_631e3bd
#undef public_631e3cb
#undef public_631e3d9
#undef public_631e3dd
#undef public_631e3df
#undef public_631e3ee
