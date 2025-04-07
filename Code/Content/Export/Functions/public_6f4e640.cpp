#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e640);

#define public_6f4e664 _public_6f4e664
#define public_6f4e677 _public_6f4e677
#define public_6f4e680 _public_6f4e680
#define public_6f4e68f _public_6f4e68f

PROC_DECLARE(0x6f4e640, internal_6f4e640, public_6f4e640);
extern "C" NAKED register_t __cdecl internal_6f4e640()
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
        jae public_6f4e677
        lea edi, ds:[ecx+esi*2]
        cmp eax, edi
        jae public_6f4e677
        test esi, esi
        lea edx, ds:[eax+esi*2]
        mov ecx, edi
        jbe public_6f4e68f
        public_6f4e664 : nop
        mov di, word ptr ds : [ecx-2]
        sub ecx, 2
        sub edx, 2
        dec esi
        mov word ptr ds : [edx], di
        jne public_6f4e664
        pop edi
        pop esi
        ret 
        public_6f4e677 : nop
        test esi, esi
        jbe public_6f4e68f
        nop 
        lea esp, ss:[esp]
        public_6f4e680 : nop
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [edx], di
        add edx, 2
        add ecx, 2
        dec esi
        jne public_6f4e680
        public_6f4e68f : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4e640)
    }
}

#undef public_6f4e664
#undef public_6f4e677
#undef public_6f4e680
#undef public_6f4e68f
