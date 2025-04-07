#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65da99a);
CLANG_FORWARD_PROC_SYMBOL(public_65ddb90);

#define public_65da9b4 _public_65da9b4
#define public_65da9c3 _public_65da9c3
#define public_65da9cd _public_65da9cd

PROC_DECLARE(0x65da99a, internal_65da99a, public_65da99a);
extern "C" NAKED register_t __cdecl internal_65da99a()
{
    __asm
    {
        cmp dword ptr ds : [public_65e5be0], 1
        push esi
        jle public_65da9b4
        mov esi, dword ptr ss : [esp+8]
        push 4
        push esi
        call public_65ddb90
        pop ecx
        pop ecx
        jmp public_65da9c3
        public_65da9b4 : nop
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [public_65e59d0]
        mov al, byte ptr ds : [eax+esi*2]
        and eax, 4
        public_65da9c3 : nop
        test eax, eax
        jne public_65da9cd
        and esi, 0xFFFFFFDF
        sub esi, 7
        public_65da9cd : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65da99a)
    }
}

#undef public_65da9b4
#undef public_65da9c3
#undef public_65da9cd
