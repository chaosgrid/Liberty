#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43090);

#define public_6d430a1 _public_6d430a1
#define public_6d430b5 _public_6d430b5
#define public_6d430bd _public_6d430bd

PROC_DECLARE(0x6d43090, internal_6d43090, public_6d43090);
extern "C" NAKED register_t __cdecl internal_6d43090()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov di, word ptr ss : [esp+0x12]
        mov eax, esi
        public_6d430a1 : nop
        mov cx, word ptr ds : [eax-4]
        sub eax, 4
        cmp cx, dx
        ja public_6d430b5
        jb public_6d430bd
        cmp di, word ptr ds : [eax+2]
        jae public_6d430bd
        public_6d430b5 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov esi, eax
        jmp public_6d430a1
        public_6d430bd : nop
        pop edi
        mov dword ptr ds : [esi], edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d43090)
    }
}

#undef public_6d430a1
#undef public_6d430b5
#undef public_6d430bd
