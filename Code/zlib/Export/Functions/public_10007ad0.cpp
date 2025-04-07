#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10007a60);
CLANG_FORWARD_PROC_SYMBOL(public_10007ad0);

#define public_10007b29 _public_10007b29
#define public_10007b30 _public_10007b30
#define public_10007b4e _public_10007b4e

PROC_DECLARE(0x10007ad0, internal_10007ad0, public_10007ad0);
extern "C" NAKED register_t __cdecl internal_10007ad0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov ebx, ecx
        mov edi, edx
        call public_10007a60
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        mov dword ptr ds : [eax+0x16AC], 8
        je public_10007b29
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+8]
        mov byte ptr ds : [ecx+edx], bl
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+8]
        inc ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov byte ptr ds : [ecx+edx], bh
        mov esi, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+8]
        inc esi
        mov dword ptr ds : [eax+0x14], esi
        mov cl, bl
        not cl
        mov byte ptr ds : [esi+edx], cl
        mov esi, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+8]
        inc esi
        mov ecx, ebx
        not ecx
        mov dword ptr ds : [eax+0x14], esi
        mov byte ptr ds : [esi+edx], ch
        inc dword ptr ds : [eax+0x14]
        public_10007b29 : nop
        test ebx, ebx
        je public_10007b4e
        lea ecx, ds:[ecx]
        public_10007b30 : nop
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], ebx
        mov bl, byte ptr ds : [edi]
        mov byte ptr ds : [ecx+edx], bl
        mov esi, dword ptr ds : [eax+0x14]
        mov ebx, dword ptr ss : [esp+0x10]
        inc esi
        inc edi
        dec ebx
        mov dword ptr ds : [eax+0x14], esi
        jne public_10007b30
        public_10007b4e : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x10007ad0)
    }
}

#undef public_10007b29
#undef public_10007b30
#undef public_10007b4e
