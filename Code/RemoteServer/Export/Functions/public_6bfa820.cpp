#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bfa820);

#define public_6bfa844 _public_6bfa844
#define public_6bfa857 _public_6bfa857
#define public_6bfa860 _public_6bfa860
#define public_6bfa86f _public_6bfa86f

PROC_DECLARE(0x6bfa820, internal_6bfa820, public_6bfa820);
extern "C" NAKED register_t __cdecl internal_6bfa820()
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
        jae public_6bfa857
        lea edi, ds:[ecx+esi*2]
        cmp eax, edi
        jae public_6bfa857
        test esi, esi
        lea edx, ds:[eax+esi*2]
        mov ecx, edi
        jbe public_6bfa86f
        public_6bfa844 : nop
        mov di, word ptr ds : [ecx-2]
        sub ecx, 2
        sub edx, 2
        dec esi
        mov word ptr ds : [edx], di
        jne public_6bfa844
        pop edi
        pop esi
        ret 
        public_6bfa857 : nop
        test esi, esi
        jbe public_6bfa86f
        nop 
        lea esp, ss:[esp]
        public_6bfa860 : nop
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [edx], di
        add edx, 2
        add ecx, 2
        dec esi
        jne public_6bfa860
        public_6bfa86f : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bfa820)
    }
}

#undef public_6bfa844
#undef public_6bfa857
#undef public_6bfa860
#undef public_6bfa86f
