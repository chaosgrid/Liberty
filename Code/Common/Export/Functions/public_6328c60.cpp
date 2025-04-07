#include "Common-PCH.h"


#define public_6328c83 _public_6328c83
#define public_6328c9e _public_6328c9e
#define public_6328cca _public_6328cca
#define public_6328ce2 _public_6328ce2
#define public_6328ce7 _public_6328ce7
#define public_6328cf0 _public_6328cf0
#define public_6328d00 _public_6328d00
#define public_6328d1b _public_6328d1b

PROC_DECLARE(0x6328c60, internal_6328c60, public_6328c60);
extern "C" NAKED register_t __cdecl internal_6328c60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399170]
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        mov ebx, dword ptr ds : [public_63991b4]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        lea esi, ds:[ecx+4]
        mov ecx, dword ptr ds : [eax]
        sub ecx, edx
        cmp ecx, ebp
        push edi
        ja public_6328c83
        call ebx
        public_6328c83 : nop
        xor edx, edx
        cmp ebp, edx
        jbe public_6328d1b
        mov edi, dword ptr ds : [esi+8]
        add edi, ebp
        cmp edi, 0x7FFFFFFD
        jbe public_6328c9e
        call ebx
        xor edx, edx
        public_6328c9e : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        je public_6328cca
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6328cca
        cmp cl, 0xFF
        je public_6328cca
        cmp edi, edx
        jne public_6328ce7
        dec cl
        mov byte ptr ds : [eax-1], cl
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], edx
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6328cca : nop
        cmp edi, edx
        jne public_6328ce2
        cmp eax, edx
        je public_6328d1b
        push edx
        mov ecx, esi
        call dword ptr ds : [public_639916c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6328ce2 : nop
        cmp dword ptr ds : [esi+0xC], edi
        jae public_6328cf0
        public_6328ce7 : nop
        mov ecx, esi
        push edi
        call dword ptr ds : [public_6399158]
        public_6328cf0 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ds:[eax+edx*2]
        mov edx, ebp
        nop 
        public_6328d00 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6328d00
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [ecx+edi*2], 0
        public_6328d1b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6328c60)
    }
}

#undef public_6328c83
#undef public_6328c9e
#undef public_6328cca
#undef public_6328ce2
#undef public_6328ce7
#undef public_6328cf0
#undef public_6328d00
#undef public_6328d1b
