#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ab130);

#define public_62ab181 _public_62ab181

PROC_DECLARE(0x62ab130, internal_62ab130, public_62ab130);
extern "C" NAKED register_t __cdecl internal_62ab130()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFFFFF
        push esi
        je public_62ab181
        mov edx, dword ptr ds : [ecx+0x88]
        mov esi, dword ptr ds : [edx+0x88]
        add edx, 0x84
        test esi, esi
        je public_62ab181
        mov edx, dword ptr ds : [edx+8]
        sub edx, esi
        sar edx, 4
        cmp eax, edx
        jae public_62ab181
        mov esi, dword ptr ds : [ecx+0x184]
        mov cl, byte ptr ss : [esp+8]
        shl eax, 4
        mov dl, byte ptr ds : [eax+esi]
        add eax, esi
        cmp cl, dl
        setne dl
        mov byte ptr ds : [eax], cl
        xor eax, eax
        test dl, dl
        sete al
        pop esi
        inc eax
        ret 8
        public_62ab181 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62ab130)
    }
}

#undef public_62ab181
