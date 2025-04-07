#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403e30);

#define public_403e54 _public_403e54
#define public_403e67 _public_403e67
#define public_403e70 _public_403e70
#define public_403e7f _public_403e7f

PROC_DECLARE(0x403e30, internal_403e30, public_403e30);
extern "C" NAKED register_t __cdecl internal_403e30()
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
        jae public_403e67
        lea edi, ds:[ecx+esi*2]
        cmp eax, edi
        jae public_403e67
        test esi, esi
        lea edx, ds:[eax+esi*2]
        mov ecx, edi
        jbe public_403e7f
        public_403e54 : nop
        mov di, word ptr ds : [ecx-2]
        sub ecx, 2
        sub edx, 2
        dec esi
        mov word ptr ds : [edx], di
        jne public_403e54
        pop edi
        pop esi
        ret 
        public_403e67 : nop
        test esi, esi
        jbe public_403e7f
        nop 
        lea esp, ss:[esp]
        public_403e70 : nop
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [edx], di
        add edx, 2
        add ecx, 2
        dec esi
        jne public_403e70
        public_403e7f : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x403e30)
    }
}

#undef public_403e54
#undef public_403e67
#undef public_403e70
#undef public_403e7f
