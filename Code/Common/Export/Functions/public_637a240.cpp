#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637a240);

#define public_637a248 _public_637a248
#define public_637a256 _public_637a256
#define public_637a25f _public_637a25f
#define public_637a27e _public_637a27e
#define public_637a2c0 _public_637a2c0
#define public_637a2c2 _public_637a2c2
#define public_637a2c9 _public_637a2c9
#define public_637a2cf _public_637a2cf
#define public_637a2d7 _public_637a2d7

PROC_DECLARE(0x637a240, internal_637a240, public_637a240);
extern "C" NAKED register_t __cdecl internal_637a240()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x30]
        test eax, eax
        je public_637a256
        public_637a248 : nop
        mov dword ptr ds : [eax+0x10], 0
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_637a248
        public_637a256 : nop
        push esi
        mov esi, dword ptr ds : [ecx+0x30]
        test esi, esi
        je public_637a2d7
        push edi
        public_637a25f : nop
        mov al, byte ptr ds : [esi+0x15]
        test al, al
        jne public_637a2cf
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_637a2cf
        mov edx, dword ptr ds : [ecx+0x30]
        xor edi, edi
        test edx, edx
        mov dword ptr ss : [esp+8], 0xB58637BD
        je public_637a2c9
        public_637a27e : nop
        mov al, byte ptr ds : [edx+0x15]
        test al, al
        jne public_637a2c2
        fld dword ptr ds : [edx+0x90]
        fmul dword ptr ds : [esi+0x90]
        fld dword ptr ds : [edx+0x8C]
        fmul dword ptr ds : [esi+0x8C]
        faddp 
        fld dword ptr ds : [edx+0x88]
        fmul dword ptr ds : [esi+0x88]
        faddp 
        fcom dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 1
        je public_637a2c0
        fstp dword ptr ss : [esp+8]
        mov edi, edx
        jmp public_637a2c2
        public_637a2c0 : nop
        fstp st(0)
        public_637a2c2 : nop
        mov edx, dword ptr ds : [edx+4]
        test edx, edx
        jne public_637a27e
        public_637a2c9 : nop
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [edi+0x10], esi
        public_637a2cf : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_637a25f
        pop edi
        public_637a2d7 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x637a240)
    }
}

#undef public_637a248
#undef public_637a256
#undef public_637a25f
#undef public_637a27e
#undef public_637a2c0
#undef public_637a2c2
#undef public_637a2c9
#undef public_637a2cf
#undef public_637a2d7
