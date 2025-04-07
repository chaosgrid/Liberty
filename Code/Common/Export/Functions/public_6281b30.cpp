#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6281b63 _public_6281b63
#define public_6281b78 _public_6281b78
#define public_6281b9e _public_6281b9e
#define public_6281baa _public_6281baa

PROC_DECLARE(0x6281b30, internal_6281b30, public_6281b30);
extern "C" NAKED register_t __cdecl internal_6281b30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, ecx
        mov cl, byte ptr ds : [eax]
        push esi
        push 0x14
        mov byte ptr ds : [ebx], cl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], 0
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 4
        test eax, eax
        jbe public_6281baa
        push ebp
        push edi
        mov ebp, eax
        public_6281b63 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6281b78
        mov edi, eax
        public_6281b78 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6281b9e
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        public_6281b9e : nop
        mov ecx, dword ptr ds : [ebx+8]
        inc ecx
        dec ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6281b63
        pop edi
        pop ebp
        public_6281baa : nop
        pop esi
        mov eax, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6281b30)
    }
}

#undef public_6281b63
#undef public_6281b78
#undef public_6281b9e
#undef public_6281baa
