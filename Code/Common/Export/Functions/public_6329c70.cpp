#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329c70);

#define public_6329c94 _public_6329c94
#define public_6329ca7 _public_6329ca7
#define public_6329cb0 _public_6329cb0
#define public_6329cbf _public_6329cbf

PROC_DECLARE(0x6329c70, internal_6329c70, public_6329c70);
extern "C" NAKED register_t __cdecl internal_6329c70()
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
        jae public_6329ca7
        lea edi, ds:[ecx+esi*2]
        cmp eax, edi
        jae public_6329ca7
        test esi, esi
        lea edx, ds:[eax+esi*2]
        mov ecx, edi
        jbe public_6329cbf
        public_6329c94 : nop
        mov di, word ptr ds : [ecx-2]
        sub ecx, 2
        sub edx, 2
        dec esi
        mov word ptr ds : [edx], di
        jne public_6329c94
        pop edi
        pop esi
        ret 
        public_6329ca7 : nop
        test esi, esi
        jbe public_6329cbf
        nop 
        lea esp, ss:[esp]
        public_6329cb0 : nop
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [edx], di
        add edx, 2
        add ecx, 2
        dec esi
        jne public_6329cb0
        public_6329cbf : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6329c70)
    }
}

#undef public_6329c94
#undef public_6329ca7
#undef public_6329cb0
#undef public_6329cbf
