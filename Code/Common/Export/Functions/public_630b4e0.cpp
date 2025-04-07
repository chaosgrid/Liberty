#include "Common-PCH.h"


#define public_630b4f0 _public_630b4f0
#define public_630b4f8 _public_630b4f8
#define public_630b4fa _public_630b4fa
#define public_630b522 _public_630b522
#define public_630b52b _public_630b52b
#define public_630b531 _public_630b531

PROC_DECLARE(0x630b4e0, internal_630b4e0, public_630b4e0);
extern "C" NAKED register_t __cdecl internal_630b4e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [public_63fcf28]
        xor ecx, ecx
        lea esp, ss:[esp]
        public_630b4f0 : nop
        test ecx, ecx
        jne public_630b4f8
        mov ecx, edx
        jmp public_630b4fa
        public_630b4f8 : nop
        mov ecx, dword ptr ds : [ecx]
        public_630b4fa : nop
        test ecx, ecx
        je public_630b531
        cmp dword ptr ds : [ecx+8], eax
        jne public_630b4f0
        mov al, byte ptr ds : [ecx+4]
        test al, al
        je public_630b52b
        mov al, byte ptr ds : [ecx+0x11]
        test al, al
        jne public_630b522
        mov al, byte ptr ds : [ecx+0x12]
        test al, al
        jne public_630b522
        mov eax, dword ptr ds : [ecx+0x94]
        test eax, eax
        je public_630b52b
        public_630b522 : nop
        mov eax, 1
        mov byte ptr ds : [ecx+0x10], al
        ret 
        public_630b52b : nop
        xor eax, eax
        mov byte ptr ds : [ecx+0x10], al
        ret 
        public_630b531 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x630b4e0)
    }
}

#undef public_630b4f0
#undef public_630b4f8
#undef public_630b4fa
#undef public_630b522
#undef public_630b52b
#undef public_630b531
