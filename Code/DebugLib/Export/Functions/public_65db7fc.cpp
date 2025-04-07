#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65db7fc);

#define public_65db827 _public_65db827

PROC_DECLARE(0x65db7fc, internal_65db7fc, public_65db7fc);
extern "C" NAKED register_t __cdecl internal_65db7fc()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0
        and dword ptr ds : [esi], 0
        call dword ptr ds : [public_65e10b8]
        cmp word ptr ds : [eax], 0x5A4D
        jne public_65db827
        mov ecx, dword ptr ds : [eax+0x3C]
        test ecx, ecx
        je public_65db827
        add eax, ecx
        mov cl, byte ptr ds : [eax+0x1A]
        mov byte ptr ds : [esi], cl
        mov al, byte ptr ds : [eax+0x1B]
        mov byte ptr ds : [esi+1], al
        public_65db827 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65db7fc)
    }
}

#undef public_65db827
