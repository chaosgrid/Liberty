#include "Content-PCH.h"


#define public_6ee1f76 _public_6ee1f76
#define public_6ee1f95 _public_6ee1f95
#define public_6ee1fa3 _public_6ee1fa3
#define public_6ee1fb1 _public_6ee1fb1
#define public_6ee1fbd _public_6ee1fbd
#define public_6ee1fe7 _public_6ee1fe7
#define public_6ee1fed _public_6ee1fed

PROC_DECLARE(0x6ee1f60, internal_6ee1f60, public_6ee1f60);
extern "C" NAKED register_t __cdecl internal_6ee1f60()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        xor al, al
        cmp esi, ecx
        je public_6ee1fed
        mov ebp, dword ptr ss : [esp+0x14]
        public_6ee1f76 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [eax+0xC]
        test al, al
        jne public_6ee1f95
        mov eax, dword ptr ds : [edi+0xC]
        add esi, 4
        cmp esi, eax
        jne public_6ee1f76
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_6ee1f95 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        mov bl, 1
        je public_6ee1fa3
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6ee1fa3 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        lea eax, ds:[esi+4]
        cmp eax, ecx
        je public_6ee1fbd
        mov edx, esi
        sub edx, eax
        public_6ee1fb1 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebp
        add eax, 4
        cmp eax, ecx
        jne public_6ee1fb1
        public_6ee1fbd : nop
        mov ecx, dword ptr ds : [edi+0xC]
        add ecx, 0xFFFFFFFC
        mov eax, ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0xC], ecx
        je public_6ee1fe7
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        test al, al
        je public_6ee1fe7
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 4
        public_6ee1fe7 : nop
        mov byte ptr ds : [edi+0x14], 1
        mov al, bl
        public_6ee1fed : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ee1f60)
    }
}

#undef public_6ee1f76
#undef public_6ee1f95
#undef public_6ee1fa3
#undef public_6ee1fb1
#undef public_6ee1fbd
#undef public_6ee1fe7
#undef public_6ee1fed
