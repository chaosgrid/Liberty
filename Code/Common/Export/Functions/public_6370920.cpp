#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6370920);

#define public_637093e _public_637093e
#define public_637095f _public_637095f
#define public_6370963 _public_6370963
#define public_6370967 _public_6370967

PROC_DECLARE(0x6370920, internal_6370920, public_6370920);
extern "C" NAKED register_t __cdecl internal_6370920()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+edx*4+4]
        test ecx, ecx
        lea eax, ds:[edx+1]
        push edi
        je public_6370963
        mov edi, dword ptr ss : [esp+0x18]
        public_637093e : nop
        cmp ecx, ebx
        je public_637095f
        xor edx, edx
        cmp eax, edi
        setge dl
        dec edx
        and edx, eax
        mov ecx, dword ptr ds : [esi+edx*4+4]
        test ecx, ecx
        lea eax, ds:[edx+1]
        jne public_637093e
        pop edi
        mov dword ptr ds : [esi+edx*4+4], ebx
        pop esi
        pop ebx
        ret 
        public_637095f : nop
        test ecx, ecx
        jne public_6370967
        public_6370963 : nop
        mov dword ptr ds : [esi+edx*4+4], ebx
        public_6370967 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6370920)
    }
}

#undef public_637093e
#undef public_637095f
#undef public_6370963
#undef public_6370967
