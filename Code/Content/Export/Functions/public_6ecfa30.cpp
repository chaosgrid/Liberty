#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa30);

#define public_6ecfa47 _public_6ecfa47
#define public_6ecfa65 _public_6ecfa65

PROC_DECLARE(0x6ecfa30, internal_6ecfa30, public_6ecfa30);
extern "C" NAKED register_t __cdecl internal_6ecfa30()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        mov edx, ecx
        jne public_6ecfa47
        mov dword ptr ds : [edx], esi
        mov byte ptr ds : [edx+4], 0
        mov eax, edx
        pop esi
        ret 4
        public_6ecfa47 : nop
        push ebx
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebx, ds:[edx+4]
        jb public_6ecfa65
        mov eax, 0x2F
        public_6ecfa65 : nop
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        mov edi, ebx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+ebx], 0
        pop ebp
        pop ebx
        mov dword ptr ds : [edx], eax
        mov eax, edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecfa30)
    }
}

#undef public_6ecfa47
#undef public_6ecfa65
