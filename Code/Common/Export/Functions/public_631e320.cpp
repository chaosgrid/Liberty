#include "Common-PCH.h"


#define public_631e34b _public_631e34b
#define public_631e34d _public_631e34d
#define public_631e35b _public_631e35b
#define public_631e369 _public_631e369
#define public_631e36d _public_631e36d
#define public_631e36f _public_631e36f
#define public_631e37b _public_631e37b

PROC_DECLARE(0x631e320, internal_631e320, public_631e320);
extern "C" NAKED register_t __cdecl internal_631e320()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push esi
        cmp edx, dword ptr ds : [ecx]
        jne public_631e34b
        mov edx, dword ptr ds : [eax+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_631e34b
        mov edx, dword ptr ds : [eax+8]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_631e34b
        mov edx, dword ptr ds : [eax+0xC]
        cmp edx, dword ptr ds : [ecx+0xC]
        jne public_631e34b
        mov dl, 1
        jmp public_631e34d
        public_631e34b : nop
        xor dl, dl
        public_631e34d : nop
        mov esi, dword ptr ds : [eax+8]
        test esi, esi
        je public_631e35b
        mov esi, dword ptr ds : [eax+0xC]
        test esi, esi
        jne public_631e36d
        public_631e35b : nop
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_631e369
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_631e36d
        public_631e369 : nop
        mov al, 1
        jmp public_631e36f
        public_631e36d : nop
        xor al, al
        public_631e36f : nop
        test dl, dl
        pop esi
        jne public_631e37b
        test al, al
        jne public_631e37b
        xor eax, eax
        ret 
        public_631e37b : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x631e320)
    }
}

#undef public_631e34b
#undef public_631e34d
#undef public_631e35b
#undef public_631e369
#undef public_631e36d
#undef public_631e36f
#undef public_631e37b
