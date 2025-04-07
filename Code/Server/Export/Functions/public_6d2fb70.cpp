#include "Server-PCH.h"


#define public_6d2fb91 _public_6d2fb91
#define public_6d2fb99 _public_6d2fb99
#define public_6d2fba8 _public_6d2fba8
#define public_6d2fbbe _public_6d2fbbe

PROC_DECLARE(0x6d2fb70, internal_6d2fb70, public_6d2fb70);
extern "C" NAKED register_t __cdecl internal_6d2fb70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x18], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx]
        mov eax, dword ptr ds : [eax+4]
        shl ecx, 5
        add eax, ecx
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        push ebx
        push esi
        push edi
        jne public_6d2fb99
        public_6d2fb91 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        public_6d2fb99 : nop
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [eax+4]
        cmp ecx, esi
        mov eax, dword ptr ds : [edx+0x10]
        je public_6d2fbbe
        mov edi, dword ptr ds : [edx+0xC]
        public_6d2fba8 : nop
        cmp edi, eax
        je public_6d2fb91
        mov bx, word ptr ds : [eax]
        cmp bx, word ptr ds : [ecx]
        jne public_6d2fb91
        add ecx, 2
        add eax, 2
        cmp ecx, esi
        jne public_6d2fba8
        public_6d2fbbe : nop
        pop edi
        pop esi
        mov dword ptr ds : [edx+0x10], eax
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d2fb70)
    }
}

#undef public_6d2fb91
#undef public_6d2fb99
#undef public_6d2fba8
#undef public_6d2fbbe
