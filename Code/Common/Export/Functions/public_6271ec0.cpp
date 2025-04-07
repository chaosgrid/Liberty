#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6271ed4 _public_6271ed4
#define public_6271eff _public_6271eff
#define public_6271f01 _public_6271f01
#define public_6271f06 _public_6271f06

PROC_DECLARE(0x6271ec0, internal_6271ec0, public_6271ec0);
extern "C" NAKED register_t __cdecl internal_6271ec0()
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
        je public_6271f06
        push ebp
        mov bp, word ptr ss : [esp+0x18]
        public_6271ed4 : nop
        cmp word ptr ds : [esi+8], bp
        je public_6271eff
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
        jmp public_6271f01
        public_6271eff : nop
        mov esi, dword ptr ds : [esi]
        public_6271f01 : nop
        cmp esi, ebx
        jne public_6271ed4
        pop ebp
        public_6271f06 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6271ec0)
    }
}

#undef public_6271ed4
#undef public_6271eff
#undef public_6271f01
#undef public_6271f06
