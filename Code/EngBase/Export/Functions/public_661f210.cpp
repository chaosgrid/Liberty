#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661f210);

#define public_661f218 _public_661f218
#define public_661f221 _public_661f221
#define public_661f224 _public_661f224
#define public_661f241 _public_661f241

PROC_DECLARE(0x661f210, internal_661f210, public_661f210);
extern "C" NAKED register_t __cdecl internal_661f210()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        xor esi, esi
        public_661f218 : nop
        test esi, esi
        jne public_661f221
        mov esi, dword ptr ds : [edi+0x1C]
        jmp public_661f224
        public_661f221 : nop
        mov esi, dword ptr ds : [esi+0x14]
        public_661f224 : nop
        test esi, esi
        je public_661f241
        mov eax, dword ptr ds : [esi+4]
        push esi
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x34]
        test al, al
        je public_661f218
        push esi
        call public_661f210
        add esp, 4
        jmp public_661f218
        public_661f241 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x661f210)
    }
}

#undef public_661f218
#undef public_661f221
#undef public_661f224
#undef public_661f241
