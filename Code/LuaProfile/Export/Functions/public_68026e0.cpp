#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68026e0);

#define public_6802700 _public_6802700
#define public_6802711 _public_6802711
#define public_6802718 _public_6802718
#define public_6802720 _public_6802720
#define public_6802724 _public_6802724

PROC_DECLARE(0x68026e0, internal_68026e0, public_68026e0);
extern "C" NAKED register_t __cdecl internal_68026e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        sub eax, ecx
        sub eax, 0x10
        sar eax, 4
        push esi
        js public_6802720
        mov esi, dword ptr ss : [esp+8]
        mov edx, eax
        shl edx, 4
        add edx, ecx
        public_6802700 : nop
        mov ecx, dword ptr ds : [edx]
        cmp ecx, 0xFFFFFFF8
        je public_6802711
        cmp ecx, 0xFFFFFFF7
        je public_6802711
        cmp ecx, 0xFFFFFFF6
        jne public_6802718
        public_6802711 : nop
        mov ecx, esi
        dec esi
        test ecx, ecx
        je public_6802724
        public_6802718 : nop
        dec eax
        sub edx, 0x10
        test eax, eax
        jge public_6802700
        public_6802720 : nop
        xor eax, eax
        pop esi
        ret 
        public_6802724 : nop
        shl eax, 4
        sar eax, 4
        inc eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68026e0)
    }
}

#undef public_6802700
#undef public_6802711
#undef public_6802718
#undef public_6802720
#undef public_6802724
