#include "Server-PCH.h"


#define public_6d2fb20 _public_6d2fb20
#define public_6d2fb36 _public_6d2fb36
#define public_6d2fb49 _public_6d2fb49
#define public_6d2fb4b _public_6d2fb4b
#define public_6d2fb57 _public_6d2fb57
#define public_6d2fb63 _public_6d2fb63

PROC_DECLARE(0x6d2faf0, internal_6d2faf0, public_6d2faf0);
extern "C" NAKED register_t __cdecl internal_6d2faf0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edx+4]
        shl eax, 5
        add edx, eax
        mov al, byte ptr ds : [edx+8]
        test al, al
        je public_6d2fb63
        mov eax, dword ptr ds : [edx]
        mov esi, dword ptr ds : [edx+4]
        cmp eax, esi
        mov edx, dword ptr ss : [esp+0x18]
        je public_6d2fb36
        mov ebx, dword ptr ds : [edi+0xC]
        lea esp, ss:[esp]
        public_6d2fb20 : nop
        cmp ebx, edx
        je public_6d2fb63
        mov bp, word ptr ds : [edx]
        cmp bp, word ptr ds : [eax]
        jne public_6d2fb63
        add eax, 2
        add edx, 2
        cmp eax, esi
        jne public_6d2fb20
        public_6d2fb36 : nop
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d2fb57
        mov eax, dword ptr ds : [ecx]
        push edx
        push edi
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d2fb49 : nop
        je public_6d2fb63
        public_6d2fb4b : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_6d2fb57 : nop
        mov al, byte ptr ds : [edi+0x1C]
        test al, al
        je public_6d2fb4b
        cmp dword ptr ds : [edi+8], edx
        jmp public_6d2fb49
        public_6d2fb63 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d2faf0)
    }
}

#undef public_6d2fb20
#undef public_6d2fb36
#undef public_6d2fb49
#undef public_6d2fb4b
#undef public_6d2fb57
#undef public_6d2fb63
