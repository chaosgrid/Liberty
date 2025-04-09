#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a80);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_529d50);

#define public_529d71 _public_529d71
#define public_529d80 _public_529d80
#define public_529d93 _public_529d93
#define public_529da2 _public_529da2

PROC_DECLARE(0x529d50, internal_529d50, public_529d50);
extern "C" NAKED register_t __cdecl internal_529d50()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov ax, word ptr ds : [edi]
        mov esi, ecx
        mov word ptr ds : [esi], ax
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_529d71
        call public_4f7a90
        mov dword ptr ds : [esi+4], 0
        public_529d71 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        mov dword ptr ds : [esi+4], ecx
        je public_529d80
        call public_4f7a80
        public_529d80 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_529d93
        call public_4f7a90
        mov dword ptr ds : [esi+8], 0
        public_529d93 : nop
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        mov dword ptr ds : [esi+8], ecx
        je public_529da2
        call public_4f7a80
        public_529da2 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x529d50)
    }
}

#undef public_529d71
#undef public_529d80
#undef public_529d93
#undef public_529da2
