#include "Server-PCH.h"


#define public_6d2ff78 _public_6d2ff78
#define public_6d2ff8f _public_6d2ff8f
#define public_6d2ffa2 _public_6d2ffa2
#define public_6d2ffa4 _public_6d2ffa4
#define public_6d2ffaf _public_6d2ffaf
#define public_6d2ffbb _public_6d2ffbb

PROC_DECLARE(0x6d2ff50, internal_6d2ff50, public_6d2ff50);
extern "C" NAKED register_t __cdecl internal_6d2ff50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edx+4]
        shl eax, 5
        add edx, eax
        mov al, byte ptr ds : [edx+8]
        test al, al
        push esi
        push edi
        je public_6d2ffbb
        mov eax, dword ptr ds : [edx]
        mov edi, dword ptr ds : [edx+4]
        cmp eax, edi
        mov edx, dword ptr ss : [esp+0x14]
        je public_6d2ff8f
        public_6d2ff78 : nop
        mov si, word ptr ds : [edx]
        test si, si
        je public_6d2ffbb
        cmp si, word ptr ds : [eax]
        jne public_6d2ffbb
        add eax, 2
        add edx, 2
        cmp eax, edi
        jne public_6d2ff78
        public_6d2ff8f : nop
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d2ffaf
        mov eax, dword ptr ds : [ecx]
        push edx
        push ebx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d2ffa2 : nop
        je public_6d2ffbb
        public_6d2ffa4 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 8
        public_6d2ffaf : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d2ffa4
        cmp dword ptr ds : [ebx+8], edx
        jmp public_6d2ffa2
        public_6d2ffbb : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d2ff50)
    }
}

#undef public_6d2ff78
#undef public_6d2ff8f
#undef public_6d2ffa2
#undef public_6d2ffa4
#undef public_6d2ffaf
#undef public_6d2ffbb
