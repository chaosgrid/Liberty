#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10006960);

#define public_10006970 _public_10006970
#define public_10006984 _public_10006984
#define public_10006998 _public_10006998

PROC_DECLARE(0x10006960, internal_10006960, public_10006960);
extern "C" NAKED register_t __cdecl internal_10006960()
{
    __asm
    {
        push esi
        lea eax, ds:[edx+0x8C]
        mov ecx, 0x11E
        xor esi, esi
        mov edi, edi
        public_10006970 : nop
        mov word ptr ds : [eax], si
        add eax, 4
        dec ecx
        jne public_10006970
        lea eax, ds:[edx+0x980]
        mov ecx, 0x1E
        public_10006984 : nop
        mov word ptr ds : [eax], si
        add eax, 4
        dec ecx
        jne public_10006984
        lea eax, ds:[edx+0xA74]
        mov ecx, 0x13
        public_10006998 : nop
        mov word ptr ds : [eax], si
        add eax, 4
        dec ecx
        jne public_10006998
        mov dword ptr ds : [edx+0x16A4], esi
        mov dword ptr ds : [edx+0x16A0], esi
        mov dword ptr ds : [edx+0x16A8], esi
        mov dword ptr ds : [edx+0x1698], esi
        mov word ptr ds : [edx+0x48C], 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x10006960)
    }
}

#undef public_10006970
#undef public_10006984
#undef public_10006998
