#include "Common-PCH.h"


#define public_6328d4a _public_6328d4a
#define public_6328d63 _public_6328d63
#define public_6328d7a _public_6328d7a
#define public_6328da6 _public_6328da6
#define public_6328dbb _public_6328dbb
#define public_6328dc0 _public_6328dc0
#define public_6328dc9 _public_6328dc9
#define public_6328dda _public_6328dda
#define public_6328de5 _public_6328de5
#define public_6328e00 _public_6328e00

PROC_DECLARE(0x6328d30, internal_6328d30, public_6328d30);
extern "C" NAKED register_t __cdecl internal_6328d30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+8]
        cmp eax, edx
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, edx
        lea esi, ds:[ecx+4]
        jae public_6328d4a
        mov ebx, eax
        public_6328d4a : nop
        mov ecx, dword ptr ds : [public_6399170]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ds : [public_63991b4]
        sub edx, ecx
        cmp edx, ebx
        ja public_6328d63
        call ebp
        public_6328d63 : nop
        test ebx, ebx
        jbe public_6328e00
        mov edi, dword ptr ds : [esi+8]
        add edi, ebx
        cmp edi, 0x7FFFFFFD
        jbe public_6328d7a
        call ebp
        public_6328d7a : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6328da6
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6328da6
        cmp cl, 0xFF
        je public_6328da6
        test edi, edi
        jne public_6328dc0
        dec cl
        mov byte ptr ds : [eax-1], cl
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6399160]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6328da6 : nop
        test edi, edi
        jne public_6328dbb
        test eax, eax
        je public_6328e00
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [eax], di
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6328dbb : nop
        cmp dword ptr ds : [esi+0xC], edi
        jae public_6328dc9
        public_6328dc0 : nop
        mov ecx, esi
        push edi
        call dword ptr ds : [public_6399158]
        public_6328dc9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_6328dda
        mov ecx, dword ptr ds : [public_639914c]
        public_6328dda : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        lea eax, ds:[eax+edx*2]
        mov edx, ebx
        public_6328de5 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6328de5
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [ecx+edi*2], 0
        public_6328e00 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6328d30)
    }
}

#undef public_6328d4a
#undef public_6328d63
#undef public_6328d7a
#undef public_6328da6
#undef public_6328dbb
#undef public_6328dc0
#undef public_6328dc9
#undef public_6328dda
#undef public_6328de5
#undef public_6328e00
