#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0c730);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d0c737 _public_6d0c737
#define public_6d0c743 _public_6d0c743
#define public_6d0c745 _public_6d0c745
#define public_6d0c76e _public_6d0c76e
#define public_6d0c777 _public_6d0c777
#define public_6d0c796 _public_6d0c796
#define public_6d0c79e _public_6d0c79e
#define public_6d0c7a8 _public_6d0c7a8
#define public_6d0c7c4 _public_6d0c7c4
#define public_6d0c7cd _public_6d0c7cd

PROC_DECLARE(0x6d0c730, internal_6d0c730, public_6d0c730);
extern "C" NAKED register_t __cdecl internal_6d0c730()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        xor eax, eax
        push esi
        public_6d0c737 : nop
        test eax, eax
        jne public_6d0c743
        mov eax, dword ptr ds : [ecx+0xD8]
        jmp public_6d0c745
        public_6d0c743 : nop
        mov eax, dword ptr ds : [eax]
        public_6d0c745 : nop
        test eax, eax
        je public_6d0c7cd
        cmp dword ptr ds : [eax+8], edx
        jne public_6d0c737
        cmp dword ptr ds : [ecx+0xD8], eax
        jne public_6d0c777
        mov edx, dword ptr ds : [eax]
        test edx, edx
        mov dword ptr ds : [ecx+0xD8], edx
        jne public_6d0c76e
        mov dword ptr ds : [ecx+0xDC], edx
        jmp public_6d0c7a8
        public_6d0c76e : nop
        mov dword ptr ds : [edx+4], 0
        jmp public_6d0c7a8
        public_6d0c777 : nop
        mov edx, dword ptr ds : [ecx+0xDC]
        cmp edx, eax
        jne public_6d0c79e
        mov edx, dword ptr ds : [edx+4]
        test edx, edx
        mov dword ptr ds : [ecx+0xDC], edx
        jne public_6d0c796
        mov dword ptr ds : [ecx+0xD8], edx
        jmp public_6d0c7a8
        public_6d0c796 : nop
        mov dword ptr ds : [edx], 0
        jmp public_6d0c7a8
        public_6d0c79e : nop
        mov edx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [esi+4], edx
        public_6d0c7a8 : nop
        mov dl, byte ptr ds : [ecx+0xE0]
        test dl, dl
        je public_6d0c7c4
        mov edx, dword ptr ds : [ecx+0xE4]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ecx+0xE4], eax
        pop esi
        ret 4
        public_6d0c7c4 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d0c7cd : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d0c730)
    }
}

#undef public_6d0c737
#undef public_6d0c743
#undef public_6d0c745
#undef public_6d0c76e
#undef public_6d0c777
#undef public_6d0c796
#undef public_6d0c79e
#undef public_6d0c7a8
#undef public_6d0c7c4
#undef public_6d0c7cd
