#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_636e030);

#define public_636e03f _public_636e03f
#define public_636e056 _public_636e056
#define public_636e066 _public_636e066
#define public_636e06e _public_636e06e

PROC_DECLARE(0x636e030, internal_636e030, public_636e030);
extern "C" NAKED register_t __cdecl internal_636e030()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ds : [eax+0x30]
        test esi, esi
        je public_636e06e
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        public_636e03f : nop
        mov al, byte ptr ds : [esi+0x15]
        test al, al
        jne public_636e066
        mov cx, word ptr ds : [edi+2]
        cmp cx, word ptr ds : [edi]
        jb public_636e056
        mov ecx, edi
        call public_63441a0
        public_636e056 : nop
        mov eax, dword ptr ds : [edi+4]
        xor edx, edx
        mov dx, word ptr ds : [edi+2]
        mov dword ptr ds : [eax+edx*4], esi
        inc word ptr ds : [edi+2]
        public_636e066 : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_636e03f
        pop edi
        public_636e06e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x636e030)
    }
}

#undef public_636e03f
#undef public_636e056
#undef public_636e066
#undef public_636e06e
