#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_624811b);

#define public_6214da7 _public_6214da7
#define public_6214dc7 _public_6214dc7
#define public_6214dcb _public_6214dcb
#define public_6214dd0 _public_6214dd0
#define public_6214e5b _public_6214e5b
#define public_6214e5d _public_6214e5d
#define public_6214e76 _public_6214e76
#define public_6214e97 _public_6214e97
#define public_6214ea8 _public_6214ea8
#define public_6214eb5 _public_6214eb5
#define public_6214ebb _public_6214ebb
#define public_6214ebd _public_6214ebd

PROC_DECLARE(0x6214d70, internal_6214d70, public_6214d70);
extern "C" NAKED register_t __cdecl internal_6214d70()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_624811b @0x6214d78*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624811b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov eax, dword ptr ss : [ebp]
        xor ebx, ebx
        xor edi, edi
        cmp eax, 8
        jne public_6214ea8
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_6214da7 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6214dcb
        cmp cl, bl
        je public_6214dc7
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6214dcb
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6214da7
        public_6214dc7 : nop
        xor eax, eax
        jmp public_6214dd0
        public_6214dcb : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6214dd0 : nop
        cmp eax, ebx
        jne public_6214ea8
        push 0xC0
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6214e5b
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_624bf40
        mov ecx, esi
        call public_623fb80
        mov eax, 1
        mov dword ptr ds : [esi+0x98], ebx
        mov byte ptr ds : [esi+0x96], al
        mov dword ptr ds : [esi], offset public_624c9f0
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [edi+0x1C], edi
        mov dword ptr ds : [edi], offset public_624c948
        mov dword ptr ds : [esi], offset public_624c8e8
        mov dword ptr ds : [edi+0xBC], eax
        jmp public_6214e5d
        public_6214e5b : nop
        xor edi, edi
        public_6214e5d : nop
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_6214e76
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], edi
        jmp public_6214ebd
        public_6214e76 : nop
        mov edx, dword ptr ds : [edi+4]
        lea esi, ds:[edi+4]
        push ebp
        push esi
        call dword ptr ds : [edx+4]
        mov ebp, eax
        cmp ebp, ebx
        je public_6214eb5
        mov eax, dword ptr ds : [esi+0x7C]
        cmp eax, ebx
        je public_6214e97
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_6214e97 : nop
        push edi
        call public_62460e0
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 4
        mov dword ptr ds : [edx], ebx
        jmp public_6214ebb
        public_6214ea8 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        jmp public_6214ebd
        public_6214eb5 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], edi
        public_6214ebb : nop
        mov eax, ebp
        public_6214ebd : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6214d70)
    }
}

#undef public_6214da7
#undef public_6214dc7
#undef public_6214dcb
#undef public_6214dd0
#undef public_6214e5b
#undef public_6214e5d
#undef public_6214e76
#undef public_6214e97
#undef public_6214ea8
#undef public_6214eb5
#undef public_6214ebb
#undef public_6214ebd
