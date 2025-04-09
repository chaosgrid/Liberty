#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7723);

#define public_5b7737 _public_5b7737
#define public_5b7744 _public_5b7744
#define public_5b775b _public_5b775b

PROC_DECLARE(0x5b7723, internal_5b7723, public_5b7723);
extern "C" NAKED register_t __cdecl internal_5b7723()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, edi
        je public_5b775b
        mov edx, dword ptr ss : [esp+0x10]
        public_5b7737 : nop
        mov al, byte ptr ds : [edx]
        mov byte ptr ds : [edi], al
        inc edi
        inc edx
        test al, al
        je public_5b7744
        dec ecx
        jne public_5b7737
        public_5b7744 : nop
        test ecx, ecx
        je public_5b775b
        dec ecx
        je public_5b775b
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        public_5b775b : nop
        pop edi
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x5b7723)
    }
}

#undef public_5b7737
#undef public_5b7744
#undef public_5b775b
