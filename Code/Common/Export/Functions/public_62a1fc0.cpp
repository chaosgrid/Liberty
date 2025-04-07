#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a1fc0);

#define public_62a1fd5 _public_62a1fd5
#define public_62a1fe0 _public_62a1fe0
#define public_62a1fe4 _public_62a1fe4
#define public_62a1fe9 _public_62a1fe9

PROC_DECLARE(0x62a1fc0, internal_62a1fc0, public_62a1fc0);
extern "C" NAKED register_t __cdecl internal_62a1fc0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_62a1fe9
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov si, word ptr ds : [esi]
        public_62a1fd5 : nop
        cmp word ptr ds : [eax+0xC], si
        jae public_62a1fe0
        mov eax, dword ptr ds : [eax+8]
        jmp public_62a1fe4
        public_62a1fe0 : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_62a1fe4 : nop
        cmp eax, ecx
        jne public_62a1fd5
        pop esi
        public_62a1fe9 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x62a1fc0)
    }
}

#undef public_62a1fd5
#undef public_62a1fe0
#undef public_62a1fe4
#undef public_62a1fe9
