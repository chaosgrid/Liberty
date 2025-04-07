#include "Server-PCH.h"


#define public_6d301d5 _public_6d301d5
#define public_6d30211 _public_6d30211
#define public_6d30224 _public_6d30224
#define public_6d30226 _public_6d30226
#define public_6d30235 _public_6d30235
#define public_6d30241 _public_6d30241

PROC_DECLARE(0x6d301a0, internal_6d301a0, public_6d301a0);
extern "C" NAKED register_t __cdecl internal_6d301a0()
{
    __asm
    {
        sub esp, 8
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [edx]
        mov esi, dword ptr ds : [esi+4]
        shl eax, 5
        mov bl, byte ptr ds : [eax+esi+8]
        add eax, esi
        test bl, bl
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        je public_6d30241
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], eax
        je public_6d30211
        public_6d301d5 : nop
        mov di, word ptr ss : [ebp]
        test di, di
        je public_6d30241
        xor eax, eax
        mov ax, word ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6d64ba0]
        push edi
        mov ebx, eax
        call dword ptr ds : [public_6d64ba0]
        add esp, 8
        cmp ax, bx
        jne public_6d30241
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 2
        add ebp, 2
        cmp esi, eax
        jne public_6d301d5
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        public_6d30211 : nop
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d30235
        mov eax, dword ptr ds : [ecx]
        push ebp
        push edx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d30224 : nop
        je public_6d30241
        public_6d30226 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d30235 : nop
        mov al, byte ptr ds : [edx+0x1C]
        test al, al
        je public_6d30226
        cmp dword ptr ds : [edx+8], ebp
        jmp public_6d30224
        public_6d30241 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d301a0)
    }
}

#undef public_6d301d5
#undef public_6d30211
#undef public_6d30224
#undef public_6d30226
#undef public_6d30235
#undef public_6d30241
