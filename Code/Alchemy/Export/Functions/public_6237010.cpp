#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6249edb);

#define public_6237047 _public_6237047
#define public_6237067 _public_6237067
#define public_623706b _public_623706b
#define public_6237070 _public_6237070
#define public_6237107 _public_6237107
#define public_6237109 _public_6237109
#define public_6237122 _public_6237122
#define public_6237143 _public_6237143
#define public_6237154 _public_6237154
#define public_6237161 _public_6237161
#define public_6237167 _public_6237167
#define public_6237169 _public_6237169

PROC_DECLARE(0x6237010, internal_6237010, public_6237010);
extern "C" NAKED register_t __cdecl internal_6237010()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6249edb @0x6237018*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249edb
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
        jne public_6237154
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+4]
        public_6237047 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_623706b
        cmp cl, bl
        je public_6237067
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_623706b
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6237047
        public_6237067 : nop
        xor eax, eax
        jmp public_6237070
        public_623706b : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6237070 : nop
        cmp eax, ebx
        jne public_6237154
        push 0xC8
        call public_624612c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6237107
        lea esi, ds:[edi+4]
        mov dword ptr ds : [edi], offset public_624bf40
        mov ecx, esi
        call public_623fb80
        mov eax, 1
        mov dword ptr ds : [esi+0x98], ebx
        mov byte ptr ds : [esi+0x96], al
        mov dword ptr ds : [esi], offset public_624edb8
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [edi+0x1C], edi
        mov dword ptr ds : [edi], offset public_624ed10
        mov dword ptr ds : [esi], offset public_624ecb0
        mov dword ptr ds : [edi+0xC4], eax
        jmp public_6237109
        public_6237107 : nop
        xor edi, edi
        public_6237109 : nop
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        jne public_6237122
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], edi
        jmp public_6237169
        public_6237122 : nop
        mov edx, dword ptr ds : [edi+4]
        lea esi, ds:[edi+4]
        push ebp
        push esi
        call dword ptr ds : [edx+4]
        mov ebp, eax
        cmp ebp, ebx
        je public_6237161
        mov eax, dword ptr ds : [esi+0x7C]
        cmp eax, ebx
        je public_6237143
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x7C], ebx
        public_6237143 : nop
        push edi
        call public_62460e0
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 4
        mov dword ptr ds : [edx], ebx
        jmp public_6237167
        public_6237154 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        jmp public_6237169
        public_6237161 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], edi
        public_6237167 : nop
        mov eax, ebp
        public_6237169 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6237010)
    }
}

#undef public_6237047
#undef public_6237067
#undef public_623706b
#undef public_6237070
#undef public_6237107
#undef public_6237109
#undef public_6237122
#undef public_6237143
#undef public_6237154
#undef public_6237161
#undef public_6237167
#undef public_6237169
