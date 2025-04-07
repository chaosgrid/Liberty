#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626c30f _public_626c30f
#define public_626c317 _public_626c317
#define public_626c31d _public_626c31d
#define public_626c338 _public_626c338
#define public_626c372 _public_626c372
#define public_626c37c _public_626c37c

PROC_DECLARE(0x626c2f0, internal_626c2f0, public_626c2f0);
extern "C" NAKED register_t __cdecl internal_626c2f0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        mov ebp, ecx
        mov dword ptr ss : [ebp], eax
        mov cl, byte ptr ds : [esi+4]
        mov byte ptr ss : [ebp+4], cl
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        push edi
        jne public_626c30f
        xor eax, eax
        jmp public_626c317
        public_626c30f : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 5
        public_626c317 : nop
        test eax, eax
        jge public_626c31d
        xor eax, eax
        public_626c31d : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov dword ptr ss : [ebp+8], eax
        mov edi, dword ptr ds : [esi+0xC]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp eax, edi
        je public_626c37c
        public_626c338 : nop
        test ecx, ecx
        je public_626c372
        mov dl, byte ptr ds : [eax]
        mov byte ptr ds : [ecx], dl
        mov dx, word ptr ds : [eax+2]
        mov word ptr ds : [ecx+2], dx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov dl, byte ptr ds : [eax+0xC]
        mov byte ptr ds : [ecx+0xC], dl
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [ecx+0x10], edx
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [ecx+0x14], edx
        mov dl, byte ptr ds : [eax+0x18]
        mov byte ptr ds : [ecx+0x18], dl
        mov edx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [ecx+0x1C], edx
        public_626c372 : nop
        add eax, 0x20
        add ecx, 0x20
        cmp eax, edi
        jne public_626c338
        public_626c37c : nop
        mov dword ptr ss : [ebp+0xC], ecx
        mov dword ptr ss : [ebp+0x10], ecx
        mov ax, word ptr ds : [esi+0x14]
        pop edi
        mov word ptr ss : [ebp+0x14], ax
        pop esi
        mov eax, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x626c2f0)
    }
}

#undef public_626c30f
#undef public_626c317
#undef public_626c31d
#undef public_626c338
#undef public_626c372
#undef public_626c37c
