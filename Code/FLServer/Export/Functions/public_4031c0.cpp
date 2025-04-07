#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4031c0);

#define public_4031d4 _public_4031d4
#define public_4031e4 _public_4031e4

PROC_DECLARE(0x4031c0, internal_4031c0, public_4031c0);
extern "C" NAKED register_t __cdecl internal_4031c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        mov ecx, eax
        jbe public_4031e4
        mov edx, dword ptr ss : [esp+0xC]
        push edi
        public_4031d4 : nop
        mov di, word ptr ds : [edx]
        mov word ptr ds : [ecx], di
        add ecx, 2
        add edx, 2
        dec esi
        jne public_4031d4
        pop edi
        public_4031e4 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4031c0)
    }
}

#undef public_4031d4
#undef public_4031e4
