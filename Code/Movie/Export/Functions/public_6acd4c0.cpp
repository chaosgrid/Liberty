#include "Movie-PCH.h"


#define public_6acd4dd _public_6acd4dd
#define public_6acd503 _public_6acd503
#define public_6acd513 _public_6acd513
#define public_6acd536 _public_6acd536

PROC_DECLARE(0x6acd4c0, internal_6acd4c0, public_6acd4c0);
extern "C" NAKED register_t __cdecl internal_6acd4c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        push esi
        cmp eax, ecx
        push edi
        jne public_6acd503
        mov edi, dword ptr ss : [esp+0x1C]
        test edi, edi
        je public_6acd536
        mov ecx, dword ptr ss : [esp+0x18]
        mov esi, eax
        public_6acd4dd : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mul dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], edx
        add esi, 4
        add ecx, 8
        dec edi
        jne public_6acd4dd
        pop edi
        pop esi
        pop ebx
        ret 0x10
        public_6acd503 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        test ebx, ebx
        je public_6acd536
        mov esi, dword ptr ss : [esp+0x18]
        mov edi, eax
        sub edi, ecx
        public_6acd513 : nop
        mov eax, dword ptr ds : [edi+ecx]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ss : [esp+0x1C]
        mul dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], edx
        add ecx, 4
        add esi, 8
        dec ebx
        jne public_6acd513
        public_6acd536 : nop
        pop edi
        pop esi
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6acd4c0)
    }
}

#undef public_6acd4dd
#undef public_6acd503
#undef public_6acd513
#undef public_6acd536
