#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355050);
CLANG_FORWARD_PROC_SYMBOL(public_63551c0);

#define public_63551ce _public_63551ce
#define public_63551f3 _public_63551f3
#define public_63551f7 _public_63551f7

PROC_DECLARE(0x63551c0, internal_63551c0, public_63551c0);
extern "C" NAKED register_t __cdecl internal_63551c0()
{
    __asm
    {
        push ebx
        push edi
        xor ebx, ebx
        mov edi, ecx
        mov bx, word ptr ds : [edi+0x36]
        dec ebx
        js public_63551f7
        push esi
        public_63551ce : nop
        mov eax, dword ptr ds : [edi+0x38]
        mov esi, dword ptr ds : [eax+ebx*4]
        dec dword ptr ds : [esi+0x18]
        jne public_63551f3
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx+0xA0]
        push edx
        push esi
        call public_6355050
        add esp, 8
        mov dword ptr ds : [esi+0x18], 5
        public_63551f3 : nop
        dec ebx
        jns public_63551ce
        pop esi
        public_63551f7 : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63551c0)
    }
}

#undef public_63551ce
#undef public_63551f3
#undef public_63551f7
