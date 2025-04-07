#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_671629a);

#define public_67162ae _public_67162ae
#define public_67162bb _public_67162bb
#define public_67162d2 _public_67162d2

PROC_DECLARE(0x671629a, internal_671629a, public_671629a);
extern "C" NAKED register_t __cdecl internal_671629a()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, edi
        je public_67162d2
        mov edx, dword ptr ss : [esp+0x10]
        public_67162ae : nop
        mov al, byte ptr ds : [edx]
        mov byte ptr ds : [edi], al
        inc edi
        inc edx
        test al, al
        je public_67162bb
        dec ecx
        jne public_67162ae
        public_67162bb : nop
        test ecx, ecx
        je public_67162d2
        dec ecx
        je public_67162d2
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        public_67162d2 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x671629a)
    }
}

#undef public_67162ae
#undef public_67162bb
#undef public_67162d2
