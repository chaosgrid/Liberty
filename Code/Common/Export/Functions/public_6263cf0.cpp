#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6263d09 _public_6263d09
#define public_6263d11 _public_6263d11
#define public_6263d17 _public_6263d17
#define public_6263d32 _public_6263d32
#define public_6263d6c _public_6263d6c
#define public_6263d76 _public_6263d76

PROC_DECLARE(0x6263cf0, internal_6263cf0, public_6263cf0);
extern "C" NAKED register_t __cdecl internal_6263cf0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [esi]
        mov ebp, ecx
        mov byte ptr ss : [ebp], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        jne public_6263d09
        xor eax, eax
        jmp public_6263d11
        public_6263d09 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 5
        public_6263d11 : nop
        test eax, eax
        jge public_6263d17
        xor eax, eax
        public_6263d17 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov dword ptr ss : [ebp+4], eax
        mov edi, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edi
        je public_6263d76
        public_6263d32 : nop
        test ecx, ecx
        je public_6263d6c
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
        public_6263d6c : nop
        add eax, 0x20
        add ecx, 0x20
        cmp eax, edi
        jne public_6263d32
        public_6263d76 : nop
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], ecx
        mov eax, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6263cf0)
    }
}

#undef public_6263d09
#undef public_6263d11
#undef public_6263d17
#undef public_6263d32
#undef public_6263d6c
#undef public_6263d76
