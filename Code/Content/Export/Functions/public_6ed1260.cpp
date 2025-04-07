#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1260);

#define public_6ed1275 _public_6ed1275
#define public_6ed1293 _public_6ed1293

PROC_DECLARE(0x6ed1260, internal_6ed1260, public_6ed1260);
extern "C" NAKED register_t __cdecl internal_6ed1260()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        mov edx, ecx
        jne public_6ed1275
        mov dword ptr ds : [edx], esi
        mov byte ptr ds : [edx+4], 0
        pop esi
        ret 4
        public_6ed1275 : nop
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
        cmp eax, 0xF
        lea ebx, ds:[edx+4]
        jb public_6ed1293
        mov eax, 0xE
        public_6ed1293 : nop
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        mov edi, ebx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        pop edi
        pop ebp
        mov byte ptr ds : [eax+ebx], 0
        pop ebx
        mov dword ptr ds : [edx], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ed1260)
    }
}

#undef public_6ed1275
#undef public_6ed1293
