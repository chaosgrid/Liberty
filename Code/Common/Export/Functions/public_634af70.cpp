#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634aef0);
CLANG_FORWARD_PROC_SYMBOL(public_634af70);

#define public_634af99 _public_634af99
#define public_634afba _public_634afba
#define public_634afbd _public_634afbd

PROC_DECLARE(0x634af70, internal_634af70, public_634af70);
extern "C" NAKED register_t __cdecl internal_634af70()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        push eax
        mov dword ptr ss : [esp+0x18], eax
        call public_634aef0
        mov edi, eax
        test edi, edi
        je public_634afbd
        xor esi, esi
        mov si, word ptr ds : [edi+6]
        dec esi
        js public_634afbd
        public_634af99 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [edx+0xC]
        test esi, esi
        jle public_634afba
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp+8]
        push eax
        call public_634aef0
        test eax, eax
        je public_634afbd
        public_634afba : nop
        dec esi
        jns public_634af99
        public_634afbd : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x634af70)
    }
}

#undef public_634af99
#undef public_634afba
#undef public_634afbd
