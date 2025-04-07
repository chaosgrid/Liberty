#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acff18);
CLANG_FORWARD_PROC_SYMBOL(public_6ad07b3);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0953);
CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);

#define public_6ad23a9 _public_6ad23a9
#define public_6ad23c1 _public_6ad23c1
#define public_6ad23c7 _public_6ad23c7
#define public_6ad23d0 _public_6ad23d0

PROC_DECLARE(0x6ad237a, internal_6ad237a, public_6ad237a);
extern "C" NAKED register_t __cdecl internal_6ad237a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        push esi
        cmp dword ptr ds : [eax*4+public_6add57c], 0
        lea esi, ds : [eax*4+public_6add57c]
        jne public_6ad23d0
        push edi
        push 0x18
        call public_6ad0953
        mov edi, eax
        pop ecx
        test edi, edi
        jne public_6ad23a9
        push 0x11
        call public_6acff18
        pop ecx
        public_6ad23a9 : nop
        push 0x11
        call public_6ad237a
        cmp dword ptr ds : [esi], 0
        pop ecx
        push edi
        jne public_6ad23c1
        call dword ptr ds : [public_6ada020]
        mov dword ptr ds : [esi], edi
        jmp public_6ad23c7
        public_6ad23c1 : nop
        call public_6ad07b3
        pop ecx
        public_6ad23c7 : nop
        push 0x11
        call public_6ad23db
        pop ecx
        pop edi
        public_6ad23d0 : nop
        push dword ptr ds : [esi]
        call dword ptr ds : [public_6ada114]
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad237a)
    }
}

#undef public_6ad23a9
#undef public_6ad23c1
#undef public_6ad23c7
#undef public_6ad23d0
