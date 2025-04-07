#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65da9d1);
CLANG_FORWARD_PROC_SYMBOL(public_65daa02);
CLANG_FORWARD_PROC_SYMBOL(public_65ddb68);

#define public_65daa08 _public_65daa08

PROC_DECLARE(0x65daa02, internal_65daa02, public_65daa02);
extern "C" NAKED register_t __cdecl internal_65daa02()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        public_65daa08 : nop
        push dword ptr ss : [esp+0x10]
        inc dword ptr ds : [esi]
        call public_65da9d1
        mov edi, eax
        push edi
        call public_65ddb68
        pop ecx
        test eax, eax
        pop ecx
        jne public_65daa08
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65daa02)
    }
}

#undef public_65daa08
