#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4899c0);

#define public_4899e4 _public_4899e4
#define public_4899f7 _public_4899f7
#define public_489a00 _public_489a00
#define public_489a0f _public_489a0f

PROC_DECLARE(0x4899c0, internal_4899c0, public_4899c0);
extern "C" NAKED register_t __cdecl internal_4899c0()
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
        jae public_4899f7
        lea edi, ds:[ecx+esi*2]
        cmp eax, edi
        jae public_4899f7
        test esi, esi
        lea edx, ds:[eax+esi*2]
        mov ecx, edi
        jbe public_489a0f
        public_4899e4 : nop
        mov di, word ptr ds : [ecx-2]
        sub ecx, 2
        sub edx, 2
        dec esi
        mov word ptr ds : [edx], di
        jne public_4899e4
        pop edi
        pop esi
        ret 
        public_4899f7 : nop
        test esi, esi
        jbe public_489a0f
        nop 
        lea esp, ss:[esp]
        public_489a00 : nop
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [edx], di
        add edx, 2
        add ecx, 2
        dec esi
        jne public_489a00
        public_489a0f : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4899c0)
    }
}

#undef public_4899e4
#undef public_4899f7
#undef public_489a00
#undef public_489a0f
