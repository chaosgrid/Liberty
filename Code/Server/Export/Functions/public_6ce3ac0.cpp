#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ac0);

#define public_6ce3ae4 _public_6ce3ae4
#define public_6ce3af7 _public_6ce3af7
#define public_6ce3b00 _public_6ce3b00
#define public_6ce3b0f _public_6ce3b0f

PROC_DECLARE(0x6ce3ac0, internal_6ce3ac0, public_6ce3ac0);
extern "C" NAKED register_t __cdecl internal_6ce3ac0()
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
        jae public_6ce3af7
        lea edi, ds:[ecx+esi*2]
        cmp eax, edi
        jae public_6ce3af7
        test esi, esi
        lea edx, ds:[eax+esi*2]
        mov ecx, edi
        jbe public_6ce3b0f
        public_6ce3ae4 : nop
        mov di, word ptr ds : [ecx-2]
        sub ecx, 2
        sub edx, 2
        dec esi
        mov word ptr ds : [edx], di
        jne public_6ce3ae4
        pop edi
        pop esi
        ret 
        public_6ce3af7 : nop
        test esi, esi
        jbe public_6ce3b0f
        nop 
        lea esp, ss:[esp]
        public_6ce3b00 : nop
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [edx], di
        add edx, 2
        add ecx, 2
        dec esi
        jne public_6ce3b00
        public_6ce3b0f : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ce3ac0)
    }
}

#undef public_6ce3ae4
#undef public_6ce3af7
#undef public_6ce3b00
#undef public_6ce3b0f
