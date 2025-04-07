#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b459e0);

#define public_6b45a04 _public_6b45a04
#define public_6b45a17 _public_6b45a17
#define public_6b45a20 _public_6b45a20
#define public_6b45a2f _public_6b45a2f

PROC_DECLARE(0x6b459e0, internal_6b459e0, public_6b459e0);
extern "C" NAKED register_t __cdecl internal_6b459e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, eax
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edx, eax
        jae public_6b45a17
        lea edi, ds:[ecx+esi*2]
        cmp eax, edi
        jae public_6b45a17
        test esi, esi
        lea edx, ds:[eax+esi*2]
        mov ecx, edi
        jbe public_6b45a2f
        public_6b45a04 : nop
        mov di, word ptr ds : [ecx-2]
        sub ecx, 2
        sub edx, 2
        dec esi
        mov word ptr ds : [edx], di
        jne public_6b45a04
        pop edi
        pop esi
        ret 
        public_6b45a17 : nop
        test esi, esi
        jbe public_6b45a2f
        nop 
        lea esp, ss:[esp]
        public_6b45a20 : nop
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [edx], di
        add edx, 2
        add ecx, 2
        dec esi
        jne public_6b45a20
        public_6b45a2f : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b459e0)
    }
}

#undef public_6b45a04
#undef public_6b45a17
#undef public_6b45a20
#undef public_6b45a2f
