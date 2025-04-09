#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bcb0);

#define public_54bcd7 _public_54bcd7
#define public_54bceb _public_54bceb
#define public_54bcf1 _public_54bcf1
#define public_54bd1a _public_54bd1a
#define public_54bd1e _public_54bd1e
#define public_54bd22 _public_54bd22

PROC_DECLARE(0x54bcb0, internal_54bcb0, public_54bcb0);
extern "C" NAKED register_t __cdecl internal_54bcb0()
{
    __asm
    {
        mov al, byte ptr ds : [public_678ba0]
        test al, al
        je public_54bd22
        mov ecx, dword ptr ds : [public_679738]
        test ecx, ecx
        push esi
        mov esi, dword ptr ss : [esp+8]
        je public_54bcf1
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+0x70]
        cmp dword ptr ds : [esi], 0
        jne public_54bcd7
        mov al, 1
        pop esi
        ret 
        public_54bcd7 : nop
        mov ecx, dword ptr ds : [public_679738]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+0x74]
        test eax, eax
        je public_54bceb
        mov al, 1
        pop esi
        ret 
        public_54bceb : nop
        mov ecx, dword ptr ds : [public_679738]
        public_54bcf1 : nop
        cmp dword ptr ds : [esi], 0xE
        jle public_54bd1e
        test ecx, ecx
        je public_54bd1a
        mov ecx, dword ptr ds : [ecx+0xC0]
        test ecx, ecx
        je public_54bd1a
        add ecx, 0xFFFFFFF8
        test ecx, ecx
        je public_54bd1a
        cmp dword ptr ds : [ecx+0x1C], 1
        jne public_54bd1a
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+0x1CC]
        public_54bd1a : nop
        mov al, 1
        pop esi
        ret 
        public_54bd1e : nop
        xor al, al
        pop esi
        ret 
        public_54bd22 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x54bcb0)
    }
}

#undef public_54bcd7
#undef public_54bceb
#undef public_54bcf1
#undef public_54bd1a
#undef public_54bd1e
#undef public_54bd22
