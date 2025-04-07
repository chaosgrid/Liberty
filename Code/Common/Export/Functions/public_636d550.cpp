#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636d510);
CLANG_FORWARD_PROC_SYMBOL(public_636d550);

#define public_636d55f _public_636d55f
#define public_636d570 _public_636d570

PROC_DECLARE(0x636d550, internal_636d550, public_636d550);
extern "C" NAKED register_t __cdecl internal_636d550()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [ebx+4]
        dec esi
        push edi
        mov edi, ecx
        js public_636d570
        public_636d55f : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+esi*4]
        push ecx
        mov ecx, edi
        call public_636d510
        dec esi
        jns public_636d55f
        public_636d570 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x636d550)
    }
}

#undef public_636d55f
#undef public_636d570
